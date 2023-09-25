/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_lkf_coordinatedTurn.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description:
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

#include "Jk_lkf_coordinatedTurn.h"
#include "Jk_lkf_coordinatedTurn_int.h"
#include "Jk_fusion_math.h"
#include "JkObjFusn_ConfigAlgorithm.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"
#include "Jk_error_management.h"
#include "JkObjFusn_TrackableConstants.h"
#include "JkObjFusn_TrackableProps.h"

/*****************************************************************************
FUNCTIONS
*****************************************************************************/
/** @name Jk_lkf_coordinatedTurn.c functions */

/**
 * \fn bool_t LKF_CoordinatedTurn_DoPredict(JkObjFusn_TrackableListType * const pTrkbl, f32_t const f32Q, f32_t const f32Dt)
 * \brief  predict the heading and variance for a specified time dT depending on the process noise (Q)
 *
 * \param  [in, out] pTrkbl   JkObjFusn_TrackableType * const, trackable which shall be predicted
 * \param  f32Q               f32_t const, process noise Q
 * \param  f32Dt              f32_t const, time interval
 *
 * \return  TRUE (ok) or FALSE (error occured)
 */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

/* PRQA S 1532 2 *//* Function called from external AAU */
FUNC(uint32, ObjFusn_CODE) LKF_CoordinatedTurn_DoPredict(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   const float32 f32PredictionDt)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */
   float32 f32Q_1_1;
   float32 f32Q_1_2;
   float32 f32Q_2_2;
   float32 f32HeadingYawRateCovar;
   float32 f32Tmp;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pTrkbl)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COORDINATED_TURN, JKOBJFUSN_AAU_LKF_COORDINATED_TURN_DO_PREDICT);
   }
   else
#endif
   if (pTrkbl->vecX.nRows > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COORDINATED_TURN, JKOBJFUSN_AAU_LKF_COORDINATED_TURN_DO_PREDICT);
   }
   else if (pTrkbl->vecX.nRows != (pTrkbl->matP).u16Size)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COORDINATED_TURN, JKOBJFUSN_AAU_LKF_COORDINATED_TURN_DO_PREDICT);
   }
   else if (pTrkbl->vecX.nRows < JK_LKF_COORDINATED_TURN_MIN_STATE_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_INPUT_NOT_ENOUGH_STATES;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COORDINATED_TURN, JKOBJFUSN_AAU_LKF_COORDINATED_TURN_DO_PREDICT);
   }
   else if (f32PredictionDt < FLT_ZERO)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COORDINATED_TURN, JKOBJFUSN_AAU_LKF_COORDINATED_TURN_DO_PREDICT);
   }
   else
#endif
   {
      f32Tmp = ((pTrkbl->vecX).data[TRACKABLE_VELX] * (pTrkbl->vecX).data[TRACKABLE_VELX]) + 
         ((pTrkbl->vecX).data[TRACKABLE_VELY] * (pTrkbl->vecX).data[TRACKABLE_VELY]);

      /* No prediction for stationary targets */
      if ((f32Tmp > JK_COORDINATED_TURN_MIN_TARGET_SPEED) && 
         ((pTrkbl->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR) > 0u))
      {
         f32Q_2_2 = JK_COORDINATED_TURN_VARIANCE_IN_HEADING_FOR_Q * f32PredictionDt;
         f32Q_1_2 = (f32PredictionDt * f32Q_2_2);
         f32Q_1_1 = FLT_ONE_THIRD * (f32PredictionDt * f32Q_1_2);
         f32Q_1_2 *= FLT_ONE_HALF;
         f32HeadingYawRateCovar  = pTrkbl->f32CovarHeadingYawRate;

         f32Tmp = f32PredictionDt * pTrkbl->f32YawRateVar;

         /* Predict using F-Matrix  (1 Delta T)    */
         /*                         (0    1   )    */
         pTrkbl->f32Heading += (f32PredictionDt * pTrkbl->f32YawRate);
         pTrkbl->f32Heading = jk_fusion_norm_angle(pTrkbl->f32Heading);  // normalizied between [-pi pi]

         /* Predict variances and covariance */
         pTrkbl->f32HeadingVar +=   f32PredictionDt * f32Tmp;   // add propagation of yaw rate variance
         pTrkbl->f32HeadingVar +=   (FLT_TWO * (f32PredictionDt * f32HeadingYawRateCovar));        // add propagation of covariance
         pTrkbl->f32HeadingVar +=   f32Q_1_1;                                                      // add process noise
         pTrkbl->f32CovarHeadingYawRate += f32Tmp;              // add propagation of yaw rate variance
         pTrkbl->f32CovarHeadingYawRate += f32Q_1_2;                                               // add process noise 
         pTrkbl->f32YawRateVar +=   f32Q_2_2;                                                      // add process noise
      }   
      else
      {
         pTrkbl->f32YawRate = FLT_ZERO;
      }
      pTrkbl->f32HeadingVar = jk_fusion_min_max_F32(pTrkbl->f32HeadingVar,JKOBJFUSN_TRACKABLE_F32HEADINGVAR_MIN,JKOBJFUSN_TRACKABLE_F32HEADINGVAR_MAX);
      pTrkbl->f32YawRateVar = jk_fusion_min_max_F32(pTrkbl->f32YawRateVar,JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_MIN,JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_MAX);
   }

   return u32Success;
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
 * \fn bool_t LKF_CoordinatedTurn_DoCorrect(JkObjFusn_TrackableListType * const pTrkbl)
 * \brief computes the (separate) Kalman filter update for heading and yaw rate and variance.
 *
 * The heading, yaw rate as well as the variances and covariance of pTrkbl are updated by the sensor measurement data z and R.
 *
 * \param  [in,out] pTrkbl   JkObjFusn_TrackableType * const, LKF track which shall be adapted
 *
 * \return  TRUE (ok) or FALSE (error occured)
 */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 1532 2 *//* Function called from external AAU */
