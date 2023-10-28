/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-16 18:27:37
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-27 02:27:39
 * @FilePath: /cplusplus/src/udplearning/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

#include "UdpServer.h"


int main(int argc, char const *argv[]) {
  #ifdef _WIN32
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData)) {
        WSACleanup();
        return 0;
    }
#endif
  UdpServer server;
  server.Init();
  server.join();
  while (1)
  {
    std::this_thread::sleep_for(std::chrono::seconds(1000));
  }
  
  server.Stop();
  return 0;
}
