/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-17 21:03:56
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-17 22:34:06
 * @FilePath: /cplusplus/src/udpmulti/server/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

#include "UdpMutiServer.h"
int main(int argc, char const *argv[]) {
  UdpMutiServer server("224.0.0.1", 6000);
  server.init();
  server.start();
  return 0;
}
