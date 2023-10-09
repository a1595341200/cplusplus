#ifndef CAM_CONVERTER_INT_H_
#define CAM_CONVERTER_INT_H_

/*==================[inclusions]============================================*/
#include "Std_Types.h"

/*==================[macros]================================================*/
/*******************/
/* Angle */
/*******************/
/// \name Angle
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_ANGLE_MIN                 (-3.14f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_ANGLE_MAX                 (3.14f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_ANGLE_DEFAULT             (0.0f)
/// \}

/*******************/
/* Type */
/*******************/
/// \name Type
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_TYPE_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_TYPE_MAX                 (8u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_TYPE_DEFAULT             (0u)
/// \}

/*******************/
/* AngleStdDev */
/*******************/
/// \name AngleStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_ANGLESTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_ANGLESTDDEV_MAX                 (6.28f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_ANGLESTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* HeadingAngle */
/*******************/
/// \name HeadingAngle
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEADINGANGLE_MIN                 (-3.14f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEADINGANGLE_MAX                 (3.14f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEADINGANGLE_DEFAULT             (0.0f)
/// \}

/*******************/
/* HeadingAngleStdDev */
/*******************/
/// \name HeadingAngleStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEADINGANGLESTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEADINGANGLESTDDEV_MAX                 (6.28f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEADINGANGLESTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* Height */
/*******************/
/// \name Height
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEIGHT_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEIGHT_MAX                 (5.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEIGHT_DEFAULT             (0.0f)
/// \}

/*******************/
/* HeightStdDev */
/*******************/
/// \name HeightStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEIGHTSTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEIGHTSTDDEV_MAX                 (5.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_HEIGHTSTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* Width */
/*******************/
/// \name Width
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_WIDTH_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_WIDTH_MAX                 (10.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_WIDTH_DEFAULT             (0.0f)
/// \}

/*******************/
/* WidthStdDev */
/*******************/
/// \name WidthStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_WIDTHSTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_WIDTHSTDDEV_MAX                 (5.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_WIDTHSTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* Length */
/*******************/
/// \name Length
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LENGTH_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LENGTH_MAX                 (50.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LENGTH_DEFAULT             (0.0f)
/// \}

/*******************/
/* Chks */
/*******************/
/// \name Chks
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_CHKS_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_CHKS_MAX                 (255u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_CHKS_DEFAULT             (0u)
/// \}

/*******************/
/* ClassConfidence */
/*******************/
/// \name ClassConfidence
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_CLASSCONFIDENCE_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_CLASSCONFIDENCE_MAX                 (1.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_CLASSCONFIDENCE_DEFAULT             (0.0f)
/// \}

/*******************/
/* CmsConfidence */
/*******************/
/// \name CmsConfidence
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_CMSCONFIDENCE_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_CMSCONFIDENCE_MAX                 (3u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_CMSCONFIDENCE_DEFAULT             (0u)
/// \}

/*******************/
/* Cntr */
/*******************/
/// \name Cntr
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_CNTR_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_CNTR_MAX                 (15u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_CNTR_DEFAULT             (0u)
/// \}

/*******************/
/* DetectionHistory */
/*******************/
/// \name DetectionHistory
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_DETECTIONHISTORY_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_DETECTIONHISTORY_MAX                 (1u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_DETECTIONHISTORY_DEFAULT             (0u)
/// \}

/*******************/
/* ExsistConfidence */
/*******************/
/// \name ExsistConfidence
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_EXSISTCONFIDENCE_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_EXSISTCONFIDENCE_MAX                 (1.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_EXSISTCONFIDENCE_DEFAULT             (0.0f)
/// \}

/*******************/
/* Id */
/*******************/
/// \name Id
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_ID_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_ID_MAX                 (255u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_ID_DEFAULT             (0u)
/// \}

/*******************/
/* ImgFrameCtr */
/*******************/
/// \name ImgFrameCtr
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_IMGFRAMECTR_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_IMGFRAMECTR_MAX                 (15u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_IMGFRAMECTR_DEFAULT             (0u)
/// \}

/*******************/
/* LaneAssignment */
/*******************/
/// \name LaneAssignment
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEASSIGNMENT_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEASSIGNMENT_MAX                 (5u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEASSIGNMENT_DEFAULT             (0u)
/// \}

/*******************/
/* LaneOffsetLeft */
/*******************/
/// \name LaneOffsetLeft
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETLEFT_MIN                 (-10.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETLEFT_MAX                 (10.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETLEFT_DEFAULT             (0.0f)
/// \}

/*******************/
/* LaneOffsetLeftStdDev */
/*******************/
/// \name LaneOffsetLeftStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETLEFTSTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETLEFTSTDDEV_MAX                 (5.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETLEFTSTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* LaneOffsetRight */
/*******************/
/// \name LaneOffsetRight
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETRIGHT_MIN                 (-10.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETRIGHT_MAX                 (10.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETRIGHT_DEFAULT             (0.0f)
/// \}

/*******************/
/* LaneOffsetRightStdDev */
/*******************/
/// \name LaneOffsetRightStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETRIGHTSTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETRIGHTSTDDEV_MAX                 (5.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LANEOFFSETRIGHTSTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* LatAcc */
/*******************/
/// \name LatAcc
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATACC_MIN                 (-15.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATACC_MAX                 (15.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATACC_DEFAULT             (0.0f)
/// \}

/*******************/
/* LatAccStdDev */
/*******************/
/// \name LatAccStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATACCSTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATACCSTDDEV_MAX                 (5.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATACCSTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* LatPos */
/*******************/
/// \name LatPos
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATPOS_MIN                 (-100.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATPOS_MAX                 (100.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATPOS_DEFAULT             (0.0f)
/// \}

/*******************/
/* LatPosStdDev */
/*******************/
/// \name LatPosStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATPOSSTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATPOSSTDDEV_MAX                 (5.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATPOSSTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* LatVel */
/*******************/
/// \name LatVel
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATVEL_MIN                 (-100.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATVEL_MAX                 (100.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATVEL_DEFAULT             (0.0f)
/// \}

/*******************/
/* LatVelStdDev */
/*******************/
/// \name LatVelStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATVELSTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATVELSTDDEV_MAX                 (20.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LATVELSTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* LengthStdDev */
/*******************/
/// \name LengthStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LENGTHSTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LENGTHSTDDEV_MAX                 (10.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LENGTHSTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* LgtAcc */
/*******************/
/// \name LgtAcc
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTACC_MIN                 (-15.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTACC_MAX                 (15.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTACC_DEFAULT             (0.0f)
/// \}

/*******************/
/* LgtAccStdDev */
/*******************/
/// \name LgtAccStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTACCSTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTACCSTDDEV_MAX                 (5.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTACCSTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* LgtPos */
/*******************/
/// \name LgtPos
/** minimum value */
// #define FRONT_CAM_CONVERTER_OBJECTS_LGTPOS_MIN                 (0.0f)  add leo.c
// #define FRONT_CAM_CONVERTER_OBJECTS_LGTPOS_MIN                 (-3.2f) add lzc, will filter corner cameras
#define FRONT_CAM_CONVERTER_OBJECTS_LGTPOS_MIN                 (2.5f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTPOS_MAX                 (250.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTPOS_DEFAULT             (0.0f)
/// \}

/*******************/
/* LgtPosStdDev */
/*******************/
/// \name LgtPosStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTPOSSTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTPOSSTDDEV_MAX                 (25.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTPOSSTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* LgtVel */
/*******************/
/// \name LgtVel
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTVEL_MIN                 (-100.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTVEL_MAX                 (100.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTVEL_DEFAULT             (0.0f)
/// \}

/*******************/
/* LgtVelStdDev */
/*******************/
/// \name LgtVelStdDev
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTVELSTDDEV_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTVELSTDDEV_MAX                 (20.0f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_LGTVELSTDDEV_DEFAULT             (0.0f)
/// \}

/*******************/
/* NearestSide */
/*******************/
/// \name NearestSide
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_NEARESTSIDE_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_NEARESTSIDE_MAX                 (4u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_NEARESTSIDE_DEFAULT             (0u)
/// \}

/*******************/
/* Pose */
/*******************/
/// \name Pose
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_POSE_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_POSE_MAX                 (7u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_POSE_DEFAULT             (0u)
/// \}

/*******************/
/* TimeStamp */
/*******************/
/// \name TimeStamp
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_TIMESTAMP_MIN                 (0.0f)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_TIMESTAMP_MAX                 (429496.72950f)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_TIMESTAMP_DEFAULT             (0.0f)
/// \}

/*******************/
/* TrackSts */
/*******************/
/// \name TrackSts
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_TRACKSTS_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_TRACKSTS_MAX                 (3u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_TRACKSTS_DEFAULT             (0u)
/// \}

/*******************/
/* TurnIndicator */
/*******************/
/// \name TurnIndicator
/** minimum value */
#define FRONT_CAM_CONVERTER_OBJECTS_TURNINDICATOR_MIN                 (0u)
/** maximum value */
#define FRONT_CAM_CONVERTER_OBJECTS_TURNINDICATOR_MAX                 (3u)
/** default value */
#define FRONT_CAM_CONVERTER_OBJECTS_TURNINDICATOR_DEFAULT             (0u)
/// \}

/*==================[type definitions]======================================*/
/*==================[function]==============================================*/

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

LOCAL FUNC(void, ObjFusn_CODE) CamObjToTrackableConverter_convertObject(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pNewObject, 
   CONSTP2CONST(CamObjType_ReDefine1, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObject, const uint32 sensorPattern);

LOCAL INLINE FUNC(uint16, ObjFusn_CODE) ConvertCamMtnPat(const uint8 objMtnPat);

LOCAL INLINE FUNC(uint16, ObjFusn_CODE) ConvertCamObjType(const uint8 objType);

LOCAL FUNC(boolean, ObjFusn_CODE) validateVisionObject(CONSTP2CONST(CamObjType_ReDefine1, AUTOMATIC, ObjFusn_VAR_NOINIT) pVisionObj);

LOCAL FUNC(void, ObjFusn_CODE) calculateVariances_Cam(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCamObj);

LOCAL FUNC(boolean, ObjFusn_CODE) validateTimestamp_FrntCam(CONSTP2CONST(FrntCamObjList, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObjList, 
	CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) time, VAR(sint8, ObjFusn_VAR_NOINIT) pValidObjIdx[]);

#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

/*==================[external constants]====================================*/


#endif /* CAM_CONVERTER_INT_H_ */