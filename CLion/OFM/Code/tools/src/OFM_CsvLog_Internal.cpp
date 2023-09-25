#include "OFM_CsvLog_Internal.h"
#include <iostream>

extern uint32 count;
OFM_CsvLog_Internal::OFM_CsvLog_Internal() {
  logSts_ = true; //  no csv log as normal
  // TODO(chenxu): better read from json file
  LogPathFrntRdrObjList4D_ = "./OFM_FrntRdrObjList4D.csv";
  LogPathFrntRdrObjList4DSts_ = "./OFM_FrntRdrObjList4DSts.csv";
  LogPathEgoMotion_ = "./OFM_EgoMotion.csv";
  LogPathFrntCamObjList_ = "./OFM_FrntCamObjList.csv";
  LogPathFLCamObjList_ = "./OFM_FLCamObjList.csv";
  LogPathFRCamObjList_ = "./OFM_FRCamObjList.csv";
  LogPathRLCamObjList_ = "./OFM_RLCamObjList.csv";
  LogPathRRCamObjList_ = "./OFM_RRCamObjList.csv";
  LogPathFusedTargets11_ = "./OFM_FusedTargets11.csv";
  LogPathFusedTargets22_ = "./OFM_FusedTargets22.csv";
  LogPathFusedTargets32_ = "./OFM_FusedTargets32.csv";
}

OFM_CsvLog_Internal::~OFM_CsvLog_Internal() {}

void OFM_CsvLog_Internal::GetLogSts(const bool logSts) { logSts_ = logSts; }

void OFM_CsvLog_Internal::LogFrntRdrObjList4DSts(
    const FrntRdrObjList_4D frntRdrObjList_4D) {
  std::ofstream ss(LogPathFrntRdrObjList4DSts_, std::ios::app);
  char ssHead[] =
      "TimeStamp,FrntRdrObjSts_HostSpeed,FrntRdrObjSts_HostYawRate,FrntRdrObjSts_StsRdrNrDetn,FrntRdrObjSts_StsRdrNrObj,\
FrntRdrObjSts_StsBlkd0bin,FrntRdrObjSts_StsBlkdConf,FrntRdrObjSts_StsChks,FrntRdrObjSts_StsCntr,\
FrntRdrObjSts_StsDstbc,FrntRdrObjSts_StsEna,FrntRdrObjSts_StsFaulty,FrntRdrObjSts_StsIfVersMajor,\
FrntRdrObjSts_StsIfVersMinor,FrntRdrObjSts_StsLatency,FrntRdrObjSts_StsMisAlign,FrntRdrObjSts_StsMissCom,\
FrntRdrObjSts_StsSftyFlt,FrntRdrObjSts_StsTiStamp,FrntRdrObjSts_TiStampStsGlbTiBas,FrntRdrObjSts_TiStampStsSyncToGatewy,\
FrntRdrObjSts_TiStampStsTiLeap,FrntRdrObjSts_TiStampStsTiOut,FrntRdrObjSts_StsWhlSpdCmpFac,\n";
  if (ss.good()) {
    std::cout << "start logging front radar" << std::endl;
    long long beg = 0, end = 0;
    ss.seekp(0, std::ios::beg);
    beg = ss.tellp();
    ss.seekp(0, std::ios::end);
    end = ss.tellp();
    if ((end - beg) < 5) {
      ss << ssHead;
    }

    ss << getCurrentSysTime() << ","
       << std::to_string(frntRdrObjList_4D.Status.HostSpeed) << ","
       << std::to_string(frntRdrObjList_4D.Status.HostYawRate) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsRdrNrDetn) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsRdrNrObj) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsBlkd0bin) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsBlkdConf) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsChks) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsCntr) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsDstbc) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsEna) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsFaulty) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsIfVersMajor) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsIfVersMinor) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsLatency) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsMisAlign) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsMissCom) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsSftyFlt) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsTiStamp) << ","
       << std::to_string(frntRdrObjList_4D.Status.TiStampStsGlbTiBas) << ","
       << std::to_string(frntRdrObjList_4D.Status.TiStampStsSyncToGatewy) << ","
       << std::to_string(frntRdrObjList_4D.Status.TiStampStsTiLeap) << ","
       << std::to_string(frntRdrObjList_4D.Status.TiStampStsTiOut) << ","
       << std::to_string(frntRdrObjList_4D.Status.StsWhlSpdCmpFac) << std::endl;
  } else {
    std::cout << "ss is not good logging front radar" << std::endl;
  }
  ss.close();
}

// TODO(Changyu):
void OFM_CsvLog_Internal::LogFrntRdrObjList4D(
    const FrntRdrObjList_4D frntRdrObjList_4D) {
  std::ofstream ss("./OFM_FrntRdrObjList4D.csv", std::ios::app);
  char ssHead[] =
      "TimeStamp,FourDRadarObj_00_ID,FourDRadarObj_00_ObstacleProbability,FourDRadarObj_00_VabsX,FourDRadarObj_00_VabsXStd,\
FourDRadarObj_00_VabsY,FourDRadarObj_00_VabsYStd,FourDRadarObj_00_ValidFlag,FourDRadarObj_00_Classification,\
FourDRadarObj_00_DynamicProperty,FourDRadarObj_00_DistXStd,FourDRadarObj_00_DistY,FourDRadarObj_00_DistYStd,\
FourDRadarObj_00_DistZ,FourDRadarObj_00_RCS,FourDRadarObj_00_LifeCycles,FourDRadarObj_00_ProbabilityOfExistence,\
FourDRadarObj_00_ObjSNR,FourDRadarObj_00_ObjXAccRel,FourDRadarObj_00_ObjYAccRel,FourDRadarObj_00_HeadingAngle,\
FourDRadarObj_00_TargetClassificationConfidence,FourDRadarObj_00_ObjBoundingBoxHeight,FourDRadarObj_00_ObjBoundingBoxLength,FourDRadarObj_00_ObjBoundingBoxWidth,\
FourDRadarObj_00_DistZStd,FourDRadarObj_00_ObjNearestPtX,FourDRadarObj_00_ObjNearestPtY,FourDRadarObj_00_ObjNearestPtZ,\
FourDRadarObj_00_UpdateFlag,FourDRadarObj_00_Chks,FourDRadarObj_00_DistX,FourDRadarObj_00_Cntr,\
FourDRadarObj_01_ID,FourDRadarObj_01_ObstacleProbability,FourDRadarObj_01_VabsX,FourDRadarObj_01_VabsXStd,\
FourDRadarObj_01_VabsY,FourDRadarObj_01_VabsYStd,FourDRadarObj_01_ValidFlag,FourDRadarObj_01_Classification,\
FourDRadarObj_01_DynamicProperty,FourDRadarObj_01_DistXStd,FourDRadarObj_01_DistY,FourDRadarObj_01_DistYStd,\
FourDRadarObj_01_DistZ,FourDRadarObj_01_RCS,FourDRadarObj_01_LifeCycles,FourDRadarObj_01_ProbabilityOfExistence,\
FourDRadarObj_01_ObjSNR,FourDRadarObj_01_ObjXAccRel,FourDRadarObj_01_ObjYAccRel,FourDRadarObj_01_HeadingAngle,\
FourDRadarObj_01_TargetClassificationConfidence,FourDRadarObj_01_ObjBoundingBoxHeight,FourDRadarObj_01_ObjBoundingBoxLength,FourDRadarObj_01_ObjBoundingBoxWidth,\
FourDRadarObj_01_DistZStd,FourDRadarObj_01_ObjNearestPtX,FourDRadarObj_01_ObjNearestPtY,FourDRadarObj_01_ObjNearestPtZ,\
FourDRadarObj_01_UpdateFlag,FourDRadarObj_01_Chks,FourDRadarObj_01_DistX,FourDRadarObj_01_Cntr,\
FourDRadarObj_02_ID,FourDRadarObj_02_ObstacleProbability,FourDRadarObj_02_VabsX,FourDRadarObj_02_VabsXStd,\
FourDRadarObj_02_VabsY,FourDRadarObj_02_VabsYStd,FourDRadarObj_02_ValidFlag,FourDRadarObj_02_Classification,\
FourDRadarObj_02_DynamicProperty,FourDRadarObj_02_DistXStd,FourDRadarObj_02_DistY,FourDRadarObj_02_DistYStd,\
FourDRadarObj_02_DistZ,FourDRadarObj_02_RCS,FourDRadarObj_02_LifeCycles,FourDRadarObj_02_ProbabilityOfExistence,\
FourDRadarObj_02_ObjSNR,FourDRadarObj_02_ObjXAccRel,FourDRadarObj_02_ObjYAccRel,FourDRadarObj_02_HeadingAngle,\
FourDRadarObj_02_TargetClassificationConfidence,FourDRadarObj_02_ObjBoundingBoxHeight,FourDRadarObj_02_ObjBoundingBoxLength,FourDRadarObj_02_ObjBoundingBoxWidth,\
FourDRadarObj_02_DistZStd,FourDRadarObj_02_ObjNearestPtX,FourDRadarObj_02_ObjNearestPtY,FourDRadarObj_02_ObjNearestPtZ,\
FourDRadarObj_02_UpdateFlag,FourDRadarObj_02_Chks,FourDRadarObj_02_DistX,FourDRadarObj_02_Cntr,\
FourDRadarObj_03_ID,FourDRadarObj_03_ObstacleProbability,FourDRadarObj_03_VabsX,FourDRadarObj_03_VabsXStd,\
FourDRadarObj_03_VabsY,FourDRadarObj_03_VabsYStd,FourDRadarObj_03_ValidFlag,FourDRadarObj_03_Classification,\
FourDRadarObj_03_DynamicProperty,FourDRadarObj_03_DistXStd,FourDRadarObj_03_DistY,FourDRadarObj_03_DistYStd,\
FourDRadarObj_03_DistZ,FourDRadarObj_03_RCS,FourDRadarObj_03_LifeCycles,FourDRadarObj_03_ProbabilityOfExistence,\
FourDRadarObj_03_ObjSNR,FourDRadarObj_03_ObjXAccRel,FourDRadarObj_03_ObjYAccRel,FourDRadarObj_03_HeadingAngle,\
FourDRadarObj_03_TargetClassificationConfidence,FourDRadarObj_03_ObjBoundingBoxHeight,FourDRadarObj_03_ObjBoundingBoxLength,FourDRadarObj_03_ObjBoundingBoxWidth,\
FourDRadarObj_03_DistZStd,FourDRadarObj_03_ObjNearestPtX,FourDRadarObj_03_ObjNearestPtY,FourDRadarObj_03_ObjNearestPtZ,\
FourDRadarObj_03_UpdateFlag,FourDRadarObj_03_Chks,FourDRadarObj_03_DistX,FourDRadarObj_03_Cntr,\
FourDRadarObj_04_ID,FourDRadarObj_04_ObstacleProbability,FourDRadarObj_04_VabsX,FourDRadarObj_04_VabsXStd,\
FourDRadarObj_04_VabsY,FourDRadarObj_04_VabsYStd,FourDRadarObj_04_ValidFlag,FourDRadarObj_04_Classification,\
FourDRadarObj_04_DynamicProperty,FourDRadarObj_04_DistXStd,FourDRadarObj_04_DistY,FourDRadarObj_04_DistYStd,\
FourDRadarObj_04_DistZ,FourDRadarObj_04_RCS,FourDRadarObj_04_LifeCycles,FourDRadarObj_04_ProbabilityOfExistence,\
FourDRadarObj_04_ObjSNR,FourDRadarObj_04_ObjXAccRel,FourDRadarObj_04_ObjYAccRel,FourDRadarObj_04_HeadingAngle,\
FourDRadarObj_04_TargetClassificationConfidence,FourDRadarObj_04_ObjBoundingBoxHeight,FourDRadarObj_04_ObjBoundingBoxLength,FourDRadarObj_04_ObjBoundingBoxWidth,\
FourDRadarObj_04_DistZStd,FourDRadarObj_04_ObjNearestPtX,FourDRadarObj_04_ObjNearestPtY,FourDRadarObj_04_ObjNearestPtZ,\
FourDRadarObj_04_UpdateFlag,FourDRadarObj_04_Chks,FourDRadarObj_04_DistX,FourDRadarObj_04_Cntr,\
FourDRadarObj_05_ID,FourDRadarObj_05_ObstacleProbability,FourDRadarObj_05_VabsX,FourDRadarObj_05_VabsXStd,\
FourDRadarObj_05_VabsY,FourDRadarObj_05_VabsYStd,FourDRadarObj_05_ValidFlag,FourDRadarObj_05_Classification,\
FourDRadarObj_05_DynamicProperty,FourDRadarObj_05_DistXStd,FourDRadarObj_05_DistY,FourDRadarObj_05_DistYStd,\
FourDRadarObj_05_DistZ,FourDRadarObj_05_RCS,FourDRadarObj_05_LifeCycles,FourDRadarObj_05_ProbabilityOfExistence,\
FourDRadarObj_05_ObjSNR,FourDRadarObj_05_ObjXAccRel,FourDRadarObj_05_ObjYAccRel,FourDRadarObj_05_HeadingAngle,\
FourDRadarObj_05_TargetClassificationConfidence,FourDRadarObj_05_ObjBoundingBoxHeight,FourDRadarObj_05_ObjBoundingBoxLength,FourDRadarObj_05_ObjBoundingBoxWidth,\
FourDRadarObj_05_DistZStd,FourDRadarObj_05_ObjNearestPtX,FourDRadarObj_05_ObjNearestPtY,FourDRadarObj_05_ObjNearestPtZ,\
FourDRadarObj_05_UpdateFlag,FourDRadarObj_05_Chks,FourDRadarObj_05_DistX,FourDRadarObj_05_Cntr,\
FourDRadarObj_06_ID,FourDRadarObj_06_ObstacleProbability,FourDRadarObj_06_VabsX,FourDRadarObj_06_VabsXStd,\
FourDRadarObj_06_VabsY,FourDRadarObj_06_VabsYStd,FourDRadarObj_06_ValidFlag,FourDRadarObj_06_Classification,\
FourDRadarObj_06_DynamicProperty,FourDRadarObj_06_DistXStd,FourDRadarObj_06_DistY,FourDRadarObj_06_DistYStd,\
FourDRadarObj_06_DistZ,FourDRadarObj_06_RCS,FourDRadarObj_06_LifeCycles,FourDRadarObj_06_ProbabilityOfExistence,\
FourDRadarObj_06_ObjSNR,FourDRadarObj_06_ObjXAccRel,FourDRadarObj_06_ObjYAccRel,FourDRadarObj_06_HeadingAngle,\
FourDRadarObj_06_TargetClassificationConfidence,FourDRadarObj_06_ObjBoundingBoxHeight,FourDRadarObj_06_ObjBoundingBoxLength,FourDRadarObj_06_ObjBoundingBoxWidth,\
FourDRadarObj_06_DistZStd,FourDRadarObj_06_ObjNearestPtX,FourDRadarObj_06_ObjNearestPtY,FourDRadarObj_06_ObjNearestPtZ,\
FourDRadarObj_06_UpdateFlag,FourDRadarObj_06_Chks,FourDRadarObj_06_DistX,FourDRadarObj_06_Cntr,\
FourDRadarObj_07_ID,FourDRadarObj_07_ObstacleProbability,FourDRadarObj_07_VabsX,FourDRadarObj_07_VabsXStd,\
FourDRadarObj_07_VabsY,FourDRadarObj_07_VabsYStd,FourDRadarObj_07_ValidFlag,FourDRadarObj_07_Classification,\
FourDRadarObj_07_DynamicProperty,FourDRadarObj_07_DistXStd,FourDRadarObj_07_DistY,FourDRadarObj_07_DistYStd,\
FourDRadarObj_07_DistZ,FourDRadarObj_07_RCS,FourDRadarObj_07_LifeCycles,FourDRadarObj_07_ProbabilityOfExistence,\
FourDRadarObj_07_ObjSNR,FourDRadarObj_07_ObjXAccRel,FourDRadarObj_07_ObjYAccRel,FourDRadarObj_07_HeadingAngle,\
FourDRadarObj_07_TargetClassificationConfidence,FourDRadarObj_07_ObjBoundingBoxHeight,FourDRadarObj_07_ObjBoundingBoxLength,FourDRadarObj_07_ObjBoundingBoxWidth,\
FourDRadarObj_07_DistZStd,FourDRadarObj_07_ObjNearestPtX,FourDRadarObj_07_ObjNearestPtY,FourDRadarObj_07_ObjNearestPtZ,\
FourDRadarObj_07_UpdateFlag,FourDRadarObj_07_Chks,FourDRadarObj_07_DistX,FourDRadarObj_07_Cntr,\
FourDRadarObj_08_ID,FourDRadarObj_08_ObstacleProbability,FourDRadarObj_08_VabsX,FourDRadarObj_08_VabsXStd,\
FourDRadarObj_08_VabsY,FourDRadarObj_08_VabsYStd,FourDRadarObj_08_ValidFlag,FourDRadarObj_08_Classification,\
FourDRadarObj_08_DynamicProperty,FourDRadarObj_08_DistXStd,FourDRadarObj_08_DistY,FourDRadarObj_08_DistYStd,\
FourDRadarObj_08_DistZ,FourDRadarObj_08_RCS,FourDRadarObj_08_LifeCycles,FourDRadarObj_08_ProbabilityOfExistence,\
FourDRadarObj_08_ObjSNR,FourDRadarObj_08_ObjXAccRel,FourDRadarObj_08_ObjYAccRel,FourDRadarObj_08_HeadingAngle,\
FourDRadarObj_08_TargetClassificationConfidence,FourDRadarObj_08_ObjBoundingBoxHeight,FourDRadarObj_08_ObjBoundingBoxLength,FourDRadarObj_08_ObjBoundingBoxWidth,\
FourDRadarObj_08_DistZStd,FourDRadarObj_08_ObjNearestPtX,FourDRadarObj_08_ObjNearestPtY,FourDRadarObj_08_ObjNearestPtZ,\
FourDRadarObj_08_UpdateFlag,FourDRadarObj_08_Chks,FourDRadarObj_08_DistX,FourDRadarObj_08_Cntr,\
FourDRadarObj_09_ID,FourDRadarObj_09_ObstacleProbability,FourDRadarObj_09_VabsX,FourDRadarObj_09_VabsXStd,\
FourDRadarObj_09_VabsY,FourDRadarObj_09_VabsYStd,FourDRadarObj_09_ValidFlag,FourDRadarObj_09_Classification,\
FourDRadarObj_09_DynamicProperty,FourDRadarObj_09_DistXStd,FourDRadarObj_09_DistY,FourDRadarObj_09_DistYStd,\
FourDRadarObj_09_DistZ,FourDRadarObj_09_RCS,FourDRadarObj_09_LifeCycles,FourDRadarObj_09_ProbabilityOfExistence,\
FourDRadarObj_09_ObjSNR,FourDRadarObj_09_ObjXAccRel,FourDRadarObj_09_ObjYAccRel,FourDRadarObj_09_HeadingAngle,\
FourDRadarObj_09_TargetClassificationConfidence,FourDRadarObj_09_ObjBoundingBoxHeight,FourDRadarObj_09_ObjBoundingBoxLength,FourDRadarObj_09_ObjBoundingBoxWidth,\
FourDRadarObj_09_DistZStd,FourDRadarObj_09_ObjNearestPtX,FourDRadarObj_09_ObjNearestPtY,FourDRadarObj_09_ObjNearestPtZ,\
FourDRadarObj_09_UpdateFlag,FourDRadarObj_09_Chks,FourDRadarObj_09_DistX,FourDRadarObj_09_Cntr,\
FourDRadarObj_10_ID,FourDRadarObj_10_ObstacleProbability,FourDRadarObj_10_VabsX,FourDRadarObj_10_VabsXStd,\
FourDRadarObj_10_VabsY,FourDRadarObj_10_VabsYStd,FourDRadarObj_10_ValidFlag,FourDRadarObj_10_Classification,\
FourDRadarObj_10_DynamicProperty,FourDRadarObj_10_DistXStd,FourDRadarObj_10_DistY,FourDRadarObj_10_DistYStd,\
FourDRadarObj_10_DistZ,FourDRadarObj_10_RCS,FourDRadarObj_10_LifeCycles,FourDRadarObj_10_ProbabilityOfExistence,\
FourDRadarObj_10_ObjSNR,FourDRadarObj_10_ObjXAccRel,FourDRadarObj_10_ObjYAccRel,FourDRadarObj_10_HeadingAngle,\
FourDRadarObj_10_TargetClassificationConfidence,FourDRadarObj_10_ObjBoundingBoxHeight,FourDRadarObj_10_ObjBoundingBoxLength,FourDRadarObj_10_ObjBoundingBoxWidth,\
FourDRadarObj_10_DistZStd,FourDRadarObj_10_ObjNearestPtX,FourDRadarObj_10_ObjNearestPtY,FourDRadarObj_10_ObjNearestPtZ,\
FourDRadarObj_10_UpdateFlag,FourDRadarObj_10_Chks,FourDRadarObj_10_DistX,FourDRadarObj_10_Cntr,count,\n";
  if (ss.good()) {
    long long beg = 0, end = 0;
    ss.seekp(0, std::ios::beg);
    beg = ss.tellp();
    ss.seekp(0, std::ios::end);
    end = ss.tellp();
    if ((end - beg) < 5) {
      ss << ssHead;
    }
    ss << getCurrentSysTime() << ",";
    for (size_t index = 0; index < 11; index++) {
      ss << std::to_string(frntRdrObjList_4D.Objects[index].ID) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].ObstacleProbability)
         << "," << std::to_string(frntRdrObjList_4D.Objects[index].VabsX) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].VabsXStd) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].VabsY) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].VabsYStd) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].ValidFlag) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].Classification)
         << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].DynamicProperty)
         << "," << std::to_string(frntRdrObjList_4D.Objects[index].DistXStd)
         << "," << std::to_string(frntRdrObjList_4D.Objects[index].DistY) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].DistYStd) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].DistZ) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].RCS) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].LifeCycles) << ","
         << std::to_string(
                frntRdrObjList_4D.Objects[index].ProbabilityOfExistence)
         << "," << std::to_string(frntRdrObjList_4D.Objects[index].ObjSNR)
         << "," << std::to_string(frntRdrObjList_4D.Objects[index].ObjXAccRel)
         << "," << std::to_string(frntRdrObjList_4D.Objects[index].ObjYAccRel)
         << "," << std::to_string(frntRdrObjList_4D.Objects[index].HeadingAngle)
         << ","
         << std::to_string(
                frntRdrObjList_4D.Objects[index].TargetClassificationConfidence)
         << ","
         << std::to_string(
                frntRdrObjList_4D.Objects[index].ObjBoundingBoxHeight)
         << ","
         << std::to_string(
                frntRdrObjList_4D.Objects[index].ObjBoundingBoxLength)
         << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].ObjBoundingBoxWidth)
         << "," << std::to_string(frntRdrObjList_4D.Objects[index].DistZStd)
         << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].ObjNearestPtX)
         << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].ObjNearestPtY)
         << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].ObjNearestPtZ)
         << "," << std::to_string(frntRdrObjList_4D.Objects[index].UpdateFlag)
         << "," << std::to_string(frntRdrObjList_4D.Objects[index].Chks) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].DistX) << ","
         << std::to_string(frntRdrObjList_4D.Objects[index].Cntr) << ",";
    }
    ss << std::to_string(count) << ",";

    ss << std::endl;
  }
  ss.close();
}

