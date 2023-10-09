/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_quality_management.c
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

#include "Jk_quality_management.h"
#include "Jk_fusion_math.h"
#include "Jk_quality_management_int.h"
#include "JkObjFusn_TrackableConstants.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"
#include "Jk_error_management.h"
#include "Jk_fusion_tools.h"
#include "JkObjFusn_TrackableProps.h"
#include "JkObjFusn_ParameterInterface.h"

/*****************************************************************************
VARIABLES
*****************************************************************************/

/*****************************************************************************
FUNCTIONS
*****************************************************************************/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

/* PRQA S 1532 2 *//* Function called from external AAU */
FUNC(uint32, ObjFusn_CODE) jk_update_track_quality(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pInvMatS, CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pVecZ_diff)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */
   float32 f32SquareDistance;
   uint16 i;
   uint16 j;


#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((pTrkbl == NULL_PTR) || (pVecZ_diff == NULL_PTR) || pInvMatS == NULL_PTR)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_QUALITY_MANAGEMENT,
         JKOBJFUSN_AAU_QUALITY_MANAGEMENT_JK_UPDATE_TRACK_QUALITY);
   }
   else
#endif
      if ((pVecZ_diff->nRows == 0u) || (pInvMatS->nRows == 0u) || (pInvMatS->nCols == 0u))
      {
         u32Success = JKOBJFUSN_ERROR_MATRIX_EMPTY;
         (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_QUALITY_MANAGEMENT,
            JKOBJFUSN_AAU_QUALITY_MANAGEMENT_JK_UPDATE_TRACK_QUALITY);
      }
      else if ((pVecZ_diff->nRows > JKOBJFUSN_MATRIX_SIZE) || (pInvMatS->nRows > JKOBJFUSN_MATRIX_SIZE) || (pInvMatS->nCols > JKOBJFUSN_MATRIX_SIZE))
      {
         u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
         (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_QUALITY_MANAGEMENT,
            JKOBJFUSN_AAU_QUALITY_MANAGEMENT_JK_UPDATE_TRACK_QUALITY);
      }
      else
#endif
      {
         f32SquareDistance = FLT_ZERO;
         
         for (i = 0u; i < pVecZ_diff->nRows; i++)
         {
            for (j = 0u; j < pVecZ_diff->nRows; j++)
            {
               f32SquareDistance += pInvMatS->data[i][j] * pVecZ_diff->data[i] * pVecZ_diff->data[j];
            }
         }
          
         /* calculate track quality */
         pTrkbl->f32TrackQuality = (JK_QUALITY_MANAGEMENT_TRACK_ALPHA * pTrkbl->f32TrackQuality) +  ((FLT_ONE - JK_QUALITY_MANAGEMENT_TRACK_ALPHA) * f32SquareDistance);
      }

   return u32Success;
}


LOCAL FUNC(uint32, ObjFusn_CODE) jk_qualityManagement_getTruePositiveProbability(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pProbabilityTruePositive,
   const uint32 u32SensorUpdatePattern)
{
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   uint32   u32Success                             = JKOBJFUSN_ERROR_NOERROR;
#else 
   const uint32 u32Success                         = JKOBJFUSN_ERROR_NOERROR;
#endif

   float32  f32PosX                                = FLT_ZERO;
   float32  f32DistanceThreshold_1                 = FLT_ZERO;
   float32  f32DistanceTrehshold_2                 = FLT_ZERO;
   float32  f32ConstantTruePosProbabilityHigh      = FLT_ZERO;
   float32  f32ConstantTruePosProbabilityLow       = FLT_ZERO;
   float32  f32Slope                               = FLT_ZERO;
   float32  f32Offset                              = FLT_ZERO;
   float32  f32TruePositiveProbability             = FLT_ZERO;
   const    uint16 u16CurrClass                    = pTrkbl->u16Class;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if ((((u32SensorUpdatePattern & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA) == 0u) &&
      ((u32SensorUpdatePattern & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR) == 0u)))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_QUALITY_MANAGEMENT, 
         JKOBJFUSN_AAU_QUALITY_MANAGEMENT_GET_PROBABILITY_TRUE_POSITIVE);
   }
   else
