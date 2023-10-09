/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_lkf_trackManagement.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description:
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

#include "Jk_lkf_trackManagement.h"
#include "Jk_lkf_trackManagement_int.h"

#include "JkObjFusn_TrackableListUtils.h"
#include "Jk_idProvider.h"
#include "Jk_common_array_utils.h"
#include "Jk_common_matrix.h"
#include "Jk_motionType.h"
#include "Jk_gainEstimation.h"
#include "Jk_egoCoordCompensation.h"
#include "Jk_fusion_math.h"
#include "JkObjFusn_Eps.h"
#include "JkObjFusn_ParameterInterface.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"

#include "Jk_quality_management.h"
#include "Jk_objectSelection.h"
#include "Jk_trackMerge.h"
#include "Jk_lkf_coordinatedTurn.h"
#include "Jk_validation_management.h"
#include "Jk_error_management.h"

#include "JkObjFusn_TrackableProps.h"

/*****************************************************************************
VARIABLES
*****************************************************************************/
/** @name jk_lkf_trackManagement.c global variables */
/**
* LKF track list
*/
// #define ObjFusn_START_SEC_VAR_UNSPECIFIED
// #include "ObjFusn_MemMap.h"
// LOCAL VAR(JkObjFusn_TrackableListType, ObjFusn_VAR_ZERO_INIT) TRK_LIST = { 0 }; /* PRQA S 0612*/ /* Size of trackable list exceeds 32767 bytes */
// #define ObjFusn_STOP_SEC_VAR_UNSPECIFIED
// #include "ObjFusn_MemMap.h"

// YIYU MA
#define TargetFusion_START_SEC_VAR_INIT_UNSPECIFIED

LOCAL VAR(JkObjFusn_TrackableListType, ObjFusn_VAR_ZERO_INIT) TRK_LIST = { 0 }; /* PRQA S 0612*/ /* Size of trackable list exceeds 32767 bytes */
#define TargetFusion_STOP_SEC_VAR_INIT_UNSPECIFIED


/*****************************************************************************
FUNCTIONS
*****************************************************************************/
#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
/** @name jk_lkf4d_trackManagement.c functions */
/* PRQA S 1532 2 *//* Init function called from external AAU */
FUNC(void, ObjFusn_CODE) lkfTrackManagement_init(void)
{
   (void) Trackable_listInit(&TRK_LIST);

   TRK_LIST.u16ValidTrackables = 0u;
   TRK_LIST.f32MeasurementLatency = FLT_ZERO;
   /* Init list update counter to zero to ensure list validation does not fail */
}


/** This is a general pre-cycle method for the Kalman filter. It reduces the
* lifespan of active tracks resulting in a cleanup if they are not updated
* for FILTER_TRACK_LIFESPAN many cycles */
/* PRQA S 1532 2 *//* Interface function called from external AAU */
FUNC(void, ObjFusn_CODE) lkfTrackManagement_startCycle(const float32 f32CycleDt)
{
   uint16 u16i;
   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurTrkbl;
   /* Ensure trackable map is valid, this is especially important for the first cycle */

   /* 
   * Trackable map is checked within the finalize cycle method and shall not be modified during the 
   * transition of cycles 
   */
   for (u16i = 0u; u16i < TRK_LIST.u16ValidTrackables; u16i++)
   {
      pCurTrkbl = &TRK_LIST.aTrackable[TRK_LIST.as16TrackableMap[u16i]];
      /* this track was active in the last cycle.
      * reduce its lifespan */
      if (JKOBJFUSN_TRACKABLE_U16LIFESPAN_DEAD < pCurTrkbl->u16Lifespan)
      {
         // decrease update counter
         pCurTrkbl->u16Lifespan--;
         pCurTrkbl->bUpdated = FALSE;
         //pCurTrkbl->f32TrackQuality = FLT_ZERO;
      }
      else
      {
         /* MISRA */
      }
   }

   /* TRK_LIST is now older by one cycle time */
   TRK_LIST.f32MeasurementLatency += f32CycleDt;
}

/** This is a general post-cycle method for the Kalman filter. It cleans up all 
* data that need to be discaded for the next cycle.*/

