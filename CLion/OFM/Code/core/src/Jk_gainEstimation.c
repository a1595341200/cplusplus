/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_gainEstimation.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: calculates gain an corresponding variables 
	source code of ego motion module
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

#include "Jk_gainEstimation.h"
#include "Jk_gainEstimation_int.h"
#include "JkObjFusn_ParameterInterface.h"
#include "JkObjFusn_TrackableConstants.h"
#include "JkObjFusn_TrackableListUtils.h"
#include "JkObjFusn_ErrorCodes.h"
#include "Jk_fusion_math.h"
#include "Jk_error_management.h"
#include "JkObjFusn_AAU_Codes.h"
#include "JkObjFusn_TrackableProps.h"

#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 1532 2 *//* Function called from external AAU */
FUNC(uint32, ObjFusn_CODE) gain_update(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas,
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   uint32 u32Success       = JKOBJFUSN_ERROR_NOERROR;
   uint16 u16SensorPos     = 0u;
   uint16 u16PreviousCam   = 0u;
   uint16 u16PreviousRad   = 0u;
   float32 f32NewGain      = FLT_ZERO;
   float32 f32NewGainVar   = FLT_ZERO;
   float32 f32GainVarSum   = FLT_ZERO;

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pMeas) || (NULL_PTR == pTrkbl))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_GAINESTIMATION,
         JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_UPDATE);
   }
   else if (pMeas == pTrkbl)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_POINTER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_POINTER, JKOBJFUSN_AAU_GAINESTIMATION,
         JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_UPDATE);
   }
   else
#endif
      if ((JK_GAIN_ESTIMATION_MINIMAL_XPOS > pMeas->vecX.data[TRACKABLE_POSX]) ||
         (JK_GAIN_ESTIMATION_MINIMAL_XPOS > pTrkbl->vecX.data[TRACKABLE_POSX]))
      { 
         /* no update for small x values since 1/0 -> infinity */
      } 
      else
      {
         u16SensorPos = Trackable_getSensPos(pMeas->u32SensorsCurr);
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
         /* initialize or update gain, if both sensors see object */
         if (JKOBJFUSN_SENS_POS_INVALID == u16SensorPos)
         {
            u32Success = JKOBJFUSN_ERROR_INTERNAL_ERROR;
            (void)jk_error_management_addError(JKOBJFUSN_ERROR_INTERNAL_ERROR, JKOBJFUSN_AAU_GAINESTIMATION,
               JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_UPDATE);
         }
         else
#endif
         {
            /** Check if vision measurement and internal track was updated by radar before */
            if ((0u != ((pMeas->u32SensorsCurr) & JKOBJFUSN_TRACKABLE_U32SENSOR_VISION)) && 
               (pTrkbl->u8CyclesNoRadar < JK_GAIN_RADAR_CYCLES_ESTIMATION))
            {  
               u16PreviousCam  = pTrkbl->au16SensorIDLast[u16SensorPos];

               u32Success |= gain_estimation(pTrkbl,pMeas,&f32NewGain,&f32NewGainVar);

               /* Gain not initialized or internal fusion track was updated by different vision measurement before */
               if((FLT_ZERO > pTrkbl->f32GainVar) || (pMeas->u16ID != u16PreviousCam))
               {
                  pTrkbl->f32Gain      = f32NewGain;
                  pTrkbl->f32GainVar   = f32NewGainVar;
               }
               else
               {
                  /* update gain */
                  f32GainVarSum = (f32NewGainVar + (pTrkbl->f32GainVar));
                  pTrkbl->f32Gain = ((f32NewGainVar / f32GainVarSum) * (pTrkbl->f32Gain));
                  pTrkbl->f32Gain += (((pTrkbl->f32GainVar) / f32GainVarSum) * f32NewGain);
                  pTrkbl->f32GainVar = ((f32NewGainVar * (pTrkbl->f32GainVar)) / f32GainVarSum);

                  /* limit gain based on camera measurement */
                  u32Success |= limitGain(pMeas->u16Class,&pTrkbl->f32Gain,&pTrkbl->f32GainVar);
               }

               /* compensate camera measurement, if no gain is available P matrix is rotated */
               u32Success |=  gain_compensation(pMeas, pMeas, pTrkbl->f32Gain, pTrkbl->f32GainVar, pEgoMotion);
            }
            else if ((0u != (pMeas->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR)) &&
               (0u != (pTrkbl->u32SensorsHist & JKOBJFUSN_TRACKABLE_U32SENSOR_VISION)))
            { 
               /* measurment is radar and track is based on camera*/
               u16PreviousRad = pTrkbl->au16SensorIDLast[u16SensorPos];

               if (FLT_ZERO > pTrkbl->f32GainVar)
               {  
                  /* track is camera only (otherwise gain would have been estimated) and no gain available or 
                   * corresponding radar changed / radar information too old -> estimate gain and compensate track 
                   */
                  u32Success |= gain_estimation(pMeas, pTrkbl, &pTrkbl->f32Gain, &pTrkbl->f32GainVar);

                  /* Track has to be compensated */
                  u32Success |= gain_compensation(pTrkbl, pTrkbl, pTrkbl->f32Gain, pTrkbl->f32GainVar, pEgoMotion);

                  /* reset xAcceleration - which does not fit to radar values */
                  pTrkbl->matP.data[TRACKABLE_INDEX_VARIANCE_ACCX] = JK_GAIN_ESTIMATION_RESET_VAR_ACC;
                
               }
               else if ((JK_GAIN_RADAR_CYCLES_RESET < pTrkbl->u8CyclesNoRadar) || (u16PreviousRad != pMeas->u16ID))
               { 
                  /*  P of track has to be increased, since it was degenerated by camera measurements or by other radar,
                      further the previous gain and gain variance have to be resetted */
                  /*  Gain initialized at this point, no further checks needed */
                  u32Success |= gain_PIncrease(pTrkbl, pTrkbl->f32GainVar, pEgoMotion);
                  pTrkbl->f32Gain = JKOBJFUSN_TRACKABLE_F32GAIN_DEFAULT;
                  pTrkbl->f32GainVar = JKOBJFUSN_TRACKABLE_F32GAINVAR_DEFAULT;
               }
               else
               {
                  /* MISRA */
               }
            }
            else
            {
               /* MISAR - radar measurement - radar with no camera update */
            }
         }
      }
      return u32Success;
}

