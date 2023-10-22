/*
 * @Description:
 * @Author: yao.xie
 * @Date: 2023-03-28 14:01:17
 * @LastEditors: yao.xie
 * @LastEditTime: 2023-04-03 16:07:58
 */
#ifndef _OFM_CSVLOG_H_
#define _OFM_CSVLOG_H_

#include "message_Type.h"
#include "timer.h"
#include <ObjGroup2Vccs_10/impl_type_objgroup2vccs_10.h>
#include <ObjGroup2Vccs_11/impl_type_objgroup2vccs_11.h>
#include <fstream>
#include <string>

class OFM_CsvLog_Internal {
public:
  /// @brief Constructor
  OFM_CsvLog_Internal(/* args */);

  /// @brief Destructor
  ~OFM_CsvLog_Internal();

  /// @brief Get Log status from Json value
  /// @param logSts True: log ; Flase: not log
  void GetLogSts(const bool logSts);

  /// @brief Log FrntRdrObjList_4D Object data
  /// @param frntRdrObjList_4D corresponding private data in SomeipCLient.h
  void LogFrntRdrObjList4D(const FrntRdrObjList_4D frntRdrObjList_4D);

  /// @brief Log LogFrntRdrObjList4DSts Object data
  /// @param frntRdrObjList_4D corresponding private data in SomeipCLient.h
  void LogFrntRdrObjList4DSts(const FrntRdrObjList_4D frntRdrObjList_4D);

  /// @brief Log EgoMotion data
  /// @param egoMotion corresponding private data in SomeipCLient.h
  void LogEgoMotion(const JkObjFusn_EgoMotionType egoMotion);

  /// @brief Log FrntCamObjList Object data
  /// @param frntCamObjList corresponding private data in SomeipCLient.h
  void LogFrntCamObjList(const FrntCamObjList frntCamObjList);

  /// @brief Log Front Left CamObjList Object data
  /// @param flCamObjList corresponding private data in SomeipCLient.h
  void LogFLCamObjList(const AroundCamObjList flCamObjList);

  /// @brief Log Front Right CamObjList Object data
  /// @param frCamObjList corresponding private data in SomeipCLient.h
  void LogFRCamObjList(const AroundCamObjList frCamObjList);

  /// @brief Log Rear Left CamObjList Object data
  /// @param rlCamObjList corresponding private data in SomeipCLient.h
  void LogRLCamObjList(const AroundCamObjList rlCamObjList);

  /// @brief Log Rear Right CamObjList Object data
  /// @param rrCamObjList corresponding private data in SomeipCLient.h
  void LogRRCamObjList(const AroundCamObjList rrCamObjList);

  /// @brief Log FusedTargets_11  data
  /// @param mFusedTargets_1_11 corresponding private data in SomeipService.h
  void
  LogFusedTargets_11(ObjGroup2Vccs_11::ObjGroup2Vccs_11 mFusedTargets_1_11);

  /// @brief Log FusedTargets_22  data
  /// @param mFusedTargets_12_22 corresponding private data in SomeipService.h
  void
  LogFusedTargets_22(ObjGroup2Vccs_11::ObjGroup2Vccs_11 mFusedTargets_12_22);

  /// @brief Log FusedTargets_32  data
  /// @param mFusedTargets_23_32 corresponding private data in SomeipService.h
  void
  LogFusedTargets_32(ObjGroup2Vccs_10::ObjGroup2Vccs_10 mFusedTargets_23_32);

  /// @brief Log function
  /// @param mFusedTargets data to log
  /// @param ss ofstream to write data
  /// @param obj_start start object to log
  /// @param obj_end end object to log
  template <class T>
  void LogData(T mFusedTargets, std::ofstream &ss, const size_t obj_start,
               const size_t obj_end);

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
};

#endif