/* PRQA S 1532 2 *//* Interface function called from external AAU */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_finalizeCycle(const float32 f32CycleDt)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   uint16 u16i;
   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurTrkbl;
   VAR(boolean, ObjFusn_VAR_NOINIT) baMarkedToDrop[JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX]; // todo change to add all list of removing trkbles

   const boolean  bUseCoastingTmp      = Fusion_get_bUseCoasting();

   jk_common_array_utils_defaultInit_abool(baMarkedToDrop, JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX, FALSE);

   for (u16i = 0u; u16i < (TRK_LIST.u16ValidTrackables); u16i++)
   {
      pCurTrkbl = &TRK_LIST.aTrackable[TRK_LIST.as16TrackableMap[u16i]];


      // measurement is available for 'coasted sensor' OR
      // check if the track was 'fused' in history (lifespan > new) - if it was updated (TRUE == bUpdate) -> set to coasted
      if ((TRUE == pCurTrkbl->bUpdated) && (TRUE == bUseCoastingTmp) && (/*(pCurTrkbl->u16Lifespan > JKOBJFUSN_TRACKABLE_U16LIFESPAN_NEW) || */ 
         ((pCurTrkbl->u32SensorsCurr & JK_COASTING_SENSOR_PATTERN) == JK_COASTING_SENSOR_PATTERN)))
      {
         pCurTrkbl->u16Lifespan = JKOBJFUSN_TRACKABLE_U16LIFESPAN_COASTED;
         // update age of track
         u32Success |= updateAge(pCurTrkbl, f32CycleDt);
      }
      // ensure tracks without updates don't die if they are not supposed to 
      // (expecting an update from at least one sensor in the next cycles, 
      // i.e. u32SensorsCurr is not zero)
      else if ((JKOBJFUSN_TRACKABLE_U32SENSORSCURR_MIN < pCurTrkbl->u32SensorsCurr) && 
         (pCurTrkbl->u16Lifespan < JKOBJFUSN_TRACKABLE_U16LIFESPAN_NEW))
      {
         pCurTrkbl->u16Lifespan++;
         // update age of track
         u32Success |= updateAge(pCurTrkbl, f32CycleDt);
      }
      else if ((JKOBJFUSN_TRACKABLE_U16LIFESPAN_DEAD == pCurTrkbl->u16Lifespan) &&
         (0u == pCurTrkbl->u32SensorsCurr))
      {
         /* this object has been dead for a while: clear objectID
         * (and all other values that might influence object2track association) 
         * clear slot of the dead track */
         baMarkedToDrop[u16i] = TRUE;
      }
      else if (JKOBJFUSN_TRACKABLE_U16LIFESPAN_DEAD < pCurTrkbl->u16Lifespan)
      {
         // update age of track
         u32Success |= updateAge(pCurTrkbl, f32CycleDt);
      }
      else
      {
         /* MISRA */
      }

      /** Is update check really required here ?? */
      if((baMarkedToDrop[u16i] == FALSE) && (pCurTrkbl->bUpdated == TRUE) && (pCurTrkbl->u8CyclesNoVision > JK_LKF_TRACK_MANAGEMENT_NUM_CYCLES_TO_CLEAR_VISION) && 
         ((pCurTrkbl->u32SensorsHist & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA) != 0u))
      {
         u32Success |= lkfTrackManagement_clearVisionInformation(pCurTrkbl);
      }
      else
      {
         /* MISRA */
      }

      if ((baMarkedToDrop[u16i] == FALSE) && (pCurTrkbl->bUpdated == TRUE) && (pCurTrkbl->u8CyclesNoRadar > JK_LKF_TRACK_MANAGEMENT_NUM_CYCLES_TO_CLEAR_RADAR) &&
         ((pCurTrkbl->u32SensorsHist & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR) != 0u))
      {
         u32Success |= lkfTrackManagement_clearRadarInformation(pCurTrkbl);
      }
      else
      {
         /* MISRA */
      }

      if(baMarkedToDrop[u16i] == FALSE)
      {
         u32Success |= jk_motionType_calculateMotionType(pCurTrkbl);
      }
      else
      {
         /* MISRA */
      }
   }

   if (u32Success == JKOBJFUSN_ERROR_NOERROR)
   {
      u32Success |= lkfTrackManagement_dropObjects(baMarkedToDrop);
      u32Success |= jk_validate_trackable_list(&TRK_LIST);

      idProvider_finishCycle();
   }
   else
   {
      /* MISRA */
   }

   return u32Success;
}

/**
* @fn   bool_t lkfTrackManagement_deleteSensorIds( u32_t const u32SensorUpdatePattern )
*
* @brief   Resets the ids of the sensor id array to default values for provided sensor pattern
*
* @param   u32SensorUpdatePattern[]             u32_t const, sensor pattern
*
* @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
*/

/* PRQA S 1532 2 *//* Inteface function called from external AAU */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_deleteSensorInformation(const uint32 u32SensorUpdatePattern)
{
   uint16 u16i       = 0u;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
#else
   const uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
#endif

   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurTrkbl;   
   const uint16 u16SensPos = Trackable_getSensPos(u32SensorUpdatePattern);

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if (u16SensPos == JKOBJFUSN_SENS_POS_INVALID)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT, 
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_DELETE_SENSOR_INFORMATION);
   }
   else
#endif
   { 
      for (u16i = 0u; u16i < TRK_LIST.u16ValidTrackables; u16i++)
      {
         pCurTrkbl = &TRK_LIST.aTrackable[TRK_LIST.as16TrackableMap[u16i]];

         if (JKOBJFUSN_TRACKABLE_U16LIFESPAN_FREE_SLOT < pCurTrkbl->u16Lifespan)
         {
            // Do a bitwise AND with u32SensorsCurr and the inverse of the
            // update pattern (invPattern) to erase all bits of sensors with 
            // updates in the current cycle, but keep all bits set of sensors 
            // that do not provide updates.
            // create inverse bit mask of update pattern
            pCurTrkbl->u32SensorsCurr &= ~u32SensorUpdatePattern;

            /* increase cycle by 1 if it was ever seen (default) and is below max value */
            if ((0u != (u32SensorUpdatePattern & JKOBJFUSN_TRACKABLE_U32SENSOR_VISION)) &&
               (pCurTrkbl->u8CyclesNoVision < JKOBJFUSN_TRACKABLE_U8CYCLESNOVISION_MAX))
            {
               pCurTrkbl->u8CyclesNoVision++;
            }
            else
            {
               /* MISRA */
            }

            if ((0u != (u32SensorUpdatePattern  & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR)) &&
			   (0u != (pCurTrkbl->u32SensorsHist & u32SensorUpdatePattern)) &&  //Ryan add
               (pCurTrkbl->u8CyclesNoRadar < JKOBJFUSN_TRACKABLE_U8CYCLESNORADAR_MAX))
            {
               pCurTrkbl->u8CyclesNoRadar++; 
            }
            else
            {
               /* MISRA */
            }

            pCurTrkbl->au16SensorID[u16SensPos] = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
         }
         else
         {
            /* MISRA */
         }
      }
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* Inteface function called from external AAU */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_predictInternalTrkbl(float32 const f32PredictionDt)
{
   uint32 u32Success  = JKOBJFUSN_ERROR_NOERROR;
   uint16 u16i;

   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurrTrkbl;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if (FLT_ZERO > f32PredictionDt)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT, 
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_PREDICT_INTERNAL_TRKBL);
   }
   else