/* PRQA S 1532 2 *//* Function called from external AAU */
FUNC(uint32, ObjFusn_CODE) gain_prediction(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl, const float32 f32dt)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if (FLT_ZERO > f32dt)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_INPUT, JKOBJFUSN_AAU_GAINESTIMATION,
         JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_PREDICTION);
   }
   else
#endif
   {
      if (FLT_ZERO <= pTrkbl->f32GainVar)
      {
         pTrkbl->f32GainVar += ((JK_GAIN_PREDICTION_Q * f32dt) * f32dt);
         pTrkbl->f32GainVar = jk_fusion_min_max_F32((pTrkbl->f32GainVar), JKOBJFUSN_TRACKABLE_F32GAINVAR_MIN, JKOBJFUSN_TRACKABLE_F32GAINVAR_MAX);
      }
      else
      {
         /* MISRA */
      }
   }
   return u32Success;
}

FUNC(uint32, ObjFusn_CODE) gain_estimation(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas,
   CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Gain,
   CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32GainVar)
{
   uint32 u32Success             = JKOBJFUSN_ERROR_NOERROR;
   float32 f32TrackRangeSq       = FLT_ZERO;
   float32 f32MeasRangeSq        = FLT_ZERO;
   float32 f32PosXSquaredTrack   = FLT_ZERO; 
   float32 f32PosYSquaredTrack   = FLT_ZERO;
   float32 f32PosXSquaredMeas    = FLT_ZERO;
   float32 f32PosYSquaredMeas    = FLT_ZERO;
   float32 f32GainVarTmp         = FLT_ZERO;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pTrkbl) || (NULL_PTR == pMeas) || (NULL_PTR == pf32Gain) || (NULL_PTR == pf32GainVar))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_GAINESTIMATION,
         JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_ESTIMATION);
   }
   else if (pMeas == pTrkbl)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_POINTER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_POINTER, JKOBJFUSN_AAU_GAINESTIMATION,
         JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_UPDATE);
   }
   else
