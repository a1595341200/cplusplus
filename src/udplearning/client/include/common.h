/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-27 15:10:26
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-16 22:55:06
 */

#ifndef COMMON_H
#define COMMON_H
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <cstring>

static void initAddr(struct sockaddr_in *addrIn, uint8_t family, in_addr_t addr, uint16_t port) {
  memset(addrIn, 0, sizeof(sockaddr_in));
  addrIn->sin_family = family;
  addrIn->sin_addr.s_addr = addr;
  addrIn->sin_port = htons(port);
}

namespace Common {
#pragma pack(push, 1)
struct CmdHead {
  char cmd[64];
  char platform[64];
};
#pragma pack(pop)
};     // namespace Common
#endif /* COMMON_H */
