#include "OFM_CsvLog.h"
#include <iostream>
#include <iomanip>
#include "dbg.h"
#include <filesystem>
#include <Utils.h>

extern uint32 count;
using namespace std::string_literals;

OFM_CsvLog_Internal::OFM_CsvLog_Internal() {
    logSts_ = true;
    mTime = getTime();
    std::filesystem::create_directory("./"s + mTime);
    LogPathFrntRdrObjList4D_ = "./"s + mTime + "/OFM_FrntRdrObjList4D.csv";
    LogPathFrntRdrObjList4DSts_ = "./"s + mTime + "/OFM_FrntRdrObjList4DSts.csv";
    LogPathEgoMotion_ = "./"s + mTime + "/OFM_EgoMotion.csv";
    LogPathFrntCamObjList_ = "./"s + mTime + "/OFM_FrntCamObjList.csv";
    LogPathFusedTargets11_ = "./"s + mTime + "/OFM_FusedTargets11.csv";
    LogPathFusedTargets22_ = "./"s + mTime + "/OFM_FusedTargets22.csv";
    LogPathFusedTargets32_ = "./"s + mTime + "/OFM_FusedTargets32.csv";
    LogPathFLCamObjList_ = "./"s + mTime + "/OFM_FLCamObjList.csv";
    LogPathFRCamObjList_ = "./"s + mTime + "/OFM_FRCamObjList.csv";
    LogPathRLCamObjList_ = "./"s + mTime + "/OFM_RLCamObjList.csv";
    LogPathRRCamObjList_ = "./"s + mTime + "/OFM_RRCamObjList.csv";
    dbg(mTime);
    dbg(LogPathFusedTargets32_);
}

std::string OFM_CsvLog_Internal::getTime() {
    const auto now = std::chrono::system_clock::now();
    const std::time_t t_c = std::chrono::system_clock::to_time_t(now);
    std::ostringstream time;
    time << std::put_time(std::localtime(&t_c), "%Y-%m-%d_%H-%M-%S");
    return time.str();
}

void OFM_CsvLog_Internal::GetLogSts(const bool logSts) {
    logSts_ = logSts;
}

using namespace std::string_literals;

std::string generateFrntRdrObjList4D(int index) {
    auto id = std::to_string(index);
    return "FourDRadarObj_"s + id + "_ID,FourDRadarObj_" + id +
           "_ObstacleProbability,FourDRadarObj_" + id + "_VabsX,FourDRadarObj_" + id +
           "_VabsXStd,"
           "FourDRadarObj_" +
           id + "_VabsY,FourDRadarObj_" + id + "_VabsYStd,FourDRadarObj_" + id +
           "_ValidFlag,FourDRadarObj_" + id +
           "_Classification,"
           "FourDRadarObj_" +
           id + "_DynamicProperty,FourDRadarObj_" + id + "_DistXStd,FourDRadarObj_" + id +
           "_DistY,FourDRadarObj_" + id +
           "_DistYStd,"
           "FourDRadarObj_" +
           id + "_DistZ,FourDRadarObj_" + id + "_RCS,FourDRadarObj_" + id +
           "_LifeCycles,FourDRadarObj_" + id +
           "_ProbabilityOfExistence,"
           "FourDRadarObj_" +
           id + "_ObjSNR,FourDRadarObj_" + id + "_ObjXAccRel,FourDRadarObj_" + id +
           "_ObjYAccRel,FourDRadarObj_" + id +
           "_HeadingAngle,"
           "FourDRadarObj_" +
           id + "_TargetClassificationConfidence,FourDRadarObj_" + id +
           "_ObjBoundingBoxHeight,FourDRadarObj_" + id + "_ObjBoundingBoxLength,FourDRadarObj_" +
           id +
           "_ObjBoundingBoxWidth,"
           "FourDRadarObj_" +
           id + "_DistZStd,FourDRadarObj_" + id + "_ObjNearestPtX,FourDRadarObj_" + id +
           "_ObjNearestPtY,FourDRadarObj_" + id +
           "_ObjNearestPtZ,"
           "FourDRadarObj_" +
           id + "_UpdateFlag,FourDRadarObj_" + id + "_Chks,FourDRadarObj_" + id +
           "_DistX,FourDRadarObj_" + id + "_Cntr,";
}

