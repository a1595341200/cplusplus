/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-17 10:49:46
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-17 10:49:46
 * @FilePath: /cplusplus/src/udplearning/client/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

#include "UdpClient.h"
#include "backward-cpp/backward.hpp"
namespace backward {
backward::SignalHandling sh;
}

int main(int argc, char const *argv[]) {
  UDPClient server("127.0.0.1", 46325);
  server.Run();
  while (true) {
    std::deque<NOAInfoIDT::NOAInfoIDT> NOAInfoBuf_;
    NOAInfoIDT::NOAInfoIDT t;
    t.Count = 5;
    NOAInfoBuf_.emplace_back(t);
    std::deque<Array_PairConnectivityIDT_Vector::Array_PairConnectivityIDT_Vector>
        LaneConnectivityBuf_;
    LaneConnectivityBuf_.emplace_back();

    std::deque<Array_PathNodeIDT_Vector::Array_PathNodeIDT_Vector> NodesBuf_;
    NodesBuf_.emplace_back();

    std::deque<Array_GeoFenceIDT_Vector::Array_GeoFenceIDT_Vector> GeoFencesBuf_;
    GeoFencesBuf_.emplace_back();

    std::deque<Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector> SpeedLimitsBuf_;
    SpeedLimitsBuf_.emplace_back();

    std::deque<Array_LaneWidthIDT_Vector::Array_LaneWidthIDT_Vector> LaneWidthesBuf_;
    LaneWidthesBuf_.emplace_back();

    std::deque<Array_LinearObjectIDT_Vector::Array_LinearObjectIDT_Vector> LinearObjectsBuf_;
    LinearObjectsBuf_.emplace_back();

    std::deque<Array_LinkInfoIDT_Vector::Array_LinkInfoIDT_Vector> LinkInfosBuf_;
    LinkInfosBuf_.emplace_back();

    std::deque<Array_PathTrafficSignsIDT_Vector::Array_PathTrafficSignsIDT_Vector> TrafficSignsBuf_;
    TrafficSignsBuf_.emplace_back();

    std::deque<Array_FormOfWayIDT_Vector::Array_FormOfWayIDT_Vector> FormOfWaysBuf_;
    FormOfWaysBuf_.emplace_back();
    std::deque<Array_LinkMergePointIDT_Vector::Array_LinkMergePointIDT_Vector> AllMergePointsBuf_;
    AllMergePointsBuf_.emplace_back();
    std::deque<RMFInfoIDT::RMFInfoIDT> rmf;
    rmf.emplace_back();
    server.SendUDPMessage(NOAInfoBuf_, SendDataType::NOAInfo);
    server.SendUDPMessage(NOAInfoBuf_, SendDataType::LaneConnectivitys);
    server.SendUDPMessage(GeoFencesBuf_, SendDataType::GeoFences);
    server.SendUDPMessage(NodesBuf_, SendDataType::Nodes);
    server.SendUDPMessage(SpeedLimitsBuf_, SendDataType::SpeedLimits);
    server.SendUDPMessage(LaneWidthesBuf_, SendDataType::LaneWidthes);
    server.SendUDPMessage(LinearObjectsBuf_, SendDataType::LinearObjects);
    server.SendUDPMessage(LinkInfosBuf_, SendDataType::LinkInfos);
    server.SendUDPMessage(TrafficSignsBuf_, SendDataType::TrafficSigns);
    server.SendUDPMessage(FormOfWaysBuf_, SendDataType::FormOfWays);
    server.SendUDPMessage(AllMergePointsBuf_, SendDataType::AllMergePoints);
    server.SendUDPMessage(rmf, SendDataType::RMFINFO);
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
  server.join();
  server.Stop();
  return 0;
}
