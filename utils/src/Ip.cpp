/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-17 21:11:08
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-17 23:10:09
 * @FilePath: /cplusplus/utils/src/Ip.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Ip.h"

#include "Log.h"

namespace IP {
bool sring2addr(const std::string& in, in_addr& out) {
  // inet_pton支持ipv4和ipv6
  return inet_pton(AF_INET, in.c_str(), &out) == true ?: false;
}

int getUdpSocket() {
  return socket(AF_INET, SOCK_DGRAM, 0);
}

//设置地址复用

bool setReuseAddr(int socketFd) {
  int on = 1;
  return setsockopt(socketFd, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on)) == 0;
}

//加入多播组
bool setMulticastGroup(int socketFd, in_addr mutiaddr) {
  struct ip_mreq multi_cast;
  multi_cast.imr_multiaddr = mutiaddr;
  multi_cast.imr_interface.s_addr = INADDR_ANY;
  bool result{false};

  if (setsockopt(socketFd, IPPROTO_IP, IP_ADD_MEMBERSHIP, &multi_cast, sizeof(multi_cast)) < 0) {
    SLOG(INFO) << "fail to setsockopt";
    result = false;
  } else {
    result = true;
    SLOG(INFO) << "succes to setsockopt";
  }
  return result;
}

bool setMulticastLoop(int socketFd, bool on) {
  bool result{false};
  uint32_t dwOpenLoop = on ? 1 : 0;
  if (setsockopt(socketFd, IPPROTO_IP, IP_MULTICAST_LOOP, &dwOpenLoop, sizeof(dwOpenLoop)) < 0) {
    SLOG(INFO) << "setsockopt():IP_MULTICAST_LOOP\n";
  } else {
    SLOG(INFO) << "IP_MULTICAST_LOOP...OK.\n";
    result = true;
  }
  return result;
}

std::string ipToString(sockaddr_in& addr) {
  char ip[INET_ADDRSTRLEN];
  inet_ntop(AF_INET, &(addr.sin_addr), ip, INET_ADDRSTRLEN);
  return std::string(ip);
}

int getPort(in_port_t port) {
  return ntohs(port);
}

};  // namespace IP