// TODO(ChenXU):
void OFM_CsvLog_Internal::LogFrntCamObjList(
    const FrntCamObjList frntCamObjList) {
  std::ofstream ss("./OFM_FrntCamObjList.csv", std::ios::app);
  char ssHead[] =
      "TimeStamp,FrontCamList_00_Angle,FrontCamList_00_AngleStdDev,FrontCamList_00_HeadingAngle,FrontCamList_00_HeadingAngleStdDev,\
FrontCamList_00_Height,FrontCamList_00_HeightStdDev,FrontCamList_00_Width,FrontCamList_00_WidthStdDev,\
FrontCamList_00_Length,FrontCamList_00_LengthStdDev,FrontCamList_00_LgtPos,FrontCamList_00_LgtPosStdDev,\
FrontCamList_00_LatPos,FrontCamList_00_LatPosStdDev,FrontCamList_00_LgtVel,FrontCamList_00_LgtVelStdDev,\
FrontCamList_00_LatVel,FrontCamList_00_LatVelStdDev,FrontCamList_00_LgtAcc,FrontCamList_00_LgtAccStdDev,FrontCamList_00_LatAcc,FrontCamList_00_LatAccStdDev,\
FrontCamList_00_LaneOffsetLeft,FrontCamList_00_LaneOffsetLeftStdDev,FrontCamList_00_LaneOffsetRight,FrontCamList_00_LaneOffsetRightStdDev,\
FrontCamList_00_Id,FrontCamList_00_Type,FrontCamList_00_ClassConfidence,FrontCamList_00_ExsistConfidence,\
FrontCamList_00_Pose,FrontCamList_00_DetectionHistory,FrontCamList_00_LaneAssignment,FrontCamList_00_NearestSide,\
FrontCamList_00_TrackSts,FrontCamList_00_TurnIndicator,FrontCamList_00_Chks,FrontCamList_00_Cntr,\
FrontCamList_00_CmsConfidence,FrontCamList_00_ImgFrameCtr,FrontCamList_00_TimeStamp,\
FrontCamList_01_Angle,FrontCamList_01_AngleStdDev,FrontCamList_01_HeadingAngle,FrontCamList_01_HeadingAngleStdDev,\
FrontCamList_01_Height,FrontCamList_01_HeightStdDev,FrontCamList_01_Width,FrontCamList_01_WidthStdDev,\
FrontCamList_01_Length,FrontCamList_01_LengthStdDev,FrontCamList_01_LgtPos,FrontCamList_01_LgtPosStdDev,\
FrontCamList_01_LatPos,FrontCamList_01_LatPosStdDev,FrontCamList_01_LgtVel,FrontCamList_01_LgtVelStdDev,\
FrontCamList_01_LatVel,FrontCamList_01_LatVelStdDev,FrontCamList_01_LgtAcc,FrontCamList_01_LgtAccStdDev,FrontCamList_01_LatAcc,FrontCamList_01_LatAccStdDev,\
FrontCamList_01_LaneOffsetLeft,FrontCamList_01_LaneOffsetLeftStdDev,FrontCamList_01_LaneOffsetRight,FrontCamList_01_LaneOffsetRightStdDev,\
FrontCamList_01_Id,FrontCamList_01_Type,FrontCamList_01_ClassConfidence,FrontCamList_01_ExsistConfidence,\
FrontCamList_01_Pose,FrontCamList_01_DetectionHistory,FrontCamList_01_LaneAssignment,FrontCamList_01_NearestSide,\
FrontCamList_01_TrackSts,FrontCamList_01_TurnIndicator,FrontCamList_01_Chks,FrontCamList_01_Cntr,\
FrontCamList_01_CmsConfidence,FrontCamList_01_ImgFrameCtr,FrontCamList_01_TimeStamp,\
FrontCamList_02_Angle,FrontCamList_02_AngleStdDev,FrontCamList_02_HeadingAngle,FrontCamList_02_HeadingAngleStdDev,\
FrontCamList_02_Height,FrontCamList_02_HeightStdDev,FrontCamList_02_Width,FrontCamList_02_WidthStdDev,\
FrontCamList_02_Length,FrontCamList_02_LengthStdDev,FrontCamList_02_LgtPos,FrontCamList_02_LgtPosStdDev,\
FrontCamList_02_LatPos,FrontCamList_02_LatPosStdDev,FrontCamList_02_LgtVel,FrontCamList_02_LgtVelStdDev,\
FrontCamList_02_LatVel,FrontCamList_02_LatVelStdDev,FrontCamList_02_LgtAcc,FrontCamList_02_LgtAccStdDev,FrontCamList_02_LatAcc,FrontCamList_02_LatAccStdDev,\
FrontCamList_02_LaneOffsetLeft,FrontCamList_02_LaneOffsetLeftStdDev,FrontCamList_02_LaneOffsetRight,FrontCamList_02_LaneOffsetRightStdDev,\
FrontCamList_02_Id,FrontCamList_02_Type,FrontCamList_02_ClassConfidence,FrontCamList_02_ExsistConfidence,\
FrontCamList_02_Pose,FrontCamList_02_DetectionHistory,FrontCamList_02_LaneAssignment,FrontCamList_02_NearestSide,\
FrontCamList_02_TrackSts,FrontCamList_02_TurnIndicator,FrontCamList_02_Chks,FrontCamList_02_Cntr,\
FrontCamList_02_CmsConfidence,FrontCamList_02_ImgFrameCtr,FrontCamList_02_TimeStamp,\
FrontCamList_03_Angle,FrontCamList_03_AngleStdDev,FrontCamList_03_HeadingAngle,FrontCamList_03_HeadingAngleStdDev,\
FrontCamList_03_Height,FrontCamList_03_HeightStdDev,FrontCamList_03_Width,FrontCamList_03_WidthStdDev,\
FrontCamList_03_Length,FrontCamList_03_LengthStdDev,FrontCamList_03_LgtPos,FrontCamList_03_LgtPosStdDev,\
FrontCamList_03_LatPos,FrontCamList_03_LatPosStdDev,FrontCamList_03_LgtVel,FrontCamList_03_LgtVelStdDev,\
FrontCamList_03_LatVel,FrontCamList_03_LatVelStdDev,FrontCamList_03_LgtAcc,FrontCamList_03_LgtAccStdDev,FrontCamList_03_LatAcc,FrontCamList_03_LatAccStdDev,\
FrontCamList_03_LaneOffsetLeft,FrontCamList_03_LaneOffsetLeftStdDev,FrontCamList_03_LaneOffsetRight,FrontCamList_03_LaneOffsetRightStdDev,\
FrontCamList_03_Id,FrontCamList_03_Type,FrontCamList_03_ClassConfidence,FrontCamList_03_ExsistConfidence,\
FrontCamList_03_Pose,FrontCamList_03_DetectionHistory,FrontCamList_03_LaneAssignment,FrontCamList_03_NearestSide,\
FrontCamList_03_TrackSts,FrontCamList_03_TurnIndicator,FrontCamList_03_Chks,FrontCamList_03_Cntr,\
FrontCamList_03_CmsConfidence,FrontCamList_03_ImgFrameCtr,FrontCamList_03_TimeStamp,\
FrontCamList_04_Angle,FrontCamList_04_AngleStdDev,FrontCamList_04_HeadingAngle,FrontCamList_04_HeadingAngleStdDev,\
FrontCamList_04_Height,FrontCamList_04_HeightStdDev,FrontCamList_04_Width,FrontCamList_04_WidthStdDev,\
FrontCamList_04_Length,FrontCamList_04_LengthStdDev,FrontCamList_04_LgtPos,FrontCamList_04_LgtPosStdDev,\
FrontCamList_04_LatPos,FrontCamList_04_LatPosStdDev,FrontCamList_04_LgtVel,FrontCamList_04_LgtVelStdDev,\
FrontCamList_04_LatVel,FrontCamList_04_LatVelStdDev,FrontCamList_04_LgtAcc,FrontCamList_04_LgtAccStdDev,FrontCamList_04_LatAcc,FrontCamList_04_LatAccStdDev,\
FrontCamList_04_LaneOffsetLeft,FrontCamList_04_LaneOffsetLeftStdDev,FrontCamList_04_LaneOffsetRight,FrontCamList_04_LaneOffsetRightStdDev,\
FrontCamList_04_Id,FrontCamList_04_Type,FrontCamList_04_ClassConfidence,FrontCamList_04_ExsistConfidence,\
FrontCamList_04_Pose,FrontCamList_04_DetectionHistory,FrontCamList_04_LaneAssignment,FrontCamList_04_NearestSide,\
FrontCamList_04_TrackSts,FrontCamList_04_TurnIndicator,FrontCamList_04_Chks,FrontCamList_04_Cntr,\
FrontCamList_04_CmsConfidence,FrontCamList_04_ImgFrameCtr,FrontCamList_04_TimeStamp,\
FrontCamList_05_Angle,FrontCamList_05_AngleStdDev,FrontCamList_05_HeadingAngle,FrontCamList_05_HeadingAngleStdDev,\
FrontCamList_05_Height,FrontCamList_05_HeightStdDev,FrontCamList_05_Width,FrontCamList_05_WidthStdDev,\
FrontCamList_05_Length,FrontCamList_05_LengthStdDev,FrontCamList_05_LgtPos,FrontCamList_05_LgtPosStdDev,\
FrontCamList_05_LatPos,FrontCamList_05_LatPosStdDev,FrontCamList_05_LgtVel,FrontCamList_05_LgtVelStdDev,\
FrontCamList_05_LatVel,FrontCamList_05_LatVelStdDev,FrontCamList_05_LgtAcc,FrontCamList_05_LgtAccStdDev,FrontCamList_05_LatAcc,FrontCamList_05_LatAccStdDev,\
FrontCamList_05_LaneOffsetLeft,FrontCamList_05_LaneOffsetLeftStdDev,FrontCamList_05_LaneOffsetRight,FrontCamList_05_LaneOffsetRightStdDev,\
FrontCamList_05_Id,FrontCamList_05_Type,FrontCamList_05_ClassConfidence,FrontCamList_05_ExsistConfidence,\
FrontCamList_05_Pose,FrontCamList_05_DetectionHistory,FrontCamList_05_LaneAssignment,FrontCamList_05_NearestSide,\
FrontCamList_05_TrackSts,FrontCamList_05_TurnIndicator,FrontCamList_05_Chks,FrontCamList_05_Cntr,\
FrontCamList_05_CmsConfidence,FrontCamList_05_ImgFrameCtr,FrontCamList_05_TimeStamp,\
FrontCamList_06_Angle,FrontCamList_06_AngleStdDev,FrontCamList_06_HeadingAngle,FrontCamList_06_HeadingAngleStdDev,\
FrontCamList_06_Height,FrontCamList_06_HeightStdDev,FrontCamList_06_Width,FrontCamList_06_WidthStdDev,\
FrontCamList_06_Length,FrontCamList_06_LengthStdDev,FrontCamList_06_LgtPos,FrontCamList_06_LgtPosStdDev,\
FrontCamList_06_LatPos,FrontCamList_06_LatPosStdDev,FrontCamList_06_LgtVel,FrontCamList_06_LgtVelStdDev,\
FrontCamList_06_LatVel,FrontCamList_06_LatVelStdDev,FrontCamList_06_LgtAcc,FrontCamList_06_LgtAccStdDev,FrontCamList_06_LatAcc,FrontCamList_06_LatAccStdDev,\
FrontCamList_06_LaneOffsetLeft,FrontCamList_06_LaneOffsetLeftStdDev,FrontCamList_06_LaneOffsetRight,FrontCamList_06_LaneOffsetRightStdDev,\
FrontCamList_06_Id,FrontCamList_06_Type,FrontCamList_06_ClassConfidence,FrontCamList_06_ExsistConfidence,\
FrontCamList_06_Pose,FrontCamList_06_DetectionHistory,FrontCamList_06_LaneAssignment,FrontCamList_06_NearestSide,\
FrontCamList_06_TrackSts,FrontCamList_06_TurnIndicator,FrontCamList_06_Chks,FrontCamList_06_Cntr,\
FrontCamList_06_CmsConfidence,FrontCamList_06_ImgFrameCtr,FrontCamList_06_TimeStamp,\
FrontCamList_07_Angle,FrontCamList_07_AngleStdDev,FrontCamList_07_HeadingAngle,FrontCamList_07_HeadingAngleStdDev,\
FrontCamList_07_Height,FrontCamList_07_HeightStdDev,FrontCamList_07_Width,FrontCamList_07_WidthStdDev,\
FrontCamList_07_Length,FrontCamList_07_LengthStdDev,FrontCamList_07_LgtPos,FrontCamList_07_LgtPosStdDev,\
FrontCamList_07_LatPos,FrontCamList_07_LatPosStdDev,FrontCamList_07_LgtVel,FrontCamList_07_LgtVelStdDev,\
FrontCamList_07_LatVel,FrontCamList_07_LatVelStdDev,FrontCamList_07_LgtAcc,FrontCamList_07_LgtAccStdDev,FrontCamList_07_LatAcc,FrontCamList_07_LatAccStdDev,\
FrontCamList_07_LaneOffsetLeft,FrontCamList_07_LaneOffsetLeftStdDev,FrontCamList_07_LaneOffsetRight,FrontCamList_07_LaneOffsetRightStdDev,\
FrontCamList_07_Id,FrontCamList_07_Type,FrontCamList_07_ClassConfidence,FrontCamList_07_ExsistConfidence,\
FrontCamList_07_Pose,FrontCamList_07_DetectionHistory,FrontCamList_07_LaneAssignment,FrontCamList_07_NearestSide,\
FrontCamList_07_TrackSts,FrontCamList_07_TurnIndicator,FrontCamList_07_Chks,FrontCamList_07_Cntr,\
FrontCamList_07_CmsConfidence,FrontCamList_07_ImgFrameCtr,FrontCamList_07_TimeStamp,\
FrontCamList_08_Angle,FrontCamList_08_AngleStdDev,FrontCamList_08_HeadingAngle,FrontCamList_08_HeadingAngleStdDev,\
FrontCamList_08_Height,FrontCamList_08_HeightStdDev,FrontCamList_08_Width,FrontCamList_08_WidthStdDev,\
FrontCamList_08_Length,FrontCamList_08_LengthStdDev,FrontCamList_08_LgtPos,FrontCamList_08_LgtPosStdDev,\
FrontCamList_08_LatPos,FrontCamList_08_LatPosStdDev,FrontCamList_08_LgtVel,FrontCamList_08_LgtVelStdDev,\
FrontCamList_08_LatVel,FrontCamList_08_LatVelStdDev,FrontCamList_08_LgtAcc,FrontCamList_08_LgtAccStdDev,FrontCamList_08_LatAcc,FrontCamList_08_LatAccStdDev,\
FrontCamList_08_LaneOffsetLeft,FrontCamList_08_LaneOffsetLeftStdDev,FrontCamList_08_LaneOffsetRight,FrontCamList_08_LaneOffsetRightStdDev,\
FrontCamList_08_Id,FrontCamList_08_Type,FrontCamList_08_ClassConfidence,FrontCamList_08_ExsistConfidence,\
FrontCamList_08_Pose,FrontCamList_08_DetectionHistory,FrontCamList_08_LaneAssignment,FrontCamList_08_NearestSide,\
FrontCamList_08_TrackSts,FrontCamList_08_TurnIndicator,FrontCamList_08_Chks,FrontCamList_08_Cntr,\
FrontCamList_08_CmsConfidence,FrontCamList_08_ImgFrameCtr,FrontCamList_08_TimeStamp,\
FrontCamList_09_Angle,FrontCamList_09_AngleStdDev,FrontCamList_09_HeadingAngle,FrontCamList_09_HeadingAngleStdDev,\
FrontCamList_09_Height,FrontCamList_09_HeightStdDev,FrontCamList_09_Width,FrontCamList_09_WidthStdDev,\
FrontCamList_09_Length,FrontCamList_09_LengthStdDev,FrontCamList_09_LgtPos,FrontCamList_09_LgtPosStdDev,\
FrontCamList_09_LatPos,FrontCamList_09_LatPosStdDev,FrontCamList_09_LgtVel,FrontCamList_09_LgtVelStdDev,\
FrontCamList_09_LatVel,FrontCamList_09_LatVelStdDev,FrontCamList_09_LgtAcc,FrontCamList_09_LgtAccStdDev,FrontCamList_09_LatAcc,FrontCamList_09_LatAccStdDev,\
FrontCamList_09_LaneOffsetLeft,FrontCamList_09_LaneOffsetLeftStdDev,FrontCamList_09_LaneOffsetRight,FrontCamList_09_LaneOffsetRightStdDev,\
FrontCamList_09_Id,FrontCamList_09_Type,FrontCamList_09_ClassConfidence,FrontCamList_09_ExsistConfidence,\
FrontCamList_09_Pose,FrontCamList_09_DetectionHistory,FrontCamList_09_LaneAssignment,FrontCamList_09_NearestSide,\
FrontCamList_09_TrackSts,FrontCamList_09_TurnIndicator,FrontCamList_09_Chks,FrontCamList_09_Cntr,\
FrontCamList_09_CmsConfidence,FrontCamList_09_ImgFrameCtr,FrontCamList_09_TimeStamp,\
FrontCamList_10_Angle,FrontCamList_10_AngleStdDev,FrontCamList_10_HeadingAngle,FrontCamList_10_HeadingAngleStdDev,\
FrontCamList_10_Height,FrontCamList_10_HeightStdDev,FrontCamList_10_Width,FrontCamList_10_WidthStdDev,\
FrontCamList_10_Length,FrontCamList_10_LengthStdDev,FrontCamList_10_LgtPos,FrontCamList_10_LgtPosStdDev,\
FrontCamList_10_LatPos,FrontCamList_10_LatPosStdDev,FrontCamList_10_LgtVel,FrontCamList_10_LgtVelStdDev,\
FrontCamList_10_LatVel,FrontCamList_10_LatVelStdDev,FrontCamList_10_LgtAcc,FrontCamList_10_LgtAccStdDev,FrontCamList_10_LatAcc,FrontCamList_10_LatAccStdDev,\
FrontCamList_10_LaneOffsetLeft,FrontCamList_10_LaneOffsetLeftStdDev,FrontCamList_10_LaneOffsetRight,FrontCamList_10_LaneOffsetRightStdDev,\
FrontCamList_10_Id,FrontCamList_10_Type,FrontCamList_10_ClassConfidence,FrontCamList_10_ExsistConfidence,\
FrontCamList_10_Pose,FrontCamList_10_DetectionHistory,FrontCamList_10_LaneAssignment,FrontCamList_10_NearestSide,\
FrontCamList_10_TrackSts,FrontCamList_10_TurnIndicator,FrontCamList_10_Chks,FrontCamList_10_Cntr,\
FrontCamList_10_CmsConfidence,FrontCamList_10_ImgFrameCtr,FrontCamList_10_TimeStamp,count,\n";
  if (ss.good()) {
    long long beg = 0, end = 0;
    ss.seekp(0, std::ios::beg);
    beg = ss.tellp();
    ss.seekp(0, std::ios::end);
    end = ss.tellp();
    if ((end - beg) < 5) {
      ss << ssHead;
    }
    ss << getCurrentSysTime() << ",";
    for (size_t index = 0; index < 11; index++) {
      ss << std::to_string(frntCamObjList.Objects[index].Angle) << ","
         << std::to_string(frntCamObjList.Objects[index].AngleStdDev) << ","
         << std::to_string(frntCamObjList.Objects[index].HeadingAngle) << ","
         << std::to_string(frntCamObjList.Objects[index].HeadingAngleStdDev)
         << "," << std::to_string(frntCamObjList.Objects[index].Height) << ","
         << std::to_string(frntCamObjList.Objects[index].HeightStdDev) << ","
         << std::to_string(frntCamObjList.Objects[index].Width) << ","
         << std::to_string(frntCamObjList.Objects[index].WidthStdDev) << ","
         << std::to_string(frntCamObjList.Objects[index].Length) << ","
         << std::to_string(frntCamObjList.Objects[index].LengthStdDev) << ","
         << std::to_string(frntCamObjList.Objects[index].LgtPos) << ","
         << std::to_string(frntCamObjList.Objects[index].LgtPosStdDev) << ","
         << std::to_string(frntCamObjList.Objects[index].LatPos) << ","
         << std::to_string(frntCamObjList.Objects[index].LatPosStdDev) << ","
         << std::to_string(frntCamObjList.Objects[index].LgtVel) << ","
         << std::to_string(frntCamObjList.Objects[index].LgtVelStdDev) << ","
         << std::to_string(frntCamObjList.Objects[index].LatVel) << ","
         << std::to_string(frntCamObjList.Objects[index].LatVelStdDev) << ","
         << std::to_string(frntCamObjList.Objects[index].LgtAcc) << ","
         << std::to_string(frntCamObjList.Objects[index].LgtAccStdDev) << ","
         << std::to_string(frntCamObjList.Objects[index].LatAcc) << ","
         << std::to_string(frntCamObjList.Objects[index].LatAccStdDev) << ","
         << std::to_string(frntCamObjList.Objects[index].LaneOffsetLeft) << ","
         << std::to_string(frntCamObjList.Objects[index].LaneOffsetLeftStdDev)
         << "," << std::to_string(frntCamObjList.Objects[index].LaneOffsetRight)
         << ","
         << std::to_string(frntCamObjList.Objects[index].LaneOffsetRightStdDev)
         << "," << std::to_string(frntCamObjList.Objects[index].Id) << ","
         << std::to_string(frntCamObjList.Objects[index].Type) << ","
         << std::to_string(frntCamObjList.Objects[index].ClassConfidence) << ","
         << std::to_string(frntCamObjList.Objects[index].ExsistConfidence)
         << "," << std::to_string(frntCamObjList.Objects[index].Pose) << ","
         << std::to_string(frntCamObjList.Objects[index].DetectionHistory)
         << "," << std::to_string(frntCamObjList.Objects[index].LaneAssignment)
         << "," << std::to_string(frntCamObjList.Objects[index].NearestSide)
         << "," << std::to_string(frntCamObjList.Objects[index].TrackSts) << ","
         << std::to_string(frntCamObjList.Objects[index].TurnIndicator) << ","
         << std::to_string(frntCamObjList.Objects[index].Chks) << ","
         << std::to_string(frntCamObjList.Objects[index].Cntr) << ","
         << std::to_string(frntCamObjList.Objects[index].CmsConfidence) << ","
         << std::to_string(frntCamObjList.Objects[index].ImgFrameCtr) << ","
         << std::to_string(frntCamObjList.Objects[index].TimeStamp) << ",";
    }
    ss << std::to_string(count) << ",";

    ss << std::endl;
  }
  ss.close();
}

