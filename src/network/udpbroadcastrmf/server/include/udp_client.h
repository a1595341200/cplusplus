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
#include "common.h"
class UdpClient;
struct Head {
  SendDataType type;
  int64_t arraySize;
};
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
  Head ParseHead(const std::vector<char> &buffer);

  char socket_buffer[65536] = {0};
  sockaddr_in mClient_addr;
  std::string mKey;
  GetOneFrameCallback mCallback = nullptr;
  std::map<int, uint64_t> frame_seq_map_;
  timespec cur_time_;
};
