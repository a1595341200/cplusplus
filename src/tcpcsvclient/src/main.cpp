/*
 * @Author: yao.xie
 * @Date: 2023-03-29 09:33:53
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-05-12 13:18:34
 * @FilePath: /tcp/src/main.cpp
 */
#include "OFM_TCPClient.h"
#include "dbg.h"

int main(void) {

#ifdef _WIN32
    WSADATA wsaData;
    if (WSAStartup(MAKEWORD(2, 2), &wsaData)) {
        WSACleanup();
        return 0;
    }
#endif
    dbg("start");
    OFM_TCPClient mClient;
    mClient.init();
    mClient.run();
    return 0;
}