// TODO(Changyu):
void OFM_CsvLog_Internal::LogFusedTargets_11(
    ObjGroup2Vccs_11::ObjGroup2Vccs_11 mFusedTargets_1_11) {
  std::ofstream ss("./OFM_FusedTargets11.csv", std::ios::app);
  char ssHead[] =
      "TimeStamp,Fused_1_11_0_Estim_PosnLgt,Fused_1_11_0_Estim_PosnLat,Fused_1_11_0_Estim_Spd,Fused_1_11_0_Estim_VLgt,\
Fused_1_11_0_Estim_VLat,Fused_1_11_0_Estim_A,Fused_1_11_0_Estim_ALgt,Fused_1_11_0_Estim_ALat,Fused_1_11_0_Estim_AgDir,\
Fused_1_11_0_Estim_Crvt,Fused_1_11_0_Info_FuseObjTyp,Fused_1_11_0_Info_FuseObjWidth,Fused_1_11_0_Info_FuseObjLength,\
Fused_1_11_0_Info_FuseObjHei,Fused_1_11_0_Info_IndcrTurn,Fused_1_11_0_Info_IndcrBrkLi,Fused_1_11_0_Info_IndcrHzrdLi,\
Fused_1_11_0_Info_MtnPat,Fused_1_11_0_Info_MtnPatHist,Fused_1_11_0_Info_DstLatFromMidOfLaneSelf,Fused_1_11_0_Ppty_Idn,\
Fused_1_11_0_Ppty_VisnId,Fused_1_11_0_Ppty_Sts,Fused_1_11_0_Ppty_MdlOfMtn,Fused_1_11_0_Ppty_TrfcSceno,Fused_1_11_0_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_1_11_0_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_0_Ppty_CllsnWarnFwdQly,Fused_1_11_0_Ppty_ObjTrfcJamAssiQly,Fused_1_11_0_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_1_11_0_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_0_Ppty_PosnLgtStdDe,Fused_1_11_0_Ppty_PosnLatStdDe,Fused_1_11_0_Ppty_AgDirStdDe,\
Fused_1_11_0_Ppty_SpdStdDe,Fused_1_11_0_Ppty_AStdDe,Fused_1_11_0_Ppty_FusnSrc,Fused_1_11_0_Ppty_TimeStamp,Fused_1_11_0_Ppty_Age,\
Fused_1_11_0_Ppty_ExistConf,Fused_1_11_0_Ppty_ClassConf,\
Fused_1_11_1_Estim_PosnLgt,Fused_1_11_1_Estim_PosnLat,Fused_1_11_1_Estim_Spd,Fused_1_11_1_Estim_VLgt,\
Fused_1_11_1_Estim_VLat,Fused_1_11_1_Estim_A,Fused_1_11_1_Estim_ALgt,Fused_1_11_1_Estim_ALat,Fused_1_11_1_Estim_AgDir,\
Fused_1_11_1_Estim_Crvt,Fused_1_11_1_Info_FuseObjTyp,Fused_1_11_1_Info_FuseObjWidth,Fused_1_11_1_Info_FuseObjLength,\
Fused_1_11_1_Info_FuseObjHei,Fused_1_11_1_Info_IndcrTurn,Fused_1_11_1_Info_IndcrBrkLi,Fused_1_11_1_Info_IndcrHzrdLi,\
Fused_1_11_1_Info_MtnPat,Fused_1_11_1_Info_MtnPatHist,Fused_1_11_1_Info_DstLatFromMidOfLaneSelf,Fused_1_11_1_Ppty_Idn,\
Fused_1_11_1_Ppty_VisnId,Fused_1_11_1_Ppty_Sts,Fused_1_11_1_Ppty_MdlOfMtn,Fused_1_11_1_Ppty_TrfcSceno,Fused_1_11_1_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_1_11_1_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_1_Ppty_CllsnWarnFwdQly,Fused_1_11_1_Ppty_ObjTrfcJamAssiQly,Fused_1_11_1_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_1_11_1_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_1_Ppty_PosnLgtStdDe,Fused_1_11_1_Ppty_PosnLatStdDe,Fused_1_11_1_Ppty_AgDirStdDe,\
Fused_1_11_1_Ppty_SpdStdDe,Fused_1_11_1_Ppty_AStdDe,Fused_1_11_1_Ppty_FusnSrc,Fused_1_11_1_Ppty_TimeStamp,Fused_1_11_1_Ppty_Age,\
Fused_1_11_1_Ppty_ExistConf,Fused_1_11_1_Ppty_ClassConf,\
Fused_1_11_2_Estim_PosnLgt,Fused_1_11_2_Estim_PosnLat,Fused_1_11_2_Estim_Spd,Fused_1_11_2_Estim_VLgt,\
Fused_1_11_2_Estim_VLat,Fused_1_11_2_Estim_A,Fused_1_11_2_Estim_ALgt,Fused_1_11_2_Estim_ALat,Fused_1_11_2_Estim_AgDir,\
Fused_1_11_2_Estim_Crvt,Fused_1_11_2_Info_FuseObjTyp,Fused_1_11_2_Info_FuseObjWidth,Fused_1_11_2_Info_FuseObjLength,\
Fused_1_11_2_Info_FuseObjHei,Fused_1_11_2_Info_IndcrTurn,Fused_1_11_2_Info_IndcrBrkLi,Fused_1_11_2_Info_IndcrHzrdLi,\
Fused_1_11_2_Info_MtnPat,Fused_1_11_2_Info_MtnPatHist,Fused_1_11_2_Info_DstLatFromMidOfLaneSelf,Fused_1_11_2_Ppty_Idn,\
Fused_1_11_2_Ppty_VisnId,Fused_1_11_2_Ppty_Sts,Fused_1_11_2_Ppty_MdlOfMtn,Fused_1_11_2_Ppty_TrfcSceno,Fused_1_11_2_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_1_11_2_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_2_Ppty_CllsnWarnFwdQly,Fused_1_11_2_Ppty_ObjTrfcJamAssiQly,Fused_1_11_2_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_1_11_2_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_2_Ppty_PosnLgtStdDe,Fused_1_11_2_Ppty_PosnLatStdDe,Fused_1_11_2_Ppty_AgDirStdDe,\
Fused_1_11_2_Ppty_SpdStdDe,Fused_1_11_2_Ppty_AStdDe,Fused_1_11_2_Ppty_FusnSrc,Fused_1_11_2_Ppty_TimeStamp,Fused_1_11_2_Ppty_Age,\
Fused_1_11_2_Ppty_ExistConf,Fused_1_11_2_Ppty_ClassConf,\
Fused_1_11_3_Estim_PosnLgt,Fused_1_11_3_Estim_PosnLat,Fused_1_11_3_Estim_Spd,Fused_1_11_3_Estim_VLgt,\
Fused_1_11_3_Estim_VLat,Fused_1_11_3_Estim_A,Fused_1_11_3_Estim_ALgt,Fused_1_11_3_Estim_ALat,Fused_1_11_3_Estim_AgDir,\
Fused_1_11_3_Estim_Crvt,Fused_1_11_3_Info_FuseObjTyp,Fused_1_11_3_Info_FuseObjWidth,Fused_1_11_3_Info_FuseObjLength,\
Fused_1_11_3_Info_FuseObjHei,Fused_1_11_3_Info_IndcrTurn,Fused_1_11_3_Info_IndcrBrkLi,Fused_1_11_3_Info_IndcrHzrdLi,\
Fused_1_11_3_Info_MtnPat,Fused_1_11_3_Info_MtnPatHist,Fused_1_11_3_Info_DstLatFromMidOfLaneSelf,Fused_1_11_3_Ppty_Idn,\
Fused_1_11_3_Ppty_VisnId,Fused_1_11_3_Ppty_Sts,Fused_1_11_3_Ppty_MdlOfMtn,Fused_1_11_3_Ppty_TrfcSceno,Fused_1_11_3_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_1_11_3_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_3_Ppty_CllsnWarnFwdQly,Fused_1_11_3_Ppty_ObjTrfcJamAssiQly,Fused_1_11_3_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_1_11_3_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_3_Ppty_PosnLgtStdDe,Fused_1_11_3_Ppty_PosnLatStdDe,Fused_1_11_3_Ppty_AgDirStdDe,\
Fused_1_11_3_Ppty_SpdStdDe,Fused_1_11_3_Ppty_AStdDe,Fused_1_11_3_Ppty_FusnSrc,Fused_1_11_3_Ppty_TimeStamp,Fused_1_11_3_Ppty_Age,\
Fused_1_11_3_Ppty_ExistConf,Fused_1_11_3_Ppty_ClassConf,\
Fused_1_11_4_Estim_PosnLgt,Fused_1_11_4_Estim_PosnLat,Fused_1_11_4_Estim_Spd,Fused_1_11_4_Estim_VLgt,\
Fused_1_11_4_Estim_VLat,Fused_1_11_4_Estim_A,Fused_1_11_4_Estim_ALgt,Fused_1_11_4_Estim_ALat,Fused_1_11_4_Estim_AgDir,\
Fused_1_11_4_Estim_Crvt,Fused_1_11_4_Info_FuseObjTyp,Fused_1_11_4_Info_FuseObjWidth,Fused_1_11_4_Info_FuseObjLength,\
Fused_1_11_4_Info_FuseObjHei,Fused_1_11_4_Info_IndcrTurn,Fused_1_11_4_Info_IndcrBrkLi,Fused_1_11_4_Info_IndcrHzrdLi,\
Fused_1_11_4_Info_MtnPat,Fused_1_11_4_Info_MtnPatHist,Fused_1_11_4_Info_DstLatFromMidOfLaneSelf,Fused_1_11_4_Ppty_Idn,\
Fused_1_11_4_Ppty_VisnId,Fused_1_11_4_Ppty_Sts,Fused_1_11_4_Ppty_MdlOfMtn,Fused_1_11_4_Ppty_TrfcSceno,Fused_1_11_4_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_1_11_4_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_4_Ppty_CllsnWarnFwdQly,Fused_1_11_4_Ppty_ObjTrfcJamAssiQly,Fused_1_11_4_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_1_11_4_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_4_Ppty_PosnLgtStdDe,Fused_1_11_4_Ppty_PosnLatStdDe,Fused_1_11_4_Ppty_AgDirStdDe,\
Fused_1_11_4_Ppty_SpdStdDe,Fused_1_11_4_Ppty_AStdDe,Fused_1_11_4_Ppty_FusnSrc,Fused_1_11_4_Ppty_TimeStamp,Fused_1_11_4_Ppty_Age,\
Fused_1_11_4_Ppty_ExistConf,Fused_1_11_4_Ppty_ClassConf,\
Fused_1_11_5_Estim_PosnLgt,Fused_1_11_5_Estim_PosnLat,Fused_1_11_5_Estim_Spd,Fused_1_11_5_Estim_VLgt,\
Fused_1_11_5_Estim_VLat,Fused_1_11_5_Estim_A,Fused_1_11_5_Estim_ALgt,Fused_1_11_5_Estim_ALat,Fused_1_11_5_Estim_AgDir,\
Fused_1_11_5_Estim_Crvt,Fused_1_11_5_Info_FuseObjTyp,Fused_1_11_5_Info_FuseObjWidth,Fused_1_11_5_Info_FuseObjLength,\
Fused_1_11_5_Info_FuseObjHei,Fused_1_11_5_Info_IndcrTurn,Fused_1_11_5_Info_IndcrBrkLi,Fused_1_11_5_Info_IndcrHzrdLi,\
Fused_1_11_5_Info_MtnPat,Fused_1_11_5_Info_MtnPatHist,Fused_1_11_5_Info_DstLatFromMidOfLaneSelf,Fused_1_11_5_Ppty_Idn,\
Fused_1_11_5_Ppty_VisnId,Fused_1_11_5_Ppty_Sts,Fused_1_11_5_Ppty_MdlOfMtn,Fused_1_11_5_Ppty_TrfcSceno,Fused_1_11_5_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_1_11_5_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_5_Ppty_CllsnWarnFwdQly,Fused_1_11_5_Ppty_ObjTrfcJamAssiQly,Fused_1_11_5_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_1_11_5_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_5_Ppty_PosnLgtStdDe,Fused_1_11_5_Ppty_PosnLatStdDe,Fused_1_11_5_Ppty_AgDirStdDe,\
Fused_1_11_5_Ppty_SpdStdDe,Fused_1_11_5_Ppty_AStdDe,Fused_1_11_5_Ppty_FusnSrc,Fused_1_11_5_Ppty_TimeStamp,Fused_1_11_5_Ppty_Age,\
Fused_1_11_5_Ppty_ExistConf,Fused_1_11_5_Ppty_ClassConf,\
Fused_1_11_6_Estim_PosnLgt,Fused_1_11_6_Estim_PosnLat,Fused_1_11_6_Estim_Spd,Fused_1_11_6_Estim_VLgt,\
Fused_1_11_6_Estim_VLat,Fused_1_11_6_Estim_A,Fused_1_11_6_Estim_ALgt,Fused_1_11_6_Estim_ALat,Fused_1_11_6_Estim_AgDir,\
Fused_1_11_6_Estim_Crvt,Fused_1_11_6_Info_FuseObjTyp,Fused_1_11_6_Info_FuseObjWidth,Fused_1_11_6_Info_FuseObjLength,\
Fused_1_11_6_Info_FuseObjHei,Fused_1_11_6_Info_IndcrTurn,Fused_1_11_6_Info_IndcrBrkLi,Fused_1_11_6_Info_IndcrHzrdLi,\
Fused_1_11_6_Info_MtnPat,Fused_1_11_6_Info_MtnPatHist,Fused_1_11_6_Info_DstLatFromMidOfLaneSelf,Fused_1_11_6_Ppty_Idn,\
Fused_1_11_6_Ppty_VisnId,Fused_1_11_6_Ppty_Sts,Fused_1_11_6_Ppty_MdlOfMtn,Fused_1_11_6_Ppty_TrfcSceno,Fused_1_11_6_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_1_11_6_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_6_Ppty_CllsnWarnFwdQly,Fused_1_11_6_Ppty_ObjTrfcJamAssiQly,Fused_1_11_6_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_1_11_6_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_6_Ppty_PosnLgtStdDe,Fused_1_11_6_Ppty_PosnLatStdDe,Fused_1_11_6_Ppty_AgDirStdDe,\
Fused_1_11_6_Ppty_SpdStdDe,Fused_1_11_6_Ppty_AStdDe,Fused_1_11_6_Ppty_FusnSrc,Fused_1_11_6_Ppty_TimeStamp,Fused_1_11_6_Ppty_Age,\
Fused_1_11_6_Ppty_ExistConf,Fused_1_11_6_Ppty_ClassConf,\
Fused_1_11_7_Estim_PosnLgt,Fused_1_11_7_Estim_PosnLat,Fused_1_11_7_Estim_Spd,Fused_1_11_7_Estim_VLgt,\
Fused_1_11_7_Estim_VLat,Fused_1_11_7_Estim_A,Fused_1_11_7_Estim_ALgt,Fused_1_11_7_Estim_ALat,Fused_1_11_7_Estim_AgDir,\
Fused_1_11_7_Estim_Crvt,Fused_1_11_7_Info_FuseObjTyp,Fused_1_11_7_Info_FuseObjWidth,Fused_1_11_7_Info_FuseObjLength,\
Fused_1_11_7_Info_FuseObjHei,Fused_1_11_7_Info_IndcrTurn,Fused_1_11_7_Info_IndcrBrkLi,Fused_1_11_7_Info_IndcrHzrdLi,\
Fused_1_11_7_Info_MtnPat,Fused_1_11_7_Info_MtnPatHist,Fused_1_11_7_Info_DstLatFromMidOfLaneSelf,Fused_1_11_7_Ppty_Idn,\
Fused_1_11_7_Ppty_VisnId,Fused_1_11_7_Ppty_Sts,Fused_1_11_7_Ppty_MdlOfMtn,Fused_1_11_7_Ppty_TrfcSceno,Fused_1_11_7_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_1_11_7_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_7_Ppty_CllsnWarnFwdQly,Fused_1_11_7_Ppty_ObjTrfcJamAssiQly,Fused_1_11_7_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_1_11_7_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_7_Ppty_PosnLgtStdDe,Fused_1_11_7_Ppty_PosnLatStdDe,Fused_1_11_7_Ppty_AgDirStdDe,\
Fused_1_11_7_Ppty_SpdStdDe,Fused_1_11_7_Ppty_AStdDe,Fused_1_11_7_Ppty_FusnSrc,Fused_1_11_7_Ppty_TimeStamp,Fused_1_11_7_Ppty_Age,\
Fused_1_11_7_Ppty_ExistConf,Fused_1_11_7_Ppty_ClassConf,\
Fused_1_11_8_Estim_PosnLgt,Fused_1_11_8_Estim_PosnLat,Fused_1_11_8_Estim_Spd,Fused_1_11_8_Estim_VLgt,\
Fused_1_11_8_Estim_VLat,Fused_1_11_8_Estim_A,Fused_1_11_8_Estim_ALgt,Fused_1_11_8_Estim_ALat,Fused_1_11_8_Estim_AgDir,\
Fused_1_11_8_Estim_Crvt,Fused_1_11_8_Info_FuseObjTyp,Fused_1_11_8_Info_FuseObjWidth,Fused_1_11_8_Info_FuseObjLength,\
Fused_1_11_8_Info_FuseObjHei,Fused_1_11_8_Info_IndcrTurn,Fused_1_11_8_Info_IndcrBrkLi,Fused_1_11_8_Info_IndcrHzrdLi,\
Fused_1_11_8_Info_MtnPat,Fused_1_11_8_Info_MtnPatHist,Fused_1_11_8_Info_DstLatFromMidOfLaneSelf,Fused_1_11_8_Ppty_Idn,\
Fused_1_11_8_Ppty_VisnId,Fused_1_11_8_Ppty_Sts,Fused_1_11_8_Ppty_MdlOfMtn,Fused_1_11_8_Ppty_TrfcSceno,Fused_1_11_8_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_1_11_8_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_8_Ppty_CllsnWarnFwdQly,Fused_1_11_8_Ppty_ObjTrfcJamAssiQly,Fused_1_11_8_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_1_11_8_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_8_Ppty_PosnLgtStdDe,Fused_1_11_8_Ppty_PosnLatStdDe,Fused_1_11_8_Ppty_AgDirStdDe,\
Fused_1_11_8_Ppty_SpdStdDe,Fused_1_11_8_Ppty_AStdDe,Fused_1_11_8_Ppty_FusnSrc,Fused_1_11_8_Ppty_TimeStamp,Fused_1_11_8_Ppty_Age,\
Fused_1_11_8_Ppty_ExistConf,Fused_1_11_8_Ppty_ClassConf,\
Fused_1_11_9_Estim_PosnLgt,Fused_1_11_9_Estim_PosnLat,Fused_1_11_9_Estim_Spd,Fused_1_11_9_Estim_VLgt,\
Fused_1_11_9_Estim_VLat,Fused_1_11_9_Estim_A,Fused_1_11_9_Estim_ALgt,Fused_1_11_9_Estim_ALat,Fused_1_11_9_Estim_AgDir,\
Fused_1_11_9_Estim_Crvt,Fused_1_11_9_Info_FuseObjTyp,Fused_1_11_9_Info_FuseObjWidth,Fused_1_11_9_Info_FuseObjLength,\
Fused_1_11_9_Info_FuseObjHei,Fused_1_11_9_Info_IndcrTurn,Fused_1_11_9_Info_IndcrBrkLi,Fused_1_11_9_Info_IndcrHzrdLi,\
Fused_1_11_9_Info_MtnPat,Fused_1_11_9_Info_MtnPatHist,Fused_1_11_9_Info_DstLatFromMidOfLaneSelf,Fused_1_11_9_Ppty_Idn,\
Fused_1_11_9_Ppty_VisnId,Fused_1_11_9_Ppty_Sts,Fused_1_11_9_Ppty_MdlOfMtn,Fused_1_11_9_Ppty_TrfcSceno,Fused_1_11_9_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_1_11_9_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_9_Ppty_CllsnWarnFwdQly,Fused_1_11_9_Ppty_ObjTrfcJamAssiQly,Fused_1_11_9_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_1_11_9_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_9_Ppty_PosnLgtStdDe,Fused_1_11_9_Ppty_PosnLatStdDe,Fused_1_11_9_Ppty_AgDirStdDe,\
Fused_1_11_9_Ppty_SpdStdDe,Fused_1_11_9_Ppty_AStdDe,Fused_1_11_9_Ppty_FusnSrc,Fused_1_11_9_Ppty_TimeStamp,Fused_1_11_9_Ppty_Age,\
Fused_1_11_9_Ppty_ExistConf,Fused_1_11_9_Ppty_ClassConf,\
Fused_1_11_10_Estim_PosnLgt,Fused_1_11_10_Estim_PosnLat,Fused_1_11_10_Estim_Spd,Fused_1_11_10_Estim_VLgt,\
Fused_1_11_10_Estim_VLat,Fused_1_11_10_Estim_A,Fused_1_11_10_Estim_ALgt,Fused_1_11_10_Estim_ALat,Fused_1_11_10_Estim_AgDir,\
Fused_1_11_10_Estim_Crvt,Fused_1_11_10_Info_FuseObjTyp,Fused_1_11_10_Info_FuseObjWidth,Fused_1_11_10_Info_FuseObjLength,\
Fused_1_11_10_Info_FuseObjHei,Fused_1_11_10_Info_IndcrTurn,Fused_1_11_10_Info_IndcrBrkLi,Fused_1_11_10_Info_IndcrHzrdLi,\
Fused_1_11_10_Info_MtnPat,Fused_1_11_10_Info_MtnPatHist,Fused_1_11_10_Info_DstLatFromMidOfLaneSelf,Fused_1_11_10_Ppty_Idn,\
Fused_1_11_10_Ppty_VisnId,Fused_1_11_10_Ppty_Sts,Fused_1_11_10_Ppty_MdlOfMtn,Fused_1_11_10_Ppty_TrfcSceno,Fused_1_11_10_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_1_11_10_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_10_Ppty_CllsnWarnFwdQly,Fused_1_11_10_Ppty_ObjTrfcJamAssiQly,Fused_1_11_10_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_1_11_10_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_10_Ppty_PosnLgtStdDe,Fused_1_11_10_Ppty_PosnLatStdDe,Fused_1_11_10_Ppty_AgDirStdDe,\
Fused_1_11_10_Ppty_SpdStdDe,Fused_1_11_10_Ppty_AStdDe,Fused_1_11_10_Ppty_FusnSrc,Fused_1_11_10_Ppty_TimeStamp,Fused_1_11_10_Ppty_Age,\
Fused_1_11_10_Ppty_ExistConf,Fused_1_11_10_Ppty_ClassConf,\n";
  if (ss.good()) {
    long long beg = 0, end = 0;
    ss.seekp(0, std::ios::beg);
    beg = ss.tellp();
    ss.seekp(0, std::ios::end);
    end = ss.tellp();
    if ((end - beg) < 5) {
      ss << ssHead;
    }
    LogData(mFusedTargets_1_11, ss, 0, 11);
  }
  ss.close();
}