#endif
   {
      for (u16i = 0u; u16i < JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX; u16i++)
      {
         if (JKOBJFUSN_TRACKABLE_U16LIFESPAN_FREE_SLOT < TRK_LIST.aTrackable[u16i].u16Lifespan)
         {
            pCurrTrkbl  = &(TRK_LIST.aTrackable[u16i]);

            u32Success |= LKF_DoPredict(pCurrTrkbl, f32PredictionDt);
            u32Success |= LKF_CoordinatedTurn_DoPredict(pCurrTrkbl, f32PredictionDt);


            /** Calculate gain if desired */
#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
            u32Success |= gain_prediction(pCurrTrkbl, f32PredictionDt);
#endif
         }
         else
         {
            /* MISRA */
         }
      }
   }

   /** Reduce Track list age by prediction time as track list now is "younger" */
   if (JKOBJFUSN_ERROR_NOERROR == u32Success)
   {
      TRK_LIST.f32MeasurementLatency -= f32PredictionDt;
   }
   else
   {           
      /* MISRA */
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* Inteface function called from external AAU */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_compensateInternalTrkbleList(const float32 f32MeasurementLatency)
{
   return EgoCoordCompensation_compensateTrackbleList(TRK_LIST.aTrackable, TRK_LIST.u16ValidTrackables, TRK_LIST.as16TrackableMap,
      TRUE, /** Use trackable map */ TRK_LIST.f32MeasurementLatency,
      f32MeasurementLatency, FALSE);
}

/* PRQA S 1532 2 *//* Inteface function called from external AAU */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_updateTrkList(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeasList,
   CONSTP2CONST(stMatchIndexArrayType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMatchIndexArray,
   VAR(boolean, ObjFusn_VAR_NOINIT) abObjectAssignedFlags[],
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   uint32  u32Success  = JKOBJFUSN_ERROR_NOERROR;
   uint16  u16Idx       = 0u;
   uint16 u16i;
   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas;
   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl;
   uint16 u16SensPos    = 0u;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON) && (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if((((NULL_PTR == pMeasList) || (NULL_PTR == pMatchIndexArray)) || (NULL_PTR == abObjectAssignedFlags)) ||
      (NULL_PTR == pEgoMotion))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION,
         JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_UPDATE_TRKBLE);
   }
   else
#endif
   {
      u16SensPos = Trackable_getSensPos(pMeasList->u32SensorPattern);

#if (JK_RUNTIME_ERROR_CHECK == STD_ON) 
      if(u16SensPos == JKOBJFUSN_SENS_POS_INVALID)
      {
         u32Success = JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN;
         (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN,
            JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
            JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_UPDATE_TRKBLE);
      }
      else
#endif
      {
         /** Iterate over all matches */
         for (u16i = 0u; u16i < pMatchIndexArray->u16NumMatches; u16i++)
         {

#if (JK_RUNTIME_ERROR_CHECK == STD_ON) 
            if ((pMatchIndexArray->aMatchIndexArray[u16i].u16IndexCol >= pMeasList->u16NumObjects) ||
               (pMatchIndexArray->aMatchIndexArray[u16i].u16IndexRow >= TRK_LIST.u16ValidTrackables))
            {
               u32Success = JKOBJFUSN_ERROR_LKF_TRACKMANAGEMENT_INVALID_MATCH_INDEX;
               (void)jk_error_management_addError(JKOBJFUSN_ERROR_LKF_TRACKMANAGEMENT_INVALID_MATCH_INDEX,
                  JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
                  JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_UPDATE_TRKBLE);
            }
            else
#endif
            {
               u16Idx = (uint16) TRK_LIST.as16TrackableMap[pMatchIndexArray->aMatchIndexArray[u16i].u16IndexRow];

               pMeas  = &pMeasList->aTrackable[pMatchIndexArray->aMatchIndexArray[u16i].u16IndexCol];
               pTrkbl = &(TRK_LIST.aTrackable[u16Idx]);
			   pTrkbl->u16Reserved = pMatchIndexArray->aMatchIndexArray[u16i].u16Score;  //Ryan add debug 2021-02-04


#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON
               if ((pTrkbl->vecX.data[TRACKABLE_POSX] > 30.0f) && (pTrkbl->vecX.data[TRACKABLE_VELX] > 5.0f))//Ryan add
               {
                   u32Success = gain_update(pTrkbl, pMeas, pEgoMotion);
               }
               else
               {
                   /* MISRA C */
               }
#endif
               u32Success |= LKF_DoCorrect(pTrkbl, pMeas);

               if(JKOBJFUSN_ERROR_NOERROR != u32Success)
               {
                  /* Re-initialize trackable in case an error occurred during update step */
                  u32Success = LKF_AddNewTrkbl(pTrkbl, pMeas);

                  /* Reset existence probabilty */
                  pTrkbl->f32ExistenceQuality = JKOBJFUSN_TRACKABLE_F32EXISTENCEQUALITY_DEFAULT;
               }
               else
               {
                  /* MISRA */ 
               }

               if((((pMeas->u32SensorsCurr) & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA) > 0u) && 
                  (pTrkbl->au16SensorIDLast[u16SensPos] != pMeas->u16ID) && 
                  (pMeas->u16Age > 0u))
               {
                  lkfTrackManagement_clearVisionInformationFromList(pMeas->u16ID, u16SensPos, pMeas->u32SensorsCurr);
               }
               else
               {
                  /* MISRA */
               }

               u32Success|= lkfTrackManagement_updateTrkbleInfos(pMeas, pTrkbl, u16SensPos);

               u32Success |= LKF_CoordinatedTurn_DoCorrect(pTrkbl);

               // indicate this object has been used to update a track
               abObjectAssignedFlags[pMatchIndexArray->aMatchIndexArray[u16i].u16IndexCol] = TRUE;

               lkfTrackManagement_increaseDiagonalP(&TRK_LIST.aTrackable[u16Idx].matP);
            }
         }
      }
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* Inteface function called from external AAU */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_setupNewLkfTrkble(CONSTP2CONST(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeasList,
   CONST(boolean, ObjFusn_VAR_NOINIT) abObjectAssignedFlags[])
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   uint16 u16i;
   uint16 u16SensPos = 0u;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON) && (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if((NULL_PTR == pMeasList) || (abObjectAssignedFlags == NULL_PTR))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION,
         JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_SETUP_NEW_LKF_TRKBLE);
   }
   else
#endif
   {
      u16SensPos = Trackable_getSensPos(pMeasList->u32SensorPattern);

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
      if(u16SensPos == JKOBJFUSN_SENS_POS_INVALID)
      {
         u32Success = JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN;
         (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN,
            JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
            JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_SETUP_NEW_LKF_TRKBLE);
      }
      else
#endif
      {
         // iterate through object list and find sensor objects not associated to
         // any track
         for (u16i = 0u; u16i < pMeasList->u16NumObjects; ++u16i)
         {
            if ((FALSE == abObjectAssignedFlags[u16i]))
            {
               // create new track
               u32Success |= lkfTrackManagement_addTrkbl(&pMeasList->aTrackable[u16i], u16SensPos);
            }
            else           
            {
               /* MISRA */
            }
         } // end iterating through object list
      }
   }

   return u32Success;
}