#endif
   {
      if (((u32SensorUpdatePattern) & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR) > 0u)
      {
         f32DistanceThreshold_1 = JK_QUALITY_MANAGEMENT_FLR_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1;
         f32DistanceTrehshold_2 = JK_QUALITY_MANAGEMENT_FLR_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2;
         f32ConstantTruePosProbabilityHigh = JK_QUALITY_MANAGEMENT_FLR_PROBABILITY_TRUE_POSITIVE_CONSTANT_1;
         f32ConstantTruePosProbabilityLow = JK_QUALITY_MANAGEMENT_FLR_PROBABILITY_TRUE_POSITIVE_CONSTANT_2;
      }
      else
      {
         /* Vision Measurement */
         if ((u16CurrClass & JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_UNKNOWN) > 0u)
         {
            f32DistanceThreshold_1 = JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1;
            f32DistanceTrehshold_2 = JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2;
            f32ConstantTruePosProbabilityHigh = JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_TRUE_POSITIVE_CONSTANT_1;
            f32ConstantTruePosProbabilityLow = JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_TRUE_POSITIVE_CONSTANT_2;
         }
         else if ((u16CurrClass & JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN) > 0u)
         {
            f32DistanceThreshold_1 = JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1;
            f32DistanceTrehshold_2 = JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2;
            f32ConstantTruePosProbabilityHigh = JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_TRUE_POSITIVE_CONSTANT_1;
            f32ConstantTruePosProbabilityLow = JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_TRUE_POSITIVE_CONSTANT_2;
         }
         else if (u16CurrClass == JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_BICYCLE)
         {
            f32DistanceThreshold_1 = JK_QUALITY_MANAGEMENT_MVS_BICYCLE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1;
            f32DistanceTrehshold_2 = JK_QUALITY_MANAGEMENT_MVS_BICYCLE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2;
            f32ConstantTruePosProbabilityHigh = JK_QUALITY_MANAGEMENT_MVS_BICYCLE_PROBABILITY_TRUE_POSITIVE_CONSTANT_1;
            f32ConstantTruePosProbabilityLow = JK_QUALITY_MANAGEMENT_MVS_BICYCLE_PROBABILITY_TRUE_POSITIVE_CONSTANT_2;
         }
         else if ((u16CurrClass & JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_UNKNOWN) > 0u)
         {
            f32DistanceThreshold_1 = JK_QUALITY_MANAGEMENT_MVS_MOTORBIKE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1;
            f32DistanceTrehshold_2 = JK_QUALITY_MANAGEMENT_MVS_MOTORBIKE_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2;
            f32ConstantTruePosProbabilityHigh = JK_QUALITY_MANAGEMENT_MVS_MOTORBIKE_PROBABILITY_TRUE_POSITIVE_CONSTANT_1;
            f32ConstantTruePosProbabilityLow = JK_QUALITY_MANAGEMENT_MVS_MOTORBIKE_PROBABILITY_TRUE_POSITIVE_CONSTANT_2;
         }
         else
         {
            f32DistanceThreshold_1 = JK_QUALITY_MANAGEMENT_MVS_UNKNOWN_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_1;
            f32DistanceTrehshold_2 = JK_QUALITY_MANAGEMENT_MVS_UNKNOWN_PROBABILITY_TRUE_POSITIVE_DISTANCE_THRESHOLD_2;
            f32ConstantTruePosProbabilityHigh = JK_QUALITY_MANAGEMENT_MVS_UNKNOWN_PROBABILITY_TRUE_POSITIVE_CONSTANT_1;
            f32ConstantTruePosProbabilityLow = JK_QUALITY_MANAGEMENT_MVS_UNKNOWN_PROBABILITY_TRUE_POSITIVE_CONSTANT_2;
         }
      }

      f32PosX = (pTrkbl->vecX).data[TRACKABLE_POSX] - Fusion_get_f32DynCalPrmForAxleDstReToVehFrnt();

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
      if ((f32DistanceThreshold_1 >= f32DistanceTrehshold_2) || 
         (f32ConstantTruePosProbabilityLow >= (f32ConstantTruePosProbabilityHigh + FLT_EPSILON)))
      {
         u32Success = JKOBJFUSN_ERROR_INTERNAL_ERROR;
         (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_QUALITY_MANAGEMENT, 
            JKOBJFUSN_AAU_QUALITY_MANAGEMENT_GET_PROBABILITY_TRUE_POSITIVE);   
      }
      else
#endif
      {
         if (f32PosX < f32DistanceThreshold_1)
         {
            *pProbabilityTruePositive = f32ConstantTruePosProbabilityHigh;
         }
         else if (f32PosX > f32DistanceTrehshold_2)
         {
            *pProbabilityTruePositive = f32ConstantTruePosProbabilityLow;
         }
         else
         {
            f32Slope    =  (f32ConstantTruePosProbabilityHigh - f32ConstantTruePosProbabilityLow) /
               (f32DistanceThreshold_1 - f32DistanceTrehshold_2);
            f32Offset   =  (((-FLT_ONE) * f32Slope) * f32DistanceTrehshold_2) + f32ConstantTruePosProbabilityLow;

            f32TruePositiveProbability = (f32Slope * f32PosX) + f32Offset;
            *pProbabilityTruePositive = jk_fusion_max_F32(f32TruePositiveProbability, FLT_ZERO);
         }
      }
   }
   return u32Success;
}

