/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-28 14:01:17
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-05-12 13:18:12
 */
#ifndef _OFM_CSVLOG_H_
#define _OFM_CSVLOG_H_

#include "message_Type.h"
#include "timer.h"
#include <fstream>
#include <string>
#include <ObjGroup2Vccs_10/impl_type_objgroup2vccs_10.h>
#include <ObjGroup2Vccs_11/impl_type_objgroup2vccs_11.h>

class OFM_CsvLog_Internal {
public:
    OFM_CsvLog_Internal();

    void GetLogSts(const bool logSts);

    void LogFrntRdrObjList4D(const FrntRdrObjList_4D &frntRdrObjList_4D);

    void LogFrntRdrObjList4DSts(const FrntRdrObjList_4D &frntRdrObjList_4D);

    void LogEgoMotion(const JkObjFusn_EgoMotionType &egoMotion);

    void LogFrntCamObjList(const FrntCamObjList &frntCamObjList);

    void LogFLCamObjList(const AroundCamObjList &flCamObjList);

    void LogFRCamObjList(const AroundCamObjList &frCamObjList);

    void LogRLCamObjList(const AroundCamObjList &rlCamObjList);

    void LogRRCamObjList(const AroundCamObjList &rrCamObjList);

    void LogFusedTargets_11(ObjGroup2Vccs_11::ObjGroup2Vccs_11 &mFusedTargets_1_11);

    void LogFusedTargets_22(ObjGroup2Vccs_11::ObjGroup2Vccs_11 &mFusedTargets_12_22);

    void LogFusedTargets_32(ObjGroup2Vccs_10::ObjGroup2Vccs_10 &mFusedTargets_23_32);

    template <class T>
    void LogData(T mFusedTargets, std::ofstream &ss, const size_t obj_start, const size_t obj_end);

private:
    bool logSts_;                            // True: log ; Flase: not log
    std::string LogPathFrntRdrObjList4D_;    // Storage Path
    std::string LogPathFrntRdrObjList4DSts_; // Storage Path
    std::string LogPathEgoMotion_;           // Storage Path
    std::string LogPathFrntCamObjList_;      // Storage Path
    std::string LogPathFLCamObjList_;        // Storage Path
    std::string LogPathFRCamObjList_;        // Storage Path
    std::string LogPathRLCamObjList_;        // Storage Path
    std::string LogPathRRCamObjList_;        // Storage Path
    std::string LogPathFusedTargets11_;      // Storage Path
    std::string LogPathFusedTargets22_;      // Storage Path
    std::string LogPathFusedTargets32_;      // Storage Path
    std::string mTime;

    std::string getTime();
};

#endif