#endif
#endif
      {
         /* measurment is trackable which has scaling error (e.g. camera measurement, or camera-only track), pTrkbl is free of scaling error
         e.g. radar measurement or fused / radar-only track) */

         //f32PosXSquaredTrack = jk_fusion_pow2((pTrkbl->vecX.data[TRACKABLE_POSX]- Fusion_get_f32DynCalPrmForCamLongDistToRearAxle()));
         f32PosXSquaredTrack = jk_fusion_pow2(pTrkbl->vecX.data[TRACKABLE_POSX]);  //Ryan add
         f32PosYSquaredTrack = jk_fusion_pow2(pTrkbl->vecX.data[TRACKABLE_POSY]);
         //f32PosXSquaredMeas  = jk_fusion_pow2((pMeas->vecX.data[TRACKABLE_POSX]- Fusion_get_f32DynCalPrmForCamLongDistToRearAxle()));
         f32PosXSquaredMeas = jk_fusion_pow2(pMeas->vecX.data[TRACKABLE_POSX]); //Ryan add
         f32PosYSquaredMeas  = jk_fusion_pow2(pMeas->vecX.data[TRACKABLE_POSY]);

         /* determine radial distance of both rad = sqrt(x^2+y^2) with compensated x position*/
         f32TrackRangeSq   = f32PosXSquaredTrack+f32PosYSquaredTrack;
         f32MeasRangeSq    = f32PosXSquaredMeas+f32PosYSquaredMeas;

         if ((JK_GAIN_ESTIMATION_MIN_RANGE < f32TrackRangeSq) && 
            (JK_GAIN_ESTIMATION_MIN_RANGE < f32MeasRangeSq))
         {
            *pf32Gain =  jk_fusion_sqrt(f32MeasRangeSq / f32TrackRangeSq);

            /* Error propagation of range for gain rMeas / rRange*/
            f32GainVarTmp = (((f32PosXSquaredMeas * pMeas->matP.data[TRACKABLE_INDEX_VARIANCE_POSX]) +
               (f32PosYSquaredMeas * pMeas->matP.data[TRACKABLE_INDEX_VARIANCE_POSY])) / f32TrackRangeSq) /
               f32MeasRangeSq;
            f32GainVarTmp += (((f32PosXSquaredTrack * pTrkbl->matP.data[TRACKABLE_INDEX_VARIANCE_POSX]) +
               (f32PosYSquaredTrack * pTrkbl->matP.data[TRACKABLE_INDEX_VARIANCE_POSY])) * f32MeasRangeSq) /
               ((f32TrackRangeSq * f32TrackRangeSq) * f32TrackRangeSq);

            *pf32GainVar = f32GainVarTmp;
            u32Success = limitGain(pMeas->u16Class, pf32Gain, pf32GainVar);
         }
         else
         {
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
            /* since internal states (rear axle coordinate system) are investigated, tracks can never be 0 / 0 */
            u32Success = JKOBJFUSN_ERROR_INTERNAL_ERROR;
            (void) jk_error_management_addError(JKOBJFUSN_ERROR_INTERNAL_ERROR, JKOBJFUSN_AAU_GAINESTIMATION,
               JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_ESTIMATION);
#endif
         }
      }

      return u32Success;
}

FUNC(uint32, ObjFusn_CODE) gain_compensation(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pOutTrkbl,
   CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl, const float32 f32Gain,
   const float32 f32GainVar, CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   VAR(stRelativeStates, ObjFusn_VAR_NOINIT) sRelative;
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pTrkbl)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_GAINESTIMATION,
         JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_COMPENSATION);
   }
   else