LOCAL FUNC(uint32, ObjFusn_CODE) jk_qualityManagement_getFalsePositiveProbability
   (CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pProbalityFalsePositive,
   const uint32 u32SensorUpdatePattern)
{
   uint32 u32Success    = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */
   uint16 u16ClassType  = 0u;
   float32 f32PosX      = FLT_ZERO;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pTrkbl) || (NULL_PTR == pProbalityFalsePositive))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_QUALITY_MANAGEMENT, 
         JKOBJFUSN_AAU_QUALITY_MANAGEMENT_GET_PROBABILITY_FALSE_POSITIVE);
   }
   else
#endif
      if ((((u32SensorUpdatePattern) & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA) == 0u) &&
         (((u32SensorUpdatePattern) & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR) == 0u))
      {
         u32Success = JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN;
         (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_QUALITY_MANAGEMENT, 
            JKOBJFUSN_AAU_QUALITY_MANAGEMENT_GET_PROBABILITY_FALSE_POSITIVE);
      }
      else
#endif
      {
         u16ClassType = (pTrkbl->u16Class);
         f32PosX      = (pTrkbl->vecX.data[TRACKABLE_POSX]);

         if (((u32SensorUpdatePattern) & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR) > 0u)
         {
            *pProbalityFalsePositive = JK_QUALITY_MANAGEMENT_FLR_PROBABILITY_FALSE_POSITIVE;  
         }
         else if (((u32SensorUpdatePattern) & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA) > 0u)
         {
            if ((u16ClassType & JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_UNKNOWN) > 0u)
            {
               f32PosX = jk_fusion_min_F32(f32PosX, JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_FALSE_POSITIVE_MAX_DIST);

               *pProbalityFalsePositive = JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_FALSE_POSITIVE_OFFSET + 
                  (f32PosX * JK_QUALITY_MANAGEMENT_MVS_VEHICLE_PROBABILITY_FALSE_POSITIVE_SLOPE);
            }
            else 
            {
               /** Use pedetrian model for all remaining tracks (Pedestrian / 2 Wheeler) */
               f32PosX = jk_fusion_min_F32(f32PosX, JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_FALSE_POSITIVE_MAX_DIST);

               *pProbalityFalsePositive = JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_FALSE_POSITIVE_OFFSET + 
                  (f32PosX * JK_QUALITY_MANAGEMENT_MVS_PEDESTRIAN_PROBABILITY_FALSE_POSITIVE_SLOPE);
            }
         }
         else
         {
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
            u32Success = JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN;
            (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_QUALITY_MANAGEMENT, 
               JKOBJFUSN_AAU_QUALITY_MANAGEMENT_GET_PROBABILITY_FALSE_POSITIVE);
#endif
            *pProbalityFalsePositive = FLT_ZERO;
         }
      }

      return u32Success;
}

