/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-27 15:10:26
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-27 02:07:29
 */

#ifndef COMMON_H
#define COMMON_H
#include<WinSock2.h>
#include <unistd.h>

#include <cstring>

#ifdef _WIN32
static void initAddr(struct sockaddr_in *addrIn, short family, u_long addr, u_short port) {
    memset(addrIn, 0, sizeof(sockaddr_in));
    addrIn->sin_family = family;
    addrIn->sin_addr.s_addr = addr;
    addrIn->sin_port = htons(port);
}
#else
static void initAddr(struct sockaddr_in *addrIn, uint8_t family, in_addr_t addr, uint16_t port) {
    memset(addrIn, 0, sizeof(sockaddr_in));
    addrIn->sin_family = family;
    addrIn->sin_addr.s_addr = addr;
    addrIn->sin_port = htons(port);
}
#endif
namespace Common {
#pragma pack(push, 1)
struct CmdHead {
  char cmd[64];
  char platform[64];
};
#pragma pack(pop)
};     // namespace Common
#endif /* COMMON_H */
