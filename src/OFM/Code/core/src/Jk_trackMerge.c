/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_trackMerge.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
	performs track merge 
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


#include "Jk_trackMerge.h"
#include "Jk_trackMerge_int.h"
#include "Jk_distance_score.h"
#include "Jk_association.h"
#include "Jk_gainEstimation.h"
#include "JkObjFusn_ParameterInterface.h"
#include "Jk_idProvider.h"
#include "JkObjFusn_TrackableConstants.h"
#include "JkObjFusn_TrackableListUtils.h"
#include "JkObjFusn_TrackableProps.h"
#include "Jk_quality_management.h"
#include "Jk_common_array_utils.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"
#include "Jk_error_management.h"
#include "Jk_fusion_math.h"
#include "JkObjFusn_Eps.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 1532 2 *//* Interface function called by external AAU */
FUNC(uint32, ObjFusn_CODE) trackMerge_mergeTracks(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackList,
                                                    CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   uint32   u32Success               = JKOBJFUSN_ERROR_NOERROR;
   uint16   u16it                    = 0u;
   sint16   s16Rad                   = 0;
   sint16   s16Cam                   = 0;
   uint16   u16NumRadarOnlyTracks    = 0u;
   uint16   u16NumVisionOnlyTracks   = 0u;
   uint16   u16DropIdx               = 0u;

   const float32 _f32MatchGate       = Fusion_get_f32MatchGate() * JK_TRACKMERGE_FACTOR_GATE;

   /* Pointer to internal dist matrix structure */
   CONSTP2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pDistMat = getDistMat();

   /* Store indices to tracks as size of distance matrix is less than number of max trackables */
   VAR(uint16, ObjFusn_VAR_NOINIT) au16IdxRadarOnlyTracks[JK_FUSION_MAX_OBJECTS_FRONT_RADAR];
   VAR(uint16, ObjFusn_VAR_NOINIT) au16IdxVisionOnlyTracks[JK_FUSION_MAX_OBJECTS_FRONT_CAMERA];
   VAR(stMatchIndexArrayType, ObjFusn_VAR_NOINIT) stFusionMatchesArray;
  
   /* Array indicating the objects to be removed after track merge */
   VAR(boolean, ObjFusn_VAR_NOINIT) abMarkedToDrop[JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX];
   jk_common_array_utils_defaultInit_abool(abMarkedToDrop, JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX, FALSE);


#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pTrackList) || (NULL_PTR == pEgoMotion) || (NULL_PTR == abMarkedToDrop))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKMERGE,
         JKOBJFUSN_AAU_TRACKMERGE_MERGE_TRACKS);
   }
   else