void OFM_CsvLog_Internal::LogFusedTargets_22(
    ObjGroup2Vccs_11::ObjGroup2Vccs_11 mFusedTargets_12_22) {
  std::ofstream ss("./OFM_FusedTargets22.csv", std::ios::app);
  char ssHead[] =
      "TimeStamp,Fused_12_22_11_Estim_PosnLgt,Fused_12_22_11_Estim_PosnLat,Fused_12_22_11_Estim_Spd,Fused_12_22_11_Estim_VLgt,\
Fused_12_22_11_Estim_VLat,Fused_12_22_11_Estim_A,Fused_12_22_11_Estim_ALgt,Fused_12_22_11_Estim_ALat,Fused_12_22_11_Estim_AgDir,\
Fused_12_22_11_Estim_Crvt,Fused_12_22_11_Info_FuseObjTyp,Fused_12_22_11_Info_FuseObjWidth,Fused_12_22_11_Info_FuseObjLength,\
Fused_12_22_11_Info_FuseObjHei,Fused_12_22_11_Info_IndcrTurn,Fused_12_22_11_Info_IndcrBrkLi,Fused_12_22_11_Info_IndcrHzrdLi,\
Fused_12_22_11_Info_MtnPat,Fused_12_22_11_Info_MtnPatHist,Fused_12_22_11_Info_DstLatFromMidOfLaneSelf,Fused_12_22_11_Ppty_Idn,\
Fused_12_22_11_Ppty_VisnId,Fused_12_22_11_Ppty_Sts,Fused_12_22_11_Ppty_MdlOfMtn,Fused_12_22_11_Ppty_TrfcSceno,Fused_12_22_11_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_12_22_11_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_11_Ppty_CllsnWarnFwdQly,Fused_12_22_11_Ppty_ObjTrfcJamAssiQly,Fused_12_22_11_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_12_22_11_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_11_Ppty_PosnLgtStdDe,Fused_12_22_11_Ppty_PosnLatStdDe,Fused_12_22_11_Ppty_AgDirStdDe,\
Fused_12_22_11_Ppty_SpdStdDe,Fused_12_22_11_Ppty_AStdDe,Fused_12_22_11_Ppty_FusnSrc,Fused_12_22_11_Ppty_TimeStamp,Fused_12_22_11_Ppty_Age,\
Fused_12_22_11_Ppty_ExistConf,Fused_12_22_11_Ppty_ClassConf,\
Fused_12_22_12_Estim_PosnLgt,Fused_12_22_12_Estim_PosnLat,Fused_12_22_12_Estim_Spd,Fused_12_22_12_Estim_VLgt,\
Fused_12_22_12_Estim_VLat,Fused_12_22_12_Estim_A,Fused_12_22_12_Estim_ALgt,Fused_12_22_12_Estim_ALat,Fused_12_22_12_Estim_AgDir,\
Fused_12_22_12_Estim_Crvt,Fused_12_22_12_Info_FuseObjTyp,Fused_12_22_12_Info_FuseObjWidth,Fused_12_22_12_Info_FuseObjLength,\
Fused_12_22_12_Info_FuseObjHei,Fused_12_22_12_Info_IndcrTurn,Fused_12_22_12_Info_IndcrBrkLi,Fused_12_22_12_Info_IndcrHzrdLi,\
Fused_12_22_12_Info_MtnPat,Fused_12_22_12_Info_MtnPatHist,Fused_12_22_12_Info_DstLatFromMidOfLaneSelf,Fused_12_22_12_Ppty_Idn,\
Fused_12_22_12_Ppty_VisnId,Fused_12_22_12_Ppty_Sts,Fused_12_22_12_Ppty_MdlOfMtn,Fused_12_22_12_Ppty_TrfcSceno,Fused_12_22_12_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_12_22_12_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_12_Ppty_CllsnWarnFwdQly,Fused_12_22_12_Ppty_ObjTrfcJamAssiQly,Fused_12_22_12_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_12_22_12_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_12_Ppty_PosnLgtStdDe,Fused_12_22_12_Ppty_PosnLatStdDe,Fused_12_22_12_Ppty_AgDirStdDe,\
Fused_12_22_12_Ppty_SpdStdDe,Fused_12_22_12_Ppty_AStdDe,Fused_12_22_12_Ppty_FusnSrc,Fused_12_22_12_Ppty_TimeStamp,Fused_12_22_12_Ppty_Age,\
Fused_12_22_12_Ppty_ExistConf,Fused_12_22_12_Ppty_ClassConf,\
Fused_12_22_13_Estim_PosnLgt,Fused_12_22_13_Estim_PosnLat,Fused_12_22_13_Estim_Spd,Fused_12_22_13_Estim_VLgt,\
Fused_12_22_13_Estim_VLat,Fused_12_22_13_Estim_A,Fused_12_22_13_Estim_ALgt,Fused_12_22_13_Estim_ALat,Fused_12_22_13_Estim_AgDir,\
Fused_12_22_13_Estim_Crvt,Fused_12_22_13_Info_FuseObjTyp,Fused_12_22_13_Info_FuseObjWidth,Fused_12_22_13_Info_FuseObjLength,\
Fused_12_22_13_Info_FuseObjHei,Fused_12_22_13_Info_IndcrTurn,Fused_12_22_13_Info_IndcrBrkLi,Fused_12_22_13_Info_IndcrHzrdLi,\
Fused_12_22_13_Info_MtnPat,Fused_12_22_13_Info_MtnPatHist,Fused_12_22_13_Info_DstLatFromMidOfLaneSelf,Fused_12_22_13_Ppty_Idn,\
Fused_12_22_13_Ppty_VisnId,Fused_12_22_13_Ppty_Sts,Fused_12_22_13_Ppty_MdlOfMtn,Fused_12_22_13_Ppty_TrfcSceno,Fused_12_22_13_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_12_22_13_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_13_Ppty_CllsnWarnFwdQly,Fused_12_22_13_Ppty_ObjTrfcJamAssiQly,Fused_12_22_13_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_12_22_13_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_13_Ppty_PosnLgtStdDe,Fused_12_22_13_Ppty_PosnLatStdDe,Fused_12_22_13_Ppty_AgDirStdDe,\
Fused_12_22_13_Ppty_SpdStdDe,Fused_12_22_13_Ppty_AStdDe,Fused_12_22_13_Ppty_FusnSrc,Fused_12_22_13_Ppty_TimeStamp,Fused_12_22_13_Ppty_Age,\
Fused_12_22_13_Ppty_ExistConf,Fused_12_22_13_Ppty_ClassConf,\
Fused_12_22_14_Estim_PosnLgt,Fused_12_22_14_Estim_PosnLat,Fused_12_22_14_Estim_Spd,Fused_12_22_14_Estim_VLgt,\
Fused_12_22_14_Estim_VLat,Fused_12_22_14_Estim_A,Fused_12_22_14_Estim_ALgt,Fused_12_22_14_Estim_ALat,Fused_12_22_14_Estim_AgDir,\
Fused_12_22_14_Estim_Crvt,Fused_12_22_14_Info_FuseObjTyp,Fused_12_22_14_Info_FuseObjWidth,Fused_12_22_14_Info_FuseObjLength,\
Fused_12_22_14_Info_FuseObjHei,Fused_12_22_14_Info_IndcrTurn,Fused_12_22_14_Info_IndcrBrkLi,Fused_12_22_14_Info_IndcrHzrdLi,\
Fused_12_22_14_Info_MtnPat,Fused_12_22_14_Info_MtnPatHist,Fused_12_22_14_Info_DstLatFromMidOfLaneSelf,Fused_12_22_14_Ppty_Idn,\
Fused_12_22_14_Ppty_VisnId,Fused_12_22_14_Ppty_Sts,Fused_12_22_14_Ppty_MdlOfMtn,Fused_12_22_14_Ppty_TrfcSceno,Fused_12_22_14_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_12_22_14_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_14_Ppty_CllsnWarnFwdQly,Fused_12_22_14_Ppty_ObjTrfcJamAssiQly,Fused_12_22_14_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_12_22_14_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_14_Ppty_PosnLgtStdDe,Fused_12_22_14_Ppty_PosnLatStdDe,Fused_12_22_14_Ppty_AgDirStdDe,\
Fused_12_22_14_Ppty_SpdStdDe,Fused_12_22_14_Ppty_AStdDe,Fused_12_22_14_Ppty_FusnSrc,Fused_12_22_14_Ppty_TimeStamp,Fused_12_22_14_Ppty_Age,\
Fused_12_22_14_Ppty_ExistConf,Fused_12_22_14_Ppty_ClassConf,\
Fused_12_22_15_Estim_PosnLgt,Fused_12_22_15_Estim_PosnLat,Fused_12_22_15_Estim_Spd,Fused_12_22_15_Estim_VLgt,\
Fused_12_22_15_Estim_VLat,Fused_12_22_15_Estim_A,Fused_12_22_15_Estim_ALgt,Fused_12_22_15_Estim_ALat,Fused_12_22_15_Estim_AgDir,\
Fused_12_22_15_Estim_Crvt,Fused_12_22_15_Info_FuseObjTyp,Fused_12_22_15_Info_FuseObjWidth,Fused_12_22_15_Info_FuseObjLength,\
Fused_12_22_15_Info_FuseObjHei,Fused_12_22_15_Info_IndcrTurn,Fused_12_22_15_Info_IndcrBrkLi,Fused_12_22_15_Info_IndcrHzrdLi,\
Fused_12_22_15_Info_MtnPat,Fused_12_22_15_Info_MtnPatHist,Fused_12_22_15_Info_DstLatFromMidOfLaneSelf,Fused_12_22_15_Ppty_Idn,\
Fused_12_22_15_Ppty_VisnId,Fused_12_22_15_Ppty_Sts,Fused_12_22_15_Ppty_MdlOfMtn,Fused_12_22_15_Ppty_TrfcSceno,Fused_12_22_15_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_12_22_15_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_15_Ppty_CllsnWarnFwdQly,Fused_12_22_15_Ppty_ObjTrfcJamAssiQly,Fused_12_22_15_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_12_22_15_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_15_Ppty_PosnLgtStdDe,Fused_12_22_15_Ppty_PosnLatStdDe,Fused_12_22_15_Ppty_AgDirStdDe,\
Fused_12_22_15_Ppty_SpdStdDe,Fused_12_22_15_Ppty_AStdDe,Fused_12_22_15_Ppty_FusnSrc,Fused_12_22_15_Ppty_TimeStamp,Fused_12_22_15_Ppty_Age,\
Fused_12_22_15_Ppty_ExistConf,Fused_12_22_15_Ppty_ClassConf,\
Fused_12_22_16_Estim_PosnLgt,Fused_12_22_16_Estim_PosnLat,Fused_12_22_16_Estim_Spd,Fused_12_22_16_Estim_VLgt,\
Fused_12_22_16_Estim_VLat,Fused_12_22_16_Estim_A,Fused_12_22_16_Estim_ALgt,Fused_12_22_16_Estim_ALat,Fused_12_22_16_Estim_AgDir,\
Fused_12_22_16_Estim_Crvt,Fused_12_22_16_Info_FuseObjTyp,Fused_12_22_16_Info_FuseObjWidth,Fused_12_22_16_Info_FuseObjLength,\
Fused_12_22_16_Info_FuseObjHei,Fused_12_22_16_Info_IndcrTurn,Fused_12_22_16_Info_IndcrBrkLi,Fused_12_22_16_Info_IndcrHzrdLi,\
Fused_12_22_16_Info_MtnPat,Fused_12_22_16_Info_MtnPatHist,Fused_12_22_16_Info_DstLatFromMidOfLaneSelf,Fused_12_22_16_Ppty_Idn,\
Fused_12_22_16_Ppty_VisnId,Fused_12_22_16_Ppty_Sts,Fused_12_22_16_Ppty_MdlOfMtn,Fused_12_22_16_Ppty_TrfcSceno,Fused_12_22_16_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_12_22_16_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_16_Ppty_CllsnWarnFwdQly,Fused_12_22_16_Ppty_ObjTrfcJamAssiQly,Fused_12_22_16_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_12_22_16_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_16_Ppty_PosnLgtStdDe,Fused_12_22_16_Ppty_PosnLatStdDe,Fused_12_22_16_Ppty_AgDirStdDe,\
Fused_12_22_16_Ppty_SpdStdDe,Fused_12_22_16_Ppty_AStdDe,Fused_12_22_16_Ppty_FusnSrc,Fused_12_22_16_Ppty_TimeStamp,Fused_12_22_16_Ppty_Age,\
Fused_12_22_16_Ppty_ExistConf,Fused_12_22_16_Ppty_ClassConf,\
Fused_12_22_17_Estim_PosnLgt,Fused_12_22_17_Estim_PosnLat,Fused_12_22_17_Estim_Spd,Fused_12_22_17_Estim_VLgt,\
Fused_12_22_17_Estim_VLat,Fused_12_22_17_Estim_A,Fused_12_22_17_Estim_ALgt,Fused_12_22_17_Estim_ALat,Fused_12_22_17_Estim_AgDir,\
Fused_12_22_17_Estim_Crvt,Fused_12_22_17_Info_FuseObjTyp,Fused_12_22_17_Info_FuseObjWidth,Fused_12_22_17_Info_FuseObjLength,\
Fused_12_22_17_Info_FuseObjHei,Fused_12_22_17_Info_IndcrTurn,Fused_12_22_17_Info_IndcrBrkLi,Fused_12_22_17_Info_IndcrHzrdLi,\
Fused_12_22_17_Info_MtnPat,Fused_12_22_17_Info_MtnPatHist,Fused_12_22_17_Info_DstLatFromMidOfLaneSelf,Fused_12_22_17_Ppty_Idn,\
Fused_12_22_17_Ppty_VisnId,Fused_12_22_17_Ppty_Sts,Fused_12_22_17_Ppty_MdlOfMtn,Fused_12_22_17_Ppty_TrfcSceno,Fused_12_22_17_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_12_22_17_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_17_Ppty_CllsnWarnFwdQly,Fused_12_22_17_Ppty_ObjTrfcJamAssiQly,Fused_12_22_17_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_12_22_17_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_17_Ppty_PosnLgtStdDe,Fused_12_22_17_Ppty_PosnLatStdDe,Fused_12_22_17_Ppty_AgDirStdDe,\
Fused_12_22_17_Ppty_SpdStdDe,Fused_12_22_17_Ppty_AStdDe,Fused_12_22_17_Ppty_FusnSrc,Fused_12_22_17_Ppty_TimeStamp,Fused_12_22_17_Ppty_Age,\
Fused_12_22_17_Ppty_ExistConf,Fused_12_22_17_Ppty_ClassConf,\
Fused_12_22_18_Estim_PosnLgt,Fused_12_22_18_Estim_PosnLat,Fused_12_22_18_Estim_Spd,Fused_12_22_18_Estim_VLgt,\
Fused_12_22_18_Estim_VLat,Fused_12_22_18_Estim_A,Fused_12_22_18_Estim_ALgt,Fused_12_22_18_Estim_ALat,Fused_12_22_18_Estim_AgDir,\
Fused_12_22_18_Estim_Crvt,Fused_12_22_18_Info_FuseObjTyp,Fused_12_22_18_Info_FuseObjWidth,Fused_12_22_18_Info_FuseObjLength,\
Fused_12_22_18_Info_FuseObjHei,Fused_12_22_18_Info_IndcrTurn,Fused_12_22_18_Info_IndcrBrkLi,Fused_12_22_18_Info_IndcrHzrdLi,\
Fused_12_22_18_Info_MtnPat,Fused_12_22_18_Info_MtnPatHist,Fused_12_22_18_Info_DstLatFromMidOfLaneSelf,Fused_12_22_18_Ppty_Idn,\
Fused_12_22_18_Ppty_VisnId,Fused_12_22_18_Ppty_Sts,Fused_12_22_18_Ppty_MdlOfMtn,Fused_12_22_18_Ppty_TrfcSceno,Fused_12_22_18_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_12_22_18_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_18_Ppty_CllsnWarnFwdQly,Fused_12_22_18_Ppty_ObjTrfcJamAssiQly,Fused_12_22_18_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_12_22_18_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_18_Ppty_PosnLgtStdDe,Fused_12_22_18_Ppty_PosnLatStdDe,Fused_12_22_18_Ppty_AgDirStdDe,\
Fused_12_22_18_Ppty_SpdStdDe,Fused_12_22_18_Ppty_AStdDe,Fused_12_22_18_Ppty_FusnSrc,Fused_12_22_18_Ppty_TimeStamp,Fused_12_22_18_Ppty_Age,\
Fused_12_22_18_Ppty_ExistConf,Fused_12_22_18_Ppty_ClassConf,\
Fused_12_22_19_Estim_PosnLgt,Fused_12_22_19_Estim_PosnLat,Fused_12_22_19_Estim_Spd,Fused_12_22_19_Estim_VLgt,\
Fused_12_22_19_Estim_VLat,Fused_12_22_19_Estim_A,Fused_12_22_19_Estim_ALgt,Fused_12_22_19_Estim_ALat,Fused_12_22_19_Estim_AgDir,\
Fused_12_22_19_Estim_Crvt,Fused_12_22_19_Info_FuseObjTyp,Fused_12_22_19_Info_FuseObjWidth,Fused_12_22_19_Info_FuseObjLength,\
Fused_12_22_19_Info_FuseObjHei,Fused_12_22_19_Info_IndcrTurn,Fused_12_22_19_Info_IndcrBrkLi,Fused_12_22_19_Info_IndcrHzrdLi,\
Fused_12_22_19_Info_MtnPat,Fused_12_22_19_Info_MtnPatHist,Fused_12_22_19_Info_DstLatFromMidOfLaneSelf,Fused_12_22_19_Ppty_Idn,\
Fused_12_22_19_Ppty_VisnId,Fused_12_22_19_Ppty_Sts,Fused_12_22_19_Ppty_MdlOfMtn,Fused_12_22_19_Ppty_TrfcSceno,Fused_12_22_19_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_12_22_19_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_19_Ppty_CllsnWarnFwdQly,Fused_12_22_19_Ppty_ObjTrfcJamAssiQly,Fused_12_22_19_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_12_22_19_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_19_Ppty_PosnLgtStdDe,Fused_12_22_19_Ppty_PosnLatStdDe,Fused_12_22_19_Ppty_AgDirStdDe,\
Fused_12_22_19_Ppty_SpdStdDe,Fused_12_22_19_Ppty_AStdDe,Fused_12_22_19_Ppty_FusnSrc,Fused_12_22_19_Ppty_TimeStamp,Fused_12_22_19_Ppty_Age,\
Fused_12_22_19_Ppty_ExistConf,Fused_12_22_19_Ppty_ClassConf,\
Fused_12_22_20_Estim_PosnLgt,Fused_12_22_20_Estim_PosnLat,Fused_12_22_20_Estim_Spd,Fused_12_22_20_Estim_VLgt,\
Fused_12_22_20_Estim_VLat,Fused_12_22_20_Estim_A,Fused_12_22_20_Estim_ALgt,Fused_12_22_20_Estim_ALat,Fused_12_22_20_Estim_AgDir,\
Fused_12_22_20_Estim_Crvt,Fused_12_22_20_Info_FuseObjTyp,Fused_12_22_20_Info_FuseObjWidth,Fused_12_22_20_Info_FuseObjLength,\
Fused_12_22_20_Info_FuseObjHei,Fused_12_22_20_Info_IndcrTurn,Fused_12_22_20_Info_IndcrBrkLi,Fused_12_22_20_Info_IndcrHzrdLi,\
Fused_12_22_20_Info_MtnPat,Fused_12_22_20_Info_MtnPatHist,Fused_12_22_20_Info_DstLatFromMidOfLaneSelf,Fused_12_22_20_Ppty_Idn,\
Fused_12_22_20_Ppty_VisnId,Fused_12_22_20_Ppty_Sts,Fused_12_22_20_Ppty_MdlOfMtn,Fused_12_22_20_Ppty_TrfcSceno,Fused_12_22_20_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_12_22_20_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_20_Ppty_CllsnWarnFwdQly,Fused_12_22_20_Ppty_ObjTrfcJamAssiQly,Fused_12_22_20_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_12_22_20_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_20_Ppty_PosnLgtStdDe,Fused_12_22_20_Ppty_PosnLatStdDe,Fused_12_22_20_Ppty_AgDirStdDe,\
Fused_12_22_20_Ppty_SpdStdDe,Fused_12_22_20_Ppty_AStdDe,Fused_12_22_20_Ppty_FusnSrc,Fused_12_22_20_Ppty_TimeStamp,Fused_12_22_20_Ppty_Age,\
Fused_12_22_20_Ppty_ExistConf,Fused_12_22_20_Ppty_ClassConf,\
Fused_12_22_21_Estim_PosnLgt,Fused_12_22_21_Estim_PosnLat,Fused_12_22_21_Estim_Spd,Fused_12_22_21_Estim_VLgt,\
Fused_12_22_21_Estim_VLat,Fused_12_22_21_Estim_A,Fused_12_22_21_Estim_ALgt,Fused_12_22_21_Estim_ALat,Fused_12_22_21_Estim_AgDir,\
Fused_12_22_21_Estim_Crvt,Fused_12_22_21_Info_FuseObjTyp,Fused_12_22_21_Info_FuseObjWidth,Fused_12_22_21_Info_FuseObjLength,\
Fused_12_22_21_Info_FuseObjHei,Fused_12_22_21_Info_IndcrTurn,Fused_12_22_21_Info_IndcrBrkLi,Fused_12_22_21_Info_IndcrHzrdLi,\
Fused_12_22_21_Info_MtnPat,Fused_12_22_21_Info_MtnPatHist,Fused_12_22_21_Info_DstLatFromMidOfLaneSelf,Fused_12_22_21_Ppty_Idn,\
Fused_12_22_21_Ppty_VisnId,Fused_12_22_21_Ppty_Sts,Fused_12_22_21_Ppty_MdlOfMtn,Fused_12_22_21_Ppty_TrfcSceno,Fused_12_22_21_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_12_22_21_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_21_Ppty_CllsnWarnFwdQly,Fused_12_22_21_Ppty_ObjTrfcJamAssiQly,Fused_12_22_21_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_12_22_21_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_21_Ppty_PosnLgtStdDe,Fused_12_22_21_Ppty_PosnLatStdDe,Fused_12_22_21_Ppty_AgDirStdDe,\
Fused_12_22_21_Ppty_SpdStdDe,Fused_12_22_21_Ppty_AStdDe,Fused_12_22_21_Ppty_FusnSrc,Fused_12_22_21_Ppty_TimeStamp,Fused_12_22_21_Ppty_Age,\
Fused_12_22_21_Ppty_ExistConf,Fused_12_22_21_Ppty_ClassConf,\n";
  if (ss.good()) {
    long long beg = 0, end = 0;
    ss.seekp(0, std::ios::beg);
    beg = ss.tellp();
    ss.seekp(0, std::ios::end);
    end = ss.tellp();
    if ((end - beg) < 5) {
      ss << ssHead;
    }
    LogData(mFusedTargets_12_22, ss, 11, 22);
  }
  ss.close();
}

