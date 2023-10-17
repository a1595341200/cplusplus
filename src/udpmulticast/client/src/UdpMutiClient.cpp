/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-17 22:04:49
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-17 23:00:31
 * @FilePath: /cplusplus/src/udpmulti/client/src/UdpMutiClient.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <UdpMutiClient.h>

UdpMutiClient::UdpMutiClient(const std::string& mutiaddr, in_port_t port) {
  IP::sring2addr(mutiaddr, mMutiAddr.sin_addr);
  mMutiAddr.sin_port = htons(port);
  mSockfd = IP::getUdpSocket();
}

UdpMutiClient::~UdpMutiClient() {
  if (mSockfd >= 0) {
    close(mSockfd);
  }
}

void UdpMutiClient::bind() {
  sockaddr_in addr{};
  addr.sin_addr.s_addr = INADDR_ANY;
  addr.sin_port = mMutiAddr.sin_port;
  ::bind(mSockfd, (const sockaddr*)&addr, sizeof(addr));
}

void UdpMutiClient::init() {
  IP::setReuseAddr(mSockfd);
  IP::setMulticastGroup(mSockfd, mMutiAddr.sin_addr);
  SLOG(INFO) << mSockfd;
  bind();
}
void UdpMutiClient::start() {
  while (true) {
    char buf[1024];
    sockaddr_in addr{};
    socklen_t len = sizeof(addr);
    int n = recvfrom(mSockfd, buf, sizeof(buf), 0, (sockaddr*)&addr, &len);
    if (n < 0) {
      SLOG(INFO) << "error";
    } else {
      SLOG(INFO) << mSockfd << " recvfrom: " << buf << "ip : " << IP::ipToString(addr);
    }
    sleep(1);
  }
}
void UdpMutiClient::stop() {}
