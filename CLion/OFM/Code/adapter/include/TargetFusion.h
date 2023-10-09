#ifndef OBJECT_FUSION_MODEL_TARGET_FUSION_H_
#define OBJECT_FUSION_MODEL_TARGET_FUSION_H_

#include "DataReceiver.h"
#include "DataSender.h"

class TargetFusion
{
    public:
        TargetFusion(DataReceiver& dataReceiver, DataSender& dataSender);
		void TargetFusionInit();
        void TargetFusionProcess();
        // ObjGroup2Vccs_11::ObjGroup2Vccs_11& GetObjGroup2Vccs_11()
        // {
        //     return mFusedTargets_1_11_;
        // }
        // ObjGroup2Vccs_11::ObjGroup2Vccs_11& GetObjGroup2Vccs_22()
        // {
        //     return mFusedTargets_12_22_;
        // }
        // ObjGroup2Vccs_10::ObjGroup2Vccs_10& GetObjGroup2Vccs_32()
        // {
        //      return mFusedTargets_23_32_;
        // }

    private:
		DataReceiver& mDataReceiver;
		DataSender& mDataSender;

        template<class T>
        void SOCObjects2MCUObjetcs(T& _mFusedTargets,
                            const typeRaCamObjectVcc& _typeRaCamObjectVcc,
                            const size_t& _obj_start,
                            const size_t& _obj_end);
        void convertFrontRadarToTypeRaCamObjectVcc(DataReceiver& dataReceiver,typeRaCamObjectVcc& _typeRaCamObjectVcc);
		void afterTargetFusionProcess();
};

uint8 GetRadarObjMotionPattern(const uint8& _objMotionPattern);

uint8 GetRadarObjType(const uint8& _objType);

FuseObjTyp::FuseObjTyp GetObjType(const uint16& _objType);

MtnPat::MtnPat GetObjMotionPattern(const uint16& _objMotionPattern);

MtnPatHist::MtnPatHist GetObjMotionPatternHist(const uint16& _objMotionPatternHist);

Sts::Sts GetObjTrackStatus(const uint16& _objObjTrackStatus, bool e2eCheckResult);

MdlOfMtn::MdlOfMtn GetObjMotionModel(const uint16& _objMotionModel);

CllsnMtgtnByBrkgPrimQly::CllsnMtgtnByBrkgPrimQly GetObjBreakingPrimary(const uint16& _objBreakingPrimary);

CllsnMtgtnByBrkgSecQly::CllsnMtgtnByBrkgSecQly GetObjBreakingSecondary(const uint16& _objBreakingSecondary);

CllsnWarnFwdQly::CllsnWarnFwdQly GetObjWarnFWD(const uint16& _objObjWarnFWD);

ObjTrfcJamAssiQly::ObjTrfcJamAssiQly GetObjTrafficJamConfidence(const uint16& _objTrafficJamConfidence);

bool compareObjectsPositionLessThan(const std::pair<size_t,double>& object_1, const std::pair<size_t,double>& object_2);

void ObjectsSort(typeRaCamObjectVcc* object_list, typeRaCamObjectVcc* object_list_sorted);

#endif
