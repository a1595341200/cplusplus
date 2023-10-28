/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-27 15:22:25
 * @LastEditors: 谢瑶
 * install git && error: git config user.email & please set dead value or
 * install git & please set dead value or install git
 * @LastEditTime: 2023-08-14 17:26:53
 */
#include "OFM_TCPServer.h"
#include "dbg.h"
#include <stdexcept>
#include <tuple>

using namespace std::string_literals;
bool IsBigEndian() {
  union {
    unsigned short a; // 2个字节
    char b;           // 高地址
  } c;

  c.a = 0x0102;

  if (c.b == 1) // 如果高地址存放低字节
    return true;
  else
    return false;
}
OFM_TCPServer::OFM_TCPServer() { std::cout << IsBigEndian() << std::endl; }

OFM_TCPServer::~OFM_TCPServer() {
  if (mServerSockfd > 0) {
    close(mServerSockfd);
  }
  if (mClientSockfd > 0) {
    close(mClientSockfd);
  }
}

void OFM_TCPServer::init() {
  try {
    // 设置环境变量
    setEnv();
    // 获取套接字
    getSocket();
    // 绑定
    bind();
    // 监听
    listen();
  } catch (const std::exception &e) {
    // 打印错误信息
    std::cout << "tcp init fail!" << e.what() << std::endl;
    // 退出
    exit(-1);
  }
}

