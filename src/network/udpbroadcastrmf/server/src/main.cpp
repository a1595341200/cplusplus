/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-16 18:27:37
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-17 09:55:15
 * @FilePath: /cplusplus/src/udplearning/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

#include "UdpServer.h"
#include "backward-cpp/backward.hpp"
namespace backward {
backward::SignalHandling sh;
}

int main(int argc, char const *argv[]) {
  UdpServer server;
  server.Init();
  server.join();
  server.Stop();
  return 0;
}
