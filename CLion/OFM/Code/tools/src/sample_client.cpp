/*
 * @Description: 
 * @Author: yao.xie
 * @Date: 2023-03-27 22:15:30
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-03-28 10:52:02
 */
#include "OFM_TCPClient.h"
int main(void) {
  OFM_TCPClient mClient;
  mClient.init();
  mClient.run();
  return 0;
}