/**
* Takes all active tracks from TrackList and copies them into the given
* JkObjFusn_TrackableListType erasing all former contents of that list.
* Active tracks are those that have either been updated or started in the
* last cylce.
*/
/* PRQA S 1532 2 *//* Inteface function called from external AAU */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_copyLkfTrkbl2Outputlist(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pOutputList,
   const boolean abObjectsToBeDropped[])
{
   uint32 u32Success;
   uint16 u16i;
   uint16 u16NextSlot      = 0u;
   sint16 s16Idx;

   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurTrkbl;
   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurrentObject;

   /* only need to copy the trackable list because all other functionalities 
   * will be done in the trackable 2 objlist conversion */

   /* Copy Track List to Tracked Fusion Output & Set Track List back to default */

   u32Success = Trackable_initObjectList(pOutputList);
   pOutputList->f32MeasurementLatency = TRK_LIST.f32MeasurementLatency;

   for (u16i = 0u; u16i < TRK_LIST.u16ValidTrackables; u16i++)
   {
      if (FALSE == abObjectsToBeDropped[u16i])
      {
         s16Idx    = TRK_LIST.as16TrackableMap[u16i];
         pCurTrkbl = &TRK_LIST.aTrackable[s16Idx];

         pCurrentObject = &pOutputList->aTrackable[u16NextSlot];
         pOutputList->u16NumObjects++;
         //copy trackable, because 90% of the fields are identical
         u32Success |= Trackable_copyTrackable(pCurrentObject, pCurTrkbl);

         u16NextSlot += 1u;
      }
      else
      {
         /* MISRA */
      }
   }  /* end for u16i */

   return u32Success;
}

/* PRQA S 1532 2 *//* Inteface function called from external AAU */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_runTrackMerge(CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   const boolean bUseTrackMergeTmp  = Fusion_get_bUseTrackMerge();
   uint32 u32Success                = JKOBJFUSN_ERROR_NOERROR;

   if (TRUE == bUseTrackMergeTmp)
   {
      u32Success = trackMerge_mergeTracks(&TRK_LIST, pEgoMotion);
   }
   else
   {
      /* MISRA */
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* Inteface function called from external AAU */
FUNC(float32, ObjFusn_CODE) lkfTrackManagement_getTrkListAge(void)
{
   return TRK_LIST.f32MeasurementLatency;
}

/* PRQA S 1532 2 *//* Inteface function called from external AAU */
FUNC(P2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) lkfTrackManagement_getTrkbleList(void)
{
   return &TRK_LIST;
}

LOCAL FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_dropObjects(const boolean abMarkedForDeletion[])
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;  
   uint16 u16i;
   uint16 u16offset  = 0u;
   sint16 s16Idx;
   uint16 _u16ID;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if (TRK_LIST.u16ValidTrackables > JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX)
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE,
         JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_DROP_OBJECTS);
   }
   else
#endif
   {
      for (u16i = 0u; u16i < TRK_LIST.u16ValidTrackables; u16i++)
      {
         if (TRUE == abMarkedForDeletion[u16i])
         {
            s16Idx      = TRK_LIST.as16TrackableMap[u16i];
            _u16ID      = TRK_LIST.aTrackable[s16Idx].u16ID;
            u32Success  = Trackable_init(&TRK_LIST.aTrackable[s16Idx]);
            u32Success  |= idProvider_releaseFusionId(_u16ID);
            u16offset++;
         }
         else if (u16offset > 0u)
         {
            TRK_LIST.as16TrackableMap[u16i - u16offset] = TRK_LIST.as16TrackableMap[u16i];
         }
         else
         {
            /* MISRA */
         }
      }

      TRK_LIST.u16ValidTrackables -= u16offset;
      // set as16TrackableMap to -1 
      for (u16i = TRK_LIST.u16ValidTrackables; u16i < JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX; ++u16i)
      {
         TRK_LIST.as16TrackableMap[u16i] = -1;
      }
   }

   return u32Success;
}