#endif
   if (1u < pTrackList->u16ValidTrackables)
   {
      u32Success = trackMerge_findNonFusedTracks(pTrackList, au16IdxRadarOnlyTracks, JK_FUSION_MAX_OBJECTS_FRONT_RADAR, &u16NumRadarOnlyTracks,
         au16IdxVisionOnlyTracks, JK_FUSION_MAX_OBJECTS_FRONT_CAMERA, &u16NumVisionOnlyTracks);

      u32Success |= trackMerge_distanceCam2Radar(pTrackList, _f32MatchGate, pDistMat,
         au16IdxRadarOnlyTracks, u16NumRadarOnlyTracks,
         au16IdxVisionOnlyTracks, u16NumVisionOnlyTracks, pEgoMotion);

      /* call current association algorithm */
      u32Success |= jk_association_runAssociation(pDistMat, _f32MatchGate, &stFusionMatchesArray);

      if ((u32Success == JKOBJFUSN_ERROR_NOERROR) && (0u < stFusionMatchesArray.u16NumMatches))
      {
         for (u16it = 0u; u16it < stFusionMatchesArray.u16NumMatches;u16it++)
         {
            s16Rad = (pTrackList->as16TrackableMap)[au16IdxRadarOnlyTracks[stFusionMatchesArray.aMatchIndexArray[u16it].u16IndexCol]];
            s16Cam = (pTrackList->as16TrackableMap)[au16IdxVisionOnlyTracks[stFusionMatchesArray.aMatchIndexArray[u16it].u16IndexRow]];
            
            /* sSdist_mat[camera][radar] */
            if ((0u != (pTrackList->aTrackable[s16Rad].u32SensorsHist & JKOBJFUSN_TRACKABLE_U32SENSOR_VISION)) && // radar track was fused before (criteria 2)
                (((pTrackList->aTrackable[s16Rad].u16Age > pTrackList->aTrackable[s16Cam].u16Age) ||
                  (JKOBJFUSN_TRACKABLE_U16AGE_DEFAULT == pTrackList->aTrackable[s16Cam].u16Age)) || // check age (criteria 3) - if default = new track
                 (0u == (pTrackList->aTrackable[s16Cam].u32SensorsHist & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR))))  // radar has to be updated by radar (criteria 3)
            {
               u32Success |= trackMerge_mergeTrkble(&pTrackList->aTrackable[s16Rad],&pTrackList->aTrackable[s16Cam], pEgoMotion);
               u16DropIdx = au16IdxVisionOnlyTracks[stFusionMatchesArray.aMatchIndexArray[u16it].u16IndexRow];
            }
            else /* keep camera as major track after merge */
            {
               u32Success |= trackMerge_mergeTrkble(&pTrackList->aTrackable[s16Cam],&pTrackList->aTrackable[s16Rad], pEgoMotion);
               u16DropIdx  = au16IdxRadarOnlyTracks[stFusionMatchesArray.aMatchIndexArray[u16it].u16IndexCol];
            }

            if (JKOBJFUSN_ERROR_NOERROR == u32Success)
            {
               abMarkedToDrop[u16DropIdx] = TRUE; 
            }
            else
            {
               /* MISRA */
            }
         }

         /* drop object which was merged to major object */
         u32Success |= trackMerge_dropObjects(pTrackList, abMarkedToDrop);
      }
      else
      {
         /* MISRA */
      }
   }
   else
   {
      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/* merge Track B into Track A*/
LOCAL FUNC(uint32, ObjFusn_CODE) trackMerge_mergeTrkble(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackA,
                                                          CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackB,
                                                          CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   VAR(stf32Matrix_t, ObjFusn_VAR_NOINIT) sInvP1P2;
   VAR(stf32Matrix_t, ObjFusn_VAR_NOINIT) sMatTemp;
   VAR(stf32Matrix_t, ObjFusn_VAR_NOINIT) sMatP1;
   VAR(stf32Matrix_t, ObjFusn_VAR_NOINIT) sMatP2;
   VAR(stf32Vec_t, ObjFusn_VAR_NOINIT) sVecTemp;
   VAR(JkObjFusn_TrackableType, ObjFusn_VAR_NOINIT) stTrkblTmp;
   
   uint16 u16SensPos;
   const boolean  bUseCoastingTmp = Fusion_get_bUseCoasting();

   /* Keep backup of TrackA in case of error */
   (void)Trackable_copyTrackable(&stTrkblTmp, pTrackA);

   
#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_OFF
   /* Ensure no compiler warning is triggered */
   float32 f32Tmp = pEgoMotion->f32Speed;
   f32Tmp += FLT_ZERO;
#endif

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pTrackA) || (NULL_PTR == pTrackB) || (NULL_PTR == pEgoMotion))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKMERGE,
         JKOBJFUSN_AAU_TRACKMERGE_MERGE_TRKBL);
   }
   else
