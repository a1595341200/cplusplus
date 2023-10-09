/*
 * @Description:
 * @Author: yu.chang, yao.xie
 * @Date: 2023/5/10 10:23
 */
#include "TargetFusion.h"
#include <iostream>
#include "JkRACAM_ObjListConstants.h"
#include "ObjFusnObjListToVolvoSnsrFusnConvert_Cfg.h"
#include "sfObjectFusionMpfConverter_func.h"
#include "sfObjectFusionMpf_func.h"

extern uint32 count;

TargetFusion::TargetFusion(DataReceiver &dataReceiver, DataSender &dataSender)
	: mDataReceiver(dataReceiver), mDataSender(dataSender) {}

/*
 *  SOC sensor mode define:
 *  front center radar(0x00000002u):  0000 0000 0000 0000 0000 0000 0000 0010 |
 *  front left camera(0x00000200u):   0000 0000 0000 0000 0000 0010 0000 0000 |
 *  front center camera(0x00000400u): 0000 0000 0000 0000 0000 0100 0000 0000 |
 *  front right camera(0x00000800u):  0000 0000 0000 0000 0000 1000 0000 0000 |
 * 	rear left camera(0x00001000u):	  0000 0000 0000 0000 0001 0000 0000
 * 0000 | rear right camera(0x00002000u):   0000 0000 0000 0000 0010 0000 0000
 * 0000 | = SOC sensor mode(15874u):        0000 0000 0000 0000 0011 1110 0000
 * 0010
 */

void TargetFusion::TargetFusionInit() {
  // init config parameters
  sfObjectFusionMpf_Init_wrapper(15874U,     // sensor mode
                                 40.0F,      // match gate
                                 0.1F,       // PedestrianVarianceInX
                                 0.01F,      // PedestrianVarianceInY
                                 0.1F,       // VehicleVarianceInX
                                 0.1F,       // VehicleVarianceInY
                                 true,       // UseTrackMerge
                                 1.0F,       // AdditionalQonDiagonal
                                 true,       // OutputIsOverground
                                 true,       // UseCoasting
                                 2U,         // CoastedSensor
                                 (-0.017F),  // DynCalPrmForAxleDstReToVehFrnt
                                 0.0F,       // DynCalPrmForCamLongDistToVehFrnt
                                 (-0.017F),  // DynCalPrmForCamLatDistToVehFrnt
                                 ((uint8)0U));  // ASDMVehicleType
  // init output wrapper
  sfObjectFusionMpfConverter_Init_wrapper();
}