/************************************************
************** INTERNAL FUNCTIONS **************
************************************************/

/**
* \fn  bool_t updateAge(JkObjFusn_TrackableType * const pLkfTrkble, f32_t const f32CycleDt)
* \brief increments the age by cycle time f32CycleDt

The age in ms saturates at JKOBJFUSN_TRACKABLE_U16AGE_MAX. 
*
* \param  [in, out] u16TrkAge     u16_t *, age which shall be adapted [ms]
* \param  [in] f32CycleDt    f32_t const, cycle time [s]
*
* \return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
*/
LOCAL FUNC(uint32, ObjFusn_CODE) updateAge(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pLkfTrkble, const float32 f32CycleDt)
{
   uint32 u32Success        = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time pointer check activation */
   uint32 u32AgeIn;
   const float32 f32DtinMS  = (f32CycleDt * JK_LKF_MILISEC_PER_SEC) + FLT_ONE_HALF;
   uint32 u32Age;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON) && (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pLkfTrkble)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_UPDATE_AGE);
   }
   else
#endif
   {
      u32AgeIn = (uint32)(pLkfTrkble->u16Age);
      u32Age   = (uint32)f32DtinMS + u32AgeIn;

      if (u32AgeIn == JKOBJFUSN_TRACKABLE_U16AGE_DEFAULT)
      {
         pLkfTrkble->u16Age = JKOBJFUSN_TRACKABLE_U16AGE_MIN;
      }
      else if (u32Age > JKOBJFUSN_TRACKABLE_U16AGE_MAX)
      {
         pLkfTrkble->u16Age = JKOBJFUSN_TRACKABLE_U16AGE_MAX;
      }
      else
      {
         pLkfTrkble->u16Age = (uint16)u32Age;
      }
   }

   return u32Success;
}

LOCAL FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_updateTrkbleInfos(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas,
   CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pLkfTrkble, const uint16 u16SensPos)
{

#if(JK_RUNTIME_ERROR_CHECK == STD_ON)
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
#else
   const uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
#endif

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if((NULL_PTR == pMeas) || (NULL_PTR == pLkfTrkble))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_UPDATE_TRKBLE_INFOS);
   }
   else 
#endif
      if (u16SensPos == JKOBJFUSN_SENS_POS_INVALID)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_SENSOR_PATTERN, JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_UPDATE_TRKBLE_INFOS);
   }
   else
