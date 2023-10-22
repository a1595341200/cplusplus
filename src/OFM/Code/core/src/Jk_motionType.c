/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_egoMotion.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
	This is a structure definition file for the object fusion ego motion 
	interface that defines the motion of the ego vehicle for a given period of time.

	Note: At the moment, the structure definition is preliminary and will not hold
	all necessary information, e.g. the period of time (dt) or the latency are
	missing. Further, object fusion will require the ego motion history in the 
	future, thus a list structure definition should follow.
* Others:
* Function List:
    1.¡­¡­¡­¡­
    2.¡­¡­¡­¡­
* History: 
    1.Date:
      Author:
      Modification:
    2.¡­¡­¡­¡­
**********************************************************************************/ 

/*==================[inclusions]============================================*/


#include "Jk_motionType.h"
#include "Jk_fusion_math.h"
#include "Jk_error_management.h"
#include "JkObjFusn_TrackableConstants.h"
#include "JkObjFusn_ParameterInterface.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

/* PRQA S 1532 2 *//* Library Function */
FUNC(uint32, ObjFusn_CODE) jk_motionType_calculateMotionType(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl)
{
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   uint32   u32Success              = JKOBJFUSN_ERROR_NOERROR;
#else
   const uint32 u32Success          = JKOBJFUSN_ERROR_NOERROR;
#endif
   boolean  bIsStationary           = TRUE;
   float32  f32ObjVelX              = FLT_ZERO;
   float32  f32ObjVelY              = FLT_ZERO;
   float32  _f32Speed               = FLT_ZERO;
   float32  _f32Heading             = FLT_ZERO;
   uint16   u16MotionTypeOld        = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN;
   float32  f32ThresholdStationary  = FLT_ZERO;

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pTrkbl)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_MOTION_TYPE,
         JKOBJFUSN_AAU_MOTION_TYPE_SET_MOTION_TYPE_TRKBL);
   }
   else
#endif
   {
      f32ObjVelX  = pTrkbl->vecX.data[TRACKABLE_VELX];
      f32ObjVelY  = pTrkbl->vecX.data[TRACKABLE_VELY];
      _f32Speed   = (f32ObjVelX * f32ObjVelX) + (f32ObjVelY * f32ObjVelY);
      _f32Heading = jk_fusion_abs(pTrkbl->f32Heading);
      u16MotionTypeOld = pTrkbl->u16MotionType;

      if (((u16MotionTypeOld == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY) ||
         (u16MotionTypeOld == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED)) ||
         (u16MotionTypeOld == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN))
      {
         f32ThresholdStationary = JKOBJFUSN_MOTIONTYPE_TO_MOVING;
      }
      else
      {
         f32ThresholdStationary = JKOBJFUSN_MOTIONTYPE_TO_STATIONARY;
      }

      if ((f32ThresholdStationary * f32ThresholdStationary) > _f32Speed)
      {
         bIsStationary = TRUE;
      }
      else
      {
         bIsStationary = FALSE;
      }

      /*
       * Previous Motion Type is UNKNOWN, possible transitions are 
       *  - CROSSING
       *  - DRIVING
       *  - STATIONARY
       *  - ONCOMING
       */
      if (u16MotionTypeOld == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN)
      {
         // if (((pTrkbl->u32SensorsHist & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA) > 0u) &&
            // ((pTrkbl->u32SensorsHist & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR) == 0u))
         // {
            // pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN;
         // }
         // else   //Ryan add
		if (TRUE == bIsStationary)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY;
         }
         else if(_f32Heading < JKOBJFUSN_MOTIONTYPE_CROSSING_TO_DRIVING)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING;
         }
         else if (_f32Heading < JKOBJFUSN_MOTIONTYPE_CROSSING_TO_ONCOMING)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING;
         }
         else
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING;
         }
      }
      /*
       *  Previous Motion Type is STATIONARY, possible transitions are
       *  - STATIONARY
       *  - ONCOMING
       *  - CROSSING
       *  - DRIVING
       */
      else if (u16MotionTypeOld == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY)
      {
         if (TRUE == bIsStationary)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY;
         }
         else if(_f32Heading < JKOBJFUSN_MOTIONTYPE_CROSSING_TO_DRIVING)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING;
         }
         else if (_f32Heading < JKOBJFUSN_MOTIONTYPE_CROSSING_TO_ONCOMING)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING;
         }
         else
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING;
         }
      }
      /*
       *  Previous Motion Type is ONCOMING, possible transitions are
       *  - ONCOMING
       *  - CROSSING
       *  - STATIONARY
       */
      else if (u16MotionTypeOld == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING)
      {
         if (TRUE == bIsStationary)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY;
         }
         else if (_f32Heading < JKOBJFUSN_MOTIONTYPE_ONCOMING_TO_CROSSING)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING;
         }
         else
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING;
         }
      }
      /*
       *  Previous Motion Type is CROSSING, possible transitions are
       *  - ONCOMING
       *  - CROSSING
       *  - STATIONARY
       *  - DRIVING
       */
      else if (u16MotionTypeOld == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING)
      {
         if (TRUE == bIsStationary)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY;
         }
         else if (_f32Heading < JKOBJFUSN_MOTIONTYPE_CROSSING_TO_DRIVING)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING;
         }
         else if(_f32Heading >= JKOBJFUSN_MOTIONTYPE_CROSSING_TO_ONCOMING)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING;
         }
         else
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING;
         }
      }
      /*
       *  Previous Motion Type is DRIVING, possible transitions are
       *  - DRIVING
       *  - CROSSING
       *  - STOPPED
       */
      else if (u16MotionTypeOld == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING)
      {
         if (TRUE == bIsStationary)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED;
         }
         else if (_f32Heading > JKOBJFUSN_MOTIONTYPE_DRIVING_TO_CROSSING)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING;
         }
         else
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING;
         }
      }
      /*
       *  Previous Motion Type is STOPPED, possible transitions are
       *  - DRIVING
       *  - REVERSING
       *  - STOPPED
       */
      else if (u16MotionTypeOld == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED)
      {
         if (TRUE == bIsStationary)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED;
         }
         else if (f32ObjVelX < FLT_ZERO)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_REVERSING;
         }
         else
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING;
         }
      }
      /*
      *  Previous Motion Type is REVERSING, possible transitions are
      *  - STOPPED
      *  - REVERSING
      *  - UNKNOWN
      */
      else if (u16MotionTypeOld == JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_REVERSING)
      {
         if (TRUE == bIsStationary)
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED;
         }
         else if (f32ObjVelX > FLT_ZERO)
         {
            /* Not supposed to happen, consider this as an error state. Reset state machine to UNKNOWN in this case */
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN;
         }
         else
         {
            pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_REVERSING;
         }
      }
      else
      {
         pTrkbl->u16MotionType = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN;
      }
   }

   return u32Success;
}

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/** \} */