/* PRQA S 1532 2 *//* Function called from external AAU */
FUNC(uint32, ObjFusn_CODE) jk_update_existence_probability(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkblList)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   uint16 u16i;
   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurrTrkbl;

   for (u16i = 0u; u16i < pTrkblList->u16ValidTrackables; u16i++)
   {
      pCurrTrkbl = &(pTrkblList->aTrackable[pTrkblList->as16TrackableMap[u16i]]);
      u32Success |= updateExistenceProbability(pCurrTrkbl);
   }

   return u32Success;
}

LOCAL FUNC(uint32, ObjFusn_CODE) updateExistenceProbability(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl)
{
   uint32  u32Success                        = JKOBJFUSN_ERROR_NOERROR;
   float32 f32ProbabilityTruePositiveVision  = FLT_ZERO;
   float32 f32ProbabilityFalsePositiveVision = FLT_ZERO;
   float32 f32ProbabilityTruePositiveRadar   = FLT_ZERO;
   float32 f32ProbabilityFalsePositiveRadar  = FLT_ZERO;
   float32 f32ExistenceProbability           = FLT_ZERO;
   float32 f32ProbRatio                      = FLT_ZERO;
   boolean bDetected                         = FALSE;
   float32 f32FacAva                         = FLT_ONE;
   float32 f32FacMiss                        = FLT_ONE;
   float32 f32ProbabilityTruePositive        = FLT_ZERO;
   float32 f32ProbabilityFalsePositive       = FLT_ZERO;

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pTrkbl)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_QUALITY_MANAGEMENT, 
         JKOBJFUSN_AAU_QUALITY_MANAGEMENT_UPDATE_EXISTENCE_PROBABILITY);
   }
   else