#endif
   {
      pLkfTrkble->bUpdated = TRUE;

      /* accumulate sensor current */
      pLkfTrkble->u32SensorsCurr |= pMeas->u32SensorsCurr;

      /* accumulate sensor history */
      pLkfTrkble->u32SensorsHist |= pLkfTrkble->u32SensorsCurr;

      /* Update Sensor ID */
      pLkfTrkble->au16SensorID[u16SensPos] = pMeas->u16ID;
      pLkfTrkble->au16SensorIDLast[u16SensPos] = pMeas->u16ID;

      if (0u != (pMeas->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR))
      {
         pLkfTrkble->u8CyclesNoRadar = 0u;
         pLkfTrkble->u8VisionIdx = 1u - (uint8)u16SensPos;

         pLkfTrkble->f32ObstacleProbability = pMeas->f32ObstacleProbability;

         pLkfTrkble->u8IsAsilVerified &= JK_LKF_CLEAR_ASIL_PATTERN_RADAR;
         pLkfTrkble->u8IsAsilVerified |= pMeas->u8IsAsilVerified;
      }
      else if (0u != (pMeas->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_VISION))
      {
         pLkfTrkble->u8CyclesNoVision = 0u;
         pLkfTrkble->u8VisionIdx = (uint8)u16SensPos;

         pLkfTrkble->u16Class    = pMeas->u16Class; //\todo: handle/filter class and motion type correctly, e.g. by using DS, HMM etc.
         pLkfTrkble->f32Width    = pMeas->f32Width;
         pLkfTrkble->f32Height   = pMeas->f32Height;
         pLkfTrkble->f32Length   = pMeas->f32Length;
			pLkfTrkble->u16RefPoint = pMeas->u16RefPoint;

			/* Reset current ASIL information for sensor*/
			pLkfTrkble->u8IsAsilVerified &= JK_LKF_CLEAR_ASIL_PATTERN_MVS;
			/* set ASIL flag for updated vision object*/
			pLkfTrkble->u8IsAsilVerified |= pMeas->u8IsAsilVerified;

         /* do not overwrite ClassProb with default value, as default value would be invalid */
         if (pMeas->u16ClassProb != JKOBJFUSN_TRACKABLE_U16CLASSPROB_DEFAULT)
         {
            pLkfTrkble->u16ClassProb = pMeas->u16ClassProb;
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

   return u32Success;
}

/* PRQA S 1532 2 *//* Function called from external AAU */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_updateExistenceProbability(void)
{
   const uint32 u32Success = jk_update_existence_probability(&TRK_LIST);
   return u32Success;
}

/* PRQA S 1532 2 *//* Function called from external AAU */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_selectVioTrackables(const uint16 u16NumMeasurements, const uint16 u16nBestMatches)
{
   uint16 u16MaxTrackables;
   sint16 s16TrackablesToDelete;
   uint32 u32Success;
   VAR(boolean, ObjFusn_VAR_NOINIT) abObjectsToBeDropped [JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX];

   u16MaxTrackables        = (TRK_LIST.u16ValidTrackables + u16NumMeasurements) - u16nBestMatches;
   s16TrackablesToDelete   = (sint16)u16MaxTrackables - (sint16)JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX;

   u32Success = jk_object_selection_select_objects(&TRK_LIST, s16TrackablesToDelete, abObjectsToBeDropped);
   u32Success |= lkfTrackManagement_dropObjects(abObjectsToBeDropped); //ToDo do not remove vioObjects from internal list

   return u32Success;
}

LOCAL FUNC(void, ObjFusn_CODE) lkfTrackManagement_increaseDiagonalP(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) matP)
{
   const uint16 _u16Size         = matP->u16Size;
   const float32 f32QOnDiagonal  = JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;

   if (f32QOnDiagonal > FLT_ZERO)
   {
      matP->data[TRACKABLE_INDEX_VARIANCE_POSX] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
      matP->data[TRACKABLE_INDEX_VARIANCE_POSY] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
      matP->data[TRACKABLE_INDEX_VARIANCE_VELX] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;

      if (_u16Size > TRACKABLE_ACCY)
      {
         matP->data[TRACKABLE_INDEX_VARIANCE_VELY] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
         matP->data[TRACKABLE_INDEX_VARIANCE_ACCX] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
         matP->data[TRACKABLE_INDEX_VARIANCE_ACCY] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
      }
      else if (_u16Size > TRACKABLE_ACCX)
      {
         matP->data[TRACKABLE_INDEX_VARIANCE_VELY] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
         matP->data[TRACKABLE_INDEX_VARIANCE_ACCX] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
      }
      else if (_u16Size > TRACKABLE_VELY)
      {
         matP->data[TRACKABLE_INDEX_VARIANCE_VELY] += JK_LKF_TRACK_MANAGEMENT_ADDITIONAL_Q_ON_DIAGONAL;
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

/* PRQA S 1532 2 *//* Library Function */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_removeObsoleteTracks(const uint32 u32SensorPattern)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   uint16 u16i;
   uint32 _u32SensorCurr;

   boolean abMarkToDrop [JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX];
   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurTrkbl;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   const uint32 u32FusionMode = Fusion_get_u32SensorMode();
#endif
   const uint16 u16SensIndex  = Trackable_getSensPos(u32SensorPattern);
   jk_common_array_utils_defaultInit_abool(abMarkToDrop, JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX, FALSE);

   if (JKOBJFUSN_TRACKABLE_U32SENSOR_INVALID == u32SensorPattern)
   {
      /* Do nothing as this sensor has not been seen before */
   }
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   else if (0u == (u32FusionMode & u32SensorPattern))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_INPUT, JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_REMOVE_OBSOLETE_OBJECTS);
   }
#endif
   else
   {
      for (u16i = 0u; u16i < TRK_LIST.u16ValidTrackables; u16i++)
      {
         pCurTrkbl = &TRK_LIST.aTrackable[TRK_LIST.as16TrackableMap[u16i]];

         /* Check for non fused tracks that match the given sensor pattern */
         _u32SensorCurr = pCurTrkbl->u32SensorsCurr;

         if (u32SensorPattern == _u32SensorCurr)
         {
            /* Sensor only track */
            abMarkToDrop[u16i] = TRUE;
         }
         else if (0u == (_u32SensorCurr & u32SensorPattern))
         {
            /* Internal track is not confirmed by this pattern, ignore */
         }
         else
         {
            pCurTrkbl->u32SensorsCurr &= ~u32SensorPattern;
            pCurTrkbl->u32SensorsHist = pCurTrkbl->u32SensorsCurr;

            /* Clear sensor id's */
            pCurTrkbl->au16SensorID[u16SensIndex]     = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
            pCurTrkbl->au16SensorIDLast[u16SensIndex] = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;

            if((u32SensorPattern & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA) > 0u)
            {
               pCurTrkbl->u16Class           = JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN;
               pCurTrkbl->f32Width           = JKOBJFUSN_TRACKABLE_F32WIDTH_MIN;
               pCurTrkbl->f32Height          = JKOBJFUSN_TRACKABLE_F32HEIGHT_MIN;
               pCurTrkbl->f32Length          = JKOBJFUSN_TRACKABLE_F32LENGTH_MIN;
               pCurTrkbl->u16RefPoint        = JKOBJFUSN_TRACKABLE_U16REFPOINT_POINT_OBJECT;
               pCurTrkbl->u16ClassProb       = JKOBJFUSN_TRACKABLE_U16CLASSPROB_MIN;
               pCurTrkbl->u8IsAsilVerified   &= JK_LKF_CLEAR_ASIL_PATTERN_MVS;
            }
            else if((u32SensorPattern & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR) > 0u)
            {
               pCurTrkbl->u16MotionType            = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_DEFAULT;
               pCurTrkbl->f32CovarHeadingYawRate   = JKOBJFUSN_TRACKABLE_F32COVARHEADINGYAWRATE_DEFAULT;
               pCurTrkbl->f32Heading               = JKOBJFUSN_TRACKABLE_F32HEADING_DEFAULT;
               pCurTrkbl->f32HeadingVar            = JKOBJFUSN_TRACKABLE_F32HEADINGVAR_DEFAULT;
               pCurTrkbl->f32YawRate               = JKOBJFUSN_TRACKABLE_F32YAWRATE_DEFAULT;
               pCurTrkbl->f32YawRateVar            = JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_DEFAULT;
               pCurTrkbl->f32ObstacleProbability   = JKOBJFUSN_TRACKABLE_F32OBSTACLEPROBABILITY_MAX;
               pCurTrkbl->u8IsAsilVerified &= JK_LKF_CLEAR_ASIL_PATTERN_RADAR;
            }
            else
            {
               /* No sensor specific information needs to be removed */
            }

         }
      }

      u32Success = lkfTrackManagement_dropObjects(abMarkToDrop);
   }

   return u32Success;
}

LOCAL FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_addTrkbl(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas, 
   const uint16 u16SensPos)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   sint16 s16Index   = JKOBJFUSN_TRACKABLELIST_AS16TRACKABLEMAP_DEFAULT;
   uint16 u16i       = 0u;

   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pMeas)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_ADD_TRKBL);
   }
   else
