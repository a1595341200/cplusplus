/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-16 18:52:21
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-16 23:38:09
 * @FilePath: /cplusplus/src/udplearning/client/include/UdpClient.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once

#include <arpa/inet.h>

#include <condition_variable>
#include <deque>
#include <iostream>
#include <memory>
#include <mutex>
#include <thread>
#include <vector>

#include "Shared_Queue.h"
#include "common.h"

enum class SendDataType : uint8_t {
  NOAInfo = 0,

  FrontCameraObjs = 1,
  SideCameraObjs = 2,
  EgoMotion = 3,
  ObjFustionResult = 4,
  FrontLaneInfo = 5,
  SideMsgInfo = 6,
  SideRawImage = 7,
  SendControlCmd = 8,
  FusionLaneInfo = 9,
  SideLaneInfo = 10,
  TSISignalInfo = 11,
  FrontUnfilterObjs = 12,
  RearCameraObjs = 13,
  RearLaneInfo = 14,
};

class UDPClient : public std::enable_shared_from_this<UDPClient> {
 public:
  UDPClient(const std::string &ip, int port);
  ~UDPClient();

  void Run();

  void Stop();
  void join();
  void SendUDPMessage(const std::string &msg);

 protected:
  void SetEnv();
  void KcpInputLoop();

 private:
  void InitSocket(const std::string &ip, int port);

  template <typename Msg>
  void packMsg(Msg const &msg, std::vector<char> &buffer, int type) {
    int len = sizeof(Msg);
    int total_len = len + 9;
    buffer.resize(total_len);
    buffer[0] = 0xA5;
    buffer[1] = 0xA5;
    buffer[2] = (char)type;
    buffer[3] = (len >> 24) & 255;
    buffer[4] = (len >> 16) & 255;
    buffer[5] = (len >> 8) & 255;
    buffer[6] = (len >> 0) & 255;
    memcpy(buffer.data() + 7, &msg, len);
    buffer[total_len - 2] = 0xBE;
    buffer[total_len - 1] = 0xEF;
  }

  bool parseHead(const char *buf, int size, Common::CmdHead &head);

  bool exit_{false};
  struct sockaddr_in mDstAddr;
  // 广播地址
  struct sockaddr_in mBroadCastAddr;
  int mSocket{-1};
  bool is_connected_{false};
  std::thread kcp_loop_;
  SendDataType data_type_;
};
