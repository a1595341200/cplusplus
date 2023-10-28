#include "UdpServer.h"

#include <chrono>

#include "common.h"

// import PORT not need fix, only need to fix ip
#define BROADCAST_PORT 60000
#define BROADCAST_IP "192.168.123.255"
// 开启测试功能： 读取 bag 包，将车道线信息转为 MarkerArray, 可在 rviz 中查看效果
// #define TEST_LANE_PUB_FROM_BAG
#define SERVER_PORT 46325

UdpServer::UdpServer() {
}

UdpServer::~UdpServer() {
  exit_ = true;
  std::cout << "~UdpServer\n";
  if (socket_fd_ != -1) {
    // shutdown(socket_fd_, SHUT_RDWR);
    close(socket_fd_);
    socket_fd_ = -1;
  }
}

bool UdpServer::Init() {
  parse_task_queue_.reset(new ConcurrentTaskQueue(8, "parse queue\n"));
  // 工作在网络模式
  if (!InitSocket()) {
    std::cout << "Init Socker Error\n";
    return false;
  }
  mRecvThread = std::thread(std::bind(&UdpServer::KcpMessageLoop, this));
  mBroadCastThread = std::thread(std::bind(&UdpServer::BroadcastLoop, this));
  return true;
}

bool UdpServer::InitSocket() {
  socket_fd_ = socket(AF_INET, SOCK_DGRAM, 0);
  if (socket_fd_ < 0) {
    std::cout << "InitSocket Error" << socket_fd_ << std::endl;
    return false;
  }
  std::cout << "socket id " << socket_fd_<< "\n";

  int val = 100 * 1024 * 1024;  // 1woM
  //设置tcp缓存区大小
  if (0 != setsockopt(socket_fd_, SOL_SOCKET, SO_RCVBUF, (const char*)&val, sizeof(val))) {
    std::cout << "set socket recv buf error: " << strerror(errno) << "\n";
    return false;
  }

  // add broad cast
  //设置广播
  int op = 1;
  if (0 != setsockopt(socket_fd_, SOL_SOCKET, SO_BROADCAST, (const char*)&op, sizeof(op))) {
    std::cout << "set braodcast error: " << strerror(errno) << "\n";
    return false;
  }
  memset(&broad_cast_addr_, 0, sizeof(broad_cast_addr_));
  broad_cast_addr_.sin_family = AF_INET;
  broad_cast_addr_.sin_port = htons(BROADCAST_PORT);
  broad_cast_addr_.sin_addr.S_un.S_addr = inet_addr(BROADCAST_IP);

  memset(&mServerAddr, 0, sizeof(mServerAddr));
  mServerAddr.sin_family = AF_INET;
  mServerAddr.sin_addr.s_addr = htonl(INADDR_ANY);  // INADDR_ANY
  mServerAddr.sin_port = htons(SERVER_PORT);
  //绑定本地端口
  if (::bind(socket_fd_, (struct sockaddr *)&(mServerAddr), sizeof(struct sockaddr_in)) < 0) {
    std::cout << "bind socket Error: " << SERVER_PORT << "---" << strerror(errno) << "\n";
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
    std::cout << "close socekt"<< "\n";
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
  strncpy(head.platform, "RMF", 3);
  head.platform[3] = '\0';
  while (!exit_.load()) {
    std::cout << "cmd " << head.cmd << "\n";
    sendto(socket_fd_, (const char *)&head, sizeof(head), 0, (struct sockaddr *)&broad_cast_addr_,
           sizeof(struct sockaddr_in));
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}

void UdpServer::KcpMessageLoop() {
  while (!exit_.load()) {
    char buffer[FRAME_SIZE] = {0};
    sockaddr_in cliaddr;
    unsigned int len = sizeof(struct sockaddr_in);
    memset(&cliaddr, 0, sizeof(cliaddr));
    int n = recvfrom(socket_fd_, buffer, FRAME_SIZE, 0, (struct sockaddr *)&cliaddr, (int*)&len);
    // std::cout << buffer;
    if (n < 0) {
      if (EAGAIN != errno && EINTR != errno) {
        std::cout << "call recv from error: " << errno << " error msg: " << strerror(errno)
              << std::endl;
        return;
      }
    } else if (n == 0) {
      std::cout << "receive over\n";
      return;
    } else {
      std::string ip;
      int port;
      ParseClientAddr(cliaddr, ip, port);
      std::cout << "receive from " << ip << ":" << port << " data length " << n << "\n";
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
    case SendDataType::NOAInfo: {
      std::cout << "NOInfo\n";
      std::deque<NOAInfoIDT::NOAInfoIDT> *NOAInfoBuf_ =
          reinterpret_cast<std::deque<NOAInfoIDT::NOAInfoIDT> *>(data);
      for (int i = 0; i < NOAInfoBuf_->size(); ++i) {
        std::cout << "NOInfoBuf_[i].Count : " << (*NOAInfoBuf_)[i].Count << "\n";
      }
      break;
    }
    case SendDataType::LaneConnectivitys: {
      std::cout << "LaneConnectivitys\n";
      break;
    }
    case SendDataType::Nodes: {
      std::cout << "Nodes\n";
      break;
    }
    case SendDataType::GeoFences: {
      std::cout << "GeoFences\n";
      break;
    }
    case SendDataType::SpeedLimits: {
      std::cout << "SpeedLimits\n";
      break;
    }
    case SendDataType::LaneWidthes: {
      std::cout << "LaneWidthes\n";
      break;
    }
    case SendDataType::LinearObjects: {
      std::cout << "LinearObjects\n";
      break;
    }
    case SendDataType::LinkInfos: {
      std::cout << "LinkInfos\n";
      break;
    }
    case SendDataType::position_data: {
      std::cout << "position_data\n";
      break;
    }
    case SendDataType::TrafficSigns: {
      std::cout << "TrafficSigns\n";
      break;
    }
    case SendDataType::FormOfWays: {
      std::cout << "FormOfWays\n";
      break;
    }
    case SendDataType::AllMergePoints: {
      std::cout << "AllMergePoints\n";
      break;
    }
    case SendDataType::RMFINFO: {
      std::cout << "RMFINFO\n";
      break;
    }
    default:
      break;
  }
}

void UdpServer::ParseExtraMsgCallback(UdpClient *client, void *data, SendDataType type) {
  switch (type) {
    default:
      break;
  }
}

void UdpServer::join() {
  mRecvThread.join();
}
