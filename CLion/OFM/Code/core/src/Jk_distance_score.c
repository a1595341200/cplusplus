/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_common_matrix_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
   Calculate distance matrix using a specified distance metric.
   source code of distance score module

   The distance metric used is determind by a fusion parameter.
   Currently implemented metrics are:
   - spatial Distance (x-y)
   - euclidean Distance (x-y-vx-vy)
   - normalzied Distance (x-y | varx-vary)
   - normalzied euclidean Distance (x-y-vx-vy | varx-vary-varvx-varvy)
   - Mahalanobis Distance (x-y-vx-vy | covMatrix)
   - Association score containing Mahalanobis, ID and class score.
* Others:
* Function List:
    1.��������
    2.��������
* History: 
    1.Date:
      Author:
      Modification:
    2.��������
**********************************************************************************/

/*==================[inclusions]============================================*/
#include "Jk_distance_score.h"
#include "Jk_distance_score_int.h"
#include "JkObjFusn_ParameterInterface.h"
#include "Jk_fusion_math.h"
#include "Jk_gainEstimation.h"
#include "JkObjFusn_TrackableConstants.h"
#include "JkObjFusn_ConfigAlgorithm.h"
#include "JkObjFusn_TrackableListUtils.h"
#include "JkObjFusn_TrackableProps.h"
#include "JkObjFusn_AAU_Codes.h"
#include "JkObjFusn_ErrorCodes.h"
#include "Jk_error_management.h"
#include "Jk_common_array_utils.h"

/*==================[constants]================================================*/

/*==================[variables]================================================*/

/*==================[type definitions]======================================*/

/*==================[Local function declarations]===========================*/

/*==================[Local function implementations]========================*/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

FUNC(uint32, ObjFusn_CODE) distance_score_computeExtendedDist(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrack, 
                                                       CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas,
                                                       const float32 _f32MatchGate,
                                                       CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Distance)
{
#if JK_DISTANCE_SCORE_USE_PENALTY_TERM_FOR_MAHALANOBIS == STD_ON
   VAR(stf32SymMatrix_t, ObjFusn_VAR_NOINIT) covSum;
   float32 f32DetS;
   float32 f32LogDetS;
#endif

#if JK_DISTANCE_SCORE_USE_CLASS_INFORMATION == STD_ON
   const float32 s_f32CostMap[DIST_SCORE_DIM_COST_MAP][DIST_SCORE_DIM_COST_MAP] = DIST_SCORE_COST_MAP_VALUES;
   uint16  u16CostMapIDA;
   uint16  u16CostMapIDB;
#endif

#if JK_DISTANCE_SCORE_USE_ID_INFORMATION == STD_ON
   uint16  u16SensIndex;
#endif

   uint32  u32Success					= JKOBJFUSN_ERROR_NOERROR;
   float32 f32Dist						= FLT_ZERO;
   float32 f32ExtendedDist				= FLT_ZERO;
   const uint16 u16StateSizeInputTrackA = pTrack->matP.u16Size;
   const uint16 u16StateSizeInputTrackB = pMeas->matP.u16Size;


#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if ((JK_DISTANCE_SCORE_MAHALANOBIS_STATE_SIZE > u16StateSizeInputTrackA) ||  (JK_DISTANCE_SCORE_MAHALANOBIS_STATE_SIZE > u16StateSizeInputTrackB) || 
       (pTrack->matP.u16Size != pTrack->vecX.nRows) || (pMeas->matP.u16Size != pMeas->vecX.nRows) )
   {
      u32Success = JKOBJFUSN_ERROR_INPUT_NOT_ENOUGH_STATES;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INPUT_NOT_ENOUGH_STATES, JKOBJFUSN_AAU_DISTANCE_SCORE,
                                              JKOBJFUSN_AAU_DISTANCE_SCORE_COMPUTE_EXTENDED_DIST);
   }
   else
