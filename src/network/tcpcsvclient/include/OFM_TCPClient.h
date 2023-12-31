/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-27 22:15:29
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-05-15 13:05:03
 */
#ifndef _OFM_TCPClient_H_
#define _OFM_TCPClient_H_

#include "OFM_CsvLog.h"
#include "common.h"
#include "message_Type.h"
#include <ObjGroup2Vccs_10/impl_type_objgroup2vccs_10.h>
#include <ObjGroup2Vccs_11/impl_type_objgroup2vccs_11.h>
#include <iostream>

class OFM_TCPClient {
public:
    OFM_TCPClient();
    ~OFM_TCPClient();

    void init();

    void run();

    bool recieveTCPMessage(FrntRdrObjList_4D &frntRdrObjList_4D, FrntCamObjList &frntCamObjList,
                      JkObjFusn_EgoMotionType &egoMotion,
                      ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_1_11,
                      ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_12_22,
                      ObjGroup2Vccs_10::ObjGroup2Vccs_10 &fusedTargets_23_32,
                      AroundCamObjList &aroundCamObjListFL, AroundCamObjList &aroundCamObjListFR,
                      AroundCamObjList &aroundCamObjListRL, AroundCamObjList &aroundCamObjListRR);

private:
    int mServerFd{-1};
    struct sockaddr_in mServerAddr {};

    OFM_CsvLog_Internal mCsvLogger{};
    int recvn(char *data, int size);
    void unpack(char *buf, FrntRdrObjList_4D &frntRdrObjList_4D, FrntCamObjList &frntCamObjList,
                JkObjFusn_EgoMotionType &egoMotion,
                ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_1_11,
                ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_12_22,
                ObjGroup2Vccs_10::ObjGroup2Vccs_10 &fusedTargets_23_32,
                AroundCamObjList &aroundCamObjListFL, AroundCamObjList &aroundCamObjListFR,
                AroundCamObjList &aroundCamObjListRL, AroundCamObjList &aroundCamObjListRR);
    void recvHead(TCP::MessageHead &head);
};

#endif // _OFM_TCPClient_H_