template <class T>
void TargetFusion::SOCObjects2MCUObjetcs(
    T& _mFusedTargets, const typeRaCamObjectVcc& _typeRaCamObjectVcc,
    const size_t& _obj_start, const size_t& _obj_end) {
  if (_obj_start >= _obj_end) return;
  // log_.LogInfo() << "SOCObjects2MCUObjetcs _obj_start:"<< _obj_start <<
  // "_obj_end\n" <<_obj_end;
  size_t j{0};
  for (size_t i = _obj_start; i < _obj_end; i++) {
    j = i - _obj_start;
    _mFusedTargets[j].ObjEstimn2VccGroup_ref.PosnLgt_ref =
        _typeRaCamObjectVcc.Objects[i].Estimate.longPosition;
    _mFusedTargets[j].ObjEstimn2VccGroup_ref.PosnLat_ref =
        _typeRaCamObjectVcc.Objects[i].Estimate.latPosition;
    _mFusedTargets[j].ObjEstimn2VccGroup_ref.Spd_ref =
        _typeRaCamObjectVcc.Objects[i].Estimate.speed;
    _mFusedTargets[j].ObjEstimn2VccGroup_ref.VLgt_ref =
        _typeRaCamObjectVcc.Objects[i].Estimate.longVelocity;
    _mFusedTargets[j].ObjEstimn2VccGroup_ref.VLat_ref =
        _typeRaCamObjectVcc.Objects[i].Estimate.latVelocity;
    _mFusedTargets[j].ObjEstimn2VccGroup_ref.A_ref =
        _typeRaCamObjectVcc.Objects[i].Estimate.acceleration;
    _mFusedTargets[j].ObjEstimn2VccGroup_ref.ALgt_ref =
        _typeRaCamObjectVcc.Objects[i].Estimate.longAcceleration;
    _mFusedTargets[j].ObjEstimn2VccGroup_ref.ALat_ref =
        _typeRaCamObjectVcc.Objects[i].Estimate.latAcceleration;
    _mFusedTargets[j].ObjEstimn2VccGroup_ref.AgDir_ref =
        _typeRaCamObjectVcc.Objects[i].Estimate.headingAngle;
    _mFusedTargets[j].ObjEstimn2VccGroup_ref.Crvt_ref =
        _typeRaCamObjectVcc.Objects[i].Estimate.curvature;
    _mFusedTargets[j].ObjInfo2VccGroup_ref.FuseObjTyp_ref =
        GetObjType(_typeRaCamObjectVcc.Objects[i].Information.type);

    // if(_mFusedTargets[j].ObjInfo2VccGroup_ref.FuseObjTyp_ref ==
    // FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_UkwnClass) {
    // 	if(_mFusedTargets[j].ObjEstimn2VccGroup_ref.PosnLgt_ref <= 30.0 &&
    // 	   (_mFusedTargets[j].ObjEstimn2VccGroup_ref.PosnLat_ref <= 2.0 ||
    // 	   _mFusedTargets[j].ObjEstimn2VccGroup_ref.PosnLat_ref >= -2.0)
    // 	){
    // 		_mFusedTargets[j].ObjInfo2VccGroup_ref.FuseObjTyp_ref =
    // FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_Car;
    // 	}
    // } //add leo work around

    _mFusedTargets[j].ObjInfo2VccGroup_ref.FuseObjWidth_ref =
        _typeRaCamObjectVcc.Objects[i].Information.width;
    // @todo the interface has no object length now, set to default
    _mFusedTargets[j].ObjInfo2VccGroup_ref.FuseObjLength_ref = 1.5;
    //_mFusedTargets[j].ObjInfo2VccGroup_ref.FuseObjHei_ref =
    //_typeRaCamObjectVcc.Objects[i].Information.height;
    // TODO radar height bug, set default 1.5 for demo show
    _mFusedTargets[j].ObjInfo2VccGroup_ref.FuseObjHei_ref = 1.5;
    // set to default 3
    _mFusedTargets[j].ObjInfo2VccGroup_ref.IndcrTurn_ref =
        IndcrTurn::IndcrTurn::IndcrTurn1Vcc_Ukwn;
    // set to default 0
    _mFusedTargets[j].ObjInfo2VccGroup_ref.IndcrBrkLi_ref =
        IndcrBrkLi::IndcrBrkLi::LiSts1Vcc_Ukwn;
    // set to default 0
    _mFusedTargets[j].ObjInfo2VccGroup_ref.IndcrHzrdLi_ref =
        IndcrHzrdLi::IndcrHzrdLi::LiSts1Vcc_Ukwn;
    _mFusedTargets[j].ObjInfo2VccGroup_ref.MtnPat_ref = GetObjMotionPattern(
        _typeRaCamObjectVcc.Objects[i].Information.motionPatternCurrent);
    _mFusedTargets[j].ObjInfo2VccGroup_ref.MtnPatHist_ref =
        GetObjMotionPatternHist(
            _typeRaCamObjectVcc.Objects[i].Information.motionPatternHistory);

    // if ((_mFusedTargets[j].ObjInfo2VccGroup_ref.MtnPatHist_ref ==
    // MtnPatHist::MtnPatHist::ObjMtnPatHist1Vcc_Ukwn) &&
    // 	(_mFusedTargets[j].ObjInfo2VccGroup_ref.MtnPat_ref !=
    // MtnPat::MtnPat::ObjMtnPat1Vcc_Ukwn) &&
    // 	(_mFusedTargets[j].ObjInfo2VccGroup_ref.MtnPat_ref !=
    // MtnPat::MtnPat::ObjMtnPat1Vcc_MovgToSelf)) {
    // 	_mFusedTargets[j].ObjInfo2VccGroup_ref.MtnPatHist_ref =
    // MtnPatHist::MtnPatHist::ObjMtnPatHist1Vcc_PrevMovmtFromSelf; }  //add leo
    // work around

    // set to default 0
    _mFusedTargets[j].ObjInfo2VccGroup_ref.DstLatFromMidOfLaneSelf_ref = 0.0;
    _mFusedTargets[j].ObjPpty2Vcc_ref.Idn_ref =
        _typeRaCamObjectVcc.Objects[i].Properties.id;
    _mFusedTargets[j].ObjPpty2Vcc_ref.VisnId_ref =
        _typeRaCamObjectVcc.Objects[i].Properties.visionId;
	// DX11-45376 DX11-45380
    _mFusedTargets[j].ObjPpty2Vcc_ref.Sts_ref = GetObjTrackStatus(
        _typeRaCamObjectVcc.Objects[i].Properties.trackStatus, mDataReceiver.get_JkObjFusn_EgoMotionType().bE2eIsValid);
    _mFusedTargets[j].ObjPpty2Vcc_ref.MdlOfMtn_ref = GetObjMotionModel(
        _typeRaCamObjectVcc.Objects[i].Properties.motionModel);
    // set to default 0
    _mFusedTargets[j].ObjPpty2Vcc_ref.TrfcSceno_ref =
        TrfcSceno::TrfcSceno::ObjPpty1VccTrfcSceno0_None;
    _mFusedTargets[j].ObjPpty2Vcc_ref.CllsnMtgtnByBrkgPrimQly_ref =
        GetObjBreakingPrimary(_typeRaCamObjectVcc.Objects[i].Properties.cmbbPrimaryConfidence);
    _mFusedTargets[j].ObjPpty2Vcc_ref.CllsnMtgtnByBrkgSecQly_ref =
        GetObjBreakingSecondary(
            _typeRaCamObjectVcc.Objects[i].Properties.cmbbSecondaryConfidence);
    _mFusedTargets[j].ObjPpty2Vcc_ref.CllsnWarnFwdQly_ref =
        GetObjWarnFWD(_typeRaCamObjectVcc.Objects[i].Properties.fcwConfidence);
    _mFusedTargets[j].ObjPpty2Vcc_ref.ObjTrfcJamAssiQly_ref =
        GetObjTrafficJamConfidence(
            _typeRaCamObjectVcc.Objects[i].Properties.tjaConfidence);
    // set to default 0
    _mFusedTargets[j].ObjPpty2Vcc_ref.DstLatFromMidOfLaneSelfQly_ref =
        DstLatFromMidOfLaneSelfQly::DstLatFromMidOfLaneSelfQly::
            Relbl3Vcc_NotRelbl;
    // @todo the interface has no EmgyLaneKeepAidPosnQly_ref now, set to default
    _mFusedTargets[j].ObjPpty2Vcc_ref.EmgyLaneKeepAidPosnQly_ref =
        EmgyLaneKeepAidPosnQly::EmgyLaneKeepAidPosnQly::
            ObjPpty1VccEmgyLaneKeepAidPosnQly0_HighRelbl;
    _mFusedTargets[j].ObjPpty2Vcc_ref.PosnLgtStdDe_ref =
        _typeRaCamObjectVcc.Objects[i].Properties.longPositionStdDev;
    _mFusedTargets[j].ObjPpty2Vcc_ref.PosnLatStdDe_ref =
        _typeRaCamObjectVcc.Objects[i].Properties.latPositionStdDev;
    _mFusedTargets[j].ObjPpty2Vcc_ref.AgDirStdDe_ref =
        _typeRaCamObjectVcc.Objects[i].Properties.headingAngleStdDev;
    _mFusedTargets[j].ObjPpty2Vcc_ref.SpdStdDe_ref =
        _typeRaCamObjectVcc.Objects[i].Properties.speedStdDev;
    _mFusedTargets[j].ObjPpty2Vcc_ref.AStdDe_ref =
        _typeRaCamObjectVcc.Objects[i].Properties.accelerationStdDev;

    _mFusedTargets[j].ObjPpty2Vcc_ref.FusnSrc_ref =
        _typeRaCamObjectVcc.Objects[i].Properties.fusionSource;

    switch (_mFusedTargets[j].ObjPpty2Vcc_ref.FusnSrc_ref) {
      case 0 /* no sensor */:
        /* adapter to send to MCU */
        _mFusedTargets[j].ObjPpty2Vcc_ref.FusnSrc_ref = 3;
        break;
      case 1 /* radar only */:
        /* adapter to send to MCU */
        _mFusedTargets[j].ObjPpty2Vcc_ref.FusnSrc_ref = 1;
        break;
      case 2 /* camera only */:
        /* adapter to send to MCU */
        _mFusedTargets[j].ObjPpty2Vcc_ref.FusnSrc_ref = 0;
        break;
      case 3 /* fusion objects  */:
        /* adapter to send to MCU */
        _mFusedTargets[j].ObjPpty2Vcc_ref.FusnSrc_ref = 2;
        break;

      default:
        _mFusedTargets[j].ObjPpty2Vcc_ref.FusnSrc_ref = 0xFF;
        break;
    }

    // @todo the interface has no TimeStamp(etc..) now, set to default
    _mFusedTargets[j].ObjPpty2Vcc_ref.TimeStamp_ref = count;
    _mFusedTargets[j].ObjPpty2Vcc_ref.Age2_ref = 0;
    _mFusedTargets[j].ObjPpty2Vcc_ref.ExistConf_ref = 0;
    _mFusedTargets[j].ObjPpty2Vcc_ref.ClassConf_ref = 0;
    // if(i < 1) {
    // 	log_.LogInfo() << "OFM output begin:"
    // 				   << " index : "<< i
    // 	               << " PosnLat_ref :
    // "<<_mFusedTargets[j].ObjEstimn2VccGroup_ref.PosnLat_ref
    // 		           << " PosnLgt_ref :
    // "<<_mFusedTargets[j].ObjEstimn2VccGroup_ref.PosnLgt_ref
    // 				   << " Spd_ref :
    // "<<_mFusedTargets[j].ObjEstimn2VccGroup_ref.Spd_ref
    // 		           << " AgDir_ref :
    // "<<_mFusedTargets[j].ObjEstimn2VccGroup_ref.AgDir_ref
    // 				   << " Idn_ref :
    // "<<_mFusedTargets[j].ObjPpty2Vcc_ref.Idn_ref
    // 				   << " VisnId_ref :
    // "<<_mFusedTargets[j].ObjPpty2Vcc_ref.VisnId_ref;
    // 	 			//    << " VisnId_ref :
    // "<<_mFusedTargets[j].ObjPpty2Vcc_ref;

    // }
  }
}

