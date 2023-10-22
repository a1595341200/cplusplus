/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_modes_filtering.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Filtering Mode
	The Modes Filtering AAU has the main functionality of
	object fusion using filterint techniques. This includes 
	the whole OOSM functionality.
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
#include "Jk_modes_filtering.h"
#include "Jk_modes_filtering_int.h"

#include "JkObjFusn_Eps.h"
#include "JkObjFusn_ParameterInterface.h"
#include "Jk_association.h"
#include "Jk_distance_score.h"
#include "Jk_idProvider.h"
#include "Jk_lkf_trackManagement.h"
#include "Jk_fusion_tools.h"
#include "Jk_quality_management.h"
#include "JkObjFusn_Kinematics.h"
#include "Jk_egoMotion.h"
#include "Jk_egoCoordCompensation.h"
#include "JkObjFusn_TrackableListUtils.h"
#include "JkObjFusn_TrackableListProps.h"
#include "Jk_common_array_utils.h"
#include "Jk_fusion_math.h"
#include "Jk_objectSelection.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"
#include "Jk_error_management.h"
#include "JkObjFusn_ConfigConstants.h"
#include "Jk_lkf.h"
#include "Jk_lkf_coordinatedTurn.h"

//#include <C:\Program Files\MATLAB\R2021a\extern\include\mex.h>

/*==================[variables]=============================================*/
/** \name Global Variables */
/**
 * \brief current value of update counter, used for output lists
 */
#define ObjFusn_START_SEC_VAR16
#include "ObjFusn_MemMap.h"
LOCAL VAR(uint16, ObjFusn_VAR_ZERO_INIT) s_u16UpdateCounter = 0u;
#define ObjFusn_STOP_SEC_VAR16
#include "ObjFusn_MemMap.h"

/*==================[functions]=============================================*/

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

/** \name Public Functions */
/**
 * \brief Initializes modes cycle
 * \return TRUE (ok) or FALSE (error occured; output invalid)
 */
/** initializer method */
/* PRQA S 1532 2 *//* Interface function called from Fusion AAU */
FUNC(void, ObjFusn_CODE) modes_filtering_init(void)
{
   // init AAUs
   lkfTrackManagement_init();
   idProvider_init();
   EgoMotion_historyInit();
   s_u16UpdateCounter = JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MIN;
}
#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

/**
* \brief Starts the cycle of the filter mode.
* Has to be called always at the start of every fusion cycle.
*
* \param f32dt cycle time
* \return TRUE (ok) or FALSE (error occured; output invalid)
*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/* PRQA S 1532 2 *//* Interface function called from Fusion AAU */
FUNC(uint32, ObjFusn_CODE) modes_filtering_preCycle(const float32 f32dt, CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   const uint32 u32Success = EgoMotion_addItemToHistory(pEgoMotion, f32dt);
   lkfTrackManagement_startCycle(f32dt);

   return u32Success;
}

/**
* \brief Ends the cycle of the filter.
* Has to be called always at the end of every fusion cycle.
*
* \param f32dt cycle time
* \param u32SensorsUpdatePattern Sensor update pattern for current fusion cycle
* \return TRUE (ok) or FALSE (error occured; output invalid)
*/
/* PRQA S 1532 2 *//* Interface function called from Fusion AAU */
FUNC(uint32, ObjFusn_CODE) modes_filtering_postCycle(const float32 f32dt)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;

   P2VAR(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion;
   const float32 f32TrackListAge = lkfTrackManagement_getTrkListAge();

   u32Success = EgoMotion_getEgoMotionHistory(&pEgoMotion, f32TrackListAge);

   if(JKOBJFUSN_ERROR_NOERROR == u32Success)
   {
      u32Success |= lkfTrackManagement_runTrackMerge(pEgoMotion);
   }
   else
   {
      /* MISRA */
   }
      
   u32Success |= lkfTrackManagement_updateExistenceProbability();

   /* update motion types in track list */
   u32Success |= lkfTrackManagement_finalizeCycle(f32dt);
   
   return u32Success;
}