FUNC(uint32, ObjFusn_CODE) LKF_CoordinatedTurn_DoCorrect(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */
   float32 f32HeadingMeas     = FLT_ZERO;
   float32 f32HeadingMeasVar  = FLT_ZERO;
   float32 f32CovarHeadingYaw = FLT_ZERO;
   float32 f32XVel            = FLT_ZERO;
   float32 f32YVel            = FLT_ZERO;
   float32 f32Tmp             = FLT_ZERO;
   float32 f32Res             = FLT_ZERO;
   float32 f32S               = FLT_ZERO;
   float32 f32SpeedSq         = FLT_ZERO;
   float32 f32CovarVelXVelY   = FLT_ZERO;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pTrkbl)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COORDINATED_TURN, 
         JKOBJFUSN_AAU_LKF_COORDINATED_TURN_DO_CORRECT);
   }
   else
#endif
   if (pTrkbl->vecX.nRows > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COORDINATED_TURN, 
         JKOBJFUSN_AAU_LKF_COORDINATED_TURN_DO_CORRECT);
   }
   else if (pTrkbl->vecX.nRows != pTrkbl->matP.u16Size)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COORDINATED_TURN, 
         JKOBJFUSN_AAU_LKF_COORDINATED_TURN_DO_CORRECT);
   }
   else if (pTrkbl->vecX.nRows < JK_LKF_COORDINATED_TURN_MIN_STATE_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_INPUT_NOT_ENOUGH_STATES;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COORDINATED_TURN, 
         JKOBJFUSN_AAU_LKF_COORDINATED_TURN_DO_CORRECT);
   }
   else
#endif
   {
      f32XVel     = pTrkbl->vecX.data[TRACKABLE_VELX] * pTrkbl->vecX.data[TRACKABLE_VELX];
      f32YVel     = pTrkbl->vecX.data[TRACKABLE_VELY] * pTrkbl->vecX.data[TRACKABLE_VELY];
      f32SpeedSq  = f32XVel + f32YVel;

      /* No correction step if stationary target */
      if ((f32SpeedSq > JK_COORDINATED_TURN_MIN_TARGET_SPEED) &&
         ((pTrkbl->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR) > 0u))
      {
         f32CovarVelXVelY  = pTrkbl->matP.data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY];
         f32HeadingMeas    = jk_fusion_atan2(pTrkbl->vecX.data[TRACKABLE_VELY], pTrkbl->vecX.data[TRACKABLE_VELX]);

         f32HeadingMeasVar = (f32YVel * pTrkbl->matP.data[TRACKABLE_INDEX_VARIANCE_VELX]) +
            (f32XVel * pTrkbl->matP.data[TRACKABLE_INDEX_VARIANCE_VELY]);
         f32HeadingMeasVar -= (FLT_TWO * (pTrkbl->vecX.data[TRACKABLE_VELX] * pTrkbl->vecX.data[TRACKABLE_VELY])) * f32CovarVelXVelY;

         /** Variance of measurement not defined for speed == 0 */
         f32HeadingMeasVar /= (f32SpeedSq * f32SpeedSq);

         /** Use covariance from cycle t-1 */
         f32CovarHeadingYaw = pTrkbl->f32CovarHeadingYawRate;
                  
         /* Calculate measurement residual */
         f32Res   = f32HeadingMeas - (pTrkbl->f32Heading);
         f32Res   = jk_fusion_norm_angle(f32Res);  // normalizied between [-pi pi]
         /* Calculate S = H*P*H^T + R, simplifies to measured var + track var with H = [1 0] */
         f32S     = f32HeadingMeasVar + (pTrkbl->f32HeadingVar);
         /* Update heading and yaw rate with Kalman gain K = P * H * S^-1 = 1/S * (Var_Heading Covar)^T */
         f32Tmp = f32Res / f32S;
         pTrkbl->f32Heading += pTrkbl->f32HeadingVar * f32Tmp;
         pTrkbl->f32Heading  = jk_fusion_norm_angle(pTrkbl->f32Heading);  // normalizied between [-pi pi]
         pTrkbl->f32YawRate += pTrkbl->f32CovarHeadingYawRate * f32Tmp;
         /* Update P Matrix P = (I - K*H)*P */
         f32Tmp = FLT_ONE - (pTrkbl->f32HeadingVar / f32S);
         pTrkbl->f32HeadingVar *= f32Tmp;
         pTrkbl->f32CovarHeadingYawRate *= f32Tmp;
         f32Tmp = (f32CovarHeadingYaw * f32CovarHeadingYaw);
         pTrkbl->f32YawRateVar -= (f32Tmp / f32S); 
      } 
      else
      {
         pTrkbl->f32YawRate = FLT_ZERO; /* set yaw rate to zero  - a stationary vehicle can not change its yaw rate */
      }
      pTrkbl->f32HeadingVar = jk_fusion_min_max_F32(pTrkbl->f32HeadingVar, JKOBJFUSN_TRACKABLE_F32HEADINGVAR_MIN,
                                                         JKOBJFUSN_TRACKABLE_F32HEADINGVAR_MAX);
      pTrkbl->f32YawRateVar = jk_fusion_min_max_F32(pTrkbl->f32YawRateVar, JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_MIN,
                                                         JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_MAX);
   }

   return u32Success;
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"
/**
 * @}
 */
