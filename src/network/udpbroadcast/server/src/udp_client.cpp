/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-16 18:22:18
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-16 18:41:20
 * @FilePath: /cplusplus/src/udplearning/src/udp_client.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "udp_client.h"

#include "Log.h"
#include "file.h"
#include "macro.h"

UdpClient::UdpClient(std::string &key, sockaddr_in &client_addr)
    : mKey(key), mClient_addr(client_addr) {
  // 获取当前可执行的目录
  std::string dir = GetCurrentWorkspace();
  AERROR << "current dir: " << dir;
}

UdpClient::UdpClient(const UdpClient *client) {
  this->mKey = client->mKey;
}

UdpClient::~UdpClient() {}

void UdpClient::ReceiveMessage(const std::vector<char> &buffer) {
  if (buffer.size() < 7) {
    return;
  }

  SendDataType data_type{};

  switch (data_type) {
    case SendDataType::NOAInfo: {
      uint64_t cur_seq = GetSeqNumber((int)data_type);
      break;
    }
    case SendDataType::FrontCameraObjs: {
      break;
    }
    case SendDataType::FrontUnfilterObjs: {
      break;
    }
    case SendDataType::EgoMotion: {
      break;
    }
    case SendDataType::ObjFustionResult: {
      break;
    }
    case SendDataType::FrontLaneInfo: {
      break;
    }
    case SendDataType::FusionLaneInfo: {
      break;
    }
    case SendDataType::SideLaneInfo: {
      break;
    }
    case SendDataType::SideMsgInfo: {
      break;
    }
    case SendDataType::TSISignalInfo: {
      break;
    }
    case SendDataType::SideRawImage: {
      break;
    }
    case SendDataType::RearCameraObjs: {
      break;
    }
    case SendDataType::RearLaneInfo: {
      break;
    }
    case SendDataType::PcapParseCmd: {
    } break;
    default:
      break;
  }
}

uint64_t UdpClient::GetSeqNumber(int type) {
  uint64_t cur_seq = 0;
  if (frame_seq_map_.count(type) != 0) {
    cur_seq = frame_seq_map_[type];
    cur_seq++;
    frame_seq_map_[type] = cur_seq;
  } else {
    frame_seq_map_[type] = cur_seq;
  }
  return cur_seq;
}
void UdpClient::SetParseCallback(GetOneFrameCallback callback) {
  mCallback = callback;
}
