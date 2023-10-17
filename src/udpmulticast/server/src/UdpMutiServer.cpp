/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-17 21:06:17
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-17 22:52:00
 * @FilePath: /cplusplus/src/udpmulti/server/src/UdpMutiSrver.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "UdpMutiServer.h"

#include <Log.h>
UdpMutiServer::UdpMutiServer(const std::string& mutiaddr, in_port_t port) {
  IP::sring2addr(mutiaddr, mMutiAddr.sin_addr);
  mMutiAddr.sin_port = htons(port);
  mSockfd = IP::getUdpSocket();
}

UdpMutiServer::~UdpMutiServer() {
  if (mSockfd >= 0) {
    close(mSockfd);
  }
}

void UdpMutiServer::init() {
  IP::setMulticastLoop(mSockfd, true);
  SLOG(INFO) << mSockfd;
}

void UdpMutiServer::start() {
  SLOG(INFO) << "start send msg";
  while (true) {
    char buf[1024] = "test udp muti server  ";
    int n = sendto(mSockfd, buf, sizeof(buf), 0, (sockaddr*)&mMutiAddr, sizeof(mMutiAddr));
    if (n <= 0) {
      SLOG(INFO) << "sendto error";
      return;
    } else {
      SLOG(INFO) << "sendto success" << buf;
    }
    sleep(1);
  }
}

void UdpMutiServer::stop() {}