#endif
   {
      pTrack->matP.u16Size = JK_DISTANCE_SCORE_MAHALANOBIS_STATE_SIZE;
      pMeas->matP.u16Size  = JK_DISTANCE_SCORE_MAHALANOBIS_STATE_SIZE;
      pTrack->vecX.nRows   = JK_DISTANCE_SCORE_MAHALANOBIS_STATE_SIZE;
      pMeas->vecX.nRows    = JK_DISTANCE_SCORE_MAHALANOBIS_STATE_SIZE;

      u32Success = calculateDistance(&pTrack->vecX, &pTrack->matP, &pMeas->vecX, &pMeas->matP, &f32Dist);
      if ((f32Dist < _f32MatchGate) && (JKOBJFUSN_ERROR_NOERROR == u32Success))
      {
         /* Add further association score summands.  */
         f32ExtendedDist = f32Dist;

#if JK_DISTANCE_SCORE_USE_PENALTY_TERM_FOR_MAHALANOBIS == STD_ON
         /* Add score += ln(det(S))/2 */
         u32Success |= f32SymMatAddSymMat(&pTrack->matP, &pMeas->matP, &covSum);
         u32Success |= distance_score_calculateSymMatDet(&covSum, &f32DetS);

         if (f32DetS > FLT_ONE)
         {
            f32LogDetS = jk_fusion_log(f32DetS);
            // has to be limited, otherwise resulting matrix can be < 0

            f32LogDetS *= FLT_ONE_HALF;

            f32ExtendedDist += f32LogDetS;
         }
         else
         {
            /* MISRA */
         }
#endif
         
         /* Add ID score */
#if JK_DISTANCE_SCORE_USE_ID_INFORMATION == STD_ON
         u16SensIndex = Trackable_getSensPos(pMeas->u32SensorsCurr);

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
         if (JKOBJFUSN_SENS_POS_INVALID == u16SensIndex)
         {
            u32Success |= JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN;
            (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN, JKOBJFUSN_AAU_DISTANCE_SCORE,
               JKOBJFUSN_AAU_DISTANCE_SCORE_COMPUTE_EXTENDED_DIST);
         }
         else
#endif
         {
            if ((pTrack->au16SensorID[u16SensIndex] != JKOBJFUSN_TRACKABLE_U16ID_DEFAULT) && 
               (pTrack->au16SensorID[u16SensIndex] != pMeas->u16ID))
            {
               f32ExtendedDist += JK_DISTANCE_SCORE_DIFFERENT_ID_PENALTY; // ID not changed cannot be substracted since it would be < 0
            }
            else
            {
               /* MISRA */
            }
         }
#endif

         /* Add class score */
#if JK_DISTANCE_SCORE_USE_CLASS_INFORMATION == STD_ON

         if(0u != (JKOBJFUSN_TRACKABLE_U32SENSOR_MVS & pMeas->u32SensorsCurr))
         {
            u16CostMapIDA = getCostMapIndex(pTrack->u16Class);
            u16CostMapIDB = getCostMapIndex(pMeas->u16Class);
         
            f32ExtendedDist += s_f32CostMap[u16CostMapIDA][u16CostMapIDB];
         }
         else
         {
            /* MISRA */
         }
#endif

#if JK_DISTANCE_SCORE_NOT_USE_CORNER_RADAR == STD_ON
         /* check if current measurement is from radar */
         if ((0u != (JKOBJFUSN_TRACKABLE_U32SENSOR_CORNER_RADAR & pMeas->u32SensorsCurr)) &&
             (0u != (JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT & pTrack->u32SensorsHist)))
         {
             f32ExtendedDist += 40.0f; //Ryan add
         }
         else
         {
             /* MISRA C */
         }
#endif

#if JK_DISTANCE_SCORE_USE_OBSTACLE_PROBABILITY == STD_ON
         /* check if current measurement is from radar */
         if (0u != (JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR & pMeas->u32SensorsCurr))           
         {
            /* check if radar track and measurement has same ID*/
            if ((pTrack->au16SensorID[u16SensIndex] != pMeas->u16ID))
            {
               if (pTrack->u16Class == JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN)
               {
                  if(pMeas->f32ObstacleProbability < JK_DISTANCE_SCORE_LOW_OBSTACLE_PED_THRESHOLD)
                  {
                     f32ExtendedDist += DIST_SCORE_LOW_OBSTACLE_PENALTY;
                  }
                  else
                  {
                     /* MISRA */
                  }
               }
               else if (pMeas->f32ObstacleProbability < JK_DISTANCE_SCORE_LOW_OBSTACLE_VEH_THRESHOLD)
               {
                  f32ExtendedDist += DIST_SCORE_LOW_OBSTACLE_PENALTY;
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
         /* measurement is from vision sensor. Avoid association with low obstacle probability radar tracks */
         else if (0u == (JKOBJFUSN_TRACKABLE_U32SENSOR_VISION & pTrack->u32SensorsHist))
         {
            /* if existing track is never seen by vision before, check for obstacle probability */
            if (pMeas->u16Class == JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN)
            {
               if(pTrack->f32ObstacleProbability < JK_DISTANCE_SCORE_LOW_OBSTACLE_PED_THRESHOLD)
               {
                  f32ExtendedDist += DIST_SCORE_LOW_OBSTACLE_PENALTY;
               }
               else
               {
                  /* MISRA */
               }
            }
            else if(pTrack->f32ObstacleProbability < JK_DISTANCE_SCORE_LOW_OBSTACLE_VEH_THRESHOLD)
            {
               f32ExtendedDist += DIST_SCORE_LOW_OBSTACLE_PENALTY;
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
#endif
      }
      else 
      {
         /* Set maximum score */
         f32ExtendedDist = _f32MatchGate;
      }

      *pf32Distance = jk_fusion_max_F32(f32ExtendedDist, FLT_ZERO);

      pTrack->matP.u16Size = u16StateSizeInputTrackA;
      pMeas->matP.u16Size = u16StateSizeInputTrackB;
      pTrack->vecX.nRows = u16StateSizeInputTrackA;
      pMeas->vecX.nRows = u16StateSizeInputTrackB;
   }

   return u32Success;
}

LOCAL FUNC(uint32, ObjFusn_CODE) calculateDistance(CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pVecA,
                                                     CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pCovA,
                                                     CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pVecB,
                                                     CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pCovB,
                                                     CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32SquareDistance)
{
   VAR(stf32Vec_t, ObjFusn_VAR_NOINIT) vecDiff;
   VAR(stf32SymMatrix_t, ObjFusn_VAR_NOINIT) covSum;

   VAR(stf32Matrix_t, ObjFusn_VAR_NOINIT) tempMat;
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   uint16 i;
   uint16 j;
   float32 f32PosX;
   float32 f32PosY;
   float32 f32VelX;
   float32 f32SquareDistance;

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pVecA) || (NULL_PTR == pCovA) || (NULL_PTR == pVecB) || (NULL_PTR == pCovB) || (NULL_PTR == pf32SquareDistance))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_DISTANCE_SCORE,
                                              JKOBJFUSN_AAU_DISTANCE_SCORE_CALCULATE_DISTANCE);
   }
   else if ((pVecA == pVecB) || (pCovA == pCovB))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_POINTER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_POINTER, JKOBJFUSN_AAU_DISTANCE_SCORE,
                                              JKOBJFUSN_AAU_DISTANCE_SCORE_CALCULATE_DISTANCE);
      *pf32SquareDistance = DIST_SCORE_DEFAULT_ON_ERROR;
   }
   else