void OFM_CsvLog_Internal::LogFusedTargets_32(
    ObjGroup2Vccs_10::ObjGroup2Vccs_10 mFusedTargets_23_32) {
  std::ofstream ss("./OFM_FusedTargets32.csv", std::ios::app);
  char ssHead[] =
      "TimeStamp,Fused_23_32_22_Estim_PosnLgt,Fused_23_32_22_Estim_PosnLat,Fused_23_32_22_Estim_Spd,Fused_23_32_22_Estim_VLgt,\
Fused_23_32_22_Estim_VLat,Fused_23_32_22_Estim_A,Fused_23_32_22_Estim_ALgt,Fused_23_32_22_Estim_ALat,Fused_23_32_22_Estim_AgDir,\
Fused_23_32_22_Estim_Crvt,Fused_23_32_22_Info_FuseObjTyp,Fused_23_32_22_Info_FuseObjWidth,Fused_23_32_22_Info_FuseObjLength,\
Fused_23_32_22_Info_FuseObjHei,Fused_23_32_22_Info_IndcrTurn,Fused_23_32_22_Info_IndcrBrkLi,Fused_23_32_22_Info_IndcrHzrdLi,\
Fused_23_32_22_Info_MtnPat,Fused_23_32_22_Info_MtnPatHist,Fused_23_32_22_Info_DstLatFromMidOfLaneSelf,Fused_23_32_22_Ppty_Idn,\
Fused_23_32_22_Ppty_VisnId,Fused_23_32_22_Ppty_Sts,Fused_23_32_22_Ppty_MdlOfMtn,Fused_23_32_22_Ppty_TrfcSceno,Fused_23_32_22_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_23_32_22_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_22_Ppty_CllsnWarnFwdQly,Fused_23_32_22_Ppty_ObjTrfcJamAssiQly,Fused_23_32_22_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_23_32_22_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_22_Ppty_PosnLgtStdDe,Fused_23_32_22_Ppty_PosnLatStdDe,Fused_23_32_22_Ppty_AgDirStdDe,\
Fused_23_32_22_Ppty_SpdStdDe,Fused_23_32_22_Ppty_AStdDe,Fused_23_32_22_Ppty_FusnSrc,Fused_23_32_22_Ppty_TimeStamp,Fused_23_32_22_Ppty_Age,\
Fused_23_32_22_Ppty_ExistConf,Fused_23_32_22_Ppty_ClassConf,\
Fused_23_32_23_Estim_PosnLgt,Fused_23_32_23_Estim_PosnLat,Fused_23_32_23_Estim_Spd,Fused_23_32_23_Estim_VLgt,\
Fused_23_32_23_Estim_VLat,Fused_23_32_23_Estim_A,Fused_23_32_23_Estim_ALgt,Fused_23_32_23_Estim_ALat,Fused_23_32_23_Estim_AgDir,\
Fused_23_32_23_Estim_Crvt,Fused_23_32_23_Info_FuseObjTyp,Fused_23_32_23_Info_FuseObjWidth,Fused_23_32_23_Info_FuseObjLength,\
Fused_23_32_23_Info_FuseObjHei,Fused_23_32_23_Info_IndcrTurn,Fused_23_32_23_Info_IndcrBrkLi,Fused_23_32_23_Info_IndcrHzrdLi,\
Fused_23_32_23_Info_MtnPat,Fused_23_32_23_Info_MtnPatHist,Fused_23_32_23_Info_DstLatFromMidOfLaneSelf,Fused_23_32_23_Ppty_Idn,\
Fused_23_32_23_Ppty_VisnId,Fused_23_32_23_Ppty_Sts,Fused_23_32_23_Ppty_MdlOfMtn,Fused_23_32_23_Ppty_TrfcSceno,Fused_23_32_23_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_23_32_23_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_23_Ppty_CllsnWarnFwdQly,Fused_23_32_23_Ppty_ObjTrfcJamAssiQly,Fused_23_32_23_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_23_32_23_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_23_Ppty_PosnLgtStdDe,Fused_23_32_23_Ppty_PosnLatStdDe,Fused_23_32_23_Ppty_AgDirStdDe,\
Fused_23_32_23_Ppty_SpdStdDe,Fused_23_32_23_Ppty_AStdDe,Fused_23_32_23_Ppty_FusnSrc,Fused_23_32_23_Ppty_TimeStamp,Fused_23_32_23_Ppty_Age,\
Fused_23_32_23_Ppty_ExistConf,Fused_23_32_23_Ppty_ClassConf,\
Fused_23_32_24_Estim_PosnLgt,Fused_23_32_24_Estim_PosnLat,Fused_23_32_24_Estim_Spd,Fused_23_32_24_Estim_VLgt,\
Fused_23_32_24_Estim_VLat,Fused_23_32_24_Estim_A,Fused_23_32_24_Estim_ALgt,Fused_23_32_24_Estim_ALat,Fused_23_32_24_Estim_AgDir,\
Fused_23_32_24_Estim_Crvt,Fused_23_32_24_Info_FuseObjTyp,Fused_23_32_24_Info_FuseObjWidth,Fused_23_32_24_Info_FuseObjLength,\
Fused_23_32_24_Info_FuseObjHei,Fused_23_32_24_Info_IndcrTurn,Fused_23_32_24_Info_IndcrBrkLi,Fused_23_32_24_Info_IndcrHzrdLi,\
Fused_23_32_24_Info_MtnPat,Fused_23_32_24_Info_MtnPatHist,Fused_23_32_24_Info_DstLatFromMidOfLaneSelf,Fused_23_32_24_Ppty_Idn,\
Fused_23_32_24_Ppty_VisnId,Fused_23_32_24_Ppty_Sts,Fused_23_32_24_Ppty_MdlOfMtn,Fused_23_32_24_Ppty_TrfcSceno,Fused_23_32_24_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_23_32_24_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_24_Ppty_CllsnWarnFwdQly,Fused_23_32_24_Ppty_ObjTrfcJamAssiQly,Fused_23_32_24_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_23_32_24_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_24_Ppty_PosnLgtStdDe,Fused_23_32_24_Ppty_PosnLatStdDe,Fused_23_32_24_Ppty_AgDirStdDe,\
Fused_23_32_24_Ppty_SpdStdDe,Fused_23_32_24_Ppty_AStdDe,Fused_23_32_24_Ppty_FusnSrc,Fused_23_32_24_Ppty_TimeStamp,Fused_23_32_24_Ppty_Age,\
Fused_23_32_24_Ppty_ExistConf,Fused_23_32_24_Ppty_ClassConf,\
Fused_23_32_25_Estim_PosnLgt,Fused_23_32_25_Estim_PosnLat,Fused_23_32_25_Estim_Spd,Fused_23_32_25_Estim_VLgt,\
Fused_23_32_25_Estim_VLat,Fused_23_32_25_Estim_A,Fused_23_32_25_Estim_ALgt,Fused_23_32_25_Estim_ALat,Fused_23_32_25_Estim_AgDir,\
Fused_23_32_25_Estim_Crvt,Fused_23_32_25_Info_FuseObjTyp,Fused_23_32_25_Info_FuseObjWidth,Fused_23_32_25_Info_FuseObjLength,\
Fused_23_32_25_Info_FuseObjHei,Fused_23_32_25_Info_IndcrTurn,Fused_23_32_25_Info_IndcrBrkLi,Fused_23_32_25_Info_IndcrHzrdLi,\
Fused_23_32_25_Info_MtnPat,Fused_23_32_25_Info_MtnPatHist,Fused_23_32_25_Info_DstLatFromMidOfLaneSelf,Fused_23_32_25_Ppty_Idn,\
Fused_23_32_25_Ppty_VisnId,Fused_23_32_25_Ppty_Sts,Fused_23_32_25_Ppty_MdlOfMtn,Fused_23_32_25_Ppty_TrfcSceno,Fused_23_32_25_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_23_32_25_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_25_Ppty_CllsnWarnFwdQly,Fused_23_32_25_Ppty_ObjTrfcJamAssiQly,Fused_23_32_25_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_23_32_25_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_25_Ppty_PosnLgtStdDe,Fused_23_32_25_Ppty_PosnLatStdDe,Fused_23_32_25_Ppty_AgDirStdDe,\
Fused_23_32_25_Ppty_SpdStdDe,Fused_23_32_25_Ppty_AStdDe,Fused_23_32_25_Ppty_FusnSrc,Fused_23_32_25_Ppty_TimeStamp,Fused_23_32_25_Ppty_Age,\
Fused_23_32_25_Ppty_ExistConf,Fused_23_32_25_Ppty_ClassConf,\
Fused_23_32_26_Estim_PosnLgt,Fused_23_32_26_Estim_PosnLat,Fused_23_32_26_Estim_Spd,Fused_23_32_26_Estim_VLgt,\
Fused_23_32_26_Estim_VLat,Fused_23_32_26_Estim_A,Fused_23_32_26_Estim_ALgt,Fused_23_32_26_Estim_ALat,Fused_23_32_26_Estim_AgDir,\
Fused_23_32_26_Estim_Crvt,Fused_23_32_26_Info_FuseObjTyp,Fused_23_32_26_Info_FuseObjWidth,Fused_23_32_26_Info_FuseObjLength,\
Fused_23_32_26_Info_FuseObjHei,Fused_23_32_26_Info_IndcrTurn,Fused_23_32_26_Info_IndcrBrkLi,Fused_23_32_26_Info_IndcrHzrdLi,\
Fused_23_32_26_Info_MtnPat,Fused_23_32_26_Info_MtnPatHist,Fused_23_32_26_Info_DstLatFromMidOfLaneSelf,Fused_23_32_26_Ppty_Idn,\
Fused_23_32_26_Ppty_VisnId,Fused_23_32_26_Ppty_Sts,Fused_23_32_26_Ppty_MdlOfMtn,Fused_23_32_26_Ppty_TrfcSceno,Fused_23_32_26_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_23_32_26_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_26_Ppty_CllsnWarnFwdQly,Fused_23_32_26_Ppty_ObjTrfcJamAssiQly,Fused_23_32_26_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_23_32_26_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_26_Ppty_PosnLgtStdDe,Fused_23_32_26_Ppty_PosnLatStdDe,Fused_23_32_26_Ppty_AgDirStdDe,\
Fused_23_32_26_Ppty_SpdStdDe,Fused_23_32_26_Ppty_AStdDe,Fused_23_32_26_Ppty_FusnSrc,Fused_23_32_26_Ppty_TimeStamp,Fused_23_32_26_Ppty_Age,\
Fused_23_32_26_Ppty_ExistConf,Fused_23_32_26_Ppty_ClassConf,\
Fused_23_32_27_Estim_PosnLgt,Fused_23_32_27_Estim_PosnLat,Fused_23_32_27_Estim_Spd,Fused_23_32_27_Estim_VLgt,\
Fused_23_32_27_Estim_VLat,Fused_23_32_27_Estim_A,Fused_23_32_27_Estim_ALgt,Fused_23_32_27_Estim_ALat,Fused_23_32_27_Estim_AgDir,\
Fused_23_32_27_Estim_Crvt,Fused_23_32_27_Info_FuseObjTyp,Fused_23_32_27_Info_FuseObjWidth,Fused_23_32_27_Info_FuseObjLength,\
Fused_23_32_27_Info_FuseObjHei,Fused_23_32_27_Info_IndcrTurn,Fused_23_32_27_Info_IndcrBrkLi,Fused_23_32_27_Info_IndcrHzrdLi,\
Fused_23_32_27_Info_MtnPat,Fused_23_32_27_Info_MtnPatHist,Fused_23_32_27_Info_DstLatFromMidOfLaneSelf,Fused_23_32_27_Ppty_Idn,\
Fused_23_32_27_Ppty_VisnId,Fused_23_32_27_Ppty_Sts,Fused_23_32_27_Ppty_MdlOfMtn,Fused_23_32_27_Ppty_TrfcSceno,Fused_23_32_27_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_23_32_27_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_27_Ppty_CllsnWarnFwdQly,Fused_23_32_27_Ppty_ObjTrfcJamAssiQly,Fused_23_32_27_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_23_32_27_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_27_Ppty_PosnLgtStdDe,Fused_23_32_27_Ppty_PosnLatStdDe,Fused_23_32_27_Ppty_AgDirStdDe,\
Fused_23_32_27_Ppty_SpdStdDe,Fused_23_32_27_Ppty_AStdDe,Fused_23_32_27_Ppty_FusnSrc,Fused_23_32_27_Ppty_TimeStamp,Fused_23_32_27_Ppty_Age,\
Fused_23_32_27_Ppty_ExistConf,Fused_23_32_27_Ppty_ClassConf,\
Fused_23_32_28_Estim_PosnLgt,Fused_23_32_28_Estim_PosnLat,Fused_23_32_28_Estim_Spd,Fused_23_32_28_Estim_VLgt,\
Fused_23_32_28_Estim_VLat,Fused_23_32_28_Estim_A,Fused_23_32_28_Estim_ALgt,Fused_23_32_28_Estim_ALat,Fused_23_32_28_Estim_AgDir,\
Fused_23_32_28_Estim_Crvt,Fused_23_32_28_Info_FuseObjTyp,Fused_23_32_28_Info_FuseObjWidth,Fused_23_32_28_Info_FuseObjLength,\
Fused_23_32_28_Info_FuseObjHei,Fused_23_32_28_Info_IndcrTurn,Fused_23_32_28_Info_IndcrBrkLi,Fused_23_32_28_Info_IndcrHzrdLi,\
Fused_23_32_28_Info_MtnPat,Fused_23_32_28_Info_MtnPatHist,Fused_23_32_28_Info_DstLatFromMidOfLaneSelf,Fused_23_32_28_Ppty_Idn,\
Fused_23_32_28_Ppty_VisnId,Fused_23_32_28_Ppty_Sts,Fused_23_32_28_Ppty_MdlOfMtn,Fused_23_32_28_Ppty_TrfcSceno,Fused_23_32_28_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_23_32_28_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_28_Ppty_CllsnWarnFwdQly,Fused_23_32_28_Ppty_ObjTrfcJamAssiQly,Fused_23_32_28_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_23_32_28_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_28_Ppty_PosnLgtStdDe,Fused_23_32_28_Ppty_PosnLatStdDe,Fused_23_32_28_Ppty_AgDirStdDe,\
Fused_23_32_28_Ppty_SpdStdDe,Fused_23_32_28_Ppty_AStdDe,Fused_23_32_28_Ppty_FusnSrc,Fused_23_32_28_Ppty_TimeStamp,Fused_23_32_28_Ppty_Age,\
Fused_23_32_28_Ppty_ExistConf,Fused_23_32_28_Ppty_ClassConf,\
Fused_23_32_29_Estim_PosnLgt,Fused_23_32_29_Estim_PosnLat,Fused_23_32_29_Estim_Spd,Fused_23_32_29_Estim_VLgt,\
Fused_23_32_29_Estim_VLat,Fused_23_32_29_Estim_A,Fused_23_32_29_Estim_ALgt,Fused_23_32_29_Estim_ALat,Fused_23_32_29_Estim_AgDir,\
Fused_23_32_29_Estim_Crvt,Fused_23_32_29_Info_FuseObjTyp,Fused_23_32_29_Info_FuseObjWidth,Fused_23_32_29_Info_FuseObjLength,\
Fused_23_32_29_Info_FuseObjHei,Fused_23_32_29_Info_IndcrTurn,Fused_23_32_29_Info_IndcrBrkLi,Fused_23_32_29_Info_IndcrHzrdLi,\
Fused_23_32_29_Info_MtnPat,Fused_23_32_29_Info_MtnPatHist,Fused_23_32_29_Info_DstLatFromMidOfLaneSelf,Fused_23_32_29_Ppty_Idn,\
Fused_23_32_29_Ppty_VisnId,Fused_23_32_29_Ppty_Sts,Fused_23_32_29_Ppty_MdlOfMtn,Fused_23_32_29_Ppty_TrfcSceno,Fused_23_32_29_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_23_32_29_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_29_Ppty_CllsnWarnFwdQly,Fused_23_32_29_Ppty_ObjTrfcJamAssiQly,Fused_23_32_29_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_23_32_29_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_29_Ppty_PosnLgtStdDe,Fused_23_32_29_Ppty_PosnLatStdDe,Fused_23_32_29_Ppty_AgDirStdDe,\
Fused_23_32_29_Ppty_SpdStdDe,Fused_23_32_29_Ppty_AStdDe,Fused_23_32_29_Ppty_FusnSrc,Fused_23_32_29_Ppty_TimeStamp,Fused_23_32_29_Ppty_Age,\
Fused_23_32_29_Ppty_ExistConf,Fused_23_32_29_Ppty_ClassConf,\
Fused_23_32_30_Estim_PosnLgt,Fused_23_32_30_Estim_PosnLat,Fused_23_32_30_Estim_Spd,Fused_23_32_30_Estim_VLgt,\
Fused_23_32_30_Estim_VLat,Fused_23_32_30_Estim_A,Fused_23_32_30_Estim_ALgt,Fused_23_32_30_Estim_ALat,Fused_23_32_30_Estim_AgDir,\
Fused_23_32_30_Estim_Crvt,Fused_23_32_30_Info_FuseObjTyp,Fused_23_32_30_Info_FuseObjWidth,Fused_23_32_30_Info_FuseObjLength,\
Fused_23_32_30_Info_FuseObjHei,Fused_23_32_30_Info_IndcrTurn,Fused_23_32_30_Info_IndcrBrkLi,Fused_23_32_30_Info_IndcrHzrdLi,\
Fused_23_32_30_Info_MtnPat,Fused_23_32_30_Info_MtnPatHist,Fused_23_32_30_Info_DstLatFromMidOfLaneSelf,Fused_23_32_30_Ppty_Idn,\
Fused_23_32_30_Ppty_VisnId,Fused_23_32_30_Ppty_Sts,Fused_23_32_30_Ppty_MdlOfMtn,Fused_23_32_30_Ppty_TrfcSceno,Fused_23_32_30_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_23_32_30_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_30_Ppty_CllsnWarnFwdQly,Fused_23_32_30_Ppty_ObjTrfcJamAssiQly,Fused_23_32_30_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_23_32_30_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_30_Ppty_PosnLgtStdDe,Fused_23_32_30_Ppty_PosnLatStdDe,Fused_23_32_30_Ppty_AgDirStdDe,\
Fused_23_32_30_Ppty_SpdStdDe,Fused_23_32_30_Ppty_AStdDe,Fused_23_32_30_Ppty_FusnSrc,Fused_23_32_30_Ppty_TimeStamp,Fused_23_32_30_Ppty_Age,\
Fused_23_32_30_Ppty_ExistConf,Fused_23_32_30_Ppty_ClassConf,\
Fused_23_32_31_Estim_PosnLgt,Fused_23_32_31_Estim_PosnLat,Fused_23_32_31_Estim_Spd,Fused_23_32_31_Estim_VLgt,\
Fused_23_32_31_Estim_VLat,Fused_23_32_31_Estim_A,Fused_23_32_31_Estim_ALgt,Fused_23_32_31_Estim_ALat,Fused_23_32_31_Estim_AgDir,\
Fused_23_32_31_Estim_Crvt,Fused_23_32_31_Info_FuseObjTyp,Fused_23_32_31_Info_FuseObjWidth,Fused_23_32_31_Info_FuseObjLength,\
Fused_23_32_31_Info_FuseObjHei,Fused_23_32_31_Info_IndcrTurn,Fused_23_32_31_Info_IndcrBrkLi,Fused_23_32_31_Info_IndcrHzrdLi,\
Fused_23_32_31_Info_MtnPat,Fused_23_32_31_Info_MtnPatHist,Fused_23_32_31_Info_DstLatFromMidOfLaneSelf,Fused_23_32_31_Ppty_Idn,\
Fused_23_32_31_Ppty_VisnId,Fused_23_32_31_Ppty_Sts,Fused_23_32_31_Ppty_MdlOfMtn,Fused_23_32_31_Ppty_TrfcSceno,Fused_23_32_31_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_23_32_31_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_31_Ppty_CllsnWarnFwdQly,Fused_23_32_31_Ppty_ObjTrfcJamAssiQly,Fused_23_32_31_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_23_32_31_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_31_Ppty_PosnLgtStdDe,Fused_23_32_31_Ppty_PosnLatStdDe,Fused_23_32_31_Ppty_AgDirStdDe,\
Fused_23_32_31_Ppty_SpdStdDe,Fused_23_32_31_Ppty_AStdDe,Fused_23_32_31_Ppty_FusnSrc,Fused_23_32_31_Ppty_TimeStamp,Fused_23_32_31_Ppty_Age,\
Fused_23_32_31_Ppty_ExistConf,Fused_23_32_31_Ppty_ClassConf,\n";
  if (ss.good()) {
    long long beg = 0, end = 0;
    ss.seekp(0, std::ios::beg);
    beg = ss.tellp();
    ss.seekp(0, std::ios::end);
    end = ss.tellp();
    if ((end - beg) < 5) {
      ss << ssHead;
    }
    LogData(mFusedTargets_23_32, ss, 22, 32);
  }
  ss.close();
}