#endif
   {
#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
   if ((0u != (pTrackA->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA)) && (FLT_ZERO > pTrackA->f32GainVar))
      { 
         /* trackA - camera only track */
         u32Success = gain_estimation(pTrackB, pTrackA, &pTrackA->f32Gain, &pTrackA->f32GainVar);
         if ((pTrackA->vecX.data[TRACKABLE_POSX] > 30.0f) && (pTrackA->vecX.data[TRACKABLE_VELX] > 5.0f)) //Ryan add
         {
             u32Success |= gain_compensation(pTrackA, pTrackA, pTrackA->f32Gain, pTrackA->f32GainVar, pEgoMotion);
         }
         else
         {
             /* MISRA C */
         }
      }
      else if ((0u != (pTrackB->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA)) &&
         (FLT_ZERO > pTrackB->f32GainVar))
      { 
         /* trackB - camera only track  -> store in TrackA since this track will not be deleted */
         u32Success = gain_estimation(pTrackA, pTrackB, &pTrackA->f32Gain, &pTrackA->f32GainVar);
         if ((pTrackB->vecX.data[TRACKABLE_POSX] > 30.0f) && (pTrackB->vecX.data[TRACKABLE_POSY] > 5.0f)) //Ryan add
         {
             u32Success |= gain_compensation(pTrackB, pTrackB, pTrackA->f32Gain, pTrackA->f32GainVar, pEgoMotion);
         }
         else
         {
             /* MISRA C */
         }
         
      }
      else
      { /* no camera only track available -> reset gain, since both are fused -> have same 'model'*/
         pTrackA->f32Gain = JKOBJFUSN_TRACKABLE_F32GAIN_DEFAULT;
         pTrackA->f32GainVar = JKOBJFUSN_TRACKABLE_F32GAINVAR_DEFAULT;
      }
#endif

      /* calculate new state and covaraince  */
      /* both matrices have to have same size, since both are tracks - for CT model has to be adapted */
      // xNew = P2 * inv(P1+P2) * x1 + P1 * inv(P1+P2) * x2 
      u32Success |= f32SymMatToMat(&(pTrackA->matP), &sMatP1);
      u32Success |= f32SymMatToMat(&(pTrackB->matP), &sMatP2);
      u32Success |= f32MatAdd(&sMatP1,&sMatP2,&sInvP1P2);
      u32Success |= f32MatInv(&sInvP1P2); // inv(P1+P2)
      u32Success |= f32MatMul(&sMatP2,&sInvP1P2,&sMatTemp); // P2 * inv(P1+P2)
      u32Success |= f32MatMulVec(&sMatTemp,&pTrackA->vecX,&sVecTemp); // P2 * inv(P1+P2) * x1
      u32Success |= f32CopyVec(&(pTrackA->vecX), &sVecTemp);
      u32Success |= f32MatMul(&sMatP1,&sInvP1P2,&sMatTemp); // P1 * inv(P1+P2)
      u32Success |= f32MatMulVec(&sMatTemp,&pTrackB->vecX,&sVecTemp); // P1 * inv(P1+P2) * x2 
      u32Success |= f32VecAdd(&pTrackA->vecX,&sVecTemp,&pTrackA->vecX); // add second summand

      /* calculate new P matrix */
      // P1 * (inv(P1+P2)) * P2
      u32Success |= f32MatMul(&sMatP1, &sInvP1P2, &sMatTemp); // P1* inv(P1+P2)
      u32Success |= f32MatMul(&sMatTemp, &sMatP2, &sMatP1); // inv(P1+P2) * P2
      u32Success |= f32MatToSymMat(&sMatP1, &pTrackA->matP);


      /* check for errors in merge step */
      if (JKOBJFUSN_ERROR_NOERROR == u32Success)
      {

         /* adapt states (in chronologic order) */
         u16SensPos = Trackable_getSensPos(pTrackB->u32SensorsCurr); // is radar/camera only track so max. one bit is set
         pTrackA->au16SensorID[u16SensPos]      = pTrackB->au16SensorID[u16SensPos];
         pTrackA->au16SensorIDLast[u16SensPos]  = pTrackB->au16SensorIDLast[u16SensPos];
         pTrackA->bUpdated = TRUE;


         /* keep radar motion type, headingAngle while merging */
         if (0u != (pTrackA->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA))
         {
            pTrackA->u16MotionType           = pTrackB->u16MotionType;
            pTrackA->f32Heading              = pTrackB->f32Heading;
            pTrackA->f32HeadingVar           = pTrackB->f32HeadingVar;
            pTrackA->f32Height               = pTrackB->f32Height;
            pTrackA->f32YawRate              = pTrackB->f32YawRate;
            pTrackA->f32YawRateVar           = pTrackB->f32YawRateVar;
            pTrackA->f32CovarHeadingYawRate  = pTrackB->f32CovarHeadingYawRate;
         }
         else
         {
            /* Track A is radar track, keep motion type */
            pTrackA->u16Class = pTrackB->u16Class;
         }
         
         pTrackA->u32SensorsCurr    = ((pTrackA->u32SensorsCurr) | (pTrackB->u32SensorsCurr));
         pTrackA->u32SensorsHist    = ((pTrackA->u32SensorsHist) | (pTrackB->u32SensorsHist));
         pTrackA->u8CyclesNoRadar   = jk_fusion_min_U8(pTrackA->u8CyclesNoRadar, pTrackB->u8CyclesNoRadar);
         pTrackA->u8CyclesNoVision  = jk_fusion_min_U8(pTrackA->u8CyclesNoVision, pTrackB->u8CyclesNoVision);

         pTrackA->u8IsAsilVerified  = ((pTrackA->u8IsAsilVerified) | (pTrackB->u8IsAsilVerified));

        
         /* if fused object shall be coasted, set lifespan of track to coasting lifespan */
         if ((TRUE == bUseCoastingTmp) && (((pTrackA->u32SensorsCurr) & JK_COASTING_SENSOR_PATTERN) == JK_COASTING_SENSOR_PATTERN))
         {
            pTrackA->u16Lifespan = JKOBJFUSN_TRACKABLE_U16LIFESPAN_COASTED;
         }
         else
         {
            pTrackA->u16Lifespan = jk_fusion_max_U16(pTrackA->u16Lifespan, pTrackB->u16Lifespan);
         }

         /* Track Quality and Existence Probabiltiy */
         pTrackA->f32ObstacleProbability  = jk_fusion_min_F32(pTrackA->f32ObstacleProbability, pTrackB->f32ObstacleProbability);
         pTrackA->f32ExistenceQuality     = jk_fusion_max_F32(pTrackA->f32ExistenceQuality, pTrackB->f32ExistenceQuality);
         pTrackA->f32TrackQuality         = jk_fusion_max_F32(pTrackA->f32TrackQuality, pTrackB->f32TrackQuality);

         /* take ID from track longer available, check if one track was set up in this cycle (don't use this!) */
         if ((pTrackB->u16Age > pTrackA->u16Age) && (pTrackB->u16Age != JKOBJFUSN_TRACKABLE_U16AGE_DEFAULT))
         {  /* take trackB, since it is older, but not new */
            /* if ID was already set - release ID (not for tacks just created) */
            u32Success |= idProvider_releaseFusionId(pTrackA->u16ID);

            pTrackA->u16Age = pTrackB->u16Age;
            pTrackA->u16ID = pTrackB->u16ID;
         }
         else
            /* if ID from Track A is chosen -> release B */
         {
            u32Success |= idProvider_releaseFusionId(pTrackB->u16ID); // release ID
         }

      }
      else
      {        
         /* Error occured, modifications of trackA shall be reverted */
         u32Success |= Trackable_copyTrackable(pTrackA, &stTrkblTmp);
      }
   }

   return u32Success;
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) trackMerge_distanceCam2Radar(CONSTP2CONST(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackList,
                                                                const float32 f32MatchGate,
                                                                CONSTP2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pDist_mat,
                                                                const uint16 au16IdxRadarOnlyTracks[], const uint16 u16NumRadarOnlyTracks,
                                                                const uint16 au16IdxVisionOnlyTracks[], const uint16 u16NumVisionOnlyTracks,
                                                                CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   VAR(JkObjFusn_TrackableType, ObjFusn_VAR_NOINIT) stTrkCamGainCorr;
   VAR(JkObjFusn_TrackableType, ObjFusn_VAR_NOINIT) stTrkRadarCorr;
   uint32  u32Success            = JKOBJFUSN_ERROR_NOERROR;
   uint16  u16Cam                = 0u;
   uint16  u16Rad                = 0u;
   sint16  s16Idx                = -1;
   float32 f32Dist               = FLT_ZERO;
   float32 f32DiffX              = FLT_ZERO;
   float32 f32DiffY              = FLT_ZERO;
   float32 f32DiffVelX           = FLT_ZERO;


#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
   float32 f32GainTmp            = FLT_ZERO;
   float32 f32GainVarTmp         = FLT_ZERO;
#else
   /* Prevent compiler warning when gain estimation is disabled */
   float32 f32Tmp = pEgoMotion->f32Speed;
#endif

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   /* input validity checks */
   if ((au16IdxRadarOnlyTracks == NULL_PTR) || (au16IdxVisionOnlyTracks == NULL_PTR))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKMERGE, 
         JKOBJFUSN_AAU_TRACKMERGE_DISTCAM2RADAR);
   }
   else