#endif
   {
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
      f32SquareDistance = DIST_SCORE_DEFAULT_ON_ERROR;

      if ((pVecA->nRows != pVecB->nRows) || (pCovA->u16Size != pCovB->u16Size))
      {
         u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
         (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL, JKOBJFUSN_AAU_DISTANCE_SCORE,
                                                 JKOBJFUSN_AAU_DISTANCE_SCORE_CALCULATE_DISTANCE);
      }
      else if ((pVecA->nRows > JKOBJFUSN_MATRIX_SIZE) || (pCovA->u16Size > JKOBJFUSN_MATRIX_SIZE))
      {
         u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
         (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_DISTANCE_SCORE,
                                                 JKOBJFUSN_AAU_DISTANCE_SCORE_CALCULATE_DISTANCE);
      }
      else if (pVecA->nRows < DIST_SCORE_MAHAL_MIN_MATRIX_SIZE)
      {
         u32Success = JKOBJFUSN_ERROR_INPUT_NOT_ENOUGH_STATES;
         (void)jk_error_management_addError(JKOBJFUSN_ERROR_INPUT_NOT_ENOUGH_STATES, JKOBJFUSN_AAU_DISTANCE_SCORE,
                                                 JKOBJFUSN_AAU_DISTANCE_SCORE_CALCULATE_DISTANCE);
      }
      else
#endif
      {
         /* Optimized for (x, y, vx) */
         if (pCovA->u16Size == 3u)            /* PRQA S 3120 *//* math */
         {
            f32PosX = pVecA->data[TRACKABLE_POSX] - pVecB->data[TRACKABLE_POSX];
            f32PosY = pVecA->data[TRACKABLE_POSY] - pVecB->data[TRACKABLE_POSY];
            f32VelX = pVecA->data[TRACKABLE_VELX] - pVecB->data[TRACKABLE_VELX];
            
            covSum.data[TRACKABLE_INDEX_VARIANCE_POSX] = pCovA->data[TRACKABLE_INDEX_VARIANCE_POSX] + pCovB->data[TRACKABLE_INDEX_VARIANCE_POSX];
            covSum.data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] = pCovA->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] + pCovB->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY];
            covSum.data[TRACKABLE_INDEX_VARIANCE_POSY] = pCovA->data[TRACKABLE_INDEX_VARIANCE_POSY] + pCovB->data[TRACKABLE_INDEX_VARIANCE_POSY];
            covSum.data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] = pCovA->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] + pCovB->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX];
            covSum.data[TRACKABLE_INDEX_VARIANCE_VELX] = pCovA->data[TRACKABLE_INDEX_VARIANCE_VELX] + pCovB->data[TRACKABLE_INDEX_VARIANCE_VELX];
            covSum.data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] = pCovA->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] + pCovB->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX];
            
            covSum.u16Size = pCovA->u16Size;
                                    

            /* Compute inv(covSum) */
            u32Success |= distance_score_calculateSymMatInv(&covSum);
            f32SquareDistance = covSum.data[TRACKABLE_INDEX_VARIANCE_POSX] * f32PosX * f32PosX;
            f32SquareDistance += FLT_TWO * covSum.data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] * f32PosX * f32PosY;
            f32SquareDistance += covSum.data[TRACKABLE_INDEX_VARIANCE_POSY] * f32PosY * f32PosY;
            f32SquareDistance +=  FLT_TWO * covSum.data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] * f32PosX * f32VelX;
            f32SquareDistance += FLT_TWO * covSum.data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] * f32PosY * f32VelX;
            f32SquareDistance += covSum.data[TRACKABLE_INDEX_VARIANCE_VELX] * f32VelX * f32VelX;
         }
         else
         {
            /* Compute vecDiff = vecA - vecB */
            u32Success = f32VecSub(pVecA, pVecB, &vecDiff);

            /* Compute covSum = covA + covB */
            u32Success |= f32SymMatAddSymMat(pCovA, pCovB, &covSum);
            u32Success |= f32SymMatToMat(&covSum, &tempMat);
            u32Success |= f32MatInv(&tempMat);

            f32SquareDistance = FLT_ZERO;
            for (i = 0u; i<pVecA->nRows; i++)
            {
               for (j = 0u; j<pVecA->nRows; j++)
               {
                  f32SquareDistance += tempMat.data[i][j] * vecDiff.data[i] * vecDiff.data[j];
               }
            }
         }
      }

      *pf32SquareDistance = f32SquareDistance;
   }

   return u32Success;
}


