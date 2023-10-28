#include "UdpClient.h"

#include <fcntl.h>
#include<WinSock2.h>
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
  // setenv("SOCK", "/gmac1", 1);

  // if (nullptr == getenv("SOCK")) {
  //   throw std::runtime_error("not set SOCK !");
  // }
}

UDPClient::~UDPClient() {
  exit_ = true;
  is_connected_ = false;
  if (mSocket != -1) {
    // shutdown(mSocket, SHUT_RDWR);
    close(mSocket);
  }
  if (kcp_loop_.joinable()) {
    kcp_loop_.join();
  }
}

void UDPClient::InitSocket(const std::string &ip, int port) {
  mSocket = socket(AF_INET, SOCK_DGRAM, 0);
  if (mSocket < 0) {
    std::cout << "InitSocket Error\n";
    return;
  }

  // setenv("SOCK", "", 1);
  int val = 10 * 1024;  // 10k

  if (0 != setsockopt(mSocket, SOL_SOCKET, SO_RCVBUF, (const char*)&val, sizeof(val))) {
    std::cout << "set socket send buf error: " << strerror(errno) << "\n";
    return;
  }

  // 设置receive 10s超时
  int ReceiveTimeout = 10000;
  int ret;
  setsockopt(mSocket, SOL_SOCKET, SO_RCVTIMEO, (char *) &ReceiveTimeout, sizeof(ReceiveTimeout));

  memset(&mDstAddr, 0, sizeof(mDstAddr));
  mDstAddr.sin_family = AF_INET;
  mDstAddr.sin_port = htons(port);
  mDstAddr.sin_addr.S_un.S_addr = inet_addr(ip.c_str());

  // 设置端口服用
  int op = 1;
  if (0 != setsockopt(mSocket, SOL_SOCKET, SO_REUSEADDR, (const char *)&op, sizeof(op))) {
    std::cout << "set port reuse error: " << strerror(errno)<< "\n";
    return;
  }
  // 配置广播地址 clinet需要绑定广播端口
  memset(&mBroadCastAddr, 0, sizeof(mBroadCastAddr));
  mBroadCastAddr.sin_family = AF_INET;
  mBroadCastAddr.sin_addr.s_addr = INADDR_ANY;  // INADDR_ANY
  mBroadCastAddr.sin_port = htons(BROADCAST_PORT);
  if (::bind(mSocket, (struct sockaddr *)&(mBroadCastAddr), sizeof(struct sockaddr_in)) < 0) {
    std::cout << "bind socket Error: " << strerror(errno) << std::endl;
    return;
  }

  std::cout << __func__ << " finish\n";
}

void UDPClient::SendUDPMessage(const std::string &msg) {
  if (!is_connected_) {
    return;
  }
  int n = ::sendto(mSocket, msg.data(), msg.size(), 0, (struct sockaddr *)&mDstAddr,
                   sizeof(struct sockaddr_in));
}

void UDPClient::Run() {
  std::cout << "UDPServer Run\n";

  kcp_loop_ = std::thread(std::bind(&UDPClient::KcpInputLoop, this));
  std::cout << __func__ << " send cmd to server  >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n";
}

void UDPClient::Stop() {
  is_connected_ = false;
  if (mSocket != -1) {
    // shutdown(mSocket, SHUT_WR);
    close(mSocket);
    mSocket = -1;
  }
}
void UDPClient::KcpInputLoop() {
  while (!exit_) {
    char buf[1024] = {0};
    unsigned int len = sizeof(struct sockaddr_in);
    int n = ::recvfrom(mSocket, buf, 1024, 0, (sockaddr *)&mBroadCastAddr, (int *)&len);
    // 收到的消息
    if (n > 0) {
      // std::cout << "receive message: " << buf;
      Common::CmdHead head;
      parseHead(buf, n, head);
      // 先判断是否是广播的消息
      if (!strncmp(head.cmd, "start", 5) && (!strncmp(head.platform, "RMF", 3))) {
        is_connected_ = true;
      } else {
        is_connected_ = false;
      }
    } else {
      std::cout << "receive message error: " << n << " reson : " << errno << " "
                 << strerror(errno)<< "\n";
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