#endif
      if (TRK_LIST.u16ValidTrackables == JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX)
      {
         u32Success = JKOBJFUSN_ERROR_INTERNAL_ERROR;
         (void)jk_error_management_addError(JKOBJFUSN_ERROR_INTERNAL_ERROR, JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
            JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_ADD_TRKBL);
      }
      else
#endif
      {
         /* Search next available index */
         for (u16i = 0u; (JKOBJFUSN_TRACKABLELIST_AS16TRACKABLEMAP_DEFAULT == s16Index) &&
            (u16i < JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX); ++u16i)
         {
            if (JKOBJFUSN_TRACKABLE_U16LIFESPAN_FREE_SLOT == TRK_LIST.aTrackable[u16i].u16Lifespan)
            {
               s16Index = (sint16) u16i;
            }
            else
            {
               /* MISRA */
            }
         }

         /** Check if free slot is found */
         if(s16Index != JKOBJFUSN_TRACKABLELIST_AS16TRACKABLEMAP_DEFAULT)
         {
            pTrkbl = &(TRK_LIST.aTrackable[s16Index]);

            u32Success = Trackable_init(pTrkbl);
            u32Success |= LKF_AddNewTrkbl(pTrkbl, pMeas);

            pTrkbl->u16Lifespan = JKOBJFUSN_TRACKABLE_U16LIFESPAN_NEW;
            pTrkbl->bUpdated = TRUE;

            /* set ASIL flag for object */
            pTrkbl->u8IsAsilVerified = pMeas->u8IsAsilVerified;

            pTrkbl->u16ID = idProvider_getNewFusionId();

            /* new track starts only with history made up of current sensors */
            pTrkbl->u32SensorsCurr = pMeas->u32SensorsCurr;
            pTrkbl->u32SensorsHist = pTrkbl->u32SensorsCurr;

            /* Set sensor id */
            pTrkbl->au16SensorID[u16SensPos] = pMeas->u16ID;
            pTrkbl->au16SensorIDLast[u16SensPos] = pMeas->u16ID;

            /* set obstacle probability */
            pTrkbl->f32ObstacleProbability = pMeas->f32ObstacleProbability;

            /* initialize values which are radar or camera specific to reasonable default */
            pTrkbl->u16MotionType    = JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN;
            pTrkbl->u16Class         = JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN;
            pTrkbl->u16ClassProb     = JKOBJFUSN_TRACKABLE_U16CLASSPROB_MIN;
            pTrkbl->f32Width         = JKOBJFUSN_TRACKABLE_F32WIDTH_MIN;
            pTrkbl->f32Height        = JKOBJFUSN_TRACKABLE_F32HEIGHT_MIN;
            pTrkbl->f32Length        = JKOBJFUSN_TRACKABLE_F32LENGTH_MIN;
            pTrkbl->u16RefPoint      = JKOBJFUSN_TRACKABLE_U16REFPOINT_POINT_OBJECT;
            pTrkbl->u8CoordSystem    = pMeas->u8CoordSystem;

            /* if object has been seen by camera */
            if (0u != (pMeas->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_CAMERA))
            {
               pTrkbl->u16Class         = pMeas->u16Class;
               pTrkbl->u16ClassProb     = pMeas->u16ClassProb;
               pTrkbl->f32Width         = pMeas->f32Width;
               pTrkbl->f32Height        = pMeas->f32Height;
               pTrkbl->f32Length        = pMeas->f32Length;
               pTrkbl->u16RefPoint      = pMeas->u16RefPoint;
               pTrkbl->u8VisionIdx      = (uint8)u16SensPos;
               pTrkbl->u8CyclesNoVision = 0u;

               /* Track has been used before */
               if((pMeas->u16Age) > 0u)
               {
                  lkfTrackManagement_clearVisionInformationFromList(pMeas->u16ID, u16SensPos, pMeas->u32SensorsCurr);
               }
               else
               {
                  /* MISRA */
               }

            }
            /* if object has been seen by radar */
            else if (0u != (pMeas->u32SensorsCurr & JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR))
            {
               pTrkbl->u16MotionType    = pMeas->u16MotionType;
               pTrkbl->u8CyclesNoRadar  = 0u;
               pTrkbl->u8VisionIdx = 1u - (uint8)u16SensPos;
            }
            else
            {
               /* MISRA */
            }


            TRK_LIST.as16TrackableMap[TRK_LIST.u16ValidTrackables] = s16Index;
            TRK_LIST.u16ValidTrackables++;
         }
         else
         {
            /* MISRA */
         }

      }

      return u32Success;
}


LOCAL FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_clearVisionInformation(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkTrkbl)
{
#if STD_OFF == JK_RUNTIME_ERROR_CHECK
   const uint32 u32Success    = JKOBJFUSN_ERROR_NOERROR;
#else
   uint32 u32Success    = JKOBJFUSN_ERROR_NOERROR;
#endif
   const uint16 u16SensPos = Trackable_getSensPos(JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT);

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)

   if(u16SensPos == JKOBJFUSN_SENS_POS_INVALID)
   {
      u32Success = JKOBJFUSN_ERROR_INTERNAL_ERROR;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INTERNAL_ERROR, JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_CLEAR_VISION);
   }
   else if(pJkTrkbl->u8CyclesNoVision == 0u)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_INPUT, JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_CLEAR_VISION);
   }
   else
