/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-16 18:22:18
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-27 02:04:33
 * @FilePath: /cplusplus/src/udplearning/src/udp_client.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "udp_client.h"

#include <queue>

UdpClient::UdpClient(std::string &key, sockaddr_in &client_addr)
    : mKey(key), mClient_addr(client_addr) {
}

UdpClient::UdpClient(const UdpClient *client) {
  this->mKey = client->mKey;
}

UdpClient::~UdpClient() {}

void UdpClient::ReceiveMessage(const std::vector<char> &buffer) {
  Head h = ParseHead(buffer);
  switch (h.type) {
    case SendDataType::NOAInfo: {
      std::cout << "NOAInfo\n";
      std::deque<NOAInfoIDT::NOAInfoIDT> NOAInfoBuf_;
      int size = h.arraySize;
      size = size / sizeof(NOAInfoIDT::NOAInfoIDT);
      int begin = sizeof(int8_t) + sizeof(int64_t);
      for (int i = 0; i < size; ++i) {
        NOAInfoIDT::NOAInfoIDT test;
        memcpy(&test, buffer.data() + begin, sizeof(NOAInfoIDT::NOAInfoIDT));
        begin += sizeof(NOAInfoIDT::NOAInfoIDT);
        // std::cout << "test.Count : " << test.Count << "\n";
        NOAInfoBuf_.push_back(test);
      }
      mCallback(this, (void *)&NOAInfoBuf_, SendDataType::NOAInfo);
      break;
    }
    case SendDataType::LaneConnectivitys: {
      std::cout << "LaneConnectivitys\n";
      break;
    }
    case SendDataType::Nodes: {
      std::cout << "Nodes\n";
      break;
    }
    case SendDataType::GeoFences: {
      std::cout << "GeoFences\n";
      break;
    }
    case SendDataType::SpeedLimits: {
      std::cout << "SpeedLimits\n";
      break;
    }
    case SendDataType::LaneWidthes: {
      std::cout << "LaneWidthes\n";
      break;
    }
    case SendDataType::LinearObjects: {
      std::cout << "LinearObjects\n";
      break;
    }
    case SendDataType::LinkInfos: {
      std::cout << "LinkInfos\n";
      break;
    }
    case SendDataType::position_data: {
      std::cout << "position_data\n";
      break;
    }
    case SendDataType::TrafficSigns: {
      std::cout << "TrafficSigns\n";
      break;
    }
    case SendDataType::FormOfWays: {
      std::cout << "FormOfWays\n";
      break;
    }
    case SendDataType::AllMergePoints: {
      std::cout << "AllMergePoints\n";
      break;
    }
    case SendDataType::RMFINFO: {
      std::cout << "RMFINFO\n";
      break;
    }
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

Head UdpClient::ParseHead(const std::vector<char> &buffer) {
  SendDataType data_type_{};
  std::cout << buffer.size() << "\n";
  strncpy((char *)&data_type_, buffer.data(), sizeof(int8_t));
  std::cout << "data_type_" << (int)data_type_ << "\n";
  int64_t len{};
  strncpy((char *)&len, buffer.data() + sizeof(int8_t), sizeof(int64_t));
  std::cout << len << std::endl;
  return {data_type_, len};
}
