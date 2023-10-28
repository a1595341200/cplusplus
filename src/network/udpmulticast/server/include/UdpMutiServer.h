/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-17 21:06:13
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-17 22:07:26
 * @FilePath: /cplusplus/src/udpmulti/server/include/UdpMutiSrver.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-17 21:06:13
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-17 21:10:46
 * @FilePath: /cplusplus/src/udpmulti/server/include/UdpMutiSrver.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef UDPMUTISRVER_H
#define UDPMUTISRVER_H
#include <Ip.h>

#include <functional>
#include <string>

class UdpMutiServer {
 public:
  UdpMutiServer(const std::string& mutiaddr, in_port_t port);
  ~UdpMutiServer();
  void init();
  void start();
  void stop();

 private:
  int mSockfd{-1};
  sockaddr_in mMutiAddr{};
};

#endif /* UDPMUTISRVER_H */