#endif
   {
      pJkTrkbl->au16SensorID[u16SensPos]       = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
      pJkTrkbl->au16SensorIDLast[u16SensPos]   = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;

      pJkTrkbl->u16Class                       = JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN;
      pJkTrkbl->f32Width                       = JKOBJFUSN_TRACKABLE_F32WIDTH_MIN;
      pJkTrkbl->f32Height                      = JKOBJFUSN_TRACKABLE_F32HEIGHT_MIN;
      pJkTrkbl->f32Length                      = JKOBJFUSN_TRACKABLE_F32LENGTH_MIN;
      pJkTrkbl->u16RefPoint                    = JKOBJFUSN_TRACKABLE_U16REFPOINT_POINT_OBJECT;
      pJkTrkbl->u16ClassProb                   = JKOBJFUSN_TRACKABLE_U16CLASSPROB_MIN;

      /* Should be sufficient to simply set sensor hist to sensor current as u8CyclesNoVision > 0 at this point */
      pJkTrkbl->u32SensorsHist                 = pJkTrkbl->u32SensorsCurr;

		/* Clear Vision ASIL verified bit pattern */
		pJkTrkbl->u8IsAsilVerified &= JK_LKF_CLEAR_ASIL_PATTERN_MVS;
   }

   return u32Success;
}

LOCAL FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_clearRadarInformation(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkTrkbl)
{
#if STD_OFF == JK_RUNTIME_ERROR_CHECK
   const uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
#else
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
#endif
   const uint16 u16SensPos = Trackable_getSensPos(JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER);

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)

   if (u16SensPos == JKOBJFUSN_SENS_POS_INVALID)
   {
      u32Success = JKOBJFUSN_ERROR_INTERNAL_ERROR;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INTERNAL_ERROR, JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_CLEAR_RADAR);
   }
   else if (pJkTrkbl->u8CyclesNoRadar == 0u)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_INPUT, JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT,
         JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_CLEAR_RADAR);
   }
   else
#endif
   {
      pJkTrkbl->au16SensorID[u16SensPos] = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
      pJkTrkbl->au16SensorIDLast[u16SensPos] = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;

      pJkTrkbl->f32ObstacleProbability = JKOBJFUSN_TRACKABLE_F32OBSTACLEPROBABILITY_MAX;

      /* Should be sufficient to simply set sensor hist to sensor current as u8CyclesNoRadar > 0 at this point */
      pJkTrkbl->u32SensorsHist = pJkTrkbl->u32SensorsCurr;

      /** Reset Heading as heading shall only be calculated for tracks updated by Radar */
      pJkTrkbl->f32Heading               = JKOBJFUSN_TRACKABLE_F32HEADING_DEFAULT;
      pJkTrkbl->f32HeadingVar            = JKOBJFUSN_TRACKABLE_F32HEADINGVAR_DEFAULT;
      pJkTrkbl->f32YawRate               = JKOBJFUSN_TRACKABLE_F32YAWRATE_DEFAULT;
      pJkTrkbl->f32YawRateVar            = JKOBJFUSN_TRACKABLE_F32YAWRATEVAR_DEFAULT;
      pJkTrkbl->f32CovarHeadingYawRate   = JKOBJFUSN_TRACKABLE_F32COVARHEADINGYAWRATE_DEFAULT;

      /* Clear Radar ASIL verified bit pattern */
      pJkTrkbl->u8IsAsilVerified &= JK_LKF_CLEAR_ASIL_PATTERN_RADAR;
   }

   return u32Success;
}

LOCAL FUNC(void, ObjFusn_CODE) lkfTrackManagement_clearVisionInformationFromList(const uint16 u16SensorID, 
   const uint16 u16SensPos, const uint32 u32SensPattern)
{
   uint16 u16i       = 0u;
   boolean bFound    = FALSE;
   P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurrTrkbl; 


   for(u16i = 0u; (u16i < TRK_LIST.u16ValidTrackables) && (FALSE == bFound); u16i++)
   {
      pCurrTrkbl = &(TRK_LIST.aTrackable[TRK_LIST.as16TrackableMap[u16i]]);

      /* Check for last sensor id as current one is deleted before */
      if(pCurrTrkbl->au16SensorIDLast[u16SensPos] == u16SensorID)
      {
         bFound = TRUE;
         pCurrTrkbl->au16SensorID[u16SensPos]      = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
         pCurrTrkbl->au16SensorIDLast[u16SensPos]  = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;

         pCurrTrkbl->u16Class                       = JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN;
         pCurrTrkbl->u16ClassProb                   = JKOBJFUSN_TRACKABLE_U16CLASSPROB_MIN;
         pCurrTrkbl->f32Width                       = JKOBJFUSN_TRACKABLE_F32WIDTH_MIN;
         pCurrTrkbl->f32Height                      = JKOBJFUSN_TRACKABLE_F32HEIGHT_MIN;
         pCurrTrkbl->f32Length                      = JKOBJFUSN_TRACKABLE_F32LENGTH_MIN;
         pCurrTrkbl->u16RefPoint                    = JKOBJFUSN_TRACKABLE_U16REFPOINT_POINT_OBJECT;

         pCurrTrkbl->u32SensorsCurr &= ~u32SensPattern;
         pCurrTrkbl->u32SensorsHist = pCurrTrkbl->u32SensorsCurr;
         pCurrTrkbl->u8IsAsilVerified &= JK_LKF_CLEAR_ASIL_PATTERN_MVS;
      }
      else
      {
         /* MISRA */
      }
   }
}

#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

#ifdef UNITTEST
JkObjFusn_TrackableListType * accessTrkMgmtTrackList(void)  /* PRQA S 3219 */ /**< used for tests only */
{
   return &TRK_LIST;
}

#endif /* UNITTEST */

/** \} */