void TargetFusion::TargetFusionProcess() {
  // sensor inputs define
  FrntCamObjList frntCamObjList;
  AroundCamObjList aroundCamObjList[4];
  FrntRdrObjList_4D frntRdrObjList_4D;
  JkObjFusn_EgoMotionType egoMotion;

  // fused objetts and error buffer outputs
  JkObjFusn_ObjectListType fusnObjLists_Output;
  JkObjFusn_ErrorBufferType errorBuffer;
  typeRaCamObjectVcc typeRaCamObjectVcc, typeRaCamObjectVccTmp;

  // get sensor inputs from someip
  frntCamObjList = mDataReceiver.get_FrntCamObjList();
  aroundCamObjList[0] = mDataReceiver.get_AroundCamObjListFL();
  aroundCamObjList[1] = mDataReceiver.get_AroundCamObjListFR();
  aroundCamObjList[2] = mDataReceiver.get_AroundCamObjListRL();
  aroundCamObjList[3] = mDataReceiver.get_AroundCamObjListRR();
  frntRdrObjList_4D = mDataReceiver.get_FrntRdrObjList_4D();
  egoMotion = mDataReceiver.get_JkObjFusn_EgoMotionType();

  //  interface
  sfObjectFusionMpf_Outputs_wrapper(
      &frntRdrObjList_4D, &frntCamObjList, &aroundCamObjList[0],
      &aroundCamObjList[1], &aroundCamObjList[2], &aroundCamObjList[3],
      &egoMotion, 0.04, &fusnObjLists_Output, &errorBuffer);

  // // convert fused objects to outputs
  ObjFusnObjListToVolvoSnsrFusnConvert(&fusnObjLists_Output, &egoMotion,
                                       &typeRaCamObjectVcc, 0);
  // ObjectsSort(&typeRaCamObjectVccTmp, &typeRaCamObjectVcc);

  // convertFrontRadarToTypeRaCamObjectVcc(mDataReceiver,typeRaCamObjectVcc);

  // TODO (changyu) can be put in class member
  ObjGroup2Vccs_11::ObjGroup2Vccs_11 mFusedTargets_1_11;
  ObjGroup2Vccs_11::ObjGroup2Vccs_11 mFusedTargets_12_22;
  ObjGroup2Vccs_10::ObjGroup2Vccs_10 mFusedTargets_23_32;

  // convert SOC fused objects to MCU
  /****this is bug>>>>> **/
  SOCObjects2MCUObjetcs(mFusedTargets_1_11, typeRaCamObjectVcc, 0, 11);
  SOCObjects2MCUObjetcs(mFusedTargets_12_22, typeRaCamObjectVcc, 11, 22);
  SOCObjects2MCUObjetcs(mFusedTargets_23_32, typeRaCamObjectVcc, 22, 32);
  mDataSender.set_FusedTargets_1_11(mFusedTargets_1_11);
  mDataSender.set_FusedTargets_12_22(mFusedTargets_12_22);
  mDataSender.set_FusedTargets_23_32(mFusedTargets_23_32);
  afterTargetFusionProcess();
}