LOCAL FUNC(uint32, ObjFusn_CODE) distance_score_calculateGain(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrack, 
   CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas, CONSTP2VAR(stMeasGainCompType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeasComp,
   CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkblTmp, CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion,
   const float32 f32TrackRangeSq, const float32 f32RadTrack, const float32 f32RadTrackVar,
   CONSTP2VAR(boolean, AUTOMATIC, ObjFusn_VAR_NOINIT) pbMeasModified, CONSTP2VAR(boolean, AUTOMATIC, ObjFusn_VAR_NOINIT) pbTrackModified)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;

   float32 f32PosXSquaredMeas = FLT_ZERO;
   float32 f32PosYSquaredMeas = FLT_ZERO;
   float32 _f32MeasRangeSq    = FLT_ZERO;
   float32 _f32tempMT         = FLT_ZERO;
   float32 f32GainTmp         = JKOBJFUSN_TRACKABLE_F32GAIN_DEFAULT;
   float32 f32GainVarTmp      = JKOBJFUSN_TRACKABLE_F32GAINVAR_DEFAULT;
   uint16 u16i                = 0u;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if((NULL_PTR == pTrack) || (NULL_PTR == pMeas) || (NULL_PTR == pMeasComp) || (NULL_PTR == pEgoMotion) || 
      ((NULL_PTR == pbMeasModified) || (NULL_PTR == pbTrackModified)))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_DISTANCE_SCORE,
                                              JKOBJFUSN_AAU_DISTANCE_SCORE_CALCULATE_GAIN);
   }
   else
#endif
#endif
   {
      if(pMeasComp->bUsed == FALSE)
      {
         pMeasComp->bUsed = TRUE;

         //f32PosXSquaredMeas  = jk_fusion_pow2((pMeas->vecX.data[TRACKABLE_POSX]- Fusion_get_f32DynCalPrmForCamLongDistToRearAxle()));
         f32PosXSquaredMeas = jk_fusion_pow2(pMeas->vecX.data[TRACKABLE_POSX]);
         f32PosYSquaredMeas  = jk_fusion_pow2(pMeas->vecX.data[TRACKABLE_POSY]);
         _f32MeasRangeSq = f32PosXSquaredMeas+f32PosYSquaredMeas;

         _f32tempMT = ((f32PosXSquaredMeas * pMeas->matP.data[TRACKABLE_INDEX_VARIANCE_POSX]) +
            (f32PosYSquaredMeas * pMeas->matP.data[TRACKABLE_INDEX_VARIANCE_POSY]))/
            _f32MeasRangeSq;

         pMeasComp->f32tempMT       = _f32tempMT;
         pMeasComp->f32RadMeas      = jk_fusion_sqrt(_f32MeasRangeSq);
         pMeasComp->f32MeasRangeSq  = _f32MeasRangeSq;
      }
      else
      {
         /* MISRA */
      }

      if ((0u != (pMeas->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_VISION)) &&
         (0u != (pTrack->u32SensorsHist & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR)))
      { 
         /* camera measurment and track was seen by radar before */

         u32Success |= f32CopyVec(&(pTrkblTmp->vecX), &pMeas->vecX);
         u32Success |= f32CopySymMat(&(pTrkblTmp->matP), &pMeas->matP);

         /* Copy relevant information to calculate extended distance */
         pTrkblTmp->u16ID           = pMeas->u16ID;
         pTrkblTmp->u16Class        = pMeas->u16Class;
         pTrkblTmp->u32SensorsCurr  = pMeas->u32SensorsCurr;
         pTrkblTmp->u8CoordSystem   = pMeas->u8CoordSystem;

         if ((FLT_EPSILON < f32TrackRangeSq) || (FLT_EPSILON < pMeasComp->f32MeasRangeSq))
         {
            f32GainTmp = pMeasComp->f32RadMeas / f32RadTrack;

            f32GainVarTmp = ((pMeasComp->f32tempMT) / f32TrackRangeSq) + 
               (((f32RadTrackVar * pMeasComp->f32MeasRangeSq) / f32TrackRangeSq) / f32TrackRangeSq);

            u32Success = limitGain(pMeas->u16Class, &f32GainTmp, &f32GainVarTmp);

         }
         else
         {
            /* MISRA */
         }
        
         u32Success |= gain_compensation(pTrkblTmp, pMeas, f32GainTmp, f32GainVarTmp, pEgoMotion);
         (*pbMeasModified) = TRUE;
      }
      else if ((0u != (pMeas->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR)) &&
         (0u != (pTrack->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_VISION)) &&
         (0u == (pTrack->u32SensorsHist & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR)))
      { 
         /* radar measurement and track was never seen by radar */
         u32Success |= f32CopyVec(&(pTrkblTmp->vecX), &pTrack->vecX);
         u32Success |= f32CopySymMat(&(pTrkblTmp->matP), &pTrack->matP);

         /* Copy relevant information to calculate extended distance */
         pTrkblTmp->u16ID           = pTrack->u16ID;
         pTrkblTmp->u16Class        = pTrack->u16Class;
         pTrkblTmp->u32SensorsCurr  = pTrack->u32SensorsCurr;
         pTrkblTmp->u8CoordSystem   = pTrack->u8CoordSystem;

         for (u16i = 0u; u16i < JK_FUSION_MAX_INPUTS; u16i++)
         {
            pTrkblTmp->au16SensorID[u16i] = pTrack->au16SensorID[u16i];
         }

         if ((FLT_EPSILON < f32TrackRangeSq) || (FLT_EPSILON < pMeasComp->f32MeasRangeSq))
         {
            f32GainTmp =  f32RadTrack / (pMeasComp->f32RadMeas);

            f32GainVarTmp = (f32RadTrackVar / (pMeasComp->f32MeasRangeSq)) + 
               ((((pMeasComp->f32tempMT) * f32TrackRangeSq) / (pMeasComp->f32MeasRangeSq)) / (pMeasComp->f32MeasRangeSq));

            u32Success = limitGain(pTrack->u16Class, &f32GainTmp, &f32GainVarTmp);

         }
         else
         {
            /* MISRA */
         }
         
         u32Success |= gain_compensation(pTrkblTmp, pTrack, f32GainTmp, f32GainVarTmp, pEgoMotion);
         (*pbTrackModified) = TRUE;
      }
      else if ((0u != (pMeas->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR)) &&
         (0u != (pTrack->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_VISION)) && //new version FORD::FIX2
         (JK_GAIN_RADAR_CYCLES_RESET < pTrack->u8CyclesNoRadar))
      { 
         /* radar measurement and track was seen by radar / camera before (see previous else if statement), 
         but not by radar in last cycles -> small gain has to be added, since camera could have stolen track 
         */
         u32Success |= f32CopySymMat(&(pTrkblTmp->matP), &pTrack->matP);
         u32Success |= f32CopyVec(&(pTrkblTmp->vecX), &pTrack->vecX);

         /* Copy relevant information to calculate extended distance */
         pTrkblTmp->u16ID           = pTrack->u16ID;
         pTrkblTmp->u16Class        = pTrack->u16Class;
         pTrkblTmp->u32SensorsCurr  = pTrack->u32SensorsCurr;
         pTrkblTmp->u8CoordSystem   = pTrack->u8CoordSystem;

         for (u16i = 0u; u16i < JK_FUSION_MAX_INPUTS; u16i++)
         {
            pTrkblTmp->au16SensorID[u16i] = pTrack->au16SensorID[u16i];
         }

         /* Gain is available as vision only track has been seen by radar */
         if(FLT_ZERO < pTrack->f32GainVar)
         {
            /* Check if gain is initialized, see AMF-394 */
            u32Success |= gain_PIncrease(pTrkblTmp, pTrack->f32GainVar, pEgoMotion);
         }
         else
         {
            /* MISRA */
         }
         (*pbTrackModified) = TRUE;
      }
      else
      {
         /* measurment camera -> camera only track and measurement radar - radar only track */
      }
   }

   return u32Success;
}