#endif
   if (JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX < pTrackList->u16ValidTrackables)
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKMERGE, 
         JKOBJFUSN_AAU_TRACKMERGE_DISTCAM2RADAR);
   }
   else if ((u16NumRadarOnlyTracks > JK_FUSION_MAX_OBJECTS_FRONT_RADAR) ||
            (u16NumVisionOnlyTracks > JK_FUSION_MAX_OBJECTS_FRONT_CAMERA))
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKMERGE, 
         JKOBJFUSN_AAU_TRACKMERGE_DISTCAM2RADAR);
   }
   else
#endif
   if ((u16NumRadarOnlyTracks == 0u) || (u16NumVisionOnlyTracks == 0u))
   {
      /* Init with maximum distance value */
      initDistMatrix(pDist_mat, 0u, 0u, FLT_ZERO);
   }
   else
   {
      /* Init with maximum distance value */
      initDistMatrix(pDist_mat, u16NumVisionOnlyTracks, u16NumRadarOnlyTracks, f32MatchGate);
      
      /** Search for radar only tracks */
      for (u16Rad = 0u; u16Rad < u16NumRadarOnlyTracks; u16Rad++)
      {
         s16Idx = pTrackList->as16TrackableMap[au16IdxRadarOnlyTracks[u16Rad]];
         u32Success |= Trackable_copyTrackable(&stTrkRadarCorr, &(pTrackList->aTrackable[s16Idx]));

         if (stTrkRadarCorr.u16Age != JKOBJFUSN_TRACKABLE_U16AGE_DEFAULT)
         {
            trackMerge_increaseVariance(&stTrkRadarCorr.matP);

         }
         else
         {
            /* MISRA */
         }

         for (u16Cam = 0u; u16Cam < u16NumVisionOnlyTracks; u16Cam++)
         {
            /* copy camera only track */
            s16Idx      = pTrackList->as16TrackableMap[au16IdxVisionOnlyTracks[u16Cam]];
            u32Success |= Trackable_copyTrackable(&stTrkCamGainCorr, &(pTrackList->aTrackable[s16Idx]));
            
            if (stTrkCamGainCorr.u16Age != JKOBJFUSN_TRACKABLE_U16AGE_DEFAULT)
            {
               trackMerge_increaseVariance(&stTrkCamGainCorr.matP);
            }
            else
            {
               /* MISRA */
            }

#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
            if (stTrkCamGainCorr.f32GainVar < JK_FUSION_COMPARE_TO_ZERO) 
            { 
               /* camera track is in camera coodinates (GainVar is default -1.0f) -> calculate new gain*/
               f32GainTmp     = JKOBJFUSN_TRACKABLE_F32GAIN_DEFAULT;
               f32GainVarTmp  = JKOBJFUSN_TRACKABLE_F32GAINVAR_DEFAULT;
               u32Success     |= gain_estimation(&stTrkRadarCorr, &stTrkCamGainCorr, &f32GainTmp, &f32GainVarTmp);
               u32Success     |= gain_compensation(&stTrkCamGainCorr,&stTrkCamGainCorr, f32GainTmp, f32GainVarTmp, pEgoMotion);
            }
            else if (JK_GAIN_RADAR_CYCLES_RESET < stTrkCamGainCorr.u8CyclesNoRadar)
            { 
               /* camera was updated by radar before -> increase P if radar update is old */
               /* Gain initialized at this point, no further checks needed */
               u32Success |= gain_PIncrease(&stTrkCamGainCorr, stTrkCamGainCorr.f32GainVar, pEgoMotion);
            }
            else
            {
               /* camera track already compensated, radar recently available, so gain is correct -> do nothing */
            }
#else
            /** Suppress compiler warning */
            f32Tmp += FLT_ZERO;
#endif

            f32DiffX    = jk_fusion_abs(stTrkRadarCorr.vecX.data[TRACKABLE_POSX] - stTrkCamGainCorr.vecX.data[TRACKABLE_POSX]);
            f32DiffY    = jk_fusion_abs(stTrkRadarCorr.vecX.data[TRACKABLE_POSY] - stTrkCamGainCorr.vecX.data[TRACKABLE_POSY]);
            f32DiffVelX = jk_fusion_abs(stTrkRadarCorr.vecX.data[TRACKABLE_VELX] - stTrkCamGainCorr.vecX.data[TRACKABLE_VELX]);

            if(((f32DiffX < JK_DISTANCE_SCORE_MAX_COARSE_DIST_X) && (f32DiffY < JK_DISTANCE_SCORE_MAX_COARSE_DIST_Y)) &&
               (f32DiffVelX < JK_DISTANCE_SCORE_MAX_COARSE_VEL_X))
            {

               u32Success |= distance_score_computeExtendedDist(&stTrkRadarCorr, &stTrkCamGainCorr, 
                  f32MatchGate, &f32Dist);

               if (f32Dist < f32MatchGate)
               {
                  pDist_mat->data[u16Cam][u16Rad] = convertFloatToFixedtDistMat(f32Dist);
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
   }

   return u32Success;
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) trackMerge_findNonFusedTracks(CONSTP2CONST(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackList,
                                                                 uint16 au16IdxRadarOnlyTracks[], const uint16 u16nElementsRadarToDistMatrix,
                                                                 CONSTP2VAR(uint16, AUTOMATIC, ObjFusn_VAR_NOINIT) pu16NumRadarOnlyTracks,
                                                                 uint16 au16IdxVisionOnlyTracks[], const uint16 u16nElementsVisionToDistMatrix,
                                                                 CONSTP2VAR(uint16, AUTOMATIC, ObjFusn_VAR_NOINIT) pu16NumVisionOnlyTracks)
{
   uint32 u32Success       = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */
   uint16 u16i             = 0u;
   sint16 s16Idx           = -1;
   uint32 u32SensorCurr    = 0u;
   uint16 u16CntVision     = 0u;
   uint16 u16CntRadar      = 0u;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   /* input validity checks */
   if ((NULL_PTR == pTrackList) || (NULL_PTR == au16IdxRadarOnlyTracks) ||
       (NULL_PTR == au16IdxVisionOnlyTracks) || (NULL_PTR == pu16NumRadarOnlyTracks) ||
       (NULL_PTR == pu16NumVisionOnlyTracks))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKMERGE,
         JKOBJFUSN_AAU_TRACKMERGE_FIND_NON_FUSED_TRACKS);
   }
   else
#endif
   if (JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX < pTrackList->u16ValidTrackables)
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKMERGE,
         JKOBJFUSN_AAU_TRACKMERGE_FIND_NON_FUSED_TRACKS);
   }
   else if ((u16nElementsRadarToDistMatrix > JK_FUSION_MAX_OBJECTS_FRONT_RADAR) ||
            (u16nElementsVisionToDistMatrix > JK_FUSION_MAX_OBJECTS_FRONT_CAMERA))
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKMERGE,
         JKOBJFUSN_AAU_TRACKMERGE_FIND_NON_FUSED_TRACKS);
   }   
   else
