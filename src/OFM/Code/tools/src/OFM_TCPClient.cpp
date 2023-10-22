/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-27 15:23:46
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-04-03 18:16:35
 */
#include "OFM_TCPClient.h"
#include "common.h"
#include "dbg.h"
#include <tuple>

uint32_t count = 0;

OFM_TCPClient::OFM_TCPClient() {
  initAddr(&mServerAddr, AF_INET, inet_addr(IP), PORT);
}

OFM_TCPClient::~OFM_TCPClient() {
  if (mServerFd > 0) {
    close(mServerFd);
  }
}

void OFM_TCPClient::init() {
  if ((mServerFd = socket(PF_INET, SOCK_STREAM, 0)) < 0) {
    exit(-1);
  }
}

void OFM_TCPClient::run() {
  if (connect(mServerFd, (struct sockaddr *)&mServerAddr,
              sizeof(struct sockaddr)) < 0) {
    dbg(std::string("connect error ") + strerror(errno));
    dbg(errno);
    exit(-1);
  }

  dbg("connected to server");
  while (true) {
    FrntRdrObjList_4D frntRdrObjList_4D{};
    FrntCamObjList frntCamObjList{};
    JkObjFusn_EgoMotionType egoMotion{};

    ObjGroup2Vccs_11::ObjGroup2Vccs_11 fusedTargets_1_11{};
    ObjGroup2Vccs_11::ObjGroup2Vccs_11 fusedTargets_12_22{};
    ObjGroup2Vccs_10::ObjGroup2Vccs_10 fusedTargets_23_32{};

    if (!recieveTCPMessage(frntRdrObjList_4D, frntCamObjList, egoMotion,
                           fusedTargets_1_11, fusedTargets_12_22,
                           fusedTargets_23_32)) {
      continue;
    }
    // log(frntRdrObjList_4D);
    mCsvLogger.LogFrntRdrObjList4D(frntRdrObjList_4D);
    mCsvLogger.LogFrntCamObjList(frntCamObjList);
    mCsvLogger.LogEgoMotion(egoMotion);
    mCsvLogger.LogFusedTargets_11(fusedTargets_1_11);
    mCsvLogger.LogFusedTargets_22(fusedTargets_12_22);
    mCsvLogger.LogFusedTargets_32(fusedTargets_23_32);
    // dbg(egoMotion.f32Speed);
    // dbg(egoMotion.f32YawRate);
  }
}

bool OFM_TCPClient::recieveTCPMessage(
    FrntRdrObjList_4D &frntRdrObjList_4D, FrntCamObjList &frntCamObjList,
    JkObjFusn_EgoMotionType &egoMotion,
    ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_1_11,
    ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_12_22,
    ObjGroup2Vccs_10::ObjGroup2Vccs_10 &fusedTargets_23_32) {
  dbg("recieveTCPMessage");

  TCP::MessageHead head{};
  recvHead(head);
  count = head.cmd;
  char buf[head.size]{0};
  int res = recvn(buf, head.size);

  unpack(buf, frntRdrObjList_4D, frntCamObjList, egoMotion, fusedTargets_1_11,
         fusedTargets_12_22, fusedTargets_23_32);
  return res == 0 ? true : false;
}

int OFM_TCPClient::recvn(char *data, int size) {
  int cnt = size;
  int rc{};
  dbg(cnt);
  while (cnt > 0) {
    rc = recv(mServerFd, data, cnt, 0);
    dbg(rc);
    if (rc < 0) {
      if (errno == EINTR) {
        continue;
      }
      dbg("recv error");
      exit(-1);
    }
    if (0 == rc) {
      return size - cnt;
    }
    data += rc;
    cnt -= rc;
  }
  dbg(cnt);
  return cnt;
}

void OFM_TCPClient::unpack(
    char *buf, FrntRdrObjList_4D &frntRdrObjList_4D,
    FrntCamObjList &frntCamObjList, JkObjFusn_EgoMotionType &egoMotion,
    ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_1_11,
    ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_12_22,
    ObjGroup2Vccs_10::ObjGroup2Vccs_10 &fusedTargets_23_32) {

  memcpy(&frntRdrObjList_4D, buf, sizeof(FrntRdrObjList_4D));

  memcpy(&frntCamObjList, buf + sizeof(FrntRdrObjList_4D),
         sizeof(FrntCamObjList));

  memcpy(&egoMotion, buf + sizeof(FrntRdrObjList_4D) + sizeof(FrntCamObjList),
         sizeof(JkObjFusn_EgoMotionType));

  memcpy(&fusedTargets_1_11,
         buf + sizeof(FrntRdrObjList_4D) + sizeof(FrntCamObjList) +
             sizeof(JkObjFusn_EgoMotionType),
         sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11));

  memcpy(&fusedTargets_12_22,
         buf + sizeof(FrntRdrObjList_4D) + sizeof(FrntCamObjList) +
             sizeof(JkObjFusn_EgoMotionType) +
             sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11),
         sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11));

  memcpy(&fusedTargets_23_32,
         buf + sizeof(FrntRdrObjList_4D) + sizeof(FrntCamObjList) +
             sizeof(JkObjFusn_EgoMotionType) +
             sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11) +
             sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11),
         sizeof(ObjGroup2Vccs_10::ObjGroup2Vccs_10));
}