void OFM_CsvLog_Internal::LogFrntRdrObjList4D(const FrntRdrObjList_4D &frntRdrObjList_4D) {
    std::ofstream ss(LogPathFrntRdrObjList4D_, std::ios::app);
    std::string ssHead = "TimeStamp,";
    std::string status =
        "FrntRdrObjSts_HostSpeed,FrntRdrObjSts_HostYawRate,FrntRdrObjSts_StsRdrNrDetn,FrntRdrObjSts_StsRdrNrObj,"
        "FrntRdrObjSts_StsBlkd0bin,FrntRdrObjSts_StsBlkdConf,FrntRdrObjSts_StsChks,FrntRdrObjSts_StsCntr,"
        "FrntRdrObjSts_StsDstbc,FrntRdrObjSts_StsEna,FrntRdrObjSts_StsFaulty,FrntRdrObjSts_StsIfVersMajor,"
        "FrntRdrObjSts_StsIfVersMinor,FrntRdrObjSts_StsLatency,FrntRdrObjSts_StsMisAlign,FrntRdrObjSts_StsMissCom,"
        "FrntRdrObjSts_StsSftyFlt,FrntRdrObjSts_StsTiStampH,FrntRdrObjSts_StsTiStampL,FrntRdrObjSts_TiStampStsGlbTiBas,FrntRdrObjSts_TiStampStsSyncToGatewy,"
        "FrntRdrObjSts_TiStampStsTiLeap,FrntRdrObjSts_TiStampStsTiOut,FrntRdrObjSts_StsWhlSpdCmpFac,";

    ssHead += status;
    for (int i = 0; i < 42; ++i) {
        ssHead += generateFrntRdrObjList4D(i);
    }

    ssHead += "count,\n";
    if (ss.good()) {
        long long beg = 0, end = 0;
        ss.seekp(0, std::ios::beg);
        beg = ss.tellp();
        ss.seekp(0, std::ios::end);
        end = ss.tellp();
        if ((end - beg) < 5) {
            ss << ssHead;
        }

        ss << getCurrentSysTime() << "," << std::to_string(frntRdrObjList_4D.Status.HostSpeed)
           << "," << std::to_string(frntRdrObjList_4D.Status.HostYawRate) << ","
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
           << std::to_string(frntRdrObjList_4D.Status.StsTiStampH) << ","
           << std::to_string(frntRdrObjList_4D.Status.StsTiStampL) << ","
           << std::to_string(frntRdrObjList_4D.Status.TiStampStsGlbTiBas) << ","
           << std::to_string(frntRdrObjList_4D.Status.TiStampStsSyncToGatewy) << ","
           << std::to_string(frntRdrObjList_4D.Status.TiStampStsTiLeap) << ","
           << std::to_string(frntRdrObjList_4D.Status.TiStampStsTiOut) << ","
           << std::to_string(frntRdrObjList_4D.Status.StsWhlSpdCmpFac) << ",";

        for (size_t index = 0; index < 42; index++) {
            ss << std::to_string(frntRdrObjList_4D.Objects[index].ID) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].ObstacleProbability) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].VabsX) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].VabsXStd) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].VabsY) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].VabsYStd) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].ValidFlag) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].Classification) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].DynamicProperty) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].DistXStd) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].DistY) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].DistYStd) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].DistZ) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].RCS) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].LifeCycles) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].ProbabilityOfExistence) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].ObjSNR) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].ObjXAccRel) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].ObjYAccRel) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].HeadingAngle) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].TargetClassificationConfidence)
               << "," << std::to_string(frntRdrObjList_4D.Objects[index].ObjBoundingBoxHeight)
               << "," << std::to_string(frntRdrObjList_4D.Objects[index].ObjBoundingBoxLength)
               << "," << std::to_string(frntRdrObjList_4D.Objects[index].ObjBoundingBoxWidth) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].DistZStd) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].ObjNearestPtX) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].ObjNearestPtY) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].ObjNearestPtZ) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].UpdateFlag) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].Chks) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].DistX) << ","
               << std::to_string(frntRdrObjList_4D.Objects[index].Cntr) << ",";
        }
        ss << std::to_string(count) << ",";

        ss << std::endl;
    }
    ss.close();
}