#endif
   {
      jk_common_array_utils_defaultInit_au16(au16IdxRadarOnlyTracks, JK_FUSION_MAX_OBJECTS_FRONT_RADAR, 0u);
      jk_common_array_utils_defaultInit_au16(au16IdxVisionOnlyTracks, JK_FUSION_MAX_OBJECTS_FRONT_CAMERA, 0u);

      for (u16i = 0u; u16i < (pTrackList->u16ValidTrackables); u16i++)
      {
         s16Idx = pTrackList->as16TrackableMap[u16i];
         u32SensorCurr = pTrackList->aTrackable[s16Idx].u32SensorsCurr;
         
         if ((u32SensorCurr == JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT) &&
             ((u32SensorCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR) == 0u))
         {
            if (u16CntVision < u16nElementsVisionToDistMatrix)
            {
               au16IdxVisionOnlyTracks[u16CntVision] = u16i;
               u16CntVision++;
            }
            else
            {
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
               u32Success |= JKOBJFUSN_ERROR_INTERNAL_ERROR;
               (void) jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKMERGE,
                  JKOBJFUSN_AAU_TRACKMERGE_FIND_NON_FUSED_TRACKS);
#endif
            }
         }
         else if (((u32SensorCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA) == 0u) && 
                  (0u != (u32SensorCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER)))
                  // (u32SensorCurr == JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER))
         {
            if (u16CntRadar < u16nElementsRadarToDistMatrix)
            {
               au16IdxRadarOnlyTracks[u16CntRadar] = u16i;
               u16CntRadar++;
            }
            else
            {

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
               u32Success |= JKOBJFUSN_ERROR_INTERNAL_ERROR;
               (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_TRACKMERGE,
                  JKOBJFUSN_AAU_TRACKMERGE_FIND_NON_FUSED_TRACKS);
#endif
            }
         }
         else
         {
            /* MISRA */
         }
      }


