/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-27 15:23:46
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-05-15 13:05:39
 */
#include "OFM_TCPClient.h"
#include "common.h"
#include "dbg.h"
#include <tuple>
uint32_t count = 0;

#ifdef _WIN32
OFM_TCPClient::OFM_TCPClient() {
    initAddr(&mServerAddr, AF_INET, inet_addr(IP), PORT);
}
#else
#include <arpa/inet.h>
OFM_TCPClient::OFM_TCPClient() {
    initAddr(&mServerAddr, AF_INET, inet_addr(IP), PORT);
}
#endif

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
    if (connect(mServerFd, (struct sockaddr *)&mServerAddr, sizeof(struct sockaddr)) < 0) {
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
        AroundCamObjList aroundCamObjListFL{};
        AroundCamObjList aroundCamObjListFR{};
        AroundCamObjList aroundCamObjListRL{};
        AroundCamObjList aroundCamObjListRR{};

        if (!recieveTCPMessage(frntRdrObjList_4D, frntCamObjList, egoMotion, fusedTargets_1_11,
                               fusedTargets_12_22, fusedTargets_23_32, aroundCamObjListFL,
                               aroundCamObjListFR, aroundCamObjListRL, aroundCamObjListRR)) {
            continue;
        }

        mCsvLogger.LogFrntRdrObjList4D(frntRdrObjList_4D);
        mCsvLogger.LogFrntCamObjList(frntCamObjList);
        mCsvLogger.LogEgoMotion(egoMotion);
        mCsvLogger.LogFusedTargets_11(fusedTargets_1_11);
        mCsvLogger.LogFusedTargets_22(fusedTargets_12_22);
        mCsvLogger.LogFusedTargets_32(fusedTargets_23_32);
        mCsvLogger.LogFLCamObjList(aroundCamObjListFL);
        mCsvLogger.LogFRCamObjList(aroundCamObjListFR);
        mCsvLogger.LogRLCamObjList(aroundCamObjListRL);
        mCsvLogger.LogRRCamObjList(aroundCamObjListRR);
    }
}

bool OFM_TCPClient::recieveTCPMessage(
    FrntRdrObjList_4D &frntRdrObjList_4D, FrntCamObjList &frntCamObjList,
    JkObjFusn_EgoMotionType &egoMotion, ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_1_11,
    ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_12_22,
    ObjGroup2Vccs_10::ObjGroup2Vccs_10 &fusedTargets_23_32, AroundCamObjList &aroundCamObjListFL,
    AroundCamObjList &aroundCamObjListFR, AroundCamObjList &aroundCamObjListRL,
    AroundCamObjList &aroundCamObjListRR) {
    dbg("recieveTCPMessage");

    TCP::MessageHead head{};
    recvHead(head);
    count = head.cmd;
    char buf[head.size]{0};
    int res = recvn(buf, head.size);

    unpack(buf, frntRdrObjList_4D, frntCamObjList, egoMotion, fusedTargets_1_11, fusedTargets_12_22,
           fusedTargets_23_32, aroundCamObjListFL, aroundCamObjListFR, aroundCamObjListRL,
           aroundCamObjListRR);
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

void OFM_TCPClient::unpack(char *buf, FrntRdrObjList_4D &frntRdrObjList_4D,
                           FrntCamObjList &frntCamObjList, JkObjFusn_EgoMotionType &egoMotion,
                           ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_1_11,
                           ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_12_22,
                           ObjGroup2Vccs_10::ObjGroup2Vccs_10 &fusedTargets_23_32,
                           AroundCamObjList &aroundCamObjListFL,
                           AroundCamObjList &aroundCamObjListFR,
                           AroundCamObjList &aroundCamObjListRL,
                           AroundCamObjList &aroundCamObjListRR) {
    memcpy(&frntRdrObjList_4D, buf, sizeof(FrntRdrObjList_4D));
    buf += sizeof(FrntRdrObjList_4D);
    memcpy(&frntCamObjList, buf, sizeof(FrntCamObjList));
    buf += sizeof(FrntCamObjList);
    memcpy(&egoMotion, buf, sizeof(JkObjFusn_EgoMotionType));
    buf += sizeof(JkObjFusn_EgoMotionType);
    memcpy(&fusedTargets_1_11, buf, sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11));
    buf += sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11);
    memcpy(&fusedTargets_12_22, buf, sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11));
    buf += sizeof(ObjGroup2Vccs_11::ObjGroup2Vccs_11);
    memcpy(&fusedTargets_23_32, buf, sizeof(ObjGroup2Vccs_10::ObjGroup2Vccs_10));

    buf += sizeof(ObjGroup2Vccs_10::ObjGroup2Vccs_10);
    memcpy(&aroundCamObjListFL, buf, sizeof(AroundCamObjList));
    buf += sizeof(AroundCamObjList);
    memcpy(&aroundCamObjListFR, buf, sizeof(AroundCamObjList));
    buf += sizeof(AroundCamObjList);
    memcpy(&aroundCamObjListRL, buf, sizeof(AroundCamObjList));
    buf += sizeof(AroundCamObjList);
    memcpy(&aroundCamObjListRR, buf, sizeof(AroundCamObjList));
}

void OFM_TCPClient::recvHead(TCP::MessageHead &head) {
    int c = recvn(reinterpret_cast<char *>(&head), sizeof(TCP::MessageHead));
    if (c != 0) {
        throw std::runtime_error("read error");
    }
}