void TargetFusion::afterTargetFusionProcess() {
	if(!mDataReceiver.get_JkObjFusn_EgoMotionType().bE2eIsValid) {
	}
}

void TargetFusion::convertFrontRadarToTypeRaCamObjectVcc(
    DataReceiver& dataReceiver, typeRaCamObjectVcc& _typeRaCamObjectVcc) {
  FrntRdrObjList_4D frntRdrObjList_4D = dataReceiver.get_FrntRdrObjList_4D();
  JkObjFusn_EgoMotionType egoMotion =
      dataReceiver.get_JkObjFusn_EgoMotionType();
  const float vehicle_speed = egoMotion.f32Speed;
  const float vehicle_yawrate = egoMotion.f32YawRate;
  for (size_t i = 0; i < 30; i++) {
    const float f32posX = frntRdrObjList_4D.Objects[i].DistX;
    const float f32posY = frntRdrObjList_4D.Objects[i].DistY;
    const float f32VelX = frntRdrObjList_4D.Objects[i].VabsX;
    const float f32VelY = frntRdrObjList_4D.Objects[i].VabsY;
    const float obj_abs_vel_x =
        (-1.0F * vehicle_yawrate * f32posY + f32VelX) + vehicle_speed;
    const float obj_abs_vel_y = (vehicle_yawrate * f32posX + f32VelY);
    auto& output_obj = _typeRaCamObjectVcc.Objects[i];
    // Estimate 11 signals:
    output_obj.Estimate.acceleration = 0.0F;
    output_obj.Estimate.curvature = 0.0F;
    output_obj.Estimate.headingAngle =
        frntRdrObjList_4D.Objects[i].HeadingAngle;
    output_obj.Estimate.latAcceleration = 0.0F;
    output_obj.Estimate.latPosition = f32posY;
    output_obj.Estimate.latVelocity = obj_abs_vel_y;
    output_obj.Estimate.longAcceleration = 0.0F;
    output_obj.Estimate.longPosition = f32posX;
    output_obj.Estimate.longVelocity = obj_abs_vel_x;
    output_obj.Estimate.speed =
        sqrt(obj_abs_vel_x * obj_abs_vel_x + obj_abs_vel_y * obj_abs_vel_y);
    // Information 11 signals:
    output_obj.Information.brakeLightIndicator = 0u;
    output_obj.Information.distanceToLeftFarLaneMarking = 0.0F;
    output_obj.Information.distanceToLeftNearLaneMarking = 0.0F;
    output_obj.Information.distanceToRightFarLaneMarking = 0.0F;
    output_obj.Information.distanceToRightNearLaneMarking = 0.0F;
    output_obj.Information.hazardLightIndicator = 0u;
    output_obj.Information.height =
        frntRdrObjList_4D.Objects[i].ObjBoundingBoxHeight;
    output_obj.Information.motionPatternCurrent =
        GetRadarObjMotionPattern(frntRdrObjList_4D.Objects[i].DynamicProperty);
    output_obj.Information.motionPatternHistory =
        GetRadarObjMotionPattern(frntRdrObjList_4D.Objects[i].DynamicProperty);
    output_obj.Information.nearestSide = 0u;
    output_obj.Information.turnIndicator = 0u;
    output_obj.Information.type =
        GetRadarObjType(frntRdrObjList_4D.Objects[i].Classification);
    output_obj.Information.width =
        frntRdrObjList_4D.Objects[i].ObjBoundingBoxWidth;

    // Properties 20 signals:
    output_obj.Properties.accelerationStdDev = 0.0F;
    output_obj.Properties.cmbbPrimaryConfidence =
        RACAM_CMBB_PRIMARY_CONFIDENCE_BRAKE_RELIABLE;
    output_obj.Properties.cmbbSecondaryConfidence =
        RACAM_CMBB_SECONDARY_CONFIDENCE_RELIABLE;
    output_obj.Properties.fcwConfidence = RACAM_FCW_CONFIDENCE_RELIABLE;
    output_obj.Properties.fusionSource = JKRACAM_FUSION_SOURCE_RADAR_ONLY;
    output_obj.Properties.headingAngleStdDev = 0.0F;
    output_obj.Properties.id = frntRdrObjList_4D.Objects[i].ID;
    output_obj.Properties.latPositionStdDev = 0.0F;
    output_obj.Properties.leftFarLaneMarkingConfidence = 0.0F;
    output_obj.Properties.leftNearLaneMarkingConfidence = 0.0F;
    output_obj.Properties.longPositionStdDev = 0.0F;
    if ((output_obj.Information.type == (uint8)RACAM_CAM_OBJ_TYPE_PEDESTRIAN) ||
        (output_obj.Information.type == (uint8)RACAM_CAM_OBJ_TYPE_UNKWN)) {
      output_obj.Properties.motionModel = RACAM_OBJ_MOTION_MODEL_CONST_ACC;
    } else {
      output_obj.Properties.motionModel = RACAM_OBJ_MOTION_MODEL_COORD_TURN;
    }
    output_obj.Properties.positionConfidence = RACAM_OBJ_CONFIDENCE_RELIABLE1;
    output_obj.Properties.rightFarLaneMarkingConfidence =
        RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
    output_obj.Properties.rightNearLaneMarkingConfidence =
        RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
    output_obj.Properties.speedStdDev = 0.0F;
    output_obj.Properties.tjaConfidence = RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
    output_obj.Properties.trackStatus = RACAM_OBJ_TRACK_STATUS_UPDATED;
    output_obj.Properties.trafficScenario = 0u;
    output_obj.Properties.visionId = JKRACAM_DEFAULT_VISION_ID;
  }
}