#endif
      if ((JK_GAIN_PREDICTION_MIN_STATE_SIZE > pTrkbl->matP.u16Size) ||
         (JK_GAIN_PREDICTION_MIN_STATE_SIZE > pTrkbl->vecX.nRows))
      {
         u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
         (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL, JKOBJFUSN_AAU_GAINESTIMATION,
            JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_COMPENSATION);
      }
      else
#endif
      if (FLT_ZERO < f32GainVar)
      { 
         /* calculate relative states and ego */
         u32Success = getRelativeStates(pTrkbl, &sRelative, pEgoMotion);

         /* if gain is available -> compensate state */
         /* for PosX take camera offset in x-direction into account */
         //pOutTrkbl->vecX.data[TRACKABLE_POSX] = (sRelative.f32PosXRel / f32Gain) + Fusion_get_f32DynCalPrmForCamLongDistToRearAxle();
         pOutTrkbl->vecX.data[TRACKABLE_POSX] = (sRelative.f32PosXRel / f32Gain);  //Ryan add
         pOutTrkbl->vecX.data[TRACKABLE_POSY] = pTrkbl->vecX.data[TRACKABLE_POSY] / f32Gain;
         /* for VelX take relative velocity into account */
         pOutTrkbl->vecX.data[TRACKABLE_VELX] = (sRelative.f32VelXRel / f32Gain) + sRelative.f32EgoVelX;
         /* for VelX take relative velocity into account */
         pOutTrkbl->vecX.data[TRACKABLE_VELY] = (sRelative.f32VelYRel / f32Gain) + sRelative.f32EgoVelY;

         /* reset xAcceleration - which does not fit to radar values -> camera only has no acceleration */
         if (pTrkbl->matP.u16Size > JK_GAIN_PREDICTION_MIN_STATE_SIZE)
         {
            pOutTrkbl->matP.data[TRACKABLE_INDEX_VARIANCE_ACCX] = JK_GAIN_ESTIMATION_RESET_VAR_ACC;
            pOutTrkbl->matP.data[TRACKABLE_INDEX_VARIANCE_ACCY] = JK_GAIN_ESTIMATION_RESET_VAR_ACC;
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


      return u32Success;
}

FUNC(uint32, ObjFusn_CODE) gain_PIncrease(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   const float32 f32GainVar, CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   VAR(stRelativeStates, ObjFusn_VAR_NOINIT) sRelative;
   uint32 u32Success;

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pTrkbl)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_GAINESTIMATION,
         JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_PINCREASE);
   }
   else
#endif
   {
      u32Success = getRelativeStates(pTrkbl,&sRelative, pEgoMotion);
      u32Success |= increaseP(pTrkbl,&sRelative,f32GainVar);
   }

   return u32Success;
}

/* PRQA S 1505 2 *//* Function is used in distance score AAU and gainEstimation depending on configuration */
FUNC(uint32, ObjFusn_CODE) limitGain(const uint16 u16Class, CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Gain,
   CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32GainVar)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time pointer check activation */

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pf32Gain) || (NULL_PTR == pf32GainVar))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_GAINESTIMATION,
         JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_LIMITGAIN);
   }
   else
#endif
   {
      /* limit depending on class */
      if (0u != (u16Class & JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN)) /* & since all kind of pedestrians */
      {
         /* ToDo: Redefine Macros such that multiplication is no longer needed */
         *pf32Gain = jk_fusion_min_max_F32(*pf32Gain, JK_GAIN_PREDICTION_CAM_GAIN_PED_MIN, JK_GAIN_PREDICTION_CAM_GAIN_PED_MAX);
      }
      else if (u16Class == JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_CAR) /* = since has to be exactly equal */
      {
         *pf32Gain = jk_fusion_min_max_F32(*pf32Gain, JK_GAIN_PREDICTION_CAM_GAIN_CAR_MIN, JK_GAIN_PREDICTION_CAM_GAIN_CAR_MAX);
      }
      else if (u16Class == JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRUCK)
      {
         *pf32Gain = jk_fusion_min_max_F32(*pf32Gain, JK_GAIN_PREDICTION_CAM_GAIN_TRUCK_MIN,JK_GAIN_PREDICTION_CAM_GAIN_TRUCK_MAX);
      }
      else 
      {
         *pf32Gain = jk_fusion_min_max_F32(*pf32Gain, JK_GAIN_PREDICTION_CAM_GAIN_DEFAULT_MIN, JK_GAIN_PREDICTION_CAM_GAIN_DEFAULT_MAX);
      } 

      *pf32GainVar = jk_fusion_min_max_F32(*pf32GainVar, JKOBJFUSN_TRACKABLE_F32GAINVAR_MIN, JKOBJFUSN_TRACKABLE_F32GAINVAR_MAX);
   }

   return u32Success;
}