std::string generateFrntCamObjList(int index) {
    auto id = std::to_string(index);
    return "FrontCamList_"s + id + "_Angle,FrontCamList_" + id + "_AngleStdDev,FrontCamList_" + id +
           "_HeadingAngle,FrontCamList_" + id +
           "_HeadingAngleStdDev,"
           "FrontCamList_" +
           id + "_Height,FrontCamList_" + id + "_HeightStdDev,FrontCamList_" + id +
           "_Width,FrontCamList_" + id +
           "_WidthStdDev,"
           "FrontCamList_" +
           id + "_Length,FrontCamList_" + id + "_LengthStdDev,FrontCamList_" + id +
           "_LgtPos,FrontCamList_" + id +
           "_LgtPosStdDev,"
           "FrontCamList_" +
           id + "_LatPos,FrontCamList_" + id + "_LatPosStdDev,FrontCamList_" + id +
           "_LgtVel,FrontCamList_" + id +
           "_LgtVelStdDev,"
           "FrontCamList_" +
           id + "_LatVel,FrontCamList_" + id + "_LatVelStdDev,FrontCamList_" + id +
           "_LgtAcc,FrontCamList_" + id + "_LgtAccStdDev,FrontCamList_" + id +
           "_LatAcc,FrontCamList_" + id +
           "_LatAccStdDev,"
           "FrontCamList_" +
           id + "_LaneOffsetLeft,FrontCamList_" + id + "_LaneOffsetLeftStdDev,FrontCamList_" + id +
           "_LaneOffsetRight,FrontCamList_" + id +
           "_LaneOffsetRightStdDev,"
           "FrontCamList_" +
           id + "_Id,FrontCamList_" + id + "_Type,FrontCamList_" + id +
           "_ClassConfidence,FrontCamList_" + id +
           "_ExsistConfidence,"
           "FrontCamList_" +
           id + "_Pose,FrontCamList_" + id + "_DetectionHistory,FrontCamList_" + id +
           "_LaneAssignment,FrontCamList_" + id +
           "_NearestSide,"
           "FrontCamList_" +
           id + "_TrackSts,FrontCamList_" + id + "_TurnIndicator,FrontCamList_" + id +
           "_Chks,FrontCamList_" + id +
           "_Cntr,"
           "FrontCamList_" +
           id + "_CmsConfidence,FrontCamList_" + id + "_ImgFrameCtr,FrontCamList_" + id +
           "_TimeStamp,";
}