uint8 GetRadarObjMotionPattern(const uint8& _objMotionPattern) {
  static const uint8 objMotionPattern[] = {
      RACAM_MOTION_PATTERN_CURRENT_ONCOME, RACAM_MOTION_PATTERN_CURRENT_STATIC,
      RACAM_MOTION_PATTERN_CURRENT_ONCOME, RACAM_MOTION_PATTERN_CURRENT_ONCOME,
      RACAM_MOTION_PATTERN_CURRENT_ONCOME, RACAM_MOTION_PATTERN_CURRENT_UNKWN,
      RACAM_MOTION_PATTERN_CURRENT_STATIC, RACAM_MOTION_PATTERN_CURRENT_UNKWN};
  if (_objMotionPattern < 0 || _objMotionPattern > 7)
    return RACAM_MOTION_PATTERN_CURRENT_UNKWN;
  return objMotionPattern[_objMotionPattern];
}

// convert object type
uint8 GetRadarObjType(const uint8& _objType) {
  static const uint8 objType[] = {
      RACAM_CAM_OBJ_TYPE_UNKWN,      RACAM_CAM_OBJ_TYPE_CAR,
      RACAM_CAM_OBJ_TYPE_TRUCK,      RACAM_CAM_OBJ_TYPE_PEDESTRIAN,
      RACAM_CAM_OBJ_TYPE_MOTORCYCLE, RACAM_CAM_OBJ_TYPE_BICYCLE,
      RACAM_CAM_OBJ_TYPE_UNKWN,      RACAM_CAM_OBJ_TYPE_UNKWN,
      RACAM_CAM_OBJ_TYPE_UNKWN,      RACAM_CAM_OBJ_TYPE_UNKWN,
      RACAM_CAM_OBJ_TYPE_UNKWN,      RACAM_CAM_OBJ_TYPE_UNKWN,
      RACAM_CAM_OBJ_TYPE_UNKWN,      RACAM_CAM_OBJ_TYPE_UNKWN,
      RACAM_CAM_OBJ_TYPE_UNKWN,      RACAM_CAM_OBJ_TYPE_UNKWN};
  if (_objType < 0 || _objType > 15) return RACAM_CAM_OBJ_TYPE_UNKWN;
  return objType[_objType];
}

