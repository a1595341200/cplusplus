/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-27 15:10:26
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-04-03 18:07:19
 */

#ifndef COMMON_H
#define COMMON_H
#include <arpa/inet.h>
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

static constexpr int PORT = 23333;
static constexpr char IP[] = "198.18.36.1";

static void initAddr(struct sockaddr_in *addrIn, uint8_t family, in_addr_t addr,
                     uint16_t port) {
  memset(addrIn, 0, sizeof(sockaddr_in));
  addrIn->sin_family = family;
  addrIn->sin_addr.s_addr = addr;
  addrIn->sin_port = htons(port);
}

namespace TCP {
enum {
  UPDATE_MESSGAE = 0,
};
struct MessageHead {
  uint32 cmd;
  int size;
};
};     // namespace TCP
#endif /* COMMON_H */