void OFM_CsvLog_Internal::LogFrntCamObjList(const FrntCamObjList &frntCamObjList) {
    // if not need logging, pass
    // if(!logSts_){
    //     return;
    // }
    // stream
    std::ofstream ss(LogPathFrntCamObjList_, std::ios::app);
    std::string ssHead = "TimeStamp,";
    for (int i = 0; i < 11; ++i) {
        ssHead += generateFrntCamObjList(i);
    }
    ssHead += "count,\n";
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
               << std::to_string(frntCamObjList.Objects[index].HeadingAngleStdDev) << ","
               << std::to_string(frntCamObjList.Objects[index].Height) << ","
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
               << std::to_string(frntCamObjList.Objects[index].LaneOffsetLeftStdDev) << ","
               << std::to_string(frntCamObjList.Objects[index].LaneOffsetRight) << ","
               << std::to_string(frntCamObjList.Objects[index].LaneOffsetRightStdDev) << ","
               << std::to_string(frntCamObjList.Objects[index].Id) << ","
               << std::to_string(frntCamObjList.Objects[index].Type) << ","
               << std::to_string(frntCamObjList.Objects[index].ClassConfidence) << ","
               << std::to_string(frntCamObjList.Objects[index].ExsistConfidence) << ","
               << std::to_string(frntCamObjList.Objects[index].Pose) << ","
               << std::to_string(frntCamObjList.Objects[index].DetectionHistory) << ","
               << std::to_string(frntCamObjList.Objects[index].LaneAssignment) << ","
               << std::to_string(frntCamObjList.Objects[index].NearestSide) << ","
               << std::to_string(frntCamObjList.Objects[index].TrackSts) << ","
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
std::string generateFusedTargets_11(int index) {
    auto id = std::to_string(index);
    return "Fused_1_11_" + id + "_Estim_PosnLgt,Fused_1_11_" + id + "_Estim_PosnLat,Fused_1_11_" +
           id + "_Estim_Spd,Fused_1_11_" + id +
           "_Estim_VLgt,"
           "Fused_1_11_" +
           id + "_Estim_VLat,Fused_1_11_" + id + "_Estim_A,Fused_1_11_" + id +
           "_Estim_ALgt,Fused_1_11_" + id + "_Estim_ALat,Fused_1_11_" + id +
           "_Estim_AgDir,"
           "Fused_1_11_" +
           id + "_Estim_Crvt,Fused_1_11_" + id + "_Info_FuseObjTyp,Fused_1_11_" + id +
           "_Info_FuseObjWidth,Fused_1_11_" + id +
           "_Info_FuseObjLength,"
           "Fused_1_11_" +
           id + "_Info_FuseObjHei,Fused_1_11_" + id + "_Info_IndcrTurn,Fused_1_11_" + id +
           "_Info_IndcrBrkLi,Fused_1_11_" + id +
           "_Info_IndcrHzrdLi,"
           "Fused_1_11_" +
           id + "_Info_MtnPat,Fused_1_11_" + id + "_Info_MtnPatHist,Fused_1_11_" + id +
           "_Info_DstLatFromMidOfLaneSelf,Fused_1_11_" + id +
           "_Ppty_Idn,"
           "Fused_1_11_" +
           id + "_Ppty_VisnId,Fused_1_11_" + id + "_Ppty_Sts,Fused_1_11_" + id +
           "_Ppty_MdlOfMtn,Fused_1_11_" + id + "_Ppty_TrfcSceno,Fused_1_11_" + id +
           "_Ppty_CllsnMtgtnByBrkgPrimQly,"
           "Fused_1_11_" +
           id + "_Ppty_CllsnMtgtnByBrkgSecQly,Fused_1_11_" + id +
           "_Ppty_CllsnWarnFwdQly,Fused_1_11_" + id + "_Ppty_ObjTrfcJamAssiQly,Fused_1_11_" + id +
           "_Ppty_DstLatFromMidOfLaneSelfQly,"
           "Fused_1_11_" +
           id + "_Ppty_EmgyLaneKeepAidPosnQly,Fused_1_11_" + id + "_Ppty_PosnLgtStdDe,Fused_1_11_" +
           id + "_Ppty_PosnLatStdDe,Fused_1_11_" + id +
           "_Ppty_AgDirStdDe,"
           "Fused_1_11_" +
           id + "_Ppty_SpdStdDe,Fused_1_11_" + id + "_Ppty_AStdDe,Fused_1_11_" + id +
           "_Ppty_FusnSrc,Fused_1_11_" + id + "_Ppty_TimeStamp,Fused_1_11_" + id +
           "_Ppty_Age,"
           "Fused_1_11_" +
           id + "_Ppty_ExistConf,Fused_1_11_" + id + "_Ppty_ClassConf,";
}
void OFM_CsvLog_Internal::LogFusedTargets_11(
    ObjGroup2Vccs_11::ObjGroup2Vccs_11 &mFusedTargets_1_11) {
    std::ofstream ss(LogPathFusedTargets11_, std::ios::app);
    std::string ssHead = "TimeStamp,";
    for (int i = 0; i < 11; ++i) {
        ssHead += generateFusedTargets_11(i);
    }
    ssHead += "\n";
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

std::string generateFusedTargets_22(int index) {
    auto id = std::to_string(index);
    return "Fused_12_22_" + id + "_Estim_PosnLgt,Fused_12_22_" + id +
           "_Estim_PosnLat,Fused_12_22_" + id + "_Estim_Spd,Fused_12_22_" + id +
           "_Estim_VLgt,"
           "Fused_12_22_" +
           id + "_Estim_VLat,Fused_12_22_" + id + "_Estim_A,Fused_12_22_" + id +
           "_Estim_ALgt,Fused_12_22_" + id + "_Estim_ALat,Fused_12_22_" + id +
           "_Estim_AgDir,"
           "Fused_12_22_" +
           id + "_Estim_Crvt,Fused_12_22_" + id + "_Info_FuseObjTyp,Fused_12_22_" + id +
           "_Info_FuseObjWidth,Fused_12_22_" + id +
           "_Info_FuseObjLength,"
           "Fused_12_22_" +
           id + "_Info_FuseObjHei,Fused_12_22_" + id + "_Info_IndcrTurn,Fused_12_22_" + id +
           "_Info_IndcrBrkLi,Fused_12_22_" + id +
           "_Info_IndcrHzrdLi,"
           "Fused_12_22_" +
           id + "_Info_MtnPat,Fused_12_22_" + id + "_Info_MtnPatHist,Fused_12_22_" + id +
           "_Info_DstLatFromMidOfLaneSelf,Fused_12_22_" + id +
           "_Ppty_Idn,"
           "Fused_12_22_" +
           id + "_Ppty_VisnId,Fused_12_22_" + id + "_Ppty_Sts,Fused_12_22_" + id +
           "_Ppty_MdlOfMtn,Fused_12_22_" + id + "_Ppty_TrfcSceno,Fused_12_22_" + id +
           "_Ppty_CllsnMtgtnByBrkgPrimQly,"
           "Fused_12_22_" +
           id + "_Ppty_CllsnMtgtnByBrkgSecQly,Fused_12_22_" + id +
           "_Ppty_CllsnWarnFwdQly,Fused_12_22_" + id + "_Ppty_ObjTrfcJamAssiQly,Fused_12_22_" + id +
           "_Ppty_DstLatFromMidOfLaneSelfQly,"
           "Fused_12_22_" +
           id + "_Ppty_EmgyLaneKeepAidPosnQly,Fused_12_22_" + id +
           "_Ppty_PosnLgtStdDe,Fused_12_22_" + id + "_Ppty_PosnLatStdDe,Fused_12_22_" + id +
           "_Ppty_AgDirStdDe,"
           "Fused_12_22_" +
           id + "_Ppty_SpdStdDe,Fused_12_22_" + id + "_Ppty_AStdDe,Fused_12_22_" + id +
           "_Ppty_FusnSrc,Fused_12_22_" + id + "_Ppty_TimeStamp,Fused_12_22_" + id +
           "_Ppty_Age,"
           "Fused_12_22_" +
           id + "_Ppty_ExistConf,Fused_12_22_" + id + "_Ppty_ClassConf,";
}

void OFM_CsvLog_Internal::LogFusedTargets_22(
    ObjGroup2Vccs_11::ObjGroup2Vccs_11 &mFusedTargets_12_22) {
    std::ofstream ss(LogPathFusedTargets22_, std::ios::app);
    std::string ssHead = "TimeStamp,";
    for (int i = 11; i < 22; ++i) {
        ssHead += generateFusedTargets_22(i);
    }
    ssHead += "\n";
    if (ss.good()) {
        long long beg = 0, end = 0;
        ss.seekp(0, std::ios::beg);
        beg = ss.tellp();
        ss.seekp(0, std::ios::end);
        end = ss.tellp();
        if ((end - beg) < 5) {
            ss << ssHead;
        }
        LogData(mFusedTargets_12_22, ss, 0, 11);
    }
    ss.close();
}

std::string generateFusedTargets_32(int index) {
    auto id = std::to_string(index);
    return "Fused_23_32_" + id + "_Estim_PosnLgt,Fused_23_32_" + id +
           "_Estim_PosnLat,Fused_23_32_" + id + "_Estim_Spd,Fused_23_32_" + id +
           "_Estim_VLgt,"
           "Fused_23_32_" +
           id + "_Estim_VLat,Fused_23_32_" + id + "_Estim_A,Fused_23_32_" + id +
           "_Estim_ALgt,Fused_23_32_" + id + "_Estim_ALat,Fused_23_32_" + id +
           "_Estim_AgDir,"
           "Fused_23_32_" +
           id + "_Estim_Crvt,Fused_23_32_" + id + "_Info_FuseObjTyp,Fused_23_32_" + id +
           "_Info_FuseObjWidth,Fused_23_32_" + id +
           "_Info_FuseObjLength,"
           "Fused_23_32_" +
           id + "_Info_FuseObjHei,Fused_23_32_" + id + "_Info_IndcrTurn,Fused_23_32_" + id +
           "_Info_IndcrBrkLi,Fused_23_32_" + id +
           "_Info_IndcrHzrdLi,"
           "Fused_23_32_" +
           id + "_Info_MtnPat,Fused_23_32_" + id + "_Info_MtnPatHist,Fused_23_32_" + id +
           "_Info_DstLatFromMidOfLaneSelf,Fused_23_32_" + id +
           "_Ppty_Idn,"
           "Fused_23_32_" +
           id + "_Ppty_VisnId,Fused_23_32_" + id + "_Ppty_Sts,Fused_23_32_" + id +
           "_Ppty_MdlOfMtn,Fused_23_32_" + id + "_Ppty_TrfcSceno,Fused_23_32_" + id +
           "_Ppty_CllsnMtgtnByBrkgPrimQly,"
           "Fused_23_32_" +
           id + "_Ppty_CllsnMtgtnByBrkgSecQly,Fused_23_32_" + id +
           "_Ppty_CllsnWarnFwdQly,Fused_23_32_" + id + "_Ppty_ObjTrfcJamAssiQly,Fused_23_32_" + id +
           "_Ppty_DstLatFromMidOfLaneSelfQly,"
           "Fused_23_32_" +
           id + "_Ppty_EmgyLaneKeepAidPosnQly,Fused_23_32_" + id +
           "_Ppty_PosnLgtStdDe,Fused_23_32_" + id + "_Ppty_PosnLatStdDe,Fused_23_32_" + id +
           "_Ppty_AgDirStdDe,"
           "Fused_23_32_" +
           id + "_Ppty_SpdStdDe,Fused_23_32_" + id + "_Ppty_AStdDe,Fused_23_32_" + id +
           "_Ppty_FusnSrc,Fused_23_32_" + id + "_Ppty_TimeStamp,Fused_23_32_" + id +
           "_Ppty_Age,"
           "Fused_23_32_" +
           id + "_Ppty_ExistConf,Fused_23_32_" + id + "_Ppty_ClassConf,";
}
void OFM_CsvLog_Internal::LogFusedTargets_32(
    ObjGroup2Vccs_10::ObjGroup2Vccs_10 &mFusedTargets_23_32) {
    // stream
    std::ofstream ss(LogPathFusedTargets32_, std::ios::app);
    std::string ssHead = "TimeStamp,";
    for (int i = 22; i < 32; ++i) {
        ssHead += generateFusedTargets_32(i);
    }
    ssHead += "\n";
    if (ss.good()) {
        long long beg = 0, end = 0;
        ss.seekp(0, std::ios::beg);
        beg = ss.tellp();
        ss.seekp(0, std::ios::end);
        end = ss.tellp();
        if ((end - beg) < 5) {
            ss << ssHead;
        }
        LogData(mFusedTargets_23_32, ss, 0, 10);
    }
    ss.close();
}

void OFM_CsvLog_Internal::LogEgoMotion(const JkObjFusn_EgoMotionType &egoMotion) {
    // if not need logging, pass
    // if(!logSts_){
    //     return;
    // }
    // stream
    std::ofstream ss(LogPathEgoMotion_, std::ios::app);
    char ssHead[] = "TimeStamp,EgoMotionData_bIsValid,EgoMotionData_f32Speed,EgoMotionData_"
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
        ss << getCurrentSysTime() << "," << std::to_string(egoMotion.bIsValid) << ","
           << std::to_string(egoMotion.f32Speed) << "," << std::to_string(egoMotion.f32Acc) << ","
           << std::to_string(egoMotion.f32YawRate) << "," << std::to_string(egoMotion.f32Age)
           << std::endl;
    }
    ss.close();
}

template <class T>
void OFM_CsvLog_Internal::LogData(T mFusedTargets, std::ofstream &ss, const size_t obj_start,
                                  const size_t obj_end) {
    ss << getCurrentSysTime() << ",";
    for (size_t index = obj_start; index < obj_end; index++) {
        ss << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.PosnLgt_ref) << ","
           << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.PosnLat_ref) << ","
           << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.Spd_ref) << ","
           << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.VLgt_ref) << ","
           << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.VLat_ref) << ","
           << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.A_ref) << ","
           << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.ALgt_ref) << ","
           << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.ALat_ref) << ","
           << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.AgDir_ref) << ","
           << std::to_string(mFusedTargets[index].ObjEstimn2VccGroup_ref.Crvt_ref) << ","
           << std::to_string(
                  static_cast<uint8>(mFusedTargets[index].ObjInfo2VccGroup_ref.FuseObjTyp_ref))
           << "," << std::to_string(mFusedTargets[index].ObjInfo2VccGroup_ref.FuseObjWidth_ref)
           << "," << std::to_string(mFusedTargets[index].ObjInfo2VccGroup_ref.FuseObjLength_ref)
           << "," << std::to_string(mFusedTargets[index].ObjInfo2VccGroup_ref.FuseObjHei_ref) << ","
           << std::to_string(
                  static_cast<uint8>(mFusedTargets[index].ObjInfo2VccGroup_ref.IndcrTurn_ref))
           << ","
           << std::to_string(
                  static_cast<uint8>(mFusedTargets[index].ObjInfo2VccGroup_ref.IndcrBrkLi_ref))
           << ","
           << std::to_string(
                  static_cast<uint8>(mFusedTargets[index].ObjInfo2VccGroup_ref.IndcrHzrdLi_ref))
           << ","
           << std::to_string(
                  static_cast<uint8>(mFusedTargets[index].ObjInfo2VccGroup_ref.MtnPat_ref))
           << ","
           << std::to_string(
                  static_cast<uint8>(mFusedTargets[index].ObjInfo2VccGroup_ref.MtnPatHist_ref))
           << ","
           << std::to_string(mFusedTargets[index].ObjInfo2VccGroup_ref.DstLatFromMidOfLaneSelf_ref)
           << "," << std::to_string((uint8)mFusedTargets[index].ObjPpty2Vcc_ref.Idn_ref) << ","
           << std::to_string((uint8)mFusedTargets[index].ObjPpty2Vcc_ref.VisnId_ref) << ","
           << std::to_string(static_cast<uint8>(mFusedTargets[index].ObjPpty2Vcc_ref.Sts_ref))
           << ","
           << std::to_string(static_cast<uint8>(mFusedTargets[index].ObjPpty2Vcc_ref.MdlOfMtn_ref))
           << ","
           << std::to_string(static_cast<uint8>(mFusedTargets[index].ObjPpty2Vcc_ref.TrfcSceno_ref))
           << ","
           << std::to_string(static_cast<uint8>(
                  mFusedTargets[index].ObjPpty2Vcc_ref.CllsnMtgtnByBrkgPrimQly_ref))
           << ","
           << std::to_string(static_cast<uint8>(
                  mFusedTargets[index].ObjPpty2Vcc_ref.CllsnMtgtnByBrkgSecQly_ref))
           << ","
           << std::to_string(
                  static_cast<uint8>(mFusedTargets[index].ObjPpty2Vcc_ref.CllsnWarnFwdQly_ref))
           << ","
           << std::to_string(
                  static_cast<uint8>(mFusedTargets[index].ObjPpty2Vcc_ref.ObjTrfcJamAssiQly_ref))
           << ","
           << std::to_string(static_cast<uint8>(
                  mFusedTargets[index].ObjPpty2Vcc_ref.DstLatFromMidOfLaneSelfQly_ref))
           << ","
           << std::to_string(static_cast<uint8>(
                  mFusedTargets[index].ObjPpty2Vcc_ref.EmgyLaneKeepAidPosnQly_ref))
           << "," << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.PosnLgtStdDe_ref) << ","
           << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.PosnLatStdDe_ref) << ","
           << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.AgDirStdDe_ref) << ","
           << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.SpdStdDe_ref) << ","
           << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.AStdDe_ref) << ","
           << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.FusnSrc_ref) << ","
           << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.TimeStamp_ref) << ","
           << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.Age2_ref) << ","
           << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.ExistConf_ref) << ","
           << std::to_string(mFusedTargets[index].ObjPpty2Vcc_ref.ClassConf_ref) << ",";
    }
    ss << std::endl;
}