FuseObjTyp::FuseObjTyp GetObjType(const uint16& _objType) {
  static const FuseObjTyp::FuseObjTyp objType[] = {
      FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_UkwnClass,
      FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_Car,
      FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_Motorcycle,
      FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_Truck,
      FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_Ped,
      FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_UkwnClass,
      FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_UkwnClass,
      FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_Anim,
      FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_ObjGen,
      FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_Bicycle,
      FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_VehOfUkwnClass};
  if (_objType < 0 || _objType > 10)
    return FuseObjTyp::FuseObjTyp::ObjClassn3Vcc_UkwnClass;
  return objType[_objType];
}

MtnPat::MtnPat GetObjMotionPattern(const uint16& _objMotionPattern) {
  static const MtnPat::MtnPat objMotionPattern[] = {
      MtnPat::MtnPat::ObjMtnPat1Vcc_Ukwn, MtnPat::MtnPat::ObjMtnPat1Vcc_Staty,
      MtnPat::MtnPat::ObjMtnPat1Vcc_MovgFromSelf,
      MtnPat::MtnPat::ObjMtnPat1Vcc_MovgToSelf};
  if (_objMotionPattern < 0 || _objMotionPattern > 3)
    return MtnPat::MtnPat::ObjMtnPat1Vcc_Ukwn;
  return objMotionPattern[_objMotionPattern];
}

MtnPatHist::MtnPatHist GetObjMotionPatternHist(
    const uint16& _objMotionPatternHist) {
  static const MtnPatHist::MtnPatHist objMotionPatternHist[] = {
      MtnPatHist::MtnPatHist::ObjMtnPatHist1Vcc_Ukwn,
      MtnPatHist::MtnPatHist::ObjMtnPatHist1Vcc_NotMovg,
      MtnPatHist::MtnPatHist::ObjMtnPatHist1Vcc_PrevMovmtFromSelf,
      MtnPatHist::MtnPatHist::ObjMtnPatHist1Vcc_PrevMovmtToSelf};
  if (_objMotionPatternHist < 0 || _objMotionPatternHist > 3)
    return MtnPatHist::MtnPatHist::ObjMtnPatHist1Vcc_Ukwn;
  return objMotionPatternHist[_objMotionPatternHist];
}

Sts::Sts GetObjTrackStatus(const uint16& _objObjTrackStatus, bool e2eCheckResult) {
  static const Sts::Sts objTrackStatus[] = {
      Sts::Sts::SnsrDataSts1Vcc_Invld, Sts::Sts::SnsrDataSts1Vcc_Fusn,
      Sts::Sts::SnsrDataSts1Vcc_New, Sts::Sts::SnsrDataSts1Vcc_PredNew,
      // @todo RACAM_OBJ_TRACK_STATUS_NOT_USED->Sts::Sts::SnsrDataSts1Vcc_UpdNew
      Sts::Sts::SnsrDataSts1Vcc_UpdNew, Sts::Sts::SnsrDataSts1Vcc_Upd,
      Sts::Sts::SnsrDataSts1Vcc_Pred};
  if (!e2eCheckResult || _objObjTrackStatus < 0 || _objObjTrackStatus > 6)
    return Sts::Sts::SnsrDataSts1Vcc_Invld;
  return objTrackStatus[_objObjTrackStatus];
}

