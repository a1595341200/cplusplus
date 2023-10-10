/*
 * @Description: 
 * @Author: yao.xie
 * @Date: 2023-03-27 22:15:30
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-03-29 13:51:10
 */
#include "OFM_TCPServer.h"
int main(void) {
  OFM_TCPServer mClient;
  mClient.init();
  mClient.run();
  return 0;
}