// clang-format off
std::string generateAroundCamObjList(int index) {
    auto id = std::to_string(index);
    return "FrontCamList_" + id + "_Angle,FrontCamList_" + id + "_AngleStdDev,FrontCamList_" + id + "_HeadingAngle,FrontCamList_" + id + "_HeadingAngleStdDev,"
        "FrontCamList_" + id + "_Height,FrontCamList_" + id + "_HeightStdDev,FrontCamList_" + id + "_Width,FrontCamList_" + id + "_WidthStdDev,"
        "FrontCamList_" + id + "_Length,FrontCamList_" + id + "_LengthStdDev,FrontCamList_" + id + "_LgtPos,FrontCamList_" + id + "_LgtPosStdDev,"
        "FrontCamList_" + id + "_LatPos,FrontCamList_" + id + "_LatPosStdDev,FrontCamList_" + id + "_LgtVel,FrontCamList_" + id + "_LgtVelStdDev,"
        "FrontCamList_" + id + "_LatVel,FrontCamList_" + id + "_LatVelStdDev,FrontCamList_" + id + "_LgtAcc,FrontCamList_" + id + "_LgtAccStdDev,FrontCamList_" + id + "_LatAcc,FrontCamList_" + id + "_LatAccStdDev,"
        "FrontCamList_" + id + "_LaneOffsetLeft,FrontCamList_" + id + "_LaneOffsetLeftStdDev,FrontCamList_" + id + "_LaneOffsetRight,FrontCamList_" + id + "_LaneOffsetRightStdDev,"
        "FrontCamList_" + id + "_Id,FrontCamList_" + id + "_Type,FrontCamList_" + id + "_ClassConfidence,FrontCamList_" + id + "_ExsistConfidence,"
        "FrontCamList_" + id + "_Pose,FrontCamList_" + id + "_DetectionHistory,FrontCamList_" + id + "_LaneAssignment,FrontCamList_" + id + "_NearestSide,"
        "FrontCamList_" + id + "_TrackSts,FrontCamList_" + id + "_TurnIndicator,FrontCamList_" + id + "_Chks,FrontCamList_" + id + "_Cntr,"
        "FrontCamList_" + id + "_CmsConfidence,FrontCamList_" + id + "_ImgFrameCtr,FrontCamList_" + id + "_TimeStamp,";
}
// clang-format on