#if JK_DISTANCE_SCORE_USE_CLASS_INFORMATION == STD_ON
LOCAL FUNC(uint16, ObjFusn_CODE) getCostMapIndex(const uint16 u16Class)
{
   uint16 u16Idx = 0u;

   /* Combine classes */
   if(u16Class > DIST_SCORE_MAX_CLASS_VALUE)
   {
      u16Idx = DIST_SCORE_CLASS_INDEX_UNKNOWN;
   }
   else if (u16Class == JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN)
   {
      u16Idx = DIST_SCORE_CLASS_INDEX_UNKNOWN;
   }
   else if ((u16Class & JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_UNKNOWN) > 0u)
   {
      u16Idx = DIST_SCORE_CLASS_INDEX_VEHICLE;
   }
   else if ((u16Class & JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN) > 0u)
   {
      u16Idx = DIST_SCORE_CLASS_INDEX_PEDESTRIAN;
   }
   else
   {
      /* General */
      u16Idx = DIST_SCORE_CLASS_INDEX_DEFAULT;
   }

   return u16Idx;
}
#endif

/*==================[API function implementations]========================*/

/* PRQA S 1532 2 *//*Function called by external AAU */
FUNC(uint32, ObjFusn_CODE) distance_score_track2track(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackListInternal,
                                                        CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackListSensor,
                                                        const float32 _f32MatchGate,
                                                        CONSTP2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pDist_mat,
                                                        uint16 au16IndicesMeasurements[], uint16 au16IndicesInternal[],
                                                        CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   uint16 u16Measurement      = 0u;
   uint16 u16Internal         = 0u;
   uint16 u16IdInternal       = 0u;
   uint32 u32Success          = JKOBJFUSN_ERROR_NOERROR;
   float32 f32DiffX           = FLT_ZERO;
   float32 f32DiffY           = FLT_ZERO;
   float32 f32DiffVelX        = FLT_ZERO;
   float32 f32Score           = FLT_ZERO;
   
   /* True in case the sensor id stored in au16SensorID of each trackable is identical to the measurement id */
   boolean bIsSameId          = FALSE;

   /* True in case at least one (internal, meas) pair is added to the distance matrix. Increase internal counter in this case */
   boolean bInternalAdded     = FALSE;

   boolean bUpdate   = FALSE;

   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrack;
   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas;

   const uint32   u32SensPattern          = pTrackListSensor->u32SensorPattern;
   const uint16   u16SensPos              = Trackable_getSensPos(u32SensPattern);

   VAR(boolean, ObjFusn_VAR_NOINIT) abMeasurementUsed[JK_DISTSCORE_MAX_COL_SIZE];
   VAR(uint16, ObjFusn_VAR_NOINIT)  au16MeasurementMappedTo[JK_DISTSCORE_MAX_COL_SIZE];
   VAR(JkObjFusn_TrackableType, ObjFusn_VAR_NOINIT) stTrkblTmp;


#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
   float32  f32PosXSquaredTrack;
   float32  f32PosYSquaredTrack;
   float32  f32TrackRangeSq;
   float32  f32RadTrack;
   float32  f32tempGT;

   stMeasGainCompType stMeasComp[JK_DISTSCORE_MAX_COL_SIZE];

   boolean bMeasModified      = FALSE;
   boolean bTrackModified     = FALSE;
#else 
   /** Suppress compiler warning if gain estimation is deactivated */
   float32 f32Dummy = pEgoMotion->f32Speed;
   f32Dummy += FLT_ZERO;
#endif

   u32Success = Trackable_init(&stTrkblTmp);

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   /* input validity checks */
   if ((JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX < (pTrackListInternal->u16ValidTrackables)) ||
       (JK_FUSION_MAX_INPUT_OBJECTS < (pTrackListSensor->u16NumObjects)))
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_DISTANCE_SCORE,
                                              JKOBJFUSN_AAU_DISTANCE_SCORE_DISTANCE_SCORE_TRACK_TO_TRACK);
   }
   else if (JKOBJFUSN_SENS_POS_INVALID == u16SensPos)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN, JKOBJFUSN_AAU_DISTANCE_SCORE,
                                              JKOBJFUSN_AAU_DISTANCE_SCORE_DISTANCE_SCORE_TRACK_TO_TRACK);
   }
   else 
