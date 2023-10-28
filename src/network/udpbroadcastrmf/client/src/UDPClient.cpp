#include "UdpClient.h"

#include <Log.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <time.h>

#include <chrono>
#include <functional>
#define BROADCAST_PORT 60000

UDPClient::UDPClient(const std::string &ip, int port) {
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
  if (mSocket != -1) {
    shutdown(mSocket, SHUT_RDWR);
    close(mSocket);
  }
  if (kcp_loop_.joinable()) {
    kcp_loop_.join();
  }
}

void UDPClient::InitSocket(const std::string &ip, int port) {
  mSocket = socket(AF_INET, SOCK_DGRAM, 0);
  if (mSocket < 0) {
    SLOG(INFO) << "InitSocket Error\n";
    return;
  }

  setenv("SOCK", "", 1);
  int val = 10 * 1024;  // 10k

  if (0 != setsockopt(mSocket, SOL_SOCKET, SO_RCVBUF, &val, sizeof(val))) {
    SLOG(INFO) << "set socket send buf error: " << strerror(errno) << "\n";
    return;
  }

  // 设置receive 1s超时
  struct timeval tv;
  int ret;
  tv.tv_sec = 1;
  tv.tv_usec = 0;
  if (setsockopt(mSocket, SOL_SOCKET, SO_RCVTIMEO, &tv, sizeof(tv)) < 0) {
    SLOG(INFO) << "socket option  SO_RCVTIMEO not supportn, errro: " << strerror(errno) << "\n";
    return;
  }

  memset(&mDstAddr, 0, sizeof(mDstAddr));
  mDstAddr.sin_family = AF_INET;
  mDstAddr.sin_port = htons(port);
  if (inet_pton(AF_INET, ip.c_str(), &mDstAddr.sin_addr) <= 0) {
    SLOG(INFO) << "address not supported: " << ip;
    return;
  }
  // 设置端口服用
  int op = 1;
  if (0 != setsockopt(mSocket, SOL_SOCKET, SO_REUSEPORT, &op, sizeof(op))) {
    SLOG(INFO) << "set port reuse error: " << strerror(errno);
    return;
  }
  // 配置广播地址 clinet需要绑定广播端口
  memset(&mBroadCastAddr, 0, sizeof(mBroadCastAddr));
  mBroadCastAddr.sin_family = AF_INET;
  mBroadCastAddr.sin_addr.s_addr = INADDR_ANY;  // INADDR_ANY
  mBroadCastAddr.sin_port = htons(BROADCAST_PORT);
  if (::bind(mSocket, (struct sockaddr *)&(mBroadCastAddr), sizeof(struct sockaddr_in)) < 0) {
    SLOG(INFO) << "bind socket Error: " << strerror(errno) << std::endl;
    return;
  }

  SLOG(INFO) << __func__ << " finish";
}

void UDPClient::SendUDPMessage(const std::string &msg) {
  if (!is_connected_) {
    return;
  }
  int n = ::sendto(mSocket, msg.data(), msg.size(), 0, (struct sockaddr *)&mDstAddr,
                   sizeof(struct sockaddr_in));
}

void UDPClient::Run() {
  SLOG(INFO) << "UDPServer Run";

  kcp_loop_ = std::thread(std::bind(&UDPClient::KcpInputLoop, this));
  SLOG(INFO) << __func__ << " send cmd to server  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>";
}

void UDPClient::Stop() {
  is_connected_ = false;
  if (mSocket != -1) {
    shutdown(mSocket, SHUT_WR);
    close(mSocket);
    mSocket = -1;
  }
}
void UDPClient::KcpInputLoop() {
  while (!exit_) {
    char buf[1024] = {0};
    unsigned int len = sizeof(struct sockaddr_in);
    int n = ::recvfrom(mSocket, buf, 1024, 0, (sockaddr *)&mBroadCastAddr, &len);
    // 收到的消息
    if (n > 0) {
      SLOG(INFO) << "receive message: " << buf;
      Common::CmdHead head;
      parseHead(buf, n, head);
      // 先判断是否是广播的消息
      if (!strncmp(head.cmd, "start", 5) && (!strncmp(head.platform, "RMF", 3))) {
        is_connected_ = true;
      } else {
        is_connected_ = false;
      }
    } else {
      SLOG(INFO) << "receive message error: " << n << " reson : " << errno << " "
                 << strerror(errno);
    }
  }
}

bool UDPClient::parseHead(const char *buf, int size, Common::CmdHead &head) {
  memcpy(&head, buf, sizeof(Common::CmdHead));
  return true;
}

void UDPClient::join() {
  kcp_loop_.join();
}
