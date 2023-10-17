#include "UdpServer.h"

#include <fcntl.h>

#include <chrono>

#include "Log.h"
#include "common.h"
#include "macro.h"

// import PORT not need fix, only need to fix ip
#define BROADCAST_PORT 60000
#define BROADCAST_IP "10.211.55.255"
// 开启测试功能： 读取 bag 包，将车道线信息转为 MarkerArray, 可在 rviz 中查看效果
// #define TEST_LANE_PUB_FROM_BAG
#define SERVER_PORT 46325

static bool SetNonBlocking(int fd) {
  int op = fcntl(fd, F_GETFL, 0);
  if (op < 0) {
    return false;
  }
  op |= O_NONBLOCK;
  if (fcntl(fd, F_SETFL, op) < 0) {
    return false;
  }
  return true;
}

UdpServer::UdpServer() {
  // epoll_fd_ = -1;
  // event_list_.resize(POLL_EVENT_MAX);
}

UdpServer::~UdpServer() {
  exit_ = true;
  AERROR << "~UdpServer";
  if (socket_fd_ != -1) {
    shutdown(socket_fd_, SHUT_RDWR);
    close(socket_fd_);
    socket_fd_ = -1;
  }
}

bool UdpServer::Init() {
  parse_task_queue_.reset(new ConcurrentTaskQueue(8, "parse queue"));
  // 工作在网络模式
  if (!InitSocket()) {
    AINFO << "Init Socker Error";
    return false;
  }
  mRecvThread = std::thread(std::bind(&UdpServer::KcpMessageLoop, this));
  mBroadCastThread = std::thread(std::bind(&UdpServer::BroadcastLoop, this));
  return true;
}

bool UdpServer::InitSocket() {
  socket_fd_ = socket(AF_INET, SOCK_DGRAM, 0);
  if (socket_fd_ < 0) {
    AERROR << "InitSocket Error" << std::endl;
    return false;
  }
  AINFO << "socket id " << socket_fd_;

  int val = 100 * 1024 * 1024;  // 1woM
  //设置tcp缓存区大小
  if (0 != setsockopt(socket_fd_, SOL_SOCKET, SO_RCVBUF, &val, sizeof(val))) {
    AERROR << "set socket recv buf error: " << strerror(errno);
    return false;
  }

  // add broad cast
  //设置广播
  int op = 1;
  if (0 != setsockopt(socket_fd_, SOL_SOCKET, SO_BROADCAST, &op, sizeof(op))) {
    AERROR << "set braodcast error: " << strerror(errno);
    return false;
  }
  memset(&broad_cast_addr_, 0, sizeof(broad_cast_addr_));
  broad_cast_addr_.sin_family = AF_INET;
  broad_cast_addr_.sin_port = htons(BROADCAST_PORT);
  if (inet_pton(AF_INET, BROADCAST_IP, &broad_cast_addr_.sin_addr) <= 0) {
    AERROR << "address not supported: " << BROADCAST_IP;
    return false;
  }

  memset(&mServerAddr, 0, sizeof(mServerAddr));
  mServerAddr.sin_family = AF_INET;
  mServerAddr.sin_addr.s_addr = htonl(INADDR_ANY);  // INADDR_ANY
  mServerAddr.sin_port = htons(SERVER_PORT);
  //绑定本地端口
  if (::bind(socket_fd_, (struct sockaddr *)&(mServerAddr), sizeof(struct sockaddr_in)) < 0) {
    AERROR << "bind socket Error: " << SERVER_PORT << "---" << strerror(errno);
    return false;
  }

  return true;
}

void UdpServer::Stop() {
  exit_ = true;
  if (socket_fd_ != -1) {
    static const char *cmd = "{\"cmd\":\"stop\",\"app\":\"%s\"}";
    char buffer[1024] = {0};
    // sprintf(buffer, cmd, platform_.c_str());
    int n = sendto(socket_fd_, buffer, strlen(buffer), 0, (struct sockaddr *)&broad_cast_addr_,
                   sizeof(struct sockaddr_in));
    AINFO << "close socekt";
  }
  std::this_thread::sleep_for(std::chrono::seconds(2));
  if (mRecvThread.joinable())
    mRecvThread.join();
  if (mBroadCastThread.joinable())
    mBroadCastThread.join();
}

