/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: ObjFusnObjListToVolvoSnsrFusnConvert.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/12
* Description: This is the fusion core to ALF converter
* Others:
* Function List:
    1.
    2.
* History: 
    1.Date:
      Author:
      Modification:
    2.
**********************************************************************************/

/******************************************************************************
EXTERNAL DEPENDENCIES
******************************************************************************/

#include "ObjFusnObjListToVolvoSnsrFusnConvert.h"
#include "ObjFusnObjListToVolvoSnsrFusnConvert_int.h"
#include "JkObjFusn_TrackableConstants.h"
#include "JkRACAM_ObjListConstants.h"
#include "Jk_fusion_math.h"
#include "ObjFusnObjListToVolvoSnsrFusnConvert_Cfg.h"

LOCAL int errorFlag = 0;

/******************************************************************************
MODULE DEFINES
******************************************************************************/

/******************************************************************************
MODULE TYPES
******************************************************************************/

/******************************************************************************
DECLARATION OF LOCAL FUNCTIONS
******************************************************************************/

/******************************************************************************
DEFINITION OF LOCAL VARIABLES
******************************************************************************/

/// \name ALF converter global variables
#define ObjFusn_START_SEC_VAR16
#include "ObjFusn_MemMap.h"
/* This variable indicates the index where the last valid RaCam object is stored */
LOCAL VAR(uint16, ObjFusn_VAR_NOINIT) u16NumRaCamObjects = 0u;
#define ObjFusn_STOP_SEC_VAR16
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR16
#include "ObjFusn_MemMap.h"
LOCAL VAR(uint16, ObjFusn_VAR_NOINIT) u16RaCamLookIndex = 0u;
#define ObjFusn_STOP_SEC_VAR16
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR8
#include "ObjFusn_MemMap.h"
LOCAL VAR(boolean, ObjFusn_VAR_NOINIT) bInitMapFusnVolvoId = TRUE;
LOCAL VAR(boolean, ObjFusn_VAR_NOINIT) bPrevEgoIsStationary = TRUE;
#define ObjFusn_STOP_SEC_VAR8
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR16
#include "ObjFusn_MemMap.h"
/* This array consists of 32 entries whereas each entry points to the ID of the corresponding object provided by Fusion output  */
LOCAL VAR(uint16, ObjFusn_VAR_NOINIT) au16MapFusnVolvoId[JKRACAM_OBJLISTINPUT_MAX_OBJECTS] = { 0u };
#define ObjFusn_STOP_SEC_VAR16
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR16
#include "ObjFusn_MemMap.h"
/* This array consists to 32 entries whereas each entry points to the index of the corresponding object provided by Fusion output */
LOCAL VAR(sint16, ObjFusn_VAR_NOINIT) as16MapFusnIdx[JKRACAM_OBJLISTINPUT_MAX_OBJECTS] = { 0 };
/** Management array used to maintain class type unidenfied vehicle for radar only targets */
LOCAL VAR(uint16, ObjFusn_VAR_NOINIT) au16NumCyclesIsUnidVehicle[JKRACAM_OBJLISTINPUT_MAX_OBJECTS] = {0u};
#define ObjFusn_STOP_SEC_VAR16
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR8
#include "ObjFusn_MemMap.h"
LOCAL VAR(uint8, ObjFusn_VAR_NOINIT) au8TrackStatusVolvoId[JKRACAM_OBJLISTINPUT_MAX_OBJECTS] = {RACAM_OBJ_TRACK_STATUS_INVALID};
#define ObjFusn_STOP_SEC_VAR8
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR8
#include "ObjFusn_MemMap.h"
/* This array is used to save if each object was matched to an existing volvo object */
LOCAL VAR(boolean, ObjFusn_VAR_NOINIT) abJkFsnInputMatched[JK_FUSION_MAX_OUTPUT_OBJECTS] = { 0u };
#define ObjFusn_STOP_SEC_VAR8
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR8
#include "ObjFusn_MemMap.h"
/* This array is used to save if each object was matched to an existing volvo object */
LOCAL VAR(uint8, ObjFusn_VAR_NOINIT) au8FusnVolvoMotionTypeHistory[JKRACAM_OBJLISTINPUT_MAX_OBJECTS] = { 0u };
#define ObjFusn_STOP_SEC_VAR8
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR32
#include "ObjFusn_MemMap.h"
/* Position Confidence track age array for slow moving oncoming vehicles */
LOCAL VAR(uint32, ObjFusn_VAR_NOINIT) au32FusnVolvoPositionConfidenceAge[JKRACAM_OBJLISTINPUT_MAX_OBJECTS] = { 0u };
#define ObjFusn_STOP_SEC_VAR32
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_VAR32
#include "ObjFusn_MemMap.h"
/* Position Confidence track age array for slow moving oncoming vehicles */
LOCAL VAR(uint32, ObjFusn_VAR_NOINIT) au32FusnRaCamSensorPatternHistory[JKRACAM_OBJLISTINPUT_MAX_OBJECTS] = {0u};
#define ObjFusn_STOP_SEC_VAR32
#include "ObjFusn_MemMap.h"


/// \}

/******************************************************************************
DEFINITION OF EXPORTED VARIABLES
******************************************************************************/

/******************************************************************************
DEFINITION OF LOCAL CONSTANT DATA
******************************************************************************/

/******************************************************************************
DEFINITION OF EXPORTED CONSTANT DATA
******************************************************************************/

/******************************************************************************
DEFINITION OF APIs
******************************************************************************/
#ifdef UNITTEST   /* Methods used for testing only */
uint16 getNumberOfRaCamObjects(void)
{
   return u16NumRaCamObjects;
}

const uint16 * const getPointerToMapVolvoID(void)
{
   return au16MapFusnVolvoId;
}

const sint16 * const getPointerToMapFsnIdx(void)
{
   return as16MapFusnIdx;
}

uint8 * const getPointerToTrackStatus()
{
   return au8TrackStatusVolvoId;
}

const boolean * const getPointerToInputMatchedArray()
{
   return abJkFsnInputMatched;
}

const uint32* getPointerToPositionConfidenceAge()
{
   return au32FusnVolvoPositionConfidenceAge;
}

uint32 * const getPointerToSensorPatternHistory()
{
   return au32FusnRaCamSensorPatternHistory;
}

void setNumberOfRaCamObjects(const uint16 u16NumRaCamObj)
{
   u16NumRaCamObjects = u16NumRaCamObj;
}
#endif 

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 1503 1 */ /**< Init method, only external function calls */
FUNC(boolean, ObjFusn_CODE) ObjFusnObjListToVolvoSnsrFusnConvertInit(void)
{
   initIdMngArray();

   u16RaCamLookIndex             = 0u;
   bInitMapFusnVolvoId           = TRUE;
   bPrevEgoIsStationary          = TRUE;

   return TRUE;
}

/*!****************************************************************************
* \details
*     initialize RaCam Motion Type from JK Motion Type
* \return
*     u8RaCamMotionType return value
******************************************************************************/
LOCAL FUNC(void, ObjFusn_CODE) initIdMngArray(void)
{
   uint8  u8Idx;

   for (u8Idx = 0u; u8Idx < JKRACAM_OBJLISTINPUT_MAX_OBJECTS; u8Idx++)
   {
      au16MapFusnVolvoId[u8Idx]                 = JKOBJFUSN_RACAM_U16ID_INVALID;
      as16MapFusnIdx[u8Idx]                     = JK_RACAM_CONVERTER_IDX_INVALID;
      au8TrackStatusVolvoId[u8Idx]              = RACAM_OBJ_TRACK_STATUS_INVALID;
      au8FusnVolvoMotionTypeHistory[u8Idx]      = RACAM_MOTION_PATTERN_HIST_UNKWN;
      au16NumCyclesIsUnidVehicle[u8Idx]         = 0u;
      au32FusnRaCamSensorPatternHistory[u8Idx]  = 0u;

      au32FusnVolvoPositionConfidenceAge[u8Idx]    = 0u;
   }

   for (u8Idx = 0u; u8Idx < JK_FUSION_MAX_OUTPUT_OBJECTS; u8Idx++)
   {
      abJkFsnInputMatched[u8Idx] = FALSE;
   }
}
#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/*!****************************************************************************
* \details
*     get RaCam Motion Type from JK Motion Type
* \param[in]
*     u16motionType input pointer
* \return
*     u8RaCamMotionType return value
******************************************************************************/
LOCAL FUNC(uint8, ObjFusn_CODE) getRaCamMotionType(CONST(uint16, ObjFusn_VAR_NOINIT) u16MotionType)
{
   uint8  u8RaCamMotionType;

   if (JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN == u16MotionType)
   {
      u8RaCamMotionType = RACAM_MOTION_PATTERN_CURRENT_UNKWN;
   }
   else if (JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING == u16MotionType)
   {
      u8RaCamMotionType = RACAM_MOTION_PATTERN_CURRENT_RECEDE;  
   }
   else if (JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING == u16MotionType)
   {
      u8RaCamMotionType = RACAM_MOTION_PATTERN_CURRENT_ONCOME;  
   }
   else if (JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY == u16MotionType)
   {
      u8RaCamMotionType = RACAM_MOTION_PATTERN_CURRENT_STATIC;  
   }
   else if (JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED == u16MotionType)
   {
      u8RaCamMotionType = RACAM_MOTION_PATTERN_CURRENT_STATIC;  
   }
   else if (JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING == u16MotionType)
   {
      u8RaCamMotionType = RACAM_MOTION_PATTERN_CURRENT_UNKWN;
   }
   else if (JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_REVERSING == u16MotionType)
   {
      u8RaCamMotionType = RACAM_MOTION_PATTERN_CURRENT_RECEDE;
   }
   else
   {
      u8RaCamMotionType = RACAM_MOTION_PATTERN_CURRENT_UNKWN; 
   }

   return u8RaCamMotionType;
}