/**
* \brief Part of the main cycle of fusion process using filtering.
* Has to be called whenever a new sensor list is available
* Within a cycle has to be called in descending latency order
*
* \param pJkObjListInput sensor input list
* \param u32InputSensorPattern sensor pattern of sensor input lists
* \return TRUE (ok) or FALSE (error occured; output invalid)
*/
/* PRQA S 1532 2 *//* Interface function called from Fusion AAU */
FUNC(uint32, ObjFusn_CODE) modes_filtering_cycle_SensorEvent(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectList)
{
   uint32 u32Success                   = JKOBJFUSN_ERROR_NOERROR;
   P2VAR(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion;
   
   const float32 f32inputLat           = pObjectList->f32MeasurementLatency;
   const float32 f32TrkListAge         = lkfTrackManagement_getTrkListAge();
   const float32 f32LatencyDiff        = f32inputLat - f32TrkListAge;

   u32Success = EgoMotion_getEgoMotionHistory(&pEgoMotion, pObjectList->f32MeasurementLatency);
   //!!!
   u32Success |= Kinematics_Relative2OverGround(pEgoMotion, pObjectList, Fusion_get_f32DynCalPrmForAxleDstReToVehFrnt());

   if (FLT_ZERO < f32LatencyDiff)
   {
      /* compensate movement of ego vehicle by substracting dx, dy
      * and rotating vx,vy,ax,ay if they are in object list 
      -> if sensor has not acceleration in x,y the states are excluded inside */
      u32Success |= EgoCoordCompensation_compensateTrackbleList(pObjectList->aTrackable, pObjectList->u16NumObjects, (sint16*) NULL_PTR, FALSE,
         pObjectList->f32MeasurementLatency, f32TrkListAge, TRUE);

      /* Predict input according to measurement latency difference */
      u32Success |= modes_predictObjectList(pObjectList, f32LatencyDiff, FALSE);
   }
   else
   {
      /* do not predict input list but instead 
       * predict track to measurement time (non-OOSM-case) */

      /* compensate ego motion between current and new track point */
      u32Success |= lkfTrackManagement_compensateInternalTrkbleList(f32inputLat);  
      /* predict all tracks to current time of filter using their motion state */ 
      u32Success |= lkfTrackManagement_predictInternalTrkbl(-f32LatencyDiff);
   }

   /* object to track association and filter update */
   u32Success |= modes_measToLkfUpdate(pObjectList);

   return u32Success;
}

/**
* \brief Part of the main cycle of fusion process using filtering.
* Has to be called once during each cycle.
* Refines estimate and generates the desired output
*
* \param pJkObjectListOutput[out] fusion output trackable list
* \return TRUE (ok) or FALSE (error occured; output invalid)
*/

/* PRQA S 1532 2 *//* Interface function called from Fusion AAU */
FUNC(uint32, ObjFusn_CODE) modes_filtering_cycle_TimerEvent(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjList_Output)
{
   uint32 u32Success                   = JKOBJFUSN_ERROR_NOERROR;
   const float32 f32TrkListAge         = lkfTrackManagement_getTrkListAge();
   
   CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackList = lkfTrackManagement_getTrkbleList();
   const sint16 s16NumObjectsToReduce  = (sint16)(pTrackList->u16ValidTrackables) - (sint16) JK_FUSION_MAX_OUTPUT_OBJECTS;
   
   VAR(boolean, ObjFusn_VAR_NOINIT) abObjectsToBeDropped [JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX];
   
   /* Reduce internal trackable list such that the number of out objects does not exceed the maximal number of output objects */
   u32Success = jk_object_selection_select_objects(pTrackList, s16NumObjectsToReduce, abObjectsToBeDropped);

   /* extract object list from track list */
   u32Success |= lkfTrackManagement_copyLkfTrkbl2Outputlist(pObjList_Output, abObjectsToBeDropped);

   /* compensate & predict to current point in time */
   u32Success |= EgoCoordCompensation_compensateTrackbleList(pObjList_Output->aTrackable, pObjList_Output->u16NumObjects, (sint16*) NULL_PTR,
                                                             FALSE, f32TrkListAge, FLT_ZERO, TRUE);

   u32Success |= modes_predictObjectList(pObjList_Output, f32TrkListAge, TRUE);

   /* update counter of output lists */
   modes_updateCounter(pObjList_Output);

   /* object list post processing, only required for unit/integration tests and can be removed in serices code */
   u32Success |= modes_postprocessing(pObjList_Output);

   return u32Success;
}

/**
 * \brief update update-counter of output list
 *
 * \param[in, out] pObjectList    pointer to object list (write access)
 */
LOCAL FUNC(void, ObjFusn_CODE) modes_updateCounter(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjList)
{
   pObjList->u16ListUpdateCounter = s_u16UpdateCounter;

   s_u16UpdateCounter = ((s_u16UpdateCounter + 1u) % (JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MAX + 1u));
}

LOCAL FUNC(uint32, ObjFusn_CODE) modes_postprocessing(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) outList)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;
   const boolean bOutputIsOvergroundCur = Fusion_get_bOutputIsOverground();
   P2VAR(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) stEgoMotion;

   // add ego motion so that ouput is relative motion
   if (FALSE == bOutputIsOvergroundCur)
   {
      u32Success = EgoMotion_getEgoMotionHistory(&stEgoMotion, FLT_ZERO);
      u32Success |= Kinematics_OverGround2Relative(stEgoMotion, outList, Fusion_get_f32DynCalPrmForAxleDstReToVehFrnt());
   }
   else
   {
      /* MISRA */
   }
   

   return u32Success;
}