void OFM_CsvLog_Internal::LogEgoMotion(
    const JkObjFusn_EgoMotionType egoMotion) {
  std::ofstream ss("./OFM_EgoMotion.csv", std::ios::app);
  char ssHead[] =
      "TimeStamp,EgoMotionData_bIsValid,EgoMotionData_f32Speed,EgoMotionData_"
      "f32Acc,EgoMotionData_f32YawRate,EgoMotionData_f32Age,\n";
  if (ss.good()) {
    long long beg = 0, end = 0;
    ss.seekp(0, std::ios::beg);
    beg = ss.tellp();
    ss.seekp(0, std::ios::end);
    end = ss.tellp();
    if ((end - beg) < 5) {
      ss << ssHead;
    }
    ss << getCurrentSysTime() << "," << std::to_string(egoMotion.bIsValid)
       << "," << std::to_string(egoMotion.f32Speed) << ","
       << std::to_string(egoMotion.f32Acc) << ","
       << std::to_string(egoMotion.f32YawRate) << ","
       << std::to_string(egoMotion.f32Age) << std::endl;
  }
  ss.close();
}

template <class T>
void OFM_CsvLog_Internal::LogData(T mFusedTargets, std::ofstream &ss,
                                  const size_t obj_start,
                                  const size_t obj_end) {
  ss << getCurrentSysTime() << ",";
  for (size_t index = obj_start; index < obj_end; index++) {
    "Fused_23_32_31_Estim_PosnLgt,Fused_23_32_31_Estim_PosnLat,Fused_23_32_31_Estim_Spd,Fused_23_32_31_Estim_VLgt,\
Fused_23_32_31_Estim_VLat,Fused_23_32_31_Estim_A,Fused_23_32_31_Estim_ALgt,Fused_23_32_31_Estim_ALat,Fused_23_32_31_Estim_AgDir,\
Fused_23_32_31_Estim_Crvt,Fused_23_32_31_Info_FuseObjTyp,Fused_23_32_31_Info_FuseObjWidth,Fused_23_32_31_Info_FuseObjLength,\
Fused_23_32_31_Info_FuseObjHei,Fused_23_32_31_Info_IndcrTurn,Fused_23_32_31_Info_IndcrBrkLi,Fused_23_32_31_Info_IndcrHzrdLi,\
Fused_23_32_31_Info_MtnPat,Fused_23_32_31_Info_MtnPatHist,Fused_23_32_31_Info_DstLatFromMidOfLaneSelf,Fused_23_32_31_Ppty_Idn,\
Fused_23_32_31_Ppty_VisnId,Fused_23_32_31_Ppty_Sts,Fused_23_32_31_Ppty_MdlOfMtn,Fused_23_32_31_Ppty_TrfcSceno,Fused_23_32_31_Ppty_CllsnMtgtnByBrkgPrimQly,\
Fused_23_32_31_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_31_Ppty_CllsnWarnFwdQly,Fused_23_32_31_Ppty_ObjTrfcJamAssiQly,Fused_23_32_31_Ppty_DstLatFromMidOfLaneSelfQly,\
Fused_23_32_31_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_31_Ppty_PosnLgtStdDe,Fused_23_32_31_Ppty_PosnLatStdDe,Fused_23_32_31_Ppty_AgDirStdDe,\
Fused_23_32_31_Ppty_SpdStdDe,Fused_23_32_31_Ppty_AStdDe,Fused_23_32_31_Ppty_FusnSrc,Fused_23_32_31_Ppty_TimeStamp,Fused_23_32_31_Ppty_Age,\
Fused_23_32_31_Ppty_ExistConf,Fused_23_32_31_Ppty_ClassConf,\n";
    ss << std::to_string(
              mFusedTargets[index].ObjEstimn2VccGroup_ref.PosnLgt_ref)
       << ","
       << std::to_string(
              mFusedTargets[index].ObjEstimn2VccGroup_ref.PosnLat_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.Spd_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.VLgt_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.VLat_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.A_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.ALgt_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.ALat_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.AgDir_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.Crvt_ref)
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjInfo2VccGroup_ref.FuseObjTyp_ref))
       << ","
       << std::to_string(
              mFusedTargets[index].ObjInfo2VccGroup_ref.FuseObjWidth_ref)
       << ","
       << std::to_string(
              mFusedTargets[index].ObjInfo2VccGroup_ref.FuseObjLength_ref)
       << ","
       << std::to_string(
              mFusedTargets[index].ObjInfo2VccGroup_ref.FuseObjHei_ref)
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjInfo2VccGroup_ref.IndcrTurn_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjInfo2VccGroup_ref.IndcrBrkLi_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjInfo2VccGroup_ref.IndcrHzrdLi_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjInfo2VccGroup_ref.MtnPat_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjInfo2VccGroup_ref.MtnPatHist_ref))
       << ","
       << std::to_string(mFusedTargets[index]
                             .ObjInfo2VccGroup_ref.DstLatFromMidOfLaneSelf_ref)
       << "," << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.Idn_ref)
       << "," << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.VisnId_ref)
       << ","
       << std::to_string(
              static_cast<uint8>(mFusedTargets[index].ObjPpty2Vcc_ref.Sts_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjPpty2Vcc_ref.MdlOfMtn_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjPpty2Vcc_ref.TrfcSceno_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjPpty2Vcc_ref.CllsnMtgtnByBrkgPrimQly_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjPpty2Vcc_ref.CllsnMtgtnByBrkgSecQly_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjPpty2Vcc_ref.CllsnWarnFwdQly_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjPpty2Vcc_ref.ObjTrfcJamAssiQly_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index]
                  .ObjPpty2Vcc_ref.DstLatFromMidOfLaneSelfQly_ref))
       << ","
       << std::to_string(static_cast<uint8>(
              mFusedTargets[index].ObjPpty2Vcc_ref.EmgyLaneKeepAidPosnQly_ref))
       << ","
       << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.PosnLgtStdDe_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.PosnLatStdDe_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.AgDirStdDe_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.SpdStdDe_ref)
       << "," << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.AStdDe_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.FusnSrc_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.TimeStamp_ref)
       << "," << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.Age2_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.ExistConf_ref)
       << ","
       << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.ClassConf_ref)
       << ",";
  }
  ss << std::endl;
}