#endif
   {
      f32ExistenceProbability = (pTrkbl->f32ExistenceQuality);
      
      u32Success = jk_qualityManagement_isDetected(pTrkbl, &bDetected);
      u32Success |= jk_qualityManagement_getTruePositiveProbability(pTrkbl,  &f32ProbabilityTruePositiveVision,  
         JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT);
      u32Success |= jk_qualityManagement_getFalsePositiveProbability(pTrkbl, &f32ProbabilityFalsePositiveVision, 
         JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT);
      u32Success |= jk_qualityManagement_getTruePositiveProbability(pTrkbl,  &f32ProbabilityTruePositiveRadar,   
         JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER);
      u32Success |= jk_qualityManagement_getFalsePositiveProbability(pTrkbl, &f32ProbabilityFalsePositiveRadar,  
         JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER);

      /* Pedestrian may also be set to detected if track is vision only */
      if((TRUE == bDetected) && ((pTrkbl->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER) > 0u))
      {
         f32ProbabilityTruePositive  = f32ProbabilityTruePositiveVision * f32ProbabilityTruePositiveRadar;
         f32ProbabilityFalsePositive = f32ProbabilityFalsePositiveRadar * f32ProbabilityFalsePositiveVision;
      }
      else
      {
         f32ProbabilityTruePositive    = f32ProbabilityTruePositiveVision;
         f32ProbabilityFalsePositive   = f32ProbabilityFalsePositiveVision;
      }

      /* get factors of current zone */
      if((pTrkbl->u16Class & JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_UNKNOWN) > 0u)
      {
         if (JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_3 < pTrkbl->f32ExistenceQuality)
         {
            f32FacMiss = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_3_MISS_VEH;
            f32FacAva = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_3_AVA_VEH;
         }
         else if (JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_2 < pTrkbl->f32ExistenceQuality)
         {
            f32FacMiss  = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_2_MISS_VEH;
            f32FacAva   = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_2_AVA_VEH;
         }
         else if (JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1 < pTrkbl->f32ExistenceQuality)
         {
            //f32FacAva = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_MISS_VEH;
            //f32FacMiss = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_AVA_VEH;

            //Ryan modify
            f32FacAva = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_AVA_VEH;
            f32FacMiss = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_MISS_VEH;
         }
         else
         {
            //f32FacAva = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_MISS_VEH;
            //f32FacMiss = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_AVA_VEH;

            //Ryan modify
            f32FacAva = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_AVA_VEH;
            f32FacMiss = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_MISS_VEH;
         }
      }
      else if((pTrkbl->u16Class & JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN) > 0u)
      {
         if (JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_3 < pTrkbl->f32ExistenceQuality)
         {
            f32FacMiss = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_3_MISS_PED;
            f32FacAva = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_3_AVA_PED;
         }
         else if (JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_2 < pTrkbl->f32ExistenceQuality)
         {
            f32FacMiss  = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_2_MISS_PED;
            f32FacAva   = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_2_AVA_PED;
         }
         else if (JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1 < pTrkbl->f32ExistenceQuality)
         {
            //f32FacAva   = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_MISS_PED;
            //f32FacMiss  = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_AVA_PED;

            //Ryan add
            f32FacAva = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_AVA_PED;
            f32FacMiss = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_1_MISS_PED;
         }
         else
         {
            //f32FacAva   = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_MISS_PED;
            //f32FacMiss  = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_AVA_PED;

            //Ryan add
            f32FacAva = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_AVA_PED;
            f32FacMiss = JK_QUALITY_MANAGEMENT_EXISTENCE_LEVEL_0_MISS_PED;
         }
      }
      else
      {
         f32FacAva   = JK_QUALITY_MANAGEMENT_AVA_DEFAULT;
         f32FacMiss  = JK_QUALITY_MANAGEMENT_MISS_DEFAULT;
      }

      /* get existence probabilites */
      if (TRUE == bDetected)
      {
         f32ProbRatio = jk_fusion_log(f32ProbabilityTruePositive / f32ProbabilityFalsePositive);
         f32ExistenceProbability += f32FacAva * f32ProbRatio;
      }
      else
      {
         f32ProbRatio = jk_fusion_log((FLT_ONE - f32ProbabilityTruePositive) / (FLT_ONE - f32ProbabilityFalsePositive));
         f32ExistenceProbability += f32FacMiss * f32ProbRatio;
      }

      f32ExistenceProbability = jk_fusion_min_max_F32(f32ExistenceProbability,JKOBJFUSN_TRACKABLE_F32EXISTENCEQUALITY_MIN,JKOBJFUSN_TRACKABLE_F32EXISTENCEQUALITY_MAX);
      pTrkbl->f32ExistenceQuality = f32ExistenceProbability;
   }

   return u32Success;
}

LOCAL FUNC(uint32, ObjFusn_CODE) jk_qualityManagement_isDetected(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl, 
   CONSTP2VAR(boolean, AUTOMATIC, ObjFusn_VAR_NOINIT) pbIsDetected)
{
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   uint32  u32Success   = JKOBJFUSN_ERROR_NOERROR;
#else
   const uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
#endif 

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pTrkbl)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_QUALITY_MANAGEMENT, 
         JKOBJFUSN_AAU_QUALITY_MANAGEMENT_UPDATE_EXISTENCE_PROBABILITY);
   }
   else
#endif
   {
      if(((pTrkbl->u16Class & JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_UNKNOWN) > 0u) &&
         ((pTrkbl->u32SensorsCurr & JK_QUALITY_MANAGEMENT_SENSOR_PATTERN_VEHICLE) == JK_QUALITY_MANAGEMENT_SENSOR_PATTERN_VEHICLE))
      {
         *pbIsDetected = TRUE;
      }
      else if(((pTrkbl->u16Class & JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN) > 0u) &&
         ((pTrkbl->u32SensorsCurr & JK_QUALITY_MANAGEMENT_SENSOR_PATTERN_PEDESTRIAN) == JK_QUALITY_MANAGEMENT_SENSOR_PATTERN_PEDESTRIAN))
      {
         *pbIsDetected = TRUE;
      }
      else
      {
         *pbIsDetected = FALSE;
      }
   }

   return u32Success;
}

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/** \} */