void OFM_TCPClient::recvHead(TCP::MessageHead &head) {
  int c = recvn(reinterpret_cast<char *>(&head), sizeof(TCP::MessageHead));
  if (c != 0) {
    throw std::runtime_error("read error");
  }
}

void OFM_TCPClient::log(FrntRdrObjList_4D &frntRdrObjList_4D) {
  dbg(frntRdrObjList_4D.Status.HostSpeed);
  dbg(frntRdrObjList_4D.Status.HostYawRate);
  dbg(frntRdrObjList_4D.Status.StsBlkd0bin);
  dbg(frntRdrObjList_4D.Status.StsBlkdConf);
  dbg(frntRdrObjList_4D.Status.StsChks);
  dbg(frntRdrObjList_4D.Status.StsCntr);
  dbg(frntRdrObjList_4D.Status.StsDstbc);
  dbg(frntRdrObjList_4D.Status.StsEna);
  dbg(frntRdrObjList_4D.Status.StsFaulty);
  dbg(frntRdrObjList_4D.Status.StsIfVersMajor);
  dbg(frntRdrObjList_4D.Status.StsIfVersMinor);
  dbg(frntRdrObjList_4D.Status.StsLatency);
  dbg(frntRdrObjList_4D.Status.StsMisAlign);
  dbg(frntRdrObjList_4D.Status.StsMissCom);
  dbg(frntRdrObjList_4D.Status.StsRdrNrDetn);
  dbg(frntRdrObjList_4D.Status.StsRdrNrObj);
  dbg(frntRdrObjList_4D.Status.StsSftyFlt);
  dbg(frntRdrObjList_4D.Status.StsTiStamp);
  dbg(frntRdrObjList_4D.Status.StsWhlSpdCmpFac);
  dbg(frntRdrObjList_4D.Status.TiStampStsGlbTiBas);
  dbg(frntRdrObjList_4D.Status.TiStampStsSyncToGatewy);
  dbg(frntRdrObjList_4D.Status.TiStampStsTiLeap);
  dbg(frntRdrObjList_4D.Status.TiStampStsTiOut);

  for (int i = 0; i < 3; ++i) {
    dbg(i);
    dbg(frntRdrObjList_4D.Objects[i].Chks);
    dbg(frntRdrObjList_4D.Objects[i].Classification);
    dbg(frntRdrObjList_4D.Objects[i].Cntr);
    dbg(frntRdrObjList_4D.Objects[i].DistX);
    dbg(frntRdrObjList_4D.Objects[i].DistXStd);
    dbg(frntRdrObjList_4D.Objects[i].DistY);
    dbg(frntRdrObjList_4D.Objects[i].DistYStd);
    dbg(frntRdrObjList_4D.Objects[i].DistZ);
    dbg(frntRdrObjList_4D.Objects[i].DistZStd);
    dbg(frntRdrObjList_4D.Objects[i].DynamicProperty);
    dbg(frntRdrObjList_4D.Objects[i].HeadingAngle);
    dbg(frntRdrObjList_4D.Objects[i].ID);
    dbg(frntRdrObjList_4D.Objects[i].LifeCycles);
    dbg(frntRdrObjList_4D.Objects[i].ObjBoundingBoxHeight);
    dbg(frntRdrObjList_4D.Objects[i].ObjBoundingBoxLength);
    dbg(frntRdrObjList_4D.Objects[i].ObjBoundingBoxWidth);
    dbg(frntRdrObjList_4D.Objects[i].ObjNearestPtX);
    dbg(frntRdrObjList_4D.Objects[i].ObjNearestPtY);
    dbg(frntRdrObjList_4D.Objects[i].ObjNearestPtZ);
    dbg(frntRdrObjList_4D.Objects[i].Chks);
    dbg(frntRdrObjList_4D.Objects[i].ObjSNR);
    dbg(frntRdrObjList_4D.Objects[i].ObjXAccRel);
    dbg(frntRdrObjList_4D.Objects[i].ObstacleProbability);
    dbg(frntRdrObjList_4D.Objects[i].ProbabilityOfExistence);
    dbg(frntRdrObjList_4D.Objects[i].RCS);
    dbg(frntRdrObjList_4D.Objects[i].TargetClassificationConfidence);
    dbg(frntRdrObjList_4D.Objects[i].UpdateBit);
    dbg(frntRdrObjList_4D.Objects[i].UpdateFlag);
    dbg(frntRdrObjList_4D.Objects[i].VabsX);
    dbg(frntRdrObjList_4D.Objects[i].VabsXStd);
    dbg(frntRdrObjList_4D.Objects[i].VabsY);
    dbg(frntRdrObjList_4D.Objects[i].VabsYStd);
    dbg(frntRdrObjList_4D.Objects[i].ValidFlag);
  }
}
