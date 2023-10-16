/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-16 17:24:03
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-16 18:24:52
 * @FilePath: /cplusplus/src/udplearning/include/udp_client.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include <arpa/inet.h>
#include <sys/socket.h>

#include <functional>
#include <iostream>
#include <map>
#include <memory>
#include <string>
#include <unordered_map>
#include <vector>

#include "common.h"
class UdpClient;

using GetOneFrameCallback = std::function<void(UdpClient *, void *, SendDataType)>;
class UdpClient {
 public:
  explicit UdpClient(std::string &key, sockaddr_in &client_addr);
  UdpClient(const UdpClient *client);
  ~UdpClient();

  void ReceiveMessage(const std::vector<char> &buffer);
  void SetParseCallback(GetOneFrameCallback callback);
  void SetParseExtraCallback(GetOneFrameCallback callback) {}

  void SetPcapParseCallback(GetOneFrameCallback pcap_parse_callback) {}

  std::string &GetClinetKey() {
    return mKey;
  }
  void SetCur_Time(timespec time) {
    cur_time_ = time;
  }
  timespec GetCurTime() {
    return cur_time_;
  }

 private:
  uint64_t GetSeqNumber(int type);

 private:
  char socket_buffer[65536] = {0};
  sockaddr_in mClient_addr;
  std::string mKey;
  GetOneFrameCallback mCallback = nullptr;
  std::map<int, uint64_t> frame_seq_map_;
  timespec cur_time_;
};