void OFM_TCPServer::run() {
  // 创建一个socket，用于接受客户端的连接
  socklen_t len = sizeof(struct sockaddr_in);
  struct sockaddr_in mClinetAddr;
  mThread = std::make_unique<std::thread>([this, &mClinetAddr, &len] {
    // 循环接受客户端的连接
    while (true) {
      // 接受客户端的连接
      if ((mClientSockfd = accept(
               mServerSockfd, (struct sockaddr *)&(mClinetAddr), &len)) < 0) {
        std::cout << "accept error " << strerror(errno);
      }
      // 打印客户端的IP地址
      std::cout << "accept ipaddr : " << inet_ntoa(mClinetAddr.sin_addr);
    }
  });

  FrntRdrObjList_4D frntRdrObjList_4D{};
  // 设置主机速度
  frntRdrObjList_4D.Status.HostSpeed = 1.0;
  // 设置主机航向角速度
  frntRdrObjList_4D.Status.HostYawRate = 2.0;
  // 设置块0的状态
  frntRdrObjList_4D.Status.StsBlkd0bin = 3.0;
  // 设置块0的配置
  frntRdrObjList_4D.Status.StsBlkdConf = 4.0;
  // 设置块0的检查状态
  frntRdrObjList_4D.Status.StsChks = 5.0;
  // 设置块0的航速比例
  frntRdrObjList_4D.Status.StsWhlSpdCmpFac = 6.0;
  // 循环添加30个对象
  for (int i = 0; i < 30; ++i) {
    // 设置对象的检查状态
    frntRdrObjList_4D.Objects[i].Chks = 1;
    // 设置对象的计数
    frntRdrObjList_4D.Objects[i].Cntr = 2;
  }
  JkObjFusn_EgoMotionType egoMotion{};
  egoMotion.f32Speed = 1;
  egoMotion.bIsValid = 1;
  FrntCamObjList frntCamObjList;
  for (size_t index = 0; index < 25; ++index) {
    frntCamObjList.Objects[index].Angle = 0.002939684;
    frntCamObjList.Objects[index].AngleStdDev = 0.0410637;
    frntCamObjList.Objects[index].HeadingAngle = 0.05235988;
    frntCamObjList.Objects[index].HeadingAngleStdDev = 4.253267e-06;
    frntCamObjList.Objects[index].Height = 1.44566;
    frntCamObjList.Objects[index].HeightStdDev = 0.2078759;
    frntCamObjList.Objects[index].Width = 1.69074;
    frntCamObjList.Objects[index].WidthStdDev = 0.07515611;
    frntCamObjList.Objects[index].Length = 4.25469;
    frntCamObjList.Objects[index].LengthStdDev = 0.3684658;
    frntCamObjList.Objects[index].LgtPos = 8.169267;
    frntCamObjList.Objects[index].LgtPosStdDev = 0.0037606;
    frntCamObjList.Objects[index].LatPos = -0.7825013;
    frntCamObjList.Objects[index].LatPosStdDev = 0.005955095;
    frntCamObjList.Objects[index].LgtVel = 0.003075881;
    frntCamObjList.Objects[index].LgtVelStdDev = 0.02362855;
    frntCamObjList.Objects[index].LatVel = 0.0835192;
    frntCamObjList.Objects[index].LatVelStdDev = 0.02876996;
    frntCamObjList.Objects[index].LaneOffsetLeft = 0;
    frntCamObjList.Objects[index].LaneOffsetLeftStdDev = 0;
    frntCamObjList.Objects[index].LaneOffsetRight = 0;
    frntCamObjList.Objects[index].LaneOffsetRightStdDev = 0;
    frntCamObjList.Objects[index].Id = 3;
    frntCamObjList.Objects[index].Type = 1;
    frntCamObjList.Objects[index].ClassConfidence = 0.6370691;
    frntCamObjList.Objects[index].ExsistConfidence = 0;
    frntCamObjList.Objects[index].Pose = 5;
    frntCamObjList.Objects[index].DetectionHistory = 255;
    frntCamObjList.Objects[index].LaneAssignment = 1;
    frntCamObjList.Objects[index].NearestSide = 2;
    frntCamObjList.Objects[index].TrackSts = 1;
    frntCamObjList.Objects[index].TurnIndicator = 1;
    frntCamObjList.Objects[index].Chks = 0;
    frntCamObjList.Objects[index].Cntr = 0;
    frntCamObjList.Objects[index].CmsConfidence = 1;
    frntCamObjList.Objects[index].ImgFrameCtr = 72;
    frntCamObjList.Objects[index].TimeStamp = 162022.8;
  }
  ObjGroup2Vccs_11::ObjGroup2Vccs_11 a{};
  ObjGroup2Vccs_11::ObjGroup2Vccs_11 b{};
  ObjGroup2Vccs_10::ObjGroup2Vccs_10 c{};
  for (int i = 0; i < 11; ++i) {
    a[i].ObjInfo2VccGroup_ref.FuseObjWidth_ref = 1.5;
    a[i].ObjInfo2VccGroup_ref.FuseObjHei_ref = 1.5;
  }
  for (int i = 0; i < 11; ++i) {
    b[i].ObjInfo2VccGroup_ref.FuseObjWidth_ref = 1.5;
    b[i].ObjInfo2VccGroup_ref.FuseObjLength_ref = 1.5;
  }
  for (int i = 0; i < 10; ++i) {
    c[i].ObjPpty2Vcc_ref.Age2_ref = 9;
    c[i].ObjPpty2Vcc_ref.PosnLatStdDe_ref = 1;
    c[i].ObjPpty2Vcc_ref.PosnLgtStdDe_ref = 2;
    c[i].ObjInfo2VccGroup_ref.FuseObjWidth_ref = 1.5;
    c[i].ObjInfo2VccGroup_ref.FuseObjLength_ref = 1.5;
  }
  AroundCamObjList aroundA{};
  aroundA.Status.Blockage = 1;
  aroundA.Status.Calibration = 7;
  aroundA.Status.Fault = 13;
  for (int i = 0; i < 11; ++i) {
    aroundA.Objects[i].WidthStdDev = 3.0;
    aroundA.Objects[i].TimeStamp = 4.0;
    aroundA.Objects[i].ImgFrameCtr = 5;
    aroundA.Objects[i].CmsConfidence = 6;
  }
  AroundCamObjList aroundB{};
  aroundB.Status.Blockage = 1;
  for (int i = 0; i < 11; ++i) {
    aroundB.Objects->WidthStdDev = 4.0;
    aroundB.Objects->TimeStamp = 4.0;
  }

  AroundCamObjList aroundC{};
  aroundC.Status.Blockage = 1;
  aroundC.Objects->WidthStdDev = 5.0;
  aroundC.Objects->TimeStamp = 4.0;

  AroundCamObjList aroundD{};
  aroundD.Status.Blockage = 1;

  for (int i = 0; i < 10; ++i) {
    aroundD.Objects[i].WidthStdDev = 6.0;
    aroundD.Objects[i].TimeStamp = 4.0;
  }

  using namespace std::chrono_literals;
  while (true) {
    SendTCPMessage(frntRdrObjList_4D, frntCamObjList, egoMotion, a, b, c,
                   aroundA, aroundB, aroundC, aroundD);
    std::this_thread::sleep_for(25ms);
  }
}

void OFM_TCPServer::setEnv() {
  setenv("SOCK", "/gmac1", 1);

  if (nullptr == getenv("SOCK")) {
    throw std::runtime_error("not set SOCK !");
  }
}

void OFM_TCPServer::bind() {
  struct sockaddr_in mServerAddr;
  initAddr(&mServerAddr, AF_INET, INADDR_ANY, PORT);
  if (::bind(mServerSockfd, (struct sockaddr *)&mServerAddr,
             sizeof(struct sockaddr)) < 0) {
    throw std::runtime_error("bind error "s + strerror(errno));
  }
}