/* PRQA S 3206 ++ */ /* argument may be set to other values depending on run-time check activation */
LOCAL FUNC(uint32, ObjFusn_CODE) increaseP(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   CONSTP2CONST(stRelativeStates, AUTOMATIC, ObjFusn_VAR_NOINIT) sRelative, const float32 f32GainVar)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pTrkbl)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;  
      (void) jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_GAINESTIMATION,
         JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_INCREASEP);
   }
   else
#endif
      if (FLT_ZERO > f32GainVar)
      {
         u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;  
         (void) jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_INPUT, JKOBJFUSN_AAU_GAINESTIMATION,
            JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_INCREASEP);
      }
      else
#endif
      {  /* simplicfication don't take gain into account, since it could be wrong, since radar changed */
         pTrkbl->matP.data[TRACKABLE_INDEX_VARIANCE_POSX] += ((sRelative->f32PosXRel) * (sRelative->f32PosXRel)) * f32GainVar;
         pTrkbl->matP.data[TRACKABLE_INDEX_VARIANCE_POSY] += ((pTrkbl->vecX.data[TRACKABLE_POSY]) * (pTrkbl->vecX.data[TRACKABLE_POSY])) * f32GainVar;
         pTrkbl->matP.data[TRACKABLE_INDEX_VARIANCE_VELX] += ((sRelative->f32VelXRel) * (sRelative->f32VelXRel)) * f32GainVar;
         pTrkbl->matP.data[TRACKABLE_INDEX_VARIANCE_VELY] += ((sRelative->f32VelYRel) * (sRelative->f32VelYRel)) * f32GainVar;
      }

      return u32Success;
}
/* PRQA S 3206 -- */

LOCAL FUNC(uint32, ObjFusn_CODE) getRelativeStates(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   CONSTP2VAR(stRelativeStates, AUTOMATIC, ObjFusn_VAR_NOINIT) psRelative,
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotionItem)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time pointer check activation */

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pTrkbl) || (NULL_PTR == psRelative))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void) jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_GAINESTIMATION,
         JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_RELATIVESTATES);
   }
   else
#endif
   {
      /* calculate ego velocity */
      psRelative->f32EgoVelX = ((pEgoMotionItem->f32Speed) - ((pEgoMotionItem->f32YawRate) * ((pTrkbl->vecX).data[TRACKABLE_POSY])));
      psRelative->f32EgoVelY = ((pEgoMotionItem->f32YawRate) * ((pTrkbl->vecX).data[TRACKABLE_POSX]));

      //psRelative->f32PosXRel = pTrkbl->vecX.data[TRACKABLE_POSX] - Fusion_get_f32DynCalPrmForCamLongDistToRearAxle();
      psRelative->f32PosXRel = pTrkbl->vecX.data[TRACKABLE_POSX];  //Ryan add
      psRelative->f32VelXRel = pTrkbl->vecX.data[TRACKABLE_VELX] - psRelative->f32EgoVelX;
      psRelative->f32VelYRel = pTrkbl->vecX.data[TRACKABLE_VELY] - psRelative->f32EgoVelY;
   }
   return u32Success;
}

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#endif /* JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON */

/**
* \}
*/