#endif
   {
#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
       for (u16Measurement = 0u; u16Measurement < pTrackListSensor->u16NumObjects; u16Measurement++)
       {
    	   stMeasComp[u16Measurement].bUsed = FALSE;
       }
#endif

      /* Init with maximum distance value */
      initDistMatrix(pDist_mat, pTrackListInternal->u16ValidTrackables, pTrackListSensor->u16NumObjects, _f32MatchGate);

      /* Init mapping arrays */
      jk_common_array_utils_defaultInit_au16(au16IndicesInternal, pTrackListInternal->u16ValidTrackables, JKOBJFUSN_TRACKABLE_U16ID_DEFAULT);
      jk_common_array_utils_defaultInit_au16(au16IndicesMeasurements, pTrackListSensor->u16NumObjects, JKOBJFUSN_TRACKABLE_U16ID_DEFAULT);
      jk_common_array_utils_defaultInit_abool(abMeasurementUsed, pTrackListSensor->u16NumObjects, FALSE);

      /* Set size of distance matrix to zero as size is correctly set incrementally */
      pDist_mat->nCols = 0u;
      pDist_mat->nRows = 0u;
      
      /* Compute distance for all pairs of trackables from pTrackListInternal and pTrackListSensor */
      for (u16Internal = 0u; u16Internal < pTrackListInternal->u16ValidTrackables; u16Internal++)
      {
         pTrack         = &pTrackListInternal->aTrackable[pTrackListInternal->as16TrackableMap[u16Internal]]; // has to be here, since it can be overwritten in this loop
         u16IdInternal  = pTrack->au16SensorID[u16SensPos];
         
         bInternalAdded = FALSE;
         
         /** The extended distance score shall not be calcualted if an internal sensor only track is updated by a different measurement */
         if (pTrack->u32SensorsHist != u32SensPattern)
         {
            bUpdate = TRUE;
         }
         /** Internal track is coasted and all tracks shall be coasted */
         else if ((pTrack->u32SensorsCurr == 0u) && (JK_COASTING_SENSOR_PATTERN == 0u))
         {
            bUpdate = TRUE;
         }
         /** Internal track is coasted and was updated by sensor(s) that shall be coasted */
         else if ((pTrack->u32SensorsCurr == 0u) && (pTrack->u32SensorsHist == JK_COASTING_SENSOR_PATTERN))
         {
            bUpdate = TRUE;
         }
         else
         {
            bUpdate = FALSE;
         }     

#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
         //f32PosXSquaredTrack = jk_fusion_pow2((pTrack->vecX.data[TRACKABLE_POSX]- Fusion_get_f32DynCalPrmForCamLongDistToRearAxle()));
         f32PosXSquaredTrack = jk_fusion_pow2(pTrack->vecX.data[TRACKABLE_POSX]); //Ryan add
         f32PosYSquaredTrack = jk_fusion_pow2(pTrack->vecX.data[TRACKABLE_POSY]);

         f32TrackRangeSq = f32PosXSquaredTrack+f32PosYSquaredTrack;

         f32RadTrack = jk_fusion_sqrt(f32TrackRangeSq);

         f32tempGT = ((f32PosXSquaredTrack * pTrack->matP.data[TRACKABLE_INDEX_VARIANCE_POSX]) +
                                      (f32PosYSquaredTrack * pTrack->matP.data[TRACKABLE_INDEX_VARIANCE_POSY])) /
                                      f32TrackRangeSq;
#endif

         for (u16Measurement = 0u; u16Measurement < pTrackListSensor->u16NumObjects; u16Measurement++)
         {
            pMeas = &pTrackListSensor->aTrackable[u16Measurement];

            if (pMeas->u16ID == u16IdInternal)
            {
               bIsSameId = TRUE;
            }
            else
            {
               bIsSameId = FALSE;
            }

#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
            if ((TRUE == bUpdate) || (TRUE == bIsSameId))
            {
               if ((pTrack->vecX.data[TRACKABLE_POSX] > 30.0f) && (pTrack->vecX.data[TRACKABLE_VELX] > 5.0f)) //Ryan add
                {
                    u32Success |= distance_score_calculateGain(pTrack, pMeas, &(stMeasComp[u16Measurement]),
                        &stTrkblTmp, pEgoMotion, f32TrackRangeSq, f32RadTrack, f32tempGT, &bMeasModified, &bTrackModified);
                }
                else
                {
                    /* MISRA C */
                }

            }
            else
            {
               /* MISRA */
            }
#endif

#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
            if (TRUE == bMeasModified)
            {
               /* Check coarse distance */
               f32DiffX    = jk_fusion_abs(pTrack->vecX.data[TRACKABLE_POSX] - stTrkblTmp.vecX.data[TRACKABLE_POSX]);
               f32DiffY    = jk_fusion_abs(pTrack->vecX.data[TRACKABLE_POSY] - stTrkblTmp.vecX.data[TRACKABLE_POSY]);
               f32DiffVelX = jk_fusion_abs(pTrack->vecX.data[TRACKABLE_VELX] - stTrkblTmp.vecX.data[TRACKABLE_VELX]);
            }
            else if (TRUE == bTrackModified)
            {
               /* Check coarse distance */
               f32DiffX    = jk_fusion_abs(stTrkblTmp.vecX.data[TRACKABLE_POSX] - pMeas->vecX.data[TRACKABLE_POSX]);
               f32DiffY    = jk_fusion_abs(stTrkblTmp.vecX.data[TRACKABLE_POSY] - pMeas->vecX.data[TRACKABLE_POSY]);
               f32DiffVelX = jk_fusion_abs(stTrkblTmp.vecX.data[TRACKABLE_VELX] - pMeas->vecX.data[TRACKABLE_VELX]);
            }
            else
            {
               /* Check coarse distance */
               f32DiffX    = jk_fusion_abs(pTrack->vecX.data[TRACKABLE_POSX] - pMeas->vecX.data[TRACKABLE_POSX]);
               f32DiffY    = jk_fusion_abs(pTrack->vecX.data[TRACKABLE_POSY] - pMeas->vecX.data[TRACKABLE_POSY]);
               f32DiffVelX = jk_fusion_abs(pTrack->vecX.data[TRACKABLE_VELX] - pMeas->vecX.data[TRACKABLE_VELX]);
            }
#else
            /* Check coarse distance */
            f32DiffX    = jk_fusion_abs(pTrack->vecX.data[TRACKABLE_POSX] - pMeas->vecX.data[TRACKABLE_POSX]);
            f32DiffY    = jk_fusion_abs(pTrack->vecX.data[TRACKABLE_POSY] - pMeas->vecX.data[TRACKABLE_POSY]);
            f32DiffVelX = jk_fusion_abs(pTrack->vecX.data[TRACKABLE_VELX] - pMeas->vecX.data[TRACKABLE_VELX]);
#endif

            if (((TRUE == bUpdate) || (TRUE == bIsSameId)) &&
               (((f32DiffX < JK_DISTANCE_SCORE_MAX_COARSE_DIST_X) && (f32DiffY < JK_DISTANCE_SCORE_MAX_COARSE_DIST_Y)) && 
               (f32DiffVelX < JK_DISTANCE_SCORE_MAX_COARSE_VEL_X)))
            {
               /* Compute distance */
               /* TODO: Check if computeExtendedDist and calculateDist should be merged to a single function call */

#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON

               if (TRUE == bMeasModified)
               {
                  u32Success |= distance_score_computeExtendedDist(pTrack, &stTrkblTmp, _f32MatchGate, &f32Score);
               }
               else if (TRUE == bTrackModified)
               {
                  u32Success |= distance_score_computeExtendedDist(&stTrkblTmp, pMeas, _f32MatchGate, &f32Score);
               }
               else
               {
                  u32Success |= distance_score_computeExtendedDist(pTrack, pMeas, _f32MatchGate, &f32Score);
               }
#else
               u32Success |= distance_score_computeExtendedDist(pTrack, pMeas, _f32MatchGate, &f32Score);
#endif

               /* Only add to distance matrix if calculated value is less than max distance */
               if ((f32Score < _f32MatchGate) && (u32Success == JKOBJFUSN_ERROR_NOERROR))
               {
                  bInternalAdded = TRUE;

                  if (FALSE == abMeasurementUsed[u16Measurement])
                  {
                     pDist_mat->data[pDist_mat->nRows][pDist_mat->nCols] = convertFloatToFixedtDistMat(f32Score);
                     abMeasurementUsed[u16Measurement] = TRUE;
                     au16MeasurementMappedTo[u16Measurement] = pDist_mat->nCols;
                     au16IndicesMeasurements[pDist_mat->nCols] = u16Measurement;
                     pDist_mat->nCols++;
                  }
                  else
                  {
                     pDist_mat->data[pDist_mat->nRows][au16MeasurementMappedTo[u16Measurement]] = convertFloatToFixedtDistMat(f32Score);
                  }
               }
               else
               {
                  /* Nothing to do */
               }
            }
            else
            {
               /* MISRA */
            }

#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
            bTrackModified = FALSE;               
            bMeasModified  = FALSE;
#endif
         }

         if (TRUE == bInternalAdded)
         {
            au16IndicesInternal[pDist_mat->nRows] = u16Internal;
            pDist_mat->nRows++;
         }
         else
         {
            /* MISRA */
         }
      }
   }

   return u32Success;
}