LOCAL FUNC(uint32, ObjFusn_CODE) modes_measToLkfUpdate(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectList)
{
   uint32 u32Success;

   VAR(stMatchIndexArrayType, ObjFusn_VAR_NOINIT) stFusionMatches;
   VAR(boolean, ObjFusn_VAR_NOINIT) abObjectAssignedFlags[JK_MATCH_INDEX_ARRAY_SIZE];
   P2VAR(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion;
   
   CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackList = lkfTrackManagement_getTrkbleList();
   const boolean bUseCoastingTmp = Fusion_get_bUseCoasting();
   const float32 f32TrackListAge = lkfTrackManagement_getTrkListAge();
   
   u32Success = EgoMotion_getEgoMotionHistory(&pEgoMotion, f32TrackListAge);
  
   jk_common_array_utils_defaultInit_abool(abObjectAssignedFlags, JK_MATCH_INDEX_ARRAY_SIZE, FALSE);

   u32Success |= modes_runAssociation(pTrackList, pObjectList, &stFusionMatches, pEgoMotion);

   /** Clear sensor information from valid trackables for internal fusion object list */
   /** Sensor information includes to clear the sensor update pattern if the object was updated by this pattern before */
   u32Success |= lkfTrackManagement_deleteSensorInformation(pObjectList->u32SensorPattern);

   // update tracks based on association results
   u32Success |= lkfTrackManagement_updateTrkList(pObjectList, &stFusionMatches, abObjectAssignedFlags, pEgoMotion);

   if (TRUE == bUseCoastingTmp)
   {
      u32Success |= lkfTrackManagement_selectVioTrackables(pObjectList->u16NumObjects, stFusionMatches.u16NumMatches);
   }
   else
   {
      /* MISRA */
   }

   /* setup new tracks using sensor input that could not be associated to existing tracks */
   u32Success |= lkfTrackManagement_setupNewLkfTrkble(pObjectList, abObjectAssignedFlags);

   return u32Success;
}

/* PRQA S 1532 2 *//* Library Function */
FUNC(uint32, ObjFusn_CODE) modes_filtering_removeDeadSensor(const uint32 u32Sensor)
{
   return lkfTrackManagement_removeObsoleteTracks(u32Sensor);
}

LOCAL FUNC(uint32, ObjFusn_CODE) modes_runAssociation(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackListInternal, 
                                                        CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackListSensor,
                                                        CONSTP2VAR(stMatchIndexArrayType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMatchesArray,
                                                        CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion)
{
   uint32 u32Success;
   uint16 u16i;
   const float32 _f32MatchGate = Fusion_get_f32MatchGate();
   VAR(uint16, ObjFusn_VAR_NOINIT) au16IndexMapInternal[JK_DISTSCORE_MAX_ROW_SIZE];
   VAR(uint16, ObjFusn_VAR_NOINIT) au16IndexMapMeasurements[JK_DISTSCORE_MAX_COL_SIZE];

   CONSTP2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pDistMatrix = getDistMat();
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   /* input validity checks */
   if ((JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX < pTrackListInternal->u16ValidTrackables) ||
       (JK_FUSION_MAX_INPUT_OBJECTS < pTrackListSensor->u16NumObjects))
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_DISTANCE_SCORE,
                                              JKOBJFUSN_AAU_DISTANCE_SCORE_DISTANCE_SCORE_TRACK_TO_TRACK);
   }
   else
#endif
   {
      u32Success = distance_score_track2track(pTrackListInternal, pTrackListSensor, _f32MatchGate, pDistMatrix,
         au16IndexMapMeasurements, au16IndexMapInternal, pEgoMotion);
      
      /* call association algorithm */
      u32Success |= jk_association_runAssociation(pDistMatrix, _f32MatchGate, 
         pMatchesArray);
      /* Remap from index array to matches array */
      for (u16i = 0u; u16i < pMatchesArray->u16NumMatches; u16i++)
      {
         pMatchesArray->aMatchIndexArray[u16i].u16IndexCol = au16IndexMapMeasurements[pMatchesArray->aMatchIndexArray[u16i].u16IndexCol];
         pMatchesArray->aMatchIndexArray[u16i].u16IndexRow = au16IndexMapInternal[pMatchesArray->aMatchIndexArray[u16i].u16IndexRow];
      }
   }

   return u32Success;
}


