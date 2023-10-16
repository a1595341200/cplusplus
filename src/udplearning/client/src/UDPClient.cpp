#include "UdpClient.h"

#include <fcntl.h>
#include <sys/socket.h>
#include <time.h>

#include <chrono>
#define BROADCAST_PORT 60000

UDPClient::UDPClient(std::string &ip, int port) {
  SetEnv();
  InitSocket(ip, port);
  // InitKCP();
}

void UDPClient::SetEnv() {
  setenv("SOCK", "/gmac1", 1);

  if (nullptr == getenv("SOCK")) {
    throw std::runtime_error("not set SOCK !");
  }
}

UDPClient::~UDPClient() {
  exit_ = true;
  is_connected_ = false;
  if (pkcp) {
    ikcp_release(pkcp);
  }
  if (socket_fd_ != -1) {
    shutdown(socket_fd_, SHUT_RDWR);
    close(socket_fd_);
  }
  if (dec) {
    json_decoder_destroy(dec);
    dec = nullptr;
  }
}
void UDPClient::InitKCP() {
  pkcp = ikcp_create(0x1, (void *)this);
  pkcp->output = UdpServerOutputData;  // 设置kcp对象的回调函数
  ikcp_nodelay(pkcp, 1, 10, 2, 1);     //
  ikcp_wndsize(pkcp, 10240, 10240);
  ikcp_setmtu(pkcp, 10240);
  pkcp->rx_minrto = 10;
}

void UDPClient::InitSocket(std::string &ip, int port) {
  socket_fd_ = socket(AF_INET, SOCK_DGRAM, 0);
  if (socket_fd_ < 0) {
    std::cout << "InitSocket Error\n";
    return;
  }

  setenv("SOCK", "", 1);
  int val = 10 * 1024;  // 10k

  if (0 != setsockopt(socket_fd_, SOL_SOCKET, SO_RCVBUF, &val, sizeof(val))) {
    std::cout << "set socket send buf error: " << strerror(errno) << "\n";
    return;
  }

  // 设置receive 1s超时
  struct timeval tv;
  int ret;
  tv.tv_sec = 1;
  tv.tv_usec = 0;
  if (setsockopt(socket_fd_, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv)) < 0) {
    std::cout << "socket option  SO_RCVTIMEO not supportn, errro: " << strerror(errno) << "\n";
    return;
  }

  memset(&addr, 0, sizeof(addr));
  addr.sin_family = AF_INET;
  addr.sin_port = htons(port);
  if (inet_pton(AF_INET, ip.c_str(), &addr.sin_addr) <= 0) {
    std::cout << "address not supported: " << ip;
    return;
  }
  // 设置端口服用
  int op = 1;
  if (0 != setsockopt(socket_fd_, SOL_SOCKET, SO_REUSEPORT, &op, sizeof(op))) {
    std::cout << "set port reuse error: " << strerror(errno);
    return;
  }
  // 配置广播地址
  memset(&broad_cast_addr, 0, sizeof(broad_cast_addr));
  broad_cast_addr.sin_family = AF_INET;
  broad_cast_addr.sin_addr.s_addr = INADDR_ANY;  // INADDR_ANY
  broad_cast_addr.sin_port = htons(BROADCAST_PORT);
  if (::bind(socket_fd_, (struct sockaddr *)&(broad_cast_addr), sizeof(struct sockaddr_in)) < 0) {
    std::cout << "bind socket Error: " << strerror(errno) << std::endl;
    return;
  }

  std::cout << __func__ << " finish";
}

void UDPClient::SendUDPMessage(const std::string &msg) {
  if (!is_connected_) {
    return;
  }
  std::vector<char> cur_buf;
  packMsg(frntRdrObjList_4D, cur_buf, (int)SendDataType::FrontRadarObjs);
  int n = ::sendto(socket_fd_, cur_buf.data(), cur_buf.size(), 0, (struct sockaddr *)&addr,
                   sizeof(struct sockaddr_in));
}

void UDPClient::Run() {
  // mLog.LogInfo() << "OFM_UDPServer Run";
  // send_msg_loop_ = std::thread(std::bind(&OFM_UDPServer::SendMessageLoop, this));

  kcp_loop_ = std::thread(std::bind(&UDPClient::KcpInputLoop, this));
  // std::cout << __func__ << " send cmd to server  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
}

void UDPClient::Stop() {
  is_connected_ = false;
  if (socket_fd_ != -1) {
    shutdown(socket_fd_, SHUT_WR);
    close(socket_fd_);
    socket_fd_ = -1;
  }
}
void UDPClient::KcpInputLoop() {
  while (!exit_) {
    char buf[1024] = {0};
    unsigned int len = sizeof(struct sockaddr_in);
    int n = ::recvfrom(socket_fd_, buf, 1024, 0, nullptr, nullptr);
    // 收到的消息
    mLog.LogInfo() << "receive message: " << buf << " error " << errno;
    json_decoder_error_t error;
    error = json_decoder_parse_json_str(dec, buf);
    if (error != JSON_DECODER_OK) {
      continue;
    }
    error = json_decoder_push_object(dec, NULL, false);
    if (error != JSON_DECODER_OK) {
      continue;
    }
    const char *buffer = NULL;
    error = json_decoder_get_string(dec, "cmd", &buffer, false);
    if (error != JSON_DECODER_OK) {
      continue;
    }
    std::string cmd = buffer;

    const char *platform_c = NULL;
    error = json_decoder_get_string(dec, "app", &platform_c, false);
    if (error != JSON_DECODER_OK) {
      continue;
    }
    std::string platform = platform_c;

    // 先判断是否是广播的消息
    if (cmd == "start" && (platform == "OFM" || platform == "All")) {
      is_connected_ = true;
    } else {
      is_connected_ = false;
    }
  }
}

int UDPClient::UdpServerOutputData(const char *buf, int len, ikcpcb *kcp, void *user) {
  UDPClient *client = (UDPClient *)user;
  if (!client) {
    return -1;
  }
  // client->mLog.LogInfo() << "UdpServerOutputData : " << buf << " len " << len;
  int n = ::sendto(client->socket_fd_, buf, len, 0, (struct sockaddr *)&client->addr,
                   sizeof(struct sockaddr_in));
  // client->mLog.LogInfo() << "send size  : " << n << " error  " << errno;
  if (n > 0) {
    return n;
  }
  return -1;
}