LOCAL FUNC(uint32, ObjFusn_CODE) distance_score_calculateSymMatInv(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pMat)
{
   uint32   u32Success = JKOBJFUSN_ERROR_NOERROR;

   float32  f32Det;
   float32  f32AbsDet;
   float32  f32a11;
   float32  f32a12;
   float32  f32a13;
   float32  f32a22;
   float32  f32a23;
   float32  f32a33;
   
   float32  f32Temp1;
   float32  f32Temp2;
   float32  f32Temp3;

   float32  f32m22;
   float32  f32m23;
   float32  f32m33;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if (pMat->u16Size != DIST_SCORE_MAT_INV_EXPECTED_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
      (void) jk_error_management_addError(u32Success, JKOBJFUSN_AAU_DISTANCE_SCORE, 
         JKOBJFUSN_AAU_DISTANCE_SCORE_MAT_INV);
   }
   else
#endif
   {
      f32a11  = pMat->data[TRACKABLE_INDEX_VARIANCE_POSX];
      f32a12  = pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY];
      f32a22  = pMat->data[TRACKABLE_INDEX_VARIANCE_POSY];
      f32a13  = pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX];
      f32a23  = pMat->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX];
      f32a33  = pMat->data[TRACKABLE_INDEX_VARIANCE_VELX];

      f32Temp1 = (f32a33 * f32a22) - (f32a23 * f32a23);
      f32Temp2 = (f32a23 * f32a13) - (f32a33 * f32a12);
      f32Temp3 = (f32a23 * f32a12) - (f32a22 * f32a13);

      f32Det = (f32a11 * f32Temp1) + (f32a12* f32Temp2) + (f32a13* f32Temp3);
      f32AbsDet = jk_fusion_abs(f32Det);
      u32Success = JKOBJFUSN_ERROR_NOERROR;

      if (f32AbsDet > DIST_SCORE_MAT_INV_MIN_DET)
      {
         pMat->data[TRACKABLE_INDEX_VARIANCE_POSX] = f32Temp1 / f32Det;
         pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] = f32Temp2 / f32Det;
         pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] = f32Temp3 / f32Det;

         f32m22 = (f32a33 * f32a11) - (f32a13 * f32a13);
         f32m22 /= f32Det;
         pMat->data[TRACKABLE_INDEX_VARIANCE_POSY] =  f32m22;

         f32m23 = (f32a12 * f32a13) - (f32a23 * f32a11);
         f32m23 /= f32Det;
         pMat->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] =  f32m23;

         f32m33 = (f32a22 * f32a11) - (f32a12 * f32a12);
         f32m33 /= f32Det;
         pMat->data[TRACKABLE_INDEX_VARIANCE_VELX] =  f32m33;
      }
      else
      {
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
         u32Success = JKOBJFUSN_ERROR_COMMON_MATRIX_UNCONDITIONED;
         (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_DISTANCE_SCORE,
            JKOBJFUSN_AAU_DISTANCE_SCORE_MAT_INV);
#endif
      }
   }

   return u32Success;
}