MdlOfMtn::MdlOfMtn GetObjMotionModel(const uint16& _objMotionModel) {
  static const MdlOfMtn::MdlOfMtn objMotionModel[] = {
      MdlOfMtn::MdlOfMtn::ObjPpty1VccMdlOfMtn0_MdlACon,
      // @todo the interface is "RACAM_OBJ_MOTION_MODEL_COORD_TURN"
      MdlOfMtn::MdlOfMtn::ObjPpty1VccMdlOfMtn0_MdlBicycle};
  if (_objMotionModel < 0 || _objMotionModel > 2)
    return MdlOfMtn::MdlOfMtn::ObjPpty1VccMdlOfMtn0_MdlACon;
  return objMotionModel[_objMotionModel];
}

// DX11-45660
CllsnMtgtnByBrkgPrimQly::CllsnMtgtnByBrkgPrimQly GetObjBreakingPrimary(
    const uint16& _objBreakingPrimary) {
  static const CllsnMtgtnByBrkgPrimQly::CllsnMtgtnByBrkgPrimQly
      objBreakingPrimary[] = {
          CllsnMtgtnByBrkgPrimQly::CllsnMtgtnByBrkgPrimQly::Relbl4Vcc_NotRelbl,
          CllsnMtgtnByBrkgPrimQly::CllsnMtgtnByBrkgPrimQly::
              Relbl4Vcc_CoastRelbl,
          CllsnMtgtnByBrkgPrimQly::CllsnMtgtnByBrkgPrimQly::
              Relbl4Vcc_BrkSpprtRelbl,
          CllsnMtgtnByBrkgPrimQly::CllsnMtgtnByBrkgPrimQly::Relbl4Vcc_BrkgRelbl,
      };
  if (_objBreakingPrimary < 0 || _objBreakingPrimary > 3)
    return CllsnMtgtnByBrkgPrimQly::CllsnMtgtnByBrkgPrimQly::Relbl4Vcc_NotRelbl;
  return objBreakingPrimary[_objBreakingPrimary];
}

CllsnMtgtnByBrkgSecQly::CllsnMtgtnByBrkgSecQly GetObjBreakingSecondary(
    const uint16& _objBreakingSecondary) {
  static const CllsnMtgtnByBrkgSecQly::CllsnMtgtnByBrkgSecQly
      objBreakingSecondary[] = {
          CllsnMtgtnByBrkgSecQly::CllsnMtgtnByBrkgSecQly::Relbl1Vcc_NotRelbl,
          CllsnMtgtnByBrkgSecQly::CllsnMtgtnByBrkgSecQly::Relbl1Vcc_Relbl,
          CllsnMtgtnByBrkgSecQly::CllsnMtgtnByBrkgSecQly::Relbl1Vcc_Relbl,
      };
  if (_objBreakingSecondary < 0 || _objBreakingSecondary > 2)
    return CllsnMtgtnByBrkgSecQly::CllsnMtgtnByBrkgSecQly::Relbl1Vcc_NotRelbl;
  return objBreakingSecondary[_objBreakingSecondary];
}

CllsnWarnFwdQly::CllsnWarnFwdQly GetObjWarnFWD(const uint16& _objObjWarnFWD) {
  static const CllsnWarnFwdQly::CllsnWarnFwdQly objObjWarnFWD[] = {
      CllsnWarnFwdQly::CllsnWarnFwdQly::Relbl1Vcc_NotRelbl,
      CllsnWarnFwdQly::CllsnWarnFwdQly::Relbl1Vcc_Relbl,
  };
  if (_objObjWarnFWD < 0 || _objObjWarnFWD > 1)
    return CllsnWarnFwdQly::CllsnWarnFwdQly::Relbl1Vcc_NotRelbl;
  return objObjWarnFWD[_objObjWarnFWD];
}

ObjTrfcJamAssiQly::ObjTrfcJamAssiQly GetObjTrafficJamConfidence(
    const uint16& _objTrafficJamConfidence) {
  static const ObjTrfcJamAssiQly::ObjTrfcJamAssiQly objTrafficJamConfidence[] =
      {
          ObjTrfcJamAssiQly::ObjTrfcJamAssiQly::ObjTrfcJamAssiQly_NotRelbl,
          ObjTrfcJamAssiQly::ObjTrfcJamAssiQly::ObjTrfcJamAssiQly_Relbl,
          ObjTrfcJamAssiQly::ObjTrfcJamAssiQly::ObjTrfcJamAssiQly_HighRelbl,
      };
  if (_objTrafficJamConfidence < 0 || _objTrafficJamConfidence > 2)
    return ObjTrfcJamAssiQly::ObjTrfcJamAssiQly::ObjTrfcJamAssiQly_NotRelbl;
  return objTrafficJamConfidence[_objTrafficJamConfidence];
}