void UdpServer::BroadcastLoop() {
  Common::CmdHead head;
  strncpy(head.cmd, "start", 5);
  head.cmd[5] = '\0';
  strncpy(head.platform, "OFM", 3);
  head.platform[3] = '\0';
  while (!exit_.load()) {
    AINFO << "cmd " << head.cmd;
    sendto(socket_fd_, &head, sizeof(head), 0, (struct sockaddr *)&broad_cast_addr_,
           sizeof(struct sockaddr_in));
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}

void UdpServer::KcpMessageLoop() {
  while (!exit_.load()) {
    char buffer[FRAME_SIZE] = {0};
    sockaddr_in cliaddr;
    socklen_t len = sizeof(cliaddr);
    memset(&cliaddr, 0, sizeof(cliaddr));
    int n = recvfrom(socket_fd_, buffer, FRAME_SIZE, 0, (struct sockaddr *)&cliaddr, &len);
    SLOG(INFO) << buffer;
    if (n < 0) {
      if (EAGAIN != errno && EINTR != errno) {
        AINFO << "call recv from error: " << errno << " error msg: " << strerror(errno)
              << std::endl;
        return;
      }
    } else if (n == 0) {
      AERROR << "receive over";
      return;
    } else {
      std::string ip;
      int port;
      ParseClientAddr(cliaddr, ip, port);
      SLOG(INFO) << "receive from " << ip << ":" << port << " data length " << n;
      std::string key = ip + ":" + std::to_string(port);
      if (client_maps_.count(key) == 0) {
        // allocate data type
        std::shared_ptr<UdpClient> client_ptr =
            std::make_shared<UdpClient>(new UdpClient(key, cliaddr));
        client_maps_[key] = client_ptr;
        client_ptr->SetParseCallback(std::bind(&UdpServer::ParseMsgCallback, this,
                                               std::placeholders::_1, std::placeholders::_2,
                                               std::placeholders::_3));
        client_ptr->SetParseExtraCallback(std::bind(&UdpServer::ParseExtraMsgCallback, this,
                                                    std::placeholders::_1, std::placeholders::_2,
                                                    std::placeholders::_3));
      }
      std::shared_ptr<UdpClient> client = client_maps_[key];
      std::vector<char> receive_buf(buffer, buffer + n);
      parse_task_queue_->runTaskInQueue([client, receive_buf, this]() {
        std::lock_guard<std::mutex> guard(mutex_);
        client->ReceiveMessage(receive_buf);
      });
    }
  }
}

void UdpServer::ParseMsgCallback(UdpClient *client, void *data, SendDataType type) {
  switch (type) {
    case SendDataType::SideCameraObjs: {
    } break;
    case SendDataType::FrontCameraObjs: {
    } break;
    case SendDataType::EgoMotion: {
    } break;
    case SendDataType::FrontRadarObjs: {
    } break;
    case SendDataType::ObjFustionResult: {
    } break;
    case SendDataType::SideMsgInfo: {
    } break;
    case SendDataType::RearCameraObjs: {
    } break;
    default:
      break;
  }
}

void UdpServer::ParseExtraMsgCallback(UdpClient *client, void *data, SendDataType type) {
  switch (type) {
    case SendDataType::SideCameraObjs: {
    } break;
    case SendDataType::FrontCameraObjs: {
    } break;
    case SendDataType::FrontUnfilterObjs: {
    } break;
    case SendDataType::FrontRadarObjs: {
    } break;
    case SendDataType::FrontLaneInfo: {
    } break;
    case SendDataType::FusionLaneInfo: {
    } break;
    case SendDataType::SideLaneInfo: {
    } break;
    case SendDataType::RearCameraObjs: {
    } break;
    case SendDataType::RearLaneInfo: {
    } break;
    default:
      break;
  }
}

void UdpServer::join() {
  mRecvThread.join();
}
