/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-16 18:52:21
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-27 01:49:23
 * @FilePath: /cplusplus/src/udplearning/client/include/UdpClient.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once

#include <algorithm>
#include <condition_variable>
#include <iostream>
#include <memory>
#include <mutex>
#include <queue>
#include <thread>
#include <vector>

#include "Array_BusRefLinePointIDT_71/impl_type_array_busreflinepointidt_71.h"
#include "Array_FormOfWayIDT_Vector/impl_type_array_formofwayidt_vector.h"
#include "Array_GeoFenceIDT_Vector/impl_type_array_geofenceidt_vector.h"
#include "Array_LaneSpeedLimitIDT_Vector/impl_type_array_lanespeedlimitidt_vector.h"
#include "Array_LaneWidthIDT_Vector/impl_type_array_lanewidthidt_vector.h"
#include "Array_LinearObjectIDT_Vector/impl_type_array_linearobjectidt_vector.h"
#include "Array_LinkInfoIDT_Vector/impl_type_array_linkinfoidt_vector.h"
#include "Array_LinkMergePointIDT_Vector/impl_type_array_linkmergepointidt_vector.h"
#include "Array_PairConnectivityIDT_Vector/impl_type_array_pairconnectivityidt_vector.h"
#include "Array_PathNodeIDT_Vector/impl_type_array_pathnodeidt_vector.h"
#include "Array_PathTrafficSignsIDT_Vector/impl_type_array_pathtrafficsignsidt_vector.h"
#include "NOAInfoIDT/impl_type_noainfoidt.h"
#include "RefLineSpeedInfIDT/impl_type_reflinespeedinfidt.h"

// output
#include "Array_ExtractedLaneIDT_3/impl_type_array_extractedlaneidt_3.h"
#include "Array_RefPathGlobalIDT_6/impl_type_array_refpathglobalidt_6.h"
#include "ExtractedMapInfIDT/impl_type_extractedmapinfidt.h"
#include "NOAInfoIDT/impl_type_noainfoidt.h"
#include "RMFInfoIDT/impl_type_rmfinfoidt.h"
#include "Shared_Queue.h"
#include "common.h"
enum SendDataType : int8_t {
  NOAInfo = 0,
  LaneConnectivitys = 1,
  Nodes = 2,
  GeoFences = 3,
  SpeedLimits = 4,
  LaneWidthes = 5,
  LinearObjects = 6,
  LinkInfos = 7,
  position_data = 8,
  TrafficSigns = 9,
  FormOfWays = 10,
  AllMergePoints = 11,
  RMFINFO,
};

class UDPClient : public std::enable_shared_from_this<UDPClient> {
 public:
  UDPClient(const std::string &ip, int port);
  ~UDPClient();

  void Run();

  void Stop();
  void join();
  void SendUDPMessage(const std::string &msg);
  template <typename T>
  void SendUDPMessage(const std::deque<T> &msg, SendDataType type) {
    if (!is_connected_) {
      return;
    }
    int size = msg.size() * sizeof(T);
    // int8_t 类型
    // int64_t 数组大小
    // 数组
    // 结尾0xA50xA5
    std::vector<char> buf(sizeof(int64_t) + sizeof(int8_t) + 2 + size);

    int begin{};
    memcpy(buf.data(), &type, sizeof(int8_t));
    begin += sizeof(int8_t);

    int64_t len = size;
    memcpy(buf.data() + begin, &len, sizeof(int64_t));
    begin += sizeof(int64_t);

    std::for_each(msg.begin(), msg.end(), [&](const T &info) {
      memcpy(buf.data() + begin, &info, sizeof(T));
      begin += sizeof(T);
    });
    memcpy(buf.data() + begin, "\xA5\xA5", 2);

    int n = ::sendto(mSocket, buf.data(), buf.size(), 0, (struct sockaddr *)&mDstAddr,
                     sizeof(struct sockaddr_in));
  }
  bool isConnect() {
    return is_connected_;
  }

 protected:
  void SetEnv();
  void KcpInputLoop();

 private:
  void InitSocket(const std::string &ip, int port);

 private:
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