void ObjectsSort(typeRaCamObjectVcc* object_list,
                 typeRaCamObjectVcc* object_list_sorted) {
  // object index, object long position
  std::vector<std::pair<size_t, float32>> first_priority_objects;
  std::vector<std::pair<size_t, float32>> second_priority_objects;
  std::vector<std::pair<size_t, float32>> third_priority_objects;
  std::vector<std::pair<size_t, float32>> last_priority_objects;
  // object roi
  const float longPositionMaxThreshold = 120.0;
  const float longPositionMinThreshold = 3.77;
  const float latPositionOneLaneThreshold = 5.625;  // lane width(3.5)*1.5
  const float latPositionTwoLaneThreshold = 8.75;   // lane width(3.5)*2.5
  // num of objects
  const size_t numOfOutputObjects = 32;

  for (size_t i = 0; i < numOfOutputObjects; i++) {
    const auto output_object = &(object_list->Objects[i]);
    if (output_object->Estimate.longPosition <= longPositionMaxThreshold &&
        output_object->Estimate.longPosition > longPositionMinThreshold &&
        output_object->Estimate.latPosition <= latPositionOneLaneThreshold &&
        output_object->Estimate.latPosition >= -latPositionOneLaneThreshold &&
        (output_object->Information.motionPatternCurrent ==
             RACAM_MOTION_PATTERN_CURRENT_ONCOME ||
         output_object->Information.motionPatternCurrent ==
             RACAM_MOTION_PATTERN_CURRENT_RECEDE)) {
      first_priority_objects.push_back(
          std::make_pair(i, object_list->Objects[i].Estimate.longPosition));
    } else if (output_object->Estimate.longPosition <=
                   longPositionMaxThreshold &&
               output_object->Estimate.longPosition >
                   longPositionMinThreshold &&
               output_object->Estimate.latPosition <=
                   latPositionOneLaneThreshold &&
               output_object->Estimate.latPosition >=
                   -latPositionOneLaneThreshold &&
               (output_object->Information.motionPatternCurrent ==
                    RACAM_MOTION_PATTERN_CURRENT_STATIC ||
                output_object->Information.motionPatternCurrent ==
                    RACAM_MOTION_PATTERN_CURRENT_UNKWN)) {
      second_priority_objects.push_back(
          std::make_pair(i, object_list->Objects[i].Estimate.longPosition));
    } else if (output_object->Estimate.longPosition >
                   longPositionMaxThreshold &&
               output_object->Estimate.latPosition <=
                   latPositionTwoLaneThreshold &&
               output_object->Estimate.latPosition >=
                   -latPositionTwoLaneThreshold &&
               (output_object->Information.motionPatternCurrent ==
                    RACAM_MOTION_PATTERN_CURRENT_ONCOME ||
                output_object->Information.motionPatternCurrent ==
                    RACAM_MOTION_PATTERN_CURRENT_RECEDE)) {
      third_priority_objects.push_back(
          std::make_pair(i, object_list->Objects[i].Estimate.longPosition));
    } else {
      last_priority_objects.push_back(
          std::make_pair(i, object_list->Objects[i].Estimate.longPosition));
    }
  }
  sort(first_priority_objects.begin(), first_priority_objects.end(),
       compareObjectsPositionLessThan);
  sort(second_priority_objects.begin(), second_priority_objects.end(),
       compareObjectsPositionLessThan);
  sort(third_priority_objects.begin(), third_priority_objects.end(),
       compareObjectsPositionLessThan);
  sort(last_priority_objects.begin(), last_priority_objects.end(),
       compareObjectsPositionLessThan);

  first_priority_objects.insert(first_priority_objects.end(),
                                second_priority_objects.begin(),
                                second_priority_objects.end());
  first_priority_objects.insert(first_priority_objects.end(),
                                third_priority_objects.begin(),
                                third_priority_objects.end());
  first_priority_objects.insert(first_priority_objects.end(),
                                last_priority_objects.begin(),
                                last_priority_objects.end());

  for (size_t i = 0; i < numOfOutputObjects; ++i) {
    object_list_sorted->Objects[i] =
        object_list->Objects[first_priority_objects[i].first];
  }

  object_list_sorted->Barriers = object_list->Barriers;
  object_list_sorted->lookIndex = object_list->lookIndex;
  object_list_sorted->timeStamp = object_list->timeStamp;
  object_list_sorted->visionOnlyBrake = object_list->visionOnlyBrake;
  object_list_sorted->visionOnlyVruBrake = object_list->visionOnlyVruBrake;
  object_list_sorted->visionOnlyWarning = object_list->visionOnlyWarning;
}

bool compareObjectsPositionLessThan(const std::pair<size_t, double>& object_1,
                                    const std::pair<size_t, double>& object_2) {
  return object_1.second < object_2.second;
}