LOCAL FUNC(uint32, ObjFusn_CODE) distance_score_calculateSymMatDet(CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pMat, 
   CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Det)
{
   uint32 u32Success;
   uint16 iter_i;
   uint16 iter_j;
   uint16 iter_k;
   float32 f32detTmp;
   VAR(stf32Matrix_t, ObjFusn_VAR_NOINIT) X;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if (pMat->u16Size > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_DISTANCE_SCORE_MAT_DET);
   }
   else
#endif
   {
      u32Success = JKOBJFUSN_ERROR_NOERROR;

      /* 1x1 */
      if (1u == pMat->u16Size)            /* PRQA S 3120 *//* math */
      {
         *pf32Det = pMat->data[TRACKABLE_INDEX_VARIANCE_POSX];
      }
      /* 2x2 */
      else if (2u == pMat->u16Size)       /* PRQA S 3120 *//* math */
      {
         *pf32Det = (pMat->data[TRACKABLE_INDEX_VARIANCE_POSX] * pMat->data[TRACKABLE_INDEX_VARIANCE_POSY]) - 
            (pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] * pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY]);
      }
      /* 3x3 */ 
      else if (3u == pMat->u16Size)       /* PRQA S 3120 *//* math */
      {
         /* PRQA S 3120 3 *//* math */
         *pf32Det = ((pMat->data[TRACKABLE_INDEX_VARIANCE_POSX] * ((pMat->data[TRACKABLE_INDEX_VARIANCE_POSY] * pMat->data[TRACKABLE_INDEX_VARIANCE_VELX]) - 
            (pMat->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] * pMat->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX]))) -
            (pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] * ((pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] * pMat->data[TRACKABLE_INDEX_VARIANCE_VELX]) - 
            (pMat->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] * pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX])))) +
            (pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] * ((pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] * pMat->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX]) - 
            (pMat->data[TRACKABLE_INDEX_VARIANCE_POSY] * pMat->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX])));
      }
      /* nxn */
      else
      {
         u32Success = f32SymMatToMat(pMat, &X);

         f32detTmp = FLT_ONE;
         for (iter_k = 0u; iter_k < pMat->u16Size; ++iter_k)
         {
            for (iter_i = iter_k + 1u; iter_i < pMat->u16Size; iter_i++)
            {
               X.data[iter_i][iter_k] = X.data[iter_i][iter_k]/X.data[iter_k][iter_k];
               for (iter_j=iter_k + 1u; iter_j < pMat->u16Size; iter_j++)
               {
                  X.data[iter_i][iter_j] -= X.data[iter_i][iter_k]*X.data[iter_k][iter_j];
               }
            }

            /* multiplying diagonals of U = det */
            f32detTmp *= X.data[iter_k][iter_k];
         }

         *pf32Det = f32detTmp;
      }
   }

   return u32Success;
}

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
 * \}
 */