/*!****************************************************************************
* \details
*     get RaCam Motion Hist based on current motion type and prev motion type
* \param[in]
*     u8motionType input pointer to current motion type
* \param[in]
*     u8MotionTypeHist input pointer to motion type of previous cycle
* \return
*     u8motionType return value
******************************************************************************/
LOCAL FUNC(uint8, ObjFusn_CODE) getRaCamMotionTypeHist(CONSTP2CONST(uint8, AUTOMATIC, ObjFusn_VAR_NOINIT) u8motionType,
   CONSTP2CONST(uint8, AUTOMATIC, ObjFusn_VAR_NOINIT) u8MotionTypeHist)
{
   uint8 motionType;

   if ((*u8motionType) == RACAM_MOTION_PATTERN_CURRENT_STATIC)
   {
      if ((*u8MotionTypeHist) == RACAM_MOTION_PATTERN_HIST_RECEDABLE)
      {
         motionType = RACAM_MOTION_PATTERN_HIST_RECEDABLE;
      }
      else
      {
         motionType = RACAM_MOTION_PATTERN_HIST_STOPPED;
      }
   }
   else
   {
      motionType = *u8motionType;
   }

   return motionType;
}

/*!****************************************************************************
* \details
*     Conversion of ObjFusn class type to RaCam class type. 
*     Only valid if track is confirmed by vision. 
* \param[in]
*     u16classType intput class type
* \return
*     converted class type
******************************************************************************/
LOCAL FUNC(uint8, ObjFusn_CODE) getVisionClassType(const uint16 u16ClassType, const uint16 u16RaCamIdx)
{
   uint8 u8Class = RACAM_CAM_OBJ_TYPE_UNKWN;

   /** Object is vision confirmed, simple mapping is sufficient */
   if (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_UNKNOWN)
   {
      u8Class = RACAM_CAM_OBJ_TYPE_UNID_VEH;
      au16NumCyclesIsUnidVehicle[u16RaCamIdx]++;
   }
   else if (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_CAR)
   {           
      u8Class = RACAM_CAM_OBJ_TYPE_CAR;  
      au16NumCyclesIsUnidVehicle[u16RaCamIdx]++;
   }
   else if (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_UNKNOWN)
   {
      u8Class = RACAM_CAM_OBJ_TYPE_MOTORCYCLE;
      au16NumCyclesIsUnidVehicle[u16RaCamIdx]++;
   }
   else if (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_BICYCLE)
   {
      u8Class = RACAM_CAM_OBJ_TYPE_BICYCLE;   
   }
   else if (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_MOTORCYCLE)
   {
      u8Class = RACAM_CAM_OBJ_TYPE_MOTORCYCLE;  
      au16NumCyclesIsUnidVehicle[u16RaCamIdx]++;
   }
   else if (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRUCK)
   {
      u8Class = RACAM_CAM_OBJ_TYPE_TRUCK;  
      au16NumCyclesIsUnidVehicle[u16RaCamIdx]++;
   }
   else if (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRAILER)
   {
      u8Class = RACAM_CAM_OBJ_TYPE_TRUCK;  
      au16NumCyclesIsUnidVehicle[u16RaCamIdx]++;
   }   
   else if ((u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN) ||
      (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_CHILD) ||
      (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_ADULT))
   {
      u8Class = RACAM_CAM_OBJ_TYPE_PEDESTRIAN;  
   }
   else if ((u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_ANIMAL_UNKNOWN) ||
      (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_ANIMAL_LARGE) ||
      (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_ANIMAL_SMALL))
   {
      u8Class = RACAM_CAM_OBJ_TYPE_ANIMAL;  
   }
   else if ((u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_UNKNOWN) ||
      (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_PATHBLOCKING))
   {
      u8Class = RACAM_CAM_OBJ_TYPE_GEN_OBJ;  
   }    
   else if ((u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_OVERRUNNABLE) || 
      (u16ClassType == JKOBJFUSN_TRACKABLE_U16CLASS_OBSTACLE_UNDERRUNNABLE))
   {
      u8Class = RACAM_CAM_OBJ_TYPE_GEN_OBJ;  
   }
   else
   {
      u8Class = RACAM_CAM_OBJ_TYPE_UNKWN; 
   }

   return u8Class;
}