void OFM_TCPServer::listen() {
  if (::listen(mServerSockfd, 5) < 0) {
    throw std::runtime_error("listen error "s + strerror(errno));
  }
}

void OFM_TCPServer::getSocket() {
  if ((mServerSockfd = socket(PF_INET, SOCK_STREAM, 0)) < 0) {
    throw std::runtime_error("socket error "s + strerror(errno));
  }
  int opt = 1;
  int res = setsockopt(mServerSockfd, SOL_SOCKET, SO_REUSEADDR,
                       (const void *)&opt, sizeof(opt));
  std::cout << (res == -1) ? "set reuseaddr fail !" : "set reuseaddr success";
}

void OFM_TCPServer::sendn(char *data, int size) {
  while (size > 0) {
    int SendSize = send(mClientSockfd, data, size, 0);
    if (SendSize < 0) {
      close(mClientSockfd);
      mClientSockfd = -1;
      return;
    }
    size -= SendSize;
    data += SendSize;
  }
}

void OFM_TCPServer::sendHead(TCP::MessageHead &head) {
  sendn(reinterpret_cast<char *>(&head), sizeof(head));
}

void OFM_TCPServer::pack(
    char *buf, const FrntRdrObjList_4D &frntRdrObjList_4D,
    const FrntCamObjList &frntCamObjList,
    const JkObjFusn_EgoMotionType &egoMotion,
    const ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_1_11,
    const ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_12_22,
    const ObjGroup2Vccs_10::ObjGroup2Vccs_10 &fusedTargets_23_32,
    const AroundCamObjList &aroundCamObjListFL,
    const AroundCamObjList &aroundCamObjListFR,
    const AroundCamObjList &aroundCamObjListRL,
    const AroundCamObjList &aroundCamObjListRR) {

  memcpy(buf, &frntRdrObjList_4D, sizeof(FrntRdrObjList_4D));

  buf += sizeof(FrntRdrObjList_4D);
  memcpy(buf, &frntCamObjList, sizeof(FrntCamObjList));

  buf += sizeof(FrntCamObjList);
  memcpy(buf, &egoMotion, sizeof(JkObjFusn_EgoMotionType));

  buf += sizeof(JkObjFusn_EgoMotionType);
  memcpy(buf, &fusedTargets_1_11, sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11));

  buf += sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11);
  memcpy(buf, &fusedTargets_12_22, sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11));

  buf += sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11);
  memcpy(buf, &fusedTargets_23_32, sizeof(ObjGroup2Vccs_10::ObjGroup2Vccs_10));

  buf += sizeof(ObjGroup2Vccs_10::ObjGroup2Vccs_10);
  memcpy(buf, &aroundCamObjListFL, sizeof(AroundCamObjList));
  buf += sizeof(AroundCamObjList);
  memcpy(buf, &aroundCamObjListFR, sizeof(AroundCamObjList));
  buf += sizeof(AroundCamObjList);
  memcpy(buf, &aroundCamObjListRL, sizeof(AroundCamObjList));
  buf += sizeof(AroundCamObjList);
  memcpy(buf, &aroundCamObjListRR, sizeof(AroundCamObjList));
}

void OFM_TCPServer::SendTCPMessage(
    const FrntRdrObjList_4D &frntRdrObjList_4D,
    const FrntCamObjList &frntCamObjList,
    const JkObjFusn_EgoMotionType &egoMotion,
    const ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_1_11,
    const ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_12_22,
    const ObjGroup2Vccs_10::ObjGroup2Vccs_10 &fusedTargets_23_32,
    const AroundCamObjList &aroundCamObjListFL,
    const AroundCamObjList &aroundCamObjListFR,
    const AroundCamObjList &aroundCamObjListRL,
    const AroundCamObjList &aroundCamObjListRR) {
  if (mClientSockfd < 0) {
    return;
  }

  int size = sizeof(FrntRdrObjList_4D) + sizeof(FrntCamObjList) +
             sizeof(JkObjFusn_EgoMotionType) +
             sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11) +
             sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11) +
             sizeof(ObjGroup2Vccs_10::ObjGroup2Vccs_10) +
             4 * sizeof(AroundCamObjList);
  TCP::MessageHead head{1, size};
  char buf[30000]{0};

  pack(buf, frntRdrObjList_4D, frntCamObjList, egoMotion, fusedTargets_1_11,
       fusedTargets_12_22, fusedTargets_23_32, aroundCamObjListFL,
       aroundCamObjListFR, aroundCamObjListRL, aroundCamObjListRR);

  sendHead(head);

  sendn(buf, head.size);
}