LOCAL FUNC(uint32, ObjFusn_CODE) modes_predictObjectList(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectList,
                                                                 const float32 f32_dTforward,
                                                                 const boolean bPredictHeading)
{
      uint32   u32Success          = JKOBJFUSN_ERROR_NOERROR;
      uint16   u16i                = 0u;
      P2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pObjectList)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_MODES_FILTERING, 
         JKOBJFUSN_AAU_MODES_FILTERING_PREDICT_OBJECT_LIST);
   }
   else
#endif
   if (pObjectList->u16NumObjects > JK_FUSION_OBJECT_LIST_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NUMBER_OF_OBJECTS_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_MODES_FILTERING, 
         JKOBJFUSN_AAU_MODES_FILTERING_PREDICT_OBJECT_LIST);
   }
   else if(f32_dTforward < FLT_ZERO)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_INPUT, JKOBJFUSN_AAU_MODES_FILTERING, 
         JKOBJFUSN_AAU_MODES_FILTERING_PREDICT_OBJECT_LIST);
   }
   else
#endif
   {
      for(u16i = 0u; u16i < pObjectList->u16NumObjects; u16i++)
      {
         pTrkbl = &(pObjectList->aTrackable[u16i]);

         u32Success |= LKF_DoPredict(pTrkbl, f32_dTforward);

         if(TRUE == bPredictHeading)
         {
            u32Success |= LKF_CoordinatedTurn_DoPredict(pTrkbl, f32_dTforward);
         }
         else
         {
            /* MISRA */
         }
      }

      
      if (JKOBJFUSN_ERROR_NOERROR == u32Success) 
      { 
         pObjectList->f32MeasurementLatency -= f32_dTforward; 
      } 
      else
      {
         /* MISRA */
      }
   }

   return u32Success;
}

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/** /} */
