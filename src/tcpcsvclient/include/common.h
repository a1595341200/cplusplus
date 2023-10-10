/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-27 15:10:26
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-05-15 14:15:13
 */

#ifndef COMMON_H
#define COMMON_H
#include <cstring>
#include <sys/types.h>
#include <unistd.h>
#ifdef _WIN32
#include <winsock2.h>
#else
#include <netinet/in.h>
#endif

static constexpr int PORT = 23333;

//#define TEST
#ifdef TEST
static constexpr char IP[] = "127.0.0.1";
#else
static constexpr char IP[] = "198.18.36.1";
#endif

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

namespace TCP {
enum {
    UPDATE_MESSGAE = 0,
};
struct MessageHead {
    int cmd{};
    int size{};
};
};     // namespace TCP
#endif /* COMMON_H */