#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
      if(u32Success != JKOBJFUSN_ERROR_NOERROR)
      {
         jk_common_array_utils_defaultInit_au16(au16IdxRadarOnlyTracks, JK_FUSION_MAX_OBJECTS_FRONT_RADAR, 0u);
         jk_common_array_utils_defaultInit_au16(au16IdxVisionOnlyTracks, JK_FUSION_MAX_OBJECTS_FRONT_CAMERA, 0u);
         *pu16NumRadarOnlyTracks  = 0u;
         *pu16NumVisionOnlyTracks = 0u;
      }
      else
#endif
      {
         *pu16NumRadarOnlyTracks  = u16CntRadar;
         *pu16NumVisionOnlyTracks = u16CntVision;
      }
   }

   return u32Success;
}

LOCAL FUNC(uint32, ObjFusn_CODE) trackMerge_dropObjects(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackList, const boolean abMarkedForDeletion[])
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   uint16 u16i;
   uint16 u16offset = 0u;
   sint16 s16Idx;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if (pTrackList->u16ValidTrackables > JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX)
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE,
         JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_DROP_OBJECTS);
   }
   else
#endif
   {
      for (u16i = 0u; u16i < pTrackList->u16ValidTrackables; u16i++)
      {
         if (TRUE == abMarkedForDeletion[u16i])
         {
            s16Idx = pTrackList->as16TrackableMap[u16i];
            u32Success = Trackable_init(&pTrackList->aTrackable[s16Idx]);
            u16offset++;
         }
         else if (u16offset > 0u)
         {
            pTrackList->as16TrackableMap[u16i - u16offset] = pTrackList->as16TrackableMap[u16i];
         }
         else
         {
            /* MISRA */
         }
      }

      pTrackList->u16ValidTrackables -= u16offset;
      // set as16TrackableMap to -1 
      for (u16i = pTrackList->u16ValidTrackables; u16i < JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX; ++u16i)
      {
         pTrackList->as16TrackableMap[u16i] = -1;
      }
   }

   return u32Success;
}

LOCAL FUNC(void, ObjFusn_CODE) trackMerge_increaseVariance(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pMatP)
{
   const uint16 _u16Size         = pMatP->u16Size;

   pMatP->data[TRACKABLE_INDEX_VARIANCE_POSX] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
   pMatP->data[TRACKABLE_INDEX_VARIANCE_POSY] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
   pMatP->data[TRACKABLE_INDEX_VARIANCE_VELX] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;

   if (_u16Size > TRACKABLE_ACCY)
   {
      pMatP->data[TRACKABLE_INDEX_VARIANCE_VELY] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
      pMatP->data[TRACKABLE_INDEX_VARIANCE_ACCX] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
      pMatP->data[TRACKABLE_INDEX_VARIANCE_ACCY] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
   }
   else if (_u16Size > TRACKABLE_ACCX)
   {
      pMatP->data[TRACKABLE_INDEX_VARIANCE_VELY] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
      pMatP->data[TRACKABLE_INDEX_VARIANCE_ACCX] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
   }
   else if (_u16Size > TRACKABLE_VELY)
   {
      pMatP->data[TRACKABLE_INDEX_VARIANCE_VELY] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
   }
   else
   {
      /* MISRA */
   }

}



#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"
/**
 * \}
 */
