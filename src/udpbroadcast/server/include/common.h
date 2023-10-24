/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-27 15:10:26
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-17 09:50:30
 */

#ifndef COMMON_H
#define COMMON_H
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>

#include <cstring>
#include <string>

enum class SendDataType : uint8_t {
  NOAInfo = 0,

  FrontCameraObjs = 1,
  SideCameraObjs = 2,
  EgoMotion = 3,
  ObjFustionResult = 4,
  FrontLaneInfo = 5,
  SideMsgInfo = 6,
  SideRawImage = 7,
  // 控制命令
  SendControlCmd = 8,
  FusionLaneInfo = 9,
  // 融合模块发出的侧向车道线信息
  SideLaneInfo = 10,
  // TSI 数据
  TSISignalInfo = 11,
  // 13 OFM数据
  OFMSignalInfo = 13,
  FrontUnfilterObjs = 12,
  RearCameraObjs = 13,
  RearLaneInfo = 14,
  PcapParseCmd = 16,
};

static inline int hex2int(char c) {
  if ((c >= 'A') && (c <= 'Z')) {
    return c - 'A' + 10;
  } else if ((c >= 'a') && (c <= 'z')) {
    return c - 'a' + 10;
  } else if ((c >= '0') && (c <= '9')) {
    return c - '0';
  }
}

enum SideImageDireciton : uint8_t {
  SideImage_Left_Front = 0,
  SideImage_Right_Front,
  SideImage_Left_Rear,
  SideImage_Right_Rear
};

// 定义图片发送的数据结构
struct SideImagePackage {
  // 包头大小
  int package_header_len;

  // 当前包大小
  int package_len;

  // 发送的图片总的大小
  int image_size;

  // 一张图被分割的个数
  int splice_size;

  // 当前帧的索引
  int current_package_index;

  // 当前帧在总的buffer中的偏移
  int current_package_offset;

  // 图片的时间戳
  double time_stamp;

  // 图片方位
  SideImageDireciton direction;
};

struct ChunkFileHeader {
  int data_len;
  uint8_t type;
  unsigned long long index;
  unsigned long long time_stamp;
};
#define CHUNK_FILE_HEADER_LEN (sizeof(ChunkFileHeader))

enum TSI_SendDataType : uint8_t {
  TSI_Perception_Bus_LaneInfo = 0,
  TSI_Perception_Bus_FrntCamInfo,
  TSI_FrntCam_Bus_TrafficInfo,
  TSI_FrntCam_Bus_TrfcLi,
  TSI_FrntCam_Bus_LineSignGroup,
  TSI_FrntCam_Bus_ExtInfo,
  TSI_RMF_Bus_VectorMapInfo,
  TSI_RMF_Bus_Position,
  TSI_RMF_Bus_RMFInfo,
  TSI_RMF_Bus_MapInfo,
  TSI_OSM2_Bus_ToSOCA_FunctionInfo,
  TSI_OSM2_Bus_ToSOCA_COMInfo,
  TSI_Hmi_Data,
  TSI_Debug_Log
};

enum OFM_SendDataType : uint8_t {
  OFM_Front_Camera_Objects = 0,
  OFM_Front_Radar_Objects,
  OFM_EgoMotion,
  OFM_Side_Camera_Objects
};

static void ParseClientAddr(sockaddr_in cliaddr, std::string &ip_str, int &port) {
  struct in_addr in = cliaddr.sin_addr;
  port = ntohs(cliaddr.sin_port);
  char ip[16] = {0};
  inet_ntop(AF_INET, &in, ip, sizeof(ip));
  ip_str = std::string(ip);
}
namespace Common {
#pragma pack(push, 1)
struct CmdHead {
  char cmd[64];
  char platform[64];
};
#pragma pack(pop)
};     // namespace Common
#endif /* COMMON_H */