/*!****************************************************************************
* \details
*     get RaCam Class type from JK class type
* \param[in]
*     u16classType input pointer
* \return
*     u8RaCamClass return value
******************************************************************************/
LOCAL FUNC(void, ObjFusn_CODE) getRaCamClassType( CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pFsnObj,
                                                   CONSTP2VAR(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj,
                                                   const boolean bEgoIsStationary, const uint16 u16RaCamIdx)
{
   float32 _f32Heading     = FLT_ZERO; 
   if((NULL_PTR == pFsnObj) || (NULL_PTR == pRaCamObj))
   {
      /* MISRA */
   }
   else
   {
      _f32Heading = pFsnObj->f32Heading;

      if(((pFsnObj->u32SensorsHist) & JKOBJFUSN_TRACKABLE_U32SENSOR_VISION) > 0u)
      {
         pRaCamObj->Information.type = getVisionClassType(pFsnObj->u16Class, u16RaCamIdx);
      }
      /** Transition Moving to Stationary */
      else if((TRUE == bEgoIsStationary) && (FALSE == bPrevEgoIsStationary))
      {
         if(au16NumCyclesIsUnidVehicle[u16RaCamIdx] < JKRACAM_RADAR_ONLY_TO_UNID_VEHICLE_MIN_CYCLES_EGO_MOVING)
         {
            pRaCamObj->Information.type = RACAM_CAM_OBJ_TYPE_UNKWN;
            au16NumCyclesIsUnidVehicle[u16RaCamIdx] = 0u; 
         }
         else
         {
            /** Transition from moving to stationary, initialize management array to default value */
            au16NumCyclesIsUnidVehicle[u16RaCamIdx] = JKRACAM_RADAR_ONLY_TO_UNID_VEHICLE_NUM_CYCLES_EGO_STATIONARY;
            pRaCamObj->Information.type   = RACAM_CAM_OBJ_TYPE_UNID_VEH;
            pRaCamObj->Information.width  = JKRACAM_GEOMETRY_DEFAULT_WIDTH;
         }
      }
      /** Stationary Ego-Vehicle */
      else if((TRUE == bEgoIsStationary) && (TRUE == bPrevEgoIsStationary))
      {
         if(au16NumCyclesIsUnidVehicle[u16RaCamIdx] > 0u)
         {
            pRaCamObj->Information.type   = RACAM_CAM_OBJ_TYPE_UNID_VEH;
            pRaCamObj->Information.width  = JKRACAM_GEOMETRY_DEFAULT_WIDTH;
            au16NumCyclesIsUnidVehicle[u16RaCamIdx]--; 
         }
         else
         {
            pRaCamObj->Information.type = RACAM_CAM_OBJ_TYPE_UNKWN;
         }
      }
      /** Moving Ego-Vehicle */
      else
      {
         if(((pFsnObj->u16MotionType) == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING) && 
            ((pRaCamObj->Estimate.speed) > JKRACAM_SPEED_RADAR_THRESHOLD_SPEED) && (_f32Heading < JKRACAM_RADAR_ONLY_TO_UNID_VEHICLE_MAX_HEADING))
         {
            pRaCamObj->Information.type   = RACAM_CAM_OBJ_TYPE_UNID_VEH;
            pRaCamObj->Information.width  = JKRACAM_GEOMETRY_DEFAULT_WIDTH;
            au16NumCyclesIsUnidVehicle[u16RaCamIdx]++;
         }
         else if(_f32Heading >= JKRACAM_RADAR_ONLY_TO_UNID_VEHICLE_MAX_HEADING)
         {
            pRaCamObj->Information.type = RACAM_CAM_OBJ_TYPE_UNKWN;
            au16NumCyclesIsUnidVehicle[u16RaCamIdx] = 0u;
         }
         else if(au16NumCyclesIsUnidVehicle[u16RaCamIdx] > JKRACAM_RADAR_ONLY_TO_UNID_VEHICLE_MIN_CYCLES_EGO_MOVING)
         {
            pRaCamObj->Information.type   = RACAM_CAM_OBJ_TYPE_UNID_VEH;
            pRaCamObj->Information.width  = JKRACAM_GEOMETRY_DEFAULT_WIDTH;
         }
         else
         {
            pRaCamObj->Information.type = RACAM_CAM_OBJ_TYPE_UNKWN;
         }
      }

      au16NumCyclesIsUnidVehicle[u16RaCamIdx] = jk_fusion_min_U16(au16NumCyclesIsUnidVehicle[u16RaCamIdx], 
         JKRACAM_RADAR_ONLY_TO_UNID_VEHICLE_NUM_CYCLES_EGO_STATIONARY);
   }
}

/*!****************************************************************************
* \details
*     initialize RaCam Object structure
* \param[out]
*     pRACAMObjListOut RaCam Object
* \return
*     none
******************************************************************************/
/* PRQA S 1505 2 *//* Function called from external AAU in embedded implementation */
FUNC(boolean, ObjFusn_CODE) initRaCamObjList(CONSTP2VAR(typeRaCamObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRACAMObjListOut)
{
   uint8   u8Cnt;
   boolean bSuccess = TRUE;

   P2VAR(typeBarriersVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pBarriersObj;
   P2VAR(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRACAMObj;

   if (NULL_PTR != pRACAMObjListOut)
   {
      pBarriersObj   = &(pRACAMObjListOut->Barriers);

      pRACAMObjListOut->timeStamp              = 0u;
      pRACAMObjListOut->lookIndex              = 0u;
      pRACAMObjListOut->visionOnlyBrake        = 0u;
      pRACAMObjListOut->visionOnlyWarning      = 0u;
      pRACAMObjListOut->visionOnlyVruBrake     = 0u;

      for (u8Cnt = 0u; u8Cnt < JKRACAM_OBJLISTINPUT_MAX_OBJECTS; ++u8Cnt)
      {
         pRACAMObj = &(pRACAMObjListOut->Objects[u8Cnt]);

         //object states
         pRACAMObj->Estimate.headingAngle      = FLT_ZERO;
         pRACAMObj->Estimate.longAcceleration  = FLT_ZERO;
         pRACAMObj->Estimate.latAcceleration   = FLT_ZERO;
         pRACAMObj->Estimate.curvature         = FLT_ZERO;
         pRACAMObj->Estimate.acceleration      = FLT_ZERO;
         pRACAMObj->Estimate.latPosition       = FLT_ZERO;
         pRACAMObj->Estimate.longPosition      = FLT_ZERO;
         pRACAMObj->Estimate.latVelocity       = FLT_ZERO;
         pRACAMObj->Estimate.longVelocity      = FLT_ZERO;

         pRACAMObj->Estimate.speed             = FLT_ZERO;

         pRACAMObj->Properties.id              = u8Cnt+1u;
         pRACAMObj->Properties.motionModel     = RACAM_OBJ_MOTION_MODEL_CONST_ACC;
         pRACAMObj->Properties.trackStatus     = RACAM_OBJ_TRACK_STATUS_INVALID;
         pRACAMObj->Properties.trafficScenario = 0u;
         pRACAMObj->Properties.visionId        = JKRACAM_DEFAULT_VISION_ID;

         //stdDeviations
         pRACAMObj->Properties.accelerationStdDev = FLT_ZERO;
         pRACAMObj->Properties.headingAngleStdDev = FLT_ZERO;
         pRACAMObj->Properties.latPositionStdDev  = FLT_ZERO;
         pRACAMObj->Properties.longPositionStdDev = FLT_ZERO;
         pRACAMObj->Properties.speedStdDev        = FLT_ZERO;

         //confidences
         pRACAMObj->Properties.positionConfidence =                  RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
         pRACAMObj->Properties.fusionSource =                        JKRACAM_FUSION_SOURCE_DEFAULT;
         pRACAMObj->Properties.leftNearLaneMarkingConfidence =       RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
         pRACAMObj->Properties.rightNearLaneMarkingConfidence =      RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
         pRACAMObj->Properties.tjaConfidence =                       RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
         pRACAMObj->Properties.cmbbPrimaryConfidence =               RACAM_CMBB_PRIMARY_CONFIDENCE_NOT_RELIABLE;
         pRACAMObj->Properties.cmbbSecondaryConfidence =             RACAM_CMBB_SECONDARY_CONFIDENCE_NOT_RELIABLE;
         pRACAMObj->Properties.fcwConfidence =                       RACAM_FCW_CONFIDENCE_NOT_RELIABLE;

         pRACAMObj->Information.brakeLightIndicator            = 0u;
         pRACAMObj->Information.distanceToLeftNearLaneMarking  = FLT_ZERO;
         pRACAMObj->Information.distanceToRightNearLaneMarking = FLT_ZERO;
         pRACAMObj->Information.hazardLightIndicator           = 0u;
         pRACAMObj->Information.height                         = FLT_ZERO;
         pRACAMObj->Information.motionPatternCurrent           = RACAM_MOTION_PATTERN_CURRENT_UNKWN;
         pRACAMObj->Information.motionPatternHistory           = RACAM_MOTION_PATTERN_HIST_UNKWN;
         pRACAMObj->Information.nearestSide                    = 0u;
         pRACAMObj->Information.turnIndicator                  = 0u;
         pRACAMObj->Information.type                           = RACAM_CAM_OBJ_TYPE_UNKWN;
         pRACAMObj->Information.width                          = FLT_ZERO;
      }

      //barriers
      //not used in Volvo fusion right now
      pBarriersObj->Left.Estimate.latDistanceZeroOrderCoeff    =  FLT_ZERO;
      pBarriersObj->Left.Estimate.latDistanceFirstOrderCoeff   =  FLT_ZERO;
      pBarriersObj->Left.Estimate.latDistanceSecondOrderCoeff  =  FLT_ZERO;
      pBarriersObj->Left.Estimate.latDistanceThirdOrderCoeff   =  FLT_ZERO;
      pBarriersObj->Left.Estimate.longDistanceToEnd            =  JKRACAM_DEFAULT_LANE_LENGTH;

      pBarriersObj->Left.Information.informationSource         = 0u;
      pBarriersObj->Left.Properties.cmbbConfidence             = 0u;
      pBarriersObj->Left.Properties.lkaConfidence              = 0u;
      pBarriersObj->Left.Properties.tjaConfidencePrimary       = 0u;
      pBarriersObj->Left.Properties.trackStatus                = 0u;
      pBarriersObj->Left.Properties.tuneConfidence             = FLT_ZERO;

      pBarriersObj->Right.Estimate.latDistanceZeroOrderCoeff   =  FLT_ZERO;
      pBarriersObj->Right.Estimate.latDistanceFirstOrderCoeff  =  FLT_ZERO;
      pBarriersObj->Right.Estimate.latDistanceSecondOrderCoeff =  FLT_ZERO;
      pBarriersObj->Right.Estimate.latDistanceThirdOrderCoeff  =  FLT_ZERO;
      pBarriersObj->Right.Estimate.longDistanceToEnd           =  JKRACAM_DEFAULT_LANE_LENGTH;

      pBarriersObj->Right.Information.informationSource        = 0u;
      pBarriersObj->Right.Properties.cmbbConfidence            = 0u;
      pBarriersObj->Right.Properties.lkaConfidence             = 0u;
      pBarriersObj->Right.Properties.tjaConfidencePrimary      = 0u;
      pBarriersObj->Right.Properties.trackStatus               = 0u;
      pBarriersObj->Right.Properties.tuneConfidence            = FLT_ZERO;
   }
   else
   {
      bSuccess = FALSE;
   }

   return bSuccess;
}

/*!****************************************************************************
* \details
*     sets RaCam fusion id
* \param[in]
*     pFusnObjListIn input pointer list
* \return
*     void
******************************************************************************/
LOCAL FUNC(boolean, ObjFusn_CODE) setRaCamFusnID(CONSTP2CONST(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjList)
{
   /* Init running variables */
   uint16    u16i;
   boolean   bSuccess         = TRUE;
   uint16    u16CurrObjCnt    = 0u;

   if (NULL_PTR == pObjList)
   {
      bSuccess = FALSE;
   }
   else if (TRUE == bInitMapFusnVolvoId)
   {
      /* Introduce a new counter variable here as the mapping between JkObjList <-> RaCamObjList may not be a 1:1 mapping */
      for (u16i = 0u; u16i < (pObjList->u16NumObjects); u16i++)
      {
         au8TrackStatusVolvoId[u16CurrObjCnt]               = RACAM_OBJ_TRACK_STATUS_NEW;
         au16MapFusnVolvoId[u16CurrObjCnt]                  = pObjList->aTrackable[u16i].u16ID;
         as16MapFusnIdx[u16CurrObjCnt]                      = (sint16) u16i;
         au8FusnVolvoMotionTypeHistory[u16CurrObjCnt]       = RACAM_MOTION_PATTERN_HIST_UNKWN;
         au32FusnRaCamSensorPatternHistory[u16CurrObjCnt]   = 0u;

         u16CurrObjCnt++;   
      }  

      u16NumRaCamObjects = (pObjList->u16NumObjects);   
      bInitMapFusnVolvoId = FALSE;   
   }   
   else
   {
      /* Reset matched array */
      for (u16i = 0u; u16i < JK_FUSION_MAX_OUTPUT_OBJECTS; u16i++)
      {
         abJkFsnInputMatched[u16i]          = FALSE;
      }

      /* Reset track status, based on u16NumRaCamObjects from previous cycle */
      for (u16i = 0u; u16i < JKRACAM_OBJLISTINPUT_MAX_OBJECTS; u16i++)
      {
         if ((au8TrackStatusVolvoId[u16i] == RACAM_OBJ_TRACK_STATUS_NEW) || (au8TrackStatusVolvoId[u16i] == RACAM_OBJ_TRACK_STATUS_UPDATED) || 
            (au8TrackStatusVolvoId[u16i] == RACAM_OBJ_TRACK_STATUS_COASTED))
         {
            au8TrackStatusVolvoId[u16i] = RACAM_OBJ_TRACK_STATUS_NOT_USED;
         }
         else
         {
            /* MISRA */
         }

         as16MapFusnIdx[u16i] = -1;
      }

      /* Try to match object from pFusnObjListIn to tracks from previous cycle */
      for (u16i = 0u; u16i < (pObjList->u16NumObjects); u16i++)
      {
         checkRaCamFusnID(pObjList->aTrackable[u16i].u16ID, u16i);                     
      }

      /* Reset tracks that are no longer used */
      clearTrackStatus();

      /* Make a second run ton ensure all objects are integrated into new slots that are now available */
      for (u16i = 0u; u16i < (pObjList->u16NumObjects); u16i++)
      {
         /*  
         * Check if object is considered to be relevant
         * Check on number of inserted objects is not required here 
         * as check for overflow is implemented when calculating u16LastRelevantObjectJkObjList 
         */

         /* Object is not matched with object from previous cycle -> create new object */
         if (abJkFsnInputMatched[u16i] == FALSE)
         {
            /* Create new track */
            setNewRaCamID(pObjList->aTrackable[u16i].u16ID, u16i);   
         }
         else
         {
            /* MISRA */
         }
      }   
   }

   return bSuccess;
}
/*!****************************************************************************
* \details
*     convert JK Fusion Object list to RaCam Object list
* \param[in]
*     u16FusionId fusion ID
* \param[in]
*     u16Idx 
* \return
*     bool value
******************************************************************************/
LOCAL FUNC(void, ObjFusn_CODE) checkRaCamFusnID(CONST(uint16, ObjFusn_VAR_NOINIT) u16FusionId, CONST(uint16, ObjFusn_VAR_NOINIT) u16Idx)
{
   uint16 u16Cnt;
   boolean bChangeId                                  = TRUE;

   for (u16Cnt = 0u; u16Cnt < u16NumRaCamObjects; u16Cnt++)
   {
      if (TRUE == bChangeId)
      {
         /* Search for index of provided FusionID and check for track status */
         if ((au16MapFusnVolvoId[u16Cnt] == u16FusionId) && (au8TrackStatusVolvoId[u16Cnt] == RACAM_OBJ_TRACK_STATUS_NOT_USED))
         {
            /* Update track if provided id is found */
            au8TrackStatusVolvoId[u16Cnt] = RACAM_OBJ_TRACK_STATUS_UPDATED;
            as16MapFusnIdx[u16Cnt]        = (sint16) u16Idx;
            bChangeId = FALSE;

            /* The input object is matched, set according entry to true */
            abJkFsnInputMatched[u16Idx] = TRUE;
         }
         else
         {
            /* MISRA */
         }
      }
      else
      {
         /* MISRA */
      }
   }
}

LOCAL FUNC(boolean, ObjFusn_CODE) egoIsStationary(CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   boolean bIsStationary = FALSE;

   if(((pEgoMotion->f32Acc) < JKRACAM_EGO_MOTION_STATIONARY_MAX_ACCELERATION) && ((pEgoMotion->f32Speed) < JKRACAM_EGO_MOTION_STATIONARY_MAX_SPEED))
   {
      bIsStationary = TRUE;
   }
   else
   {
      bIsStationary = FALSE;
   }

   return bIsStationary;
}


/*!****************************************************************************
* \details
*     clear track status in converter ID management
* \return
*     void
******************************************************************************/
LOCAL FUNC(void, ObjFusn_CODE) clearTrackStatus(void)
{
   uint16 u16i;

   for (u16i = 0u; u16i < JKRACAM_OBJLISTINPUT_MAX_OBJECTS; u16i++)
   {    
      if (au8TrackStatusVolvoId[u16i] == RACAM_OBJ_TRACK_STATUS_NOT_USED)
      {
         au8TrackStatusVolvoId[u16i]      = RACAM_OBJ_TRACK_STATUS_INVALID;
         au16MapFusnVolvoId[u16i]         = JKOBJFUSN_RACAM_U16ID_INVALID;

         /* Clearing this information seems to be redundant here, might be removed */
         au8FusnVolvoMotionTypeHistory[u16i]        = RACAM_MOTION_PATTERN_HIST_UNKWN;
         au16NumCyclesIsUnidVehicle[u16i]           = 0u;
         au32FusnVolvoPositionConfidenceAge[u16i]   = 0u;
         au32FusnRaCamSensorPatternHistory[u16i]    = 0u;
      }
      else
      {
         /* MISRA */
      }
   }

   /* Now find last index for valid object to correctly set numberOfRaCamObjects */
   u16NumRaCamObjects = 0u;
   for (u16i = 0u; u16i < JKRACAM_OBJLISTINPUT_MAX_OBJECTS; u16i++) 
   {
      if (au8TrackStatusVolvoId[u16i] != RACAM_OBJ_TRACK_STATUS_INVALID)
      {
         u16NumRaCamObjects = (u16i + 1u);
      }
      else
      {
         /* MISRA */
      }
   }
}

/*!****************************************************************************
* \details
*     set new RaCam ID
* \param[in]
*     u16FusionId Fusion ID
* \param[in]
*     u16Idx array index
* \return
*     void
******************************************************************************/
LOCAL FUNC(void, ObjFusn_CODE) setNewRaCamID(CONST(uint16, ObjFusn_VAR_NOINIT) u16FusionId, CONST(uint16, ObjFusn_VAR_NOINIT) u16Idx)
{
   uint8 u16Cnt;
   boolean bChangeId = TRUE;

   /* Search for free slot, we need at least one more slot as u16NumRaCamObjects slots may be occupied */
   for (u16Cnt = 0u; u16Cnt <= u16NumRaCamObjects; u16Cnt++)
   {
      if (bChangeId == TRUE)
      {
         //find free ID
         if (au8TrackStatusVolvoId[u16Cnt] == RACAM_OBJ_TRACK_STATUS_INVALID)
         {
            au16MapFusnVolvoId[u16Cnt]       = u16FusionId;
            as16MapFusnIdx[u16Cnt]           = (sint16) u16Idx;
            au8TrackStatusVolvoId[u16Cnt]    = RACAM_OBJ_TRACK_STATUS_NEW;

            /* Exit the loop as free slot is found */
            bChangeId = FALSE;

            /* Set corresponding index to matched */
            abJkFsnInputMatched[u16Idx] = TRUE;

            /* Increment object counter in case the new object appended to the object list and there is no available slot before */
            if (u16Cnt >= u16NumRaCamObjects)
            {
               u16NumRaCamObjects = u16NumRaCamObjects + 1u;
            }
            else
            {
               /* MISRA */
            }
         }
         else
         {
            /* MISRA */
         }
      }
      else
      {
         /* MISRA */
      }
   }
}

/*!****************************************************************************
* \details
*     return index of egomotion speed LUT based on current ego speed
* \param[in]
*     pointer JkObjFusn_EgoMotionType pEgoMotion
* \return
*     uint8 u8EgoMotionIndex;
******************************************************************************/

#if JK_RACAM_CONVERTER_CMBB_VALIDATION == STD_ON

LOCAL FUNC(uint16, ObjFusn_CODE) getEgoMotionIndex(CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   uint16 u16Idx              = 0u;
   uint16 u16EgoMotionIndex   = 0u;
   boolean bFound             = FALSE;
   const float32 _f32Speed    = pEgoMotion->f32Speed;           

   for(u16Idx = 0u; (u16Idx < JK_RACAM_CONVERTER_ROI_LUT_SIZE) && (bFound == FALSE); u16Idx++)
   {
      if(_f32Speed > s_af32EgoSpeedDataPoints[u16Idx])
      {
         u16EgoMotionIndex = u16Idx;
      }
      else
      {
         bFound = TRUE;
      }
   }

   return u16EgoMotionIndex;
}

#endif


LOCAL FUNC(void, ObjFusn_CODE) getPrimaryCMBB(CONSTP2VAR(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj,
   CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pFusnObj, 
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{ 
   boolean bIsUnknown   = FALSE;
   boolean bIsAsilSafe  = FALSE;
   boolean bIsPlausible = FALSE;

#if JK_RACAM_CONVERTER_CMBB_VALIDATION == STD_ON
   const uint16 u16EgoMotionIndex = getEgoMotionIndex(pEgoMotion);
#else
   /* PRQA S 3203 2 *//* avoid compiler warnings */
   float32 f32Stub = FLT_ZERO;
   f32Stub = pEgoMotion->f32Speed;
#endif

   /* Set CMBB Confidence */
   if ((pRaCamObj->Information).type == RACAM_CAM_OBJ_TYPE_UNKWN)
   {
      bIsUnknown = TRUE;
   }
   else
   {
      /* MISRA */
   }

   if ((JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR & pFusnObj->u32SensorsHist) == 0u)
   {
      /** Tracks never seen by radar shall have confidence not reliable --> see AMF 128 on Jira */
   }
   else if ((JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER == pFusnObj->u32SensorsHist) &&
      (TRUE == bIsUnknown))
   {
      /* Unknown radar only tracks shall have confidence not reliable --> see AMF 128 on Jira */
   }
   else if (0u != (pFusnObj->u32SensorsHist & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA))
   {
      if (JK_RACAM_CONVERTER_CMBB_HIGH_THRES <= pFusnObj->f32ExistenceQuality)
      {
         pRaCamObj->Properties.cmbbPrimaryConfidence = RACAM_CMBB_PRIMARY_CONFIDENCE_BRAKE_RELIABLE;
      }
      else if (JK_RACAM_CONVERTER_CMBB_MED_THRES <= pFusnObj->f32ExistenceQuality)
      {
         pRaCamObj->Properties.cmbbPrimaryConfidence = RACAM_CMBB_PRIMARY_CONFIDENCE_BRAKE_SUPPORT_RELIABLE;
      }
      else if (JK_RACAM_CONVERTER_CMBB_LOW_THRES <= pFusnObj->f32ExistenceQuality)
      {
         pRaCamObj->Properties.cmbbPrimaryConfidence = RACAM_CMBB_PRIMARY_CONFIDENCE_COASTED_RELIABLE;
      }
      else
      {
         /* MISRA */
      }
   }
   else
   {
      /* MISRA */
   }

#if JK_RACAM_CONVERTER_ASIL_VERIFICATION == STD_ON
   /* check if object is ASIL validated from Sensors */
   bIsAsilSafe = verifyAsilLevel(pFusnObj);
#else
   bIsAsilSafe = TRUE;
#endif

   if (FALSE == bIsAsilSafe)
   {
      pRaCamObj->Properties.cmbbPrimaryConfidence = RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
      pRaCamObj->Properties.cmbbSecondaryConfidence = RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
   }
   else if (pRaCamObj->Properties.cmbbPrimaryConfidence > RACAM_OBJ_CONFIDENCE_NOT_RELIABLE)
   {

#if JK_RACAM_CONVERTER_OBJ_PLAUSIBILITY == STD_ON

      /* Verify object states if they are within physical limits */
      bIsPlausible = verifyObjectPlausibility(pRaCamObj, pFusnObj->f32YawRate,
         pEgoMotion->f32Speed, pFusnObj->u16MotionType);
#else
      bIsPlausible = TRUE;
#endif 
      if (FALSE == bIsPlausible)
      {
         pRaCamObj->Properties.cmbbPrimaryConfidence = RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
         pRaCamObj->Properties.cmbbSecondaryConfidence = RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
      }
      else
      {
         /* Validate CmBB confidence with ROI parametrization*/
#if JK_RACAM_CONVERTER_CMBB_VALIDATION == STD_ON
         validateConfidence(pRaCamObj, u16EgoMotionIndex);
#endif
      }
   } // end else if (pRACAMObj->Properties.cmbbPrimaryConfidence > RACAM_OBJ_CONFIDENCE_NOT_RELIABLE)
   else
   {
      /* Primary Confidence is NOT_RELIABLE, set secondary confidence accordingly */
      pRaCamObj->Properties.cmbbSecondaryConfidence = RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
   }

   if (RACAM_CMBB_PRIMARY_CONFIDENCE_COASTED_RELIABLE < pRaCamObj->Properties.cmbbPrimaryConfidence)
   {
      pRaCamObj->Properties.fcwConfidence = RACAM_FCW_CONFIDENCE_RELIABLE;
   }
   else
   {
      pRaCamObj->Properties.fcwConfidence = RACAM_FCW_CONFIDENCE_NOT_RELIABLE;
   }
}

/*!****************************************************************************
* \details
*     Assigns a position confidence to the object based on the following defintion:
*
*     (1) Position Confidence = 0 <=> Track is Vision only
*     (2) Position Confidence = 1 <=> Track is Radar only
*     (3) Position Confidence = 2 <=> Track is radar-vision
*
*
*     The following exception is implemented:
*     Oncoming slow moving vehicles with absolute velocity < SOME_TRESHOLD are not set 
*     to Position Confidence = 1 for the first SOME_OTHER_TRESHOLD_ us
*
* \param[in]
*     pRaCamObj         pointer to RaCam Obj
* \param[in]
*     u32SensorCurrent  Sensor pattern of matching JkObj
* \param[in]
*     u16Idx  racam index
* \param[in]
*     u32Timestamp  global timestamp
* \return
*     u8PositionConf   position confidence level
******************************************************************************/
LOCAL FUNC(uint8, ObjFusn_CODE) getPositionConfidence(CONSTP2CONST(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj,
   CONST(uint16, ObjFusn_VAR_NOINIT) u16Idx,
   CONST(uint32, ObjFusn_VAR_NOINIT) u32SensorCurrent,
   CONST(uint32, ObjFusn_VAR_NOINIT) u32Timestamp)
{
   uint32 u32FusedTrackAge  = 0u;
   uint8  u8PositionConf    = (uint8)RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;

   /* Reset management array */
   if (NULL_PTR != pRaCamObj)
   {
      if (u32SensorCurrent == JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT)
      {
         u8PositionConf = (uint8) RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
         au32FusnVolvoPositionConfidenceAge[u16Idx] = 0u;
      }
      else if (u32SensorCurrent == JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER)
      {
         u8PositionConf = (uint8) RACAM_OBJ_CONFIDENCE_RELIABLE;
         au32FusnVolvoPositionConfidenceAge[u16Idx] = 0u;
      }
      else if (u32SensorCurrent == JKRACAM_SENSOR_PATTERN_FUSED_OBJECT)
      {
         /* Rising edge */
         if ((au32FusnRaCamSensorPatternHistory[u16Idx] != JKRACAM_SENSOR_PATTERN_FUSED_OBJECT) &&
            (au32FusnRaCamSensorPatternHistory[u16Idx] != 0u))
         {
            /* Check for slow moving oncoming vehicles */
            if ((pRaCamObj->Estimate.speed < JKRACAM_POSITION_CONFIDENCE_ABS_SPEED_THRESHOLD) &&
               (pRaCamObj->Information.motionPatternCurrent == (uint8) RACAM_MOTION_PATTERN_CURRENT_ONCOME))
            {
               if (au32FusnVolvoPositionConfidenceAge[u16Idx] == 0u)
               {
                  au32FusnVolvoPositionConfidenceAge[u16Idx] = u32Timestamp;
               }
               else
               {
                  /* MISRA */
               }
            }
            else
            {
               /* MISRA */
            }
         }
         else
         {
            /* MISRA */
         }

         if (au32FusnVolvoPositionConfidenceAge[u16Idx] == 0u)
         {
            u8PositionConf = (uint8) RACAM_OBJ_CONFIDENCE_RELIABLE1;
         }
         else
         {
            /* Calculate Age, check for overflow */ 
            if (au32FusnVolvoPositionConfidenceAge[u16Idx] > u32Timestamp)
            {
               u32FusedTrackAge = ((JKRACAM_UINT_MAX - au32FusnVolvoPositionConfidenceAge[u16Idx]) + u32Timestamp);
            }
            else
            {
               u32FusedTrackAge = u32Timestamp - au32FusnVolvoPositionConfidenceAge[u16Idx];
            }

            if (u32FusedTrackAge > JKRACAM_POSITION_CONFIDENCE_TIMEOUT)
            {
               u8PositionConf = (uint8) RACAM_OBJ_CONFIDENCE_RELIABLE1;
            }
            else
            {
               u8PositionConf = (uint8) RACAM_OBJ_CONFIDENCE_RELIABLE;
            }
         }

      }
      /* End of sensor pattern check */
      else
      {
         /* This case should not occur, error handling might be added here */
      }
   } // End Null pointer check
   else
   {
      /* MISRA */
   }

   return u8PositionConf;
}

/*!****************************************************************************
* @details
*     get TJA confidence
* @return
*     RACAM_OBJ_CONFIDENCE_RELIABLE TJA confidence value
******************************************************************************/
LOCAL FUNC(uint8, ObjFusn_CODE) getTjaConfidence(void)
{
   return (uint8)RACAM_OBJ_CONFIDENCE_RELIABLE;
}

/*!****************************************************************************
* \details
*     get TJA confidence
* \param[in]
*     pRaCamObj   RaCam Object
* \param[in]
*     pJkObject  Input Object from Fusion Core
* \return
*     void
******************************************************************************/
LOCAL FUNC(void, ObjFusn_CODE) updateVariances(CONSTP2VAR(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj,
   CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkObject,
   CONST(float32, ObjFusn_VAR_NOINIT) f32SinHeading,
   CONST(float32, ObjFusn_VAR_NOINIT) f32CosHeading)
{
   const float32 f32VelX = pJkObject->vecX.data[TRACKABLE_VELX];
   const float32 f32VelY = pJkObject->vecX.data[TRACKABLE_VELY];
   const float32 f32AccX = pJkObject->vecX.data[TRACKABLE_ACCX];
   const float32 f32AccY = pJkObject->vecX.data[TRACKABLE_ACCY];

   const float32 f32VarVelX  = pJkObject->matP.data[TRACKABLE_INDEX_VARIANCE_VELX];
   const float32 f32VarVelY  = pJkObject->matP.data[TRACKABLE_INDEX_VARIANCE_VELY];

   const float32 f32AbsVelX = jk_fusion_abs(f32VelX);
   const float32 f32AbsVelY = jk_fusion_abs(f32VelY);

   const float32 f32VxSquared = jk_fusion_pow2(f32VelX);
   const float32 f32VySquared = jk_fusion_pow2(f32VelY);

   float32 f32VarVxSquared;
   float32 f32VarVySquared;
   float32 f32VarVxSquaredPlusVySquared;
   float32 _f32HeadingVar;
   float32 _f32VarAcc;

   /* Speed */
   if (f32AbsVelX < JKRACAM_SPEED_VAR_THRESHOLD)
   {
      f32VarVxSquared = (FLT_TWO * (f32VarVelX * f32VarVelX));
   }
   else
   {
      f32VarVxSquared = ((FLT_FOUR * f32VxSquared) * f32VarVelX);
   }

   if (f32AbsVelY < JKRACAM_SPEED_VAR_THRESHOLD)
   {
      f32VarVySquared = (FLT_TWO * (f32VarVelY * f32VarVelY));
   }
   else
   {
      f32VarVySquared = ((FLT_FOUR * f32VySquared) * f32VarVelY);
   }

   f32VarVxSquaredPlusVySquared = ((f32VarVxSquared + f32VarVySquared) + (FLT_TWO * pJkObject->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY])); /* (m/s)^4 */
   if ((f32AbsVelX < JKRACAM_SPEED_VAR_THRESHOLD) && (f32AbsVelY < JKRACAM_SPEED_VAR_THRESHOLD))
   {
      /* PRQA S 3120 1 *//* ??? */
      pRaCamObj->Properties.speedStdDev = jk_fusion_sqrt((f32VarVxSquared + f32VarVySquared)) / 4.61f;   /* PRQA S 3121 1 *//* Mathematical formula */
   }
   else
   {
      /* Speed */
      /* PRQA S 3121 1*//* Mathematical formula */
      pRaCamObj->Properties.speedStdDev   = jk_fusion_sqrt(FLT_ONE_QUARTER * (f32VarVxSquaredPlusVySquared / (pRaCamObj->Estimate.speed * pRaCamObj->Estimate.speed))); /* (m/s)^4 */
   }

   /* Heading */
   _f32HeadingVar   = pJkObject->f32HeadingVar;

   /* PRQA S 3121 4*//* Mathematical formula */
   _f32VarAcc = ((f32CosHeading * f32CosHeading) * pJkObject->matP.data[TRACKABLE_INDEX_VARIANCE_ACCX]) +
      ((f32SinHeading * f32SinHeading) * pJkObject->matP.data[TRACKABLE_INDEX_VARIANCE_ACCY]) +
      (jk_fusion_pow2((f32CosHeading * f32AccY) - (f32SinHeading * f32AccX)) * _f32HeadingVar) +
      jk_fusion_abs(((FLT_TWO * f32SinHeading) * f32CosHeading) * pJkObject->matP.data[TRACKABLE_INDEX_COVARIANCE_ACCX_ACCY]);

   /* Heading */
   pRaCamObj->Properties.headingAngleStdDev = jk_fusion_sqrt(_f32HeadingVar);

   /* Acceleration */
   pRaCamObj->Properties.accelerationStdDev = jk_fusion_sqrt(_f32VarAcc);

   /* Position */
   pRaCamObj->Properties.latPositionStdDev   =  jk_fusion_sqrt(pJkObject->matP.data[TRACKABLE_INDEX_VARIANCE_POSY]);
   pRaCamObj->Properties.longPositionStdDev  =  jk_fusion_sqrt(pJkObject->matP.data[TRACKABLE_INDEX_VARIANCE_POSX]);

   if (pRaCamObj->Properties.speedStdDev > JKRACAM_MAX_STD_DEV_SPEED)
   {
      pRaCamObj->Properties.speedStdDev = JKRACAM_MAX_STD_DEV_SPEED;
   }
   else
   {
      /* MISRA */
   }

   if (pRaCamObj->Properties.accelerationStdDev > JKRACAM_MAX_STD_DEV_ACC)
   {
      //pRaCamObj->Properties.speedStdDev = JKRACAM_MAX_STD_DEV_ACC;
      pRaCamObj->Properties.accelerationStdDev = JKRACAM_MAX_STD_DEV_ACC;
   }
   else
   {
      /* MISRA */
   }

   if (pRaCamObj->Properties.headingAngleStdDev > JKRACAM_MAX_STD_DEV_HEADING)
   {
      pRaCamObj->Properties.headingAngleStdDev = JKRACAM_MAX_STD_DEV_HEADING;
   }
   else
   {
      /* MISRA */
   }

   /* Set to default value for stationary objects */
   if ((pRaCamObj->Estimate).speed < JKRACAM_SPEED_THRESHOLD_CONFIDENCE_CALCULATION)
   {
      pRaCamObj->Properties.headingAngleStdDev = JKRACAM_DEFAULT_HEADING_VARIANCE;
      pRaCamObj->Properties.accelerationStdDev = JKRACAM_DEFAULT_ACCELERATION_VARIANCE;
   }
   else
   {
      /* MISRA */
   }
}
/*!****************************************************************************
* \details
*     validate CMBB confidence level with ROI parametrization
* \param[in]
*      pRaCamObj        RaCam Object
*     u8EgoMotionIndex  Index of current egomotion in LUT vector
******************************************************************************/
#if JK_RACAM_CONVERTER_CMBB_VALIDATION == STD_ON
LOCAL FUNC(void, ObjFusn_CODE) validateConfidence(CONSTP2VAR(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj, 
   CONST(uint16, ObjFusn_VAR_NOINIT) u16EgoMotionIndex)
{
   float32 f32HighX1    = FLT_ZERO;
   float32 f32HighY1    = FLT_ZERO;
   float32 f32LowX1     = FLT_ZERO;
   float32 f32LowY1     = FLT_ZERO;
   float32 f32InterpY   = FLT_ZERO;

   const float32 f32x0  = FLT_ZERO;
   const float32 f32y0  = FLT_ZERO;
   const float32 f32x   = pRaCamObj->Estimate.longPosition - JK_VEHICLE_DISTANCE_REAR_AXLE_TO_FRONT_BUMBER;
   const float32 f32y   = jk_fusion_abs(pRaCamObj->Estimate.latPosition);

   if ((pRaCamObj->Information.type == RACAM_CAM_OBJ_TYPE_CAR) || 
      (pRaCamObj->Information.type == RACAM_CAM_OBJ_TYPE_TRUCK))
   { 
      f32HighX1 = s_af32VehLongHighConfidence[u16EgoMotionIndex];
      f32HighY1 = s_af32VehLatHighConfidence[u16EgoMotionIndex];
      f32LowX1  = s_af32VehLongLowConfidence[u16EgoMotionIndex];
      f32LowY1  = s_af32VehLatLowConfidence[u16EgoMotionIndex];
   }
   else
   {
      /** Pedestrian */
      f32HighX1 = s_af32PedLongHighConfidence[u16EgoMotionIndex];
      f32HighY1 = s_af32PedLatHighConfidence[u16EgoMotionIndex];
      f32LowX1  = s_af32PedLongLowConfidence[u16EgoMotionIndex];
      f32LowY1  = s_af32PedLatLowConfidence[u16EgoMotionIndex];
   }

   if((f32x <= f32HighX1) && (f32y <= f32HighY1))
   {
      /* Run linear interpolation to check line of sight */
      f32InterpY = jk_fusion_interp1(f32x0, f32y0, f32HighX1,f32HighY1, f32x);

      if(f32y <= f32InterpY)
      {
         pRaCamObj->Properties.cmbbPrimaryConfidence = jk_fusion_min_U8(pRaCamObj->Properties.cmbbPrimaryConfidence, 
            RACAM_CMBB_PRIMARY_CONFIDENCE_BRAKE_RELIABLE);
      }
      else
      {
         pRaCamObj->Properties.cmbbPrimaryConfidence = jk_fusion_min_U8(pRaCamObj->Properties.cmbbPrimaryConfidence, 
            RACAM_CMBB_PRIMARY_CONFIDENCE_BRAKE_SUPPORT_RELIABLE);
      }
   }
   else if((f32x <= f32LowX1) && (f32y <= f32LowY1))
   {
      /* Run linear interpolation to check line of sight */
      f32InterpY = jk_fusion_interp1(f32x0, f32y0, f32LowX1,f32LowY1, f32x);

      if(f32y <= f32InterpY)
      {
         pRaCamObj->Properties.cmbbPrimaryConfidence = jk_fusion_min_U8(pRaCamObj->Properties.cmbbPrimaryConfidence, 
            RACAM_CMBB_PRIMARY_CONFIDENCE_BRAKE_SUPPORT_RELIABLE);
      }
      else
      {
         pRaCamObj->Properties.cmbbPrimaryConfidence = RACAM_CMBB_PRIMARY_CONFIDENCE_NOT_RELIABLE;
      }

   }
   else
   {
      pRaCamObj->Properties.cmbbPrimaryConfidence = RACAM_CMBB_PRIMARY_CONFIDENCE_NOT_RELIABLE;
   }
}
#endif // JK_RACAM_CONVERTER_CMBB_VALIDATION == STD_ON


/*!****************************************************************************
* \details
*     get track status for RaCam track 
* \param[in]
*     u16Idx            const u16_t, Index of RaCam Object
*     u32SensorCurrent  const u32_t, Sensor pattern of Fusion object that updates the RaCam Object
* \return
*     u8_t  Track Status
******************************************************************************/
LOCAL FUNC(uint8, ObjFusn_CODE) getRaCamTrackStatus(CONST(uint16, ObjFusn_VAR_NOINIT) u16Idx,
   CONST(uint32, ObjFusn_VAR_NOINIT) u32SensorCurrent)
{
   uint8 _u8TrackStatus;

   if (u16Idx < JKRACAM_OBJLISTINPUT_MAX_OBJECTS)
   {
      if (u32SensorCurrent == JKRACAM_SENSOR_PATTERN_COASTED)
      {
         _u8TrackStatus = RACAM_OBJ_TRACK_STATUS_COASTED;
      }
      else
      {
         _u8TrackStatus = au8TrackStatusVolvoId[u16Idx];
      }
   }
   else
   {
      _u8TrackStatus = RACAM_OBJ_TRACK_STATUS_INVALID;
   }

   return _u8TrackStatus;
}

LOCAL INLINE FUNC(uint8, ObjFusn_CODE) getFusionSource(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkObject)
{
   uint8 u8FsnSrc = JKRACAM_FUSION_SOURCE_DEFAULT;

   if(NULL_PTR != pJkObject)
   {
      if((pJkObject->u32SensorsCurr) == JKOBJFUSN_TRACKABLE_U32SENSOR_COASTED)
      {
         u8FsnSrc = JKRACAM_FUSION_SOURCE_COASTED;
      }
      else if((pJkObject->u32SensorsCurr) == JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT)
      {
         u8FsnSrc = JKRACAM_FUSION_SOURCE_VISION_ONLY;
      }
      else if ((0u != (pJkObject->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR)) &&
               (0u == (pJkObject->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_MVS)))
      {
          u8FsnSrc = JKRACAM_FUSION_SOURCE_RADAR_ONLY;
      }
      else
      {
         u8FsnSrc = JKRACAM_FUSION_SOURCE_FUSED;
      }
   }
   else
   {
      /* MISRA */
   }

   return u8FsnSrc;
}

/*!****************************************************************************
* \details
*     verify if object states are plausible for AEB confidence level
* \param[in]
*     pRaCamObj         RaCam Object data
*     f32YawRate        float32, object yaw rate
* \return
*     boolean isPlausible
******************************************************************************/

#if JK_RACAM_CONVERTER_OBJ_PLAUSIBILITY == STD_ON

LOCAL FUNC(boolean, ObjFusn_CODE) verifyObjectPlausibility(CONSTP2CONST(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj,
   const float32 f32YawRate, const float32 f32EgoSpeed, const uint16 u16MotionType)
{
   boolean  bIsPlausible   = TRUE;
   uint8    u8ClassType    = RACAM_CAM_OBJ_TYPE_UNKWN;
   float32  f32PosX        = FLT_ZERO;
   float32  f32PosY        = FLT_ZERO;
   float32  f32VelX        = FLT_ZERO;
   float32  f32VelY        = FLT_ZERO;
   float32  f32AccX        = FLT_ZERO;
   float32  f32AccY        = FLT_ZERO;
   float32  _f32Speed      = FLT_ZERO;
   float32  _f32Heading    = FLT_ZERO;

   if(NULL_PTR == pRaCamObj)
   {
      /* MISRA */
   }
   else
   {
      u8ClassType  = pRaCamObj->Information.type;
      f32PosX      = pRaCamObj->Estimate.longPosition;
      f32PosY      = pRaCamObj->Estimate.latPosition;
      f32VelX      = pRaCamObj->Estimate.longVelocity;
      f32VelY      = pRaCamObj->Estimate.latVelocity;
      _f32Speed    = pRaCamObj->Estimate.speed;
      f32AccX      = pRaCamObj->Estimate.longAcceleration;
      f32AccY      = pRaCamObj->Estimate.latAcceleration;
      _f32Heading  = pRaCamObj->Estimate.headingAngle;

      if((pRaCamObj->Information.motionPatternCurrent == RACAM_MOTION_PATTERN_CURRENT_STATIC) && 
         (f32EgoSpeed > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_MAX_EGO_SPEED_STATIONARY))
      {
         bIsPlausible = FALSE;
      }
      else if((u8ClassType == RACAM_CAM_OBJ_TYPE_CAR) || 
         (u8ClassType == RACAM_CAM_OBJ_TYPE_MOTORCYCLE) ||
         (u8ClassType == RACAM_CAM_OBJ_TYPE_TRUCK))
      {
         if((f32PosX < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_POS_X_MIN) || 
            (f32PosX > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_POS_X_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32PosY < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_POS_Y_MIN) || 
            (f32PosY > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_POS_Y_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32VelX < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_VEL_X_MIN) || 
            (f32VelX > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_VEL_X_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32VelY < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_VEL_Y_MIN) ||
            (f32VelY > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_VEL_Y_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if(_f32Speed > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_SPEED_MAX)
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32AccX < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_ACC_X_MIN) || 
            (f32AccX > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_ACC_X_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32AccY < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_ACC_Y_MIN) || 
            (f32AccY > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_ACC_Y_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32YawRate < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_YAW_RATE_MIN) ||
            (f32YawRate > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_YAW_RATE_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if(u16MotionType != JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY)
         {
            if((_f32Heading < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_HEADING_MIN) ||
               (_f32Heading > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_VEHICLE_HEADING_MAX))
            {
               bIsPlausible = FALSE;
            }
            else
            {
               /* MISRA */
            }
         }
         else
         {
            /* MISRA */
         }
      }
      else if(u8ClassType == RACAM_CAM_OBJ_TYPE_PEDESTRIAN)
      {
         if((f32PosX < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_POS_X_MIN) || 
            (f32PosX > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_POS_X_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32PosY < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_POS_Y_MIN) || 
            (f32PosY > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_POS_Y_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32VelX < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_VEL_X_MIN) || 
            (f32VelX > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_VEL_X_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32VelY < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_VEL_Y_MIN) ||
            (f32VelY > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_VEL_Y_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if(_f32Speed > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_SPEED_MAX)
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32AccX < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_ACC_X_MIN) || 
            (f32AccX > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_ACC_X_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32AccY < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_ACC_Y_MIN) || 
            (f32AccY > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_ACC_Y_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32YawRate < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_YAW_RATE_MIN) ||
            (f32YawRate > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_PEDESTRIAN_YAW_RATE_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }
      }
      else if(u8ClassType == RACAM_CAM_OBJ_TYPE_BICYCLE)
      {
         if((f32PosX < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_POS_X_MIN) || 
            (f32PosX > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_POS_X_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32PosY < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_POS_Y_MIN) || 
            (f32PosY > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_POS_Y_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32VelX < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_VEL_X_MIN) || 
            (f32VelX > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_VEL_X_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32VelY < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_VEL_Y_MIN) ||
            (f32VelY > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_VEL_Y_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if(_f32Speed > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_SPEED_MAX)
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32AccX < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_ACC_X_MIN) || 
            (f32AccX > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_ACC_X_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32AccY < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_ACC_Y_MIN) || 
            (f32AccY > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_ACC_Y_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((f32YawRate < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_YAW_RATE_MIN) ||
            (f32YawRate > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_YAW_RATE_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }

         if((_f32Heading < JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_HEADING_MIN) ||
            (_f32Heading > JK_RACAM_CONVERTER_PLAUSIBILITY_CHECK_BICYCLE_HEADING_MAX))
         {
            bIsPlausible = FALSE;
         }
         else
         {
            /* MISRA */
         }
      }
      else
      {
         bIsPlausible = FALSE;
      }
   }

   return bIsPlausible;
}
#endif // JK_RACAM_CONVERTER_OBJ_PLAUSIBILITY

/*!****************************************************************************
* \details
*     verify if object sensor inputs were ASIL verified
* \param[in]
*     pFusnObj         Fusion core Object data
* 
* \return
*     boolean isAsilSafe
******************************************************************************/

#if JK_RACAM_CONVERTER_ASIL_VERIFICATION == STD_ON

LOCAL FUNC(boolean, ObjFusn_CODE) verifyAsilLevel(P2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pFusnObj)
{
   boolean isAsilVerified = FALSE;


   if(U8_MAX == pFusnObj->u8IsAsilVerified)
   {
      isAsilVerified = TRUE;

   }

   return isAsilVerified;
}
#endif //JK_RACAM_CONVERTER_ASIL_VERIFICATION


/*!****************************************************************************
* \details
*     convert JK Fusion Object list to RaCam Object list
* \param[in]
*     pFusnObjListIn input pointer list
* \param[in]
*     LongitudinalSpeed input pointer
* \param[in]
*     LongAccel_Unbiased input pointer
* \param[in]
*     YawRate_Unbiased input pointer
* \param[in]
*     pRACAMObjListOut input pointer list
* \param[out]
*     pRACAMObjListOut output pointer list
* \return
*     bool value
******************************************************************************/
/// \name ALF converter Main function

/* PRQA S 1503 1 */ /**< Init method, only external function calls */
FUNC(boolean, ObjFusn_CODE) ObjFusnObjListToVolvoSnsrFusnConvert(CONSTP2CONST(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjList,
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion,
   CONSTP2VAR(typeRaCamObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRACAMObjListOut,
   CONST(uint32, ObjFusn_VAR_NOINIT) u32TimeStamp)
{
   uint16   u16Cnt;
   float32  f32AbsSpeedLong;
   float32  f32AbsSpeedLat;
   float32  f32AbsAccLong;
   float32  f32AbsAccLat;
   float32  f32SinHeading;
   float32  f32CosHeading;
   boolean  bSuccess = 1;
   boolean  bEgoIsStationary = 0;

   P2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pFusnObj;
   P2VAR(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRACAMObj;

   if (NULL_PTR == pObjList)
   {
      errorFlag = 0;
      //bSuccess = FALSE;
   }
   else if (NULL_PTR == pRACAMObjListOut)
   {
   
      errorFlag = 1;
      //bSuccess = FALSE;       
   }
   else if(NULL_PTR == pEgoMotion)
   {
   
      errorFlag = 2;
      //bSuccess = FALSE;
   }
   else if (pObjList->u16NumObjects > JKRACAM_OBJLISTINPUT_MAX_OBJECTS)
   {
   
      errorFlag = 3;
      //bSuccess = FALSE;
   }
   else
   {
      /* MISRA */
   }

   bSuccess &= initRaCamObjList(pRACAMObjListOut);


   if (TRUE == bSuccess)
   {
      bEgoIsStationary = egoIsStationary(pEgoMotion);
      
      /* PRQA S 4395 1*//* PRQA S 4119 1*//* Cast is intended here */
      pRACAMObjListOut->timeStamp = u32TimeStamp - (uint32)(pObjList->f32MeasurementLatency * JKRACAM_MILLI_SECONDS_PER_SECOND);
      pRACAMObjListOut->lookIndex = u16RaCamLookIndex;
      pRACAMObjListOut->visionOnlyBrake = 0u;
      pRACAMObjListOut->visionOnlyWarning = 0u;
      pRACAMObjListOut->visionOnlyVruBrake = 0u;

      u16RaCamLookIndex++;

      bSuccess &= setRaCamFusnID(pObjList);

      for (u16Cnt = 0u; u16Cnt < u16NumRaCamObjects; u16Cnt++)
      {
         if (JK_RACAM_CONVERTER_IDX_INVALID != as16MapFusnIdx[u16Cnt])
         {
            pFusnObj  = &(pObjList->aTrackable[as16MapFusnIdx[u16Cnt]]);
            pRACAMObj = &(pRACAMObjListOut->Objects[u16Cnt]);     

            //object states
            pRACAMObj->Estimate.longPosition       = pFusnObj->vecX.data[TRACKABLE_POSX];
            pRACAMObj->Estimate.latPosition        = pFusnObj->vecX.data[TRACKABLE_POSY];
            pRACAMObj->Estimate.longVelocity       = pFusnObj->vecX.data[TRACKABLE_VELX];
            pRACAMObj->Estimate.latVelocity        = pFusnObj->vecX.data[TRACKABLE_VELY];
            pRACAMObj->Estimate.longAcceleration   = pFusnObj->vecX.data[TRACKABLE_ACCX];
            pRACAMObj->Estimate.latAcceleration    = pFusnObj->vecX.data[TRACKABLE_ACCY];
            pRACAMObj->Estimate.headingAngle       = pFusnObj->f32Heading;

            f32AbsSpeedLong = pRACAMObj->Estimate.longVelocity;
            f32AbsSpeedLat =  pRACAMObj->Estimate.latVelocity;
            pRACAMObj->Estimate.speed = jk_fusion_sqrt((f32AbsSpeedLong*f32AbsSpeedLong) + (f32AbsSpeedLat*f32AbsSpeedLat));

            /* calculate acceleration over ground*/
            f32AbsAccLong = pRACAMObj->Estimate.longAcceleration;
            f32AbsAccLat  = pRACAMObj->Estimate.latAcceleration;
            f32CosHeading = jk_fusion_cos(pRACAMObj->Estimate.headingAngle);
            f32SinHeading = jk_fusion_sin(pRACAMObj->Estimate.headingAngle);

            pRACAMObj->Estimate.acceleration = (f32CosHeading * f32AbsAccLong) + (f32SinHeading * f32AbsAccLat);

            /** Update width with default value if not updated by vision, refer to [AMF-610] */
            if(pFusnObj->u8CyclesNoVision > JKRACAM_GEOMETRY_MAX_NO_VISION_CYCLES)
            {
               pRACAMObj->Information.width = JKRACAM_GEOMETRY_DEFAULT_WIDTH;
            }
            else
            {
               pRACAMObj->Information.width = pFusnObj->f32Width;
            }

            pRACAMObj->Properties.trackStatus                      = getRaCamTrackStatus(u16Cnt, (pFusnObj->u32SensorsCurr));
            pRACAMObj->Properties.trafficScenario                  = 0u;
			pRACAMObj->Properties.exsistConfidence	= pFusnObj->f32ExistenceQuality;
            /* set vision id for RadarCam object */
            /* hijack object height to output radar ID for debugging */
            /* see JIRA story [AMF-451] [ObjFusn] Add Radar ID to output fusion list for debugging */
            if (JK_FUSION_MAX_INPUTS <= (pFusnObj->u8VisionIdx))
            {
               pRACAMObj->Properties.visionId = JKRACAM_DEFAULT_VISION_ID;
               pRACAMObj->Information.height = (float32)(JKRACAM_DEFAULT_VISION_ID);
            }
            else
            {
               if ((pFusnObj->au16SensorID[(pFusnObj->u8VisionIdx)]) == JKOBJFUSN_TRACKABLE_U16ID_DEFAULT)
               {
                  pRACAMObj->Properties.visionId = JKRACAM_DEFAULT_VISION_ID;
               }
               else
               {
                  pRACAMObj->Properties.visionId = (uint8)(pFusnObj->au16SensorID[(pFusnObj->u8VisionIdx)]);
               }

               if ((pFusnObj->au16SensorID[1u - (pFusnObj->u8VisionIdx)]) == JKOBJFUSN_TRACKABLE_U16ID_DEFAULT)
               {
                  pRACAMObj->Information.height = (float32)(JKRACAM_DEFAULT_VISION_ID);
               }
               else
               {
                  pRACAMObj->Information.height = (float32)(pFusnObj->au16SensorID[(1u - pFusnObj->u8VisionIdx)]);
               }
            }

            pRACAMObj->Information.brakeLightIndicator = 0u;
            pRACAMObj->Information.distanceToLeftNearLaneMarking   = FLT_ZERO;
            //pRACAMObj->Information.distanceToLeftFarLaneMarking    = FLT_ZERO;
            pRACAMObj->Information.distanceToRightNearLaneMarking  = FLT_ZERO;
            //pRACAMObj->Information.distanceToRightFarLaneMarking   = FLT_ZERO;
            pRACAMObj->Information.hazardLightIndicator            = 0u;
            pRACAMObj->Information.motionPatternCurrent            = getRaCamMotionType(pFusnObj->u16MotionType);
            pRACAMObj->Information.motionPatternHistory            = au8FusnVolvoMotionTypeHistory[u16Cnt];    /* tbd */
            pRACAMObj->Information.nearestSide                     = 0u;    /* Value 0: rear */
            pRACAMObj->Information.turnIndicator                   = JKRACAM_DEFAULT_TURN_INDICATOR;    /* Value 3: Unknown */
            pRACAMObj->Properties.fusionSource                     = getFusionSource(pFusnObj);

            /* Update curvature */
            if ((pRACAMObj->Estimate.speed < JKRACAM_SPEED_THRESHOLD) ||
               (pRACAMObj->Information.motionPatternCurrent == RACAM_MOTION_PATTERN_CURRENT_STATIC))
            {
               pRACAMObj->Estimate.curvature = FLT_ZERO;
            }
            else
            {
               pRACAMObj->Estimate.curvature = (pFusnObj->f32YawRate) / (pRACAMObj->Estimate.speed);
            }

            /* Standard Deviations */
            updateVariances(pRACAMObj, pFusnObj, f32SinHeading, f32CosHeading);

            pRACAMObj->Properties.positionConfidence               = getPositionConfidence(pRACAMObj, u16Cnt, pFusnObj->u32SensorsCurr, u32TimeStamp);
            pRACAMObj->Properties.tjaConfidence                    = getTjaConfidence();
            //pRACAMObj->Properties.leftFarLaneMarkingConfidence     = RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
            pRACAMObj->Properties.leftNearLaneMarkingConfidence    = RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
            //pRACAMObj->Properties.rightFarLaneMarkingConfidence    = RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
            pRACAMObj->Properties.rightNearLaneMarkingConfidence   = RACAM_OBJ_CONFIDENCE_NOT_RELIABLE;
            pRACAMObj->Properties.cmbbSecondaryConfidence          = RACAM_CMBB_SECONDARY_CONFIDENCE_RELIABLE;

            getRaCamClassType(pFusnObj, pRACAMObj, bEgoIsStationary, u16Cnt);
            getPrimaryCMBB(pRACAMObj, pFusnObj, pEgoMotion); 

            /* Set motion model according to class type */
            if ((pRACAMObj->Information.type == (uint8) RACAM_CAM_OBJ_TYPE_PEDESTRIAN) ||
               (pRACAMObj->Information.type == (uint8) RACAM_CAM_OBJ_TYPE_UNKWN))
            {
               pRACAMObj->Properties.motionModel = RACAM_OBJ_MOTION_MODEL_CONST_ACC;
            }
            else
            {
               pRACAMObj->Properties.motionModel = RACAM_OBJ_MOTION_MODEL_COORD_TURN;
            }

            /* Update Motion Type history */
            au8FusnVolvoMotionTypeHistory[u16Cnt] = getRaCamMotionTypeHist(&pRACAMObj->Information.motionPatternCurrent,
               &pRACAMObj->Information.motionPatternHistory);

            /* Update Sensor pattern history */
            au32FusnRaCamSensorPatternHistory[u16Cnt] = pFusnObj->u32SensorsCurr;

         } // end if (JK_RACAM_CONVERTER_IDX_INVALID != as16MapFusnIdx[u16Cnt])
         else
         {
            /* MISRA */
         }
      } // end for (u16Cnt = 0u; u16Cnt < u16NumRaCamObjects; u16Cnt++)

      bPrevEgoIsStationary = bEgoIsStationary;

   }  // end if (TRUE == bSuccess)    
   else
   {
      /* MISRA */
   }

   return bSuccess;
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/******************************************************************************
End Of File
*****************************************************************************/
/* \} */