void doWrite(std::ofstream &ss, const AroundCamObjList &frntCamObjList) {
    std::string ssHead = "TimeStamp,";
    std::string status =
        "AroundCamObjSts_Blockage,AroundCamObjSts_Calibration,AroundCamObjSts_Fault,";
    ssHead += status;
    for (int i = 0; i < 10; ++i) {
        ssHead += generateAroundCamObjList(i);
    }
    ssHead += "count,\n";
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
        ss << std::to_string(frntCamObjList.Status.Blockage) << ",";
        ss << std::to_string(frntCamObjList.Status.Calibration) << ",";
        ss << std::to_string(frntCamObjList.Status.Fault) << ",";
        for (size_t index = 0; index < 10; index++) {
            ss << std::to_string(frntCamObjList.Objects[index].Angle) << ","
               << std::to_string(frntCamObjList.Objects[index].AngleStdDev) << ","
               << std::to_string(frntCamObjList.Objects[index].HeadingAngle) << ","
               << std::to_string(frntCamObjList.Objects[index].HeadingAngleStdDev) << ","
               << std::to_string(frntCamObjList.Objects[index].Height) << ","
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
               << std::to_string(frntCamObjList.Objects[index].LaneOffsetLeftStdDev) << ","
               << std::to_string(frntCamObjList.Objects[index].LaneOffsetRight) << ","
               << std::to_string(frntCamObjList.Objects[index].LaneOffsetRightStdDev) << ","
               << std::to_string(frntCamObjList.Objects[index].Id) << ","
               << std::to_string(frntCamObjList.Objects[index].Type) << ","
               << std::to_string(frntCamObjList.Objects[index].ClassConfidence) << ","
               << std::to_string(frntCamObjList.Objects[index].ExsistConfidence) << ","
               << std::to_string(frntCamObjList.Objects[index].Pose) << ","
               << std::to_string(frntCamObjList.Objects[index].DetectionHistory) << ","
               << std::to_string(frntCamObjList.Objects[index].LaneAssignment) << ","
               << std::to_string(frntCamObjList.Objects[index].NearestSide) << ","
               << std::to_string(frntCamObjList.Objects[index].TrackSts) << ","
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

void OFM_CsvLog_Internal::LogFLCamObjList(const AroundCamObjList &flCamObjList) {
    std::ofstream ss(LogPathFLCamObjList_, std::ios::app);
    doWrite(ss, flCamObjList);
}

void OFM_CsvLog_Internal::LogFRCamObjList(const AroundCamObjList &frCamObjList) {
    std::ofstream ss(LogPathFRCamObjList_, std::ios::app);
    doWrite(ss, frCamObjList);
}

void OFM_CsvLog_Internal::LogRLCamObjList(const AroundCamObjList &rlCamObjList) {
    std::ofstream ss(LogPathRLCamObjList_, std::ios::app);
    doWrite(ss, rlCamObjList);
}

void OFM_CsvLog_Internal::LogRRCamObjList(const AroundCamObjList &rrCamObjList) {
    std::ofstream ss(LogPathRRCamObjList_, std::ios::app);
    doWrite(ss, rrCamObjList);
}
