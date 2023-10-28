/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-27 15:17:23
 * @LastEditors: yao.xie
 * install git && error: git config user.email & please set dead value or
 * install git & please set dead value or install git
 * @LastEditTime: 2023-05-19 12:55:45
 */

#ifndef _OFM_TCPSERVER_H_
#define _OFM_TCPSERVER_H_

#include "common.h"
#include "message_Type.h"
#include <ObjGroup2Vccs_10/impl_type_objgroup2vccs_10.h>
#include <ObjGroup2Vccs_11/impl_type_objgroup2vccs_11.h>
#include <functional>
#include <iostream>
#include <memory>
#include <thread>
#include <unordered_map>

// 定义OFM_TCPServer类
class OFM_TCPServer {
public:
  OFM_TCPServer();
  ~OFM_TCPServer();

  // 发送TCP消息
  void
  SendTCPMessage(const FrntRdrObjList_4D &frntRdrObjList_4D,
                 const FrntCamObjList &frntCamObjList,
                 const JkObjFusn_EgoMotionType &egoMotion,
                 const ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_1_11,
                 const ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_12_22,
                 const ObjGroup2Vccs_10::ObjGroup2Vccs_10 &fusedTargets_23_32,
                 const AroundCamObjList &aroundCamObjListFL,
                 const AroundCamObjList &aroundCamObjListFR,
                 const AroundCamObjList &aroundCamObjListRL,
                 const AroundCamObjList &aroundCamObjListRR);

  // 初始化
  void init();

  // 启动
  void run();

private:
  // 服务器套接字
  int mServerSockfd{-1};
  // 客户端套接字
  int mClientSockfd{-1};

  // 设置环境
  void setEnv();
  // 获取套接字
  void getSocket();
  // 绑定
  void bind();
  // 监听
  void listen();
  // 发送数据
  void sendn(char *data, int size);
  // 发送头部
  void sendHead(TCP::MessageHead &head);
  // 包
  void pack(char *buf, const FrntRdrObjList_4D &frntRdrObjList_4D,
            const FrntCamObjList &frntCamObjList,
            const JkObjFusn_EgoMotionType &egoMotion,
            const ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_1_11,
            const ObjGroup2Vccs_11::ObjGroup2Vccs_11 &fusedTargets_12_22,
            const ObjGroup2Vccs_10::ObjGroup2Vccs_10 &fusedTargets_23_32,
            const AroundCamObjList &aroundCamObjListFL,
            const AroundCamObjList &aroundCamObjListFR,
            const AroundCamObjList &aroundCamObjListRL,
            const AroundCamObjList &aroundCamObjListRR);
  // 线程
  std::unique_ptr<std::thread> mThread;
};

#endif // _OFM_TCPSERVER_H_
