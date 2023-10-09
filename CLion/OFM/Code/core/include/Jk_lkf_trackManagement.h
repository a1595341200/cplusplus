/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_lkf_trackManagement.h
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

#ifndef JK_LKF_TRACKMANAGEMENT_H
#define JK_LKF_TRACKMANAGEMENT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_TrackableListType.h"
#include "JkObjFusn_ObjectListType.h"
#include "JkObjFusn_MatchIndex.h"
#include "JkObjFusn_EgoMotionType.h"

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

/*****************************************************************************
   FORWARD DECLARATIONS
*****************************************************************************/

/*****************************************************************************
   TYPEDEFS
*****************************************************************************/

/*****************************************************************************
   SYMBOLIC CONSTANTS
*****************************************************************************/

/*****************************************************************************
   RETURN CODES
*****************************************************************************/

/*****************************************************************************
   FUNCTIONS
*****************************************************************************/

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
/** initializes the kalman filter track list (call once during startup) */
FUNC(void, ObjFusn_CODE) lkfTrackManagement_init(void);



/** prepares Kalman filter for current cycle. Call at the beginning of each cycle
 * before calling LKF_filterStep. Includes decreasing current life span of all 
 * active tracks (u16Update field)
 * Increases the age of the tracklist by f32CycleDt
 */
FUNC(void, ObjFusn_CODE) lkfTrackManagement_startCycle(const float32 f32CycleDt);

/** cleanup step that has to be performed once after each cycle. Reduces the
 * lifespan of objects and cleans up dead objects (to prevent reassociation). */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_finalizeCycle(const float32 f32CycleDt);

/**
 * Deletes all sensor bits provided in u32SensorUpdatePattern in the u32SensorsCurr
 * field of all valid tracks. If the track gets an update, the bit will be set 
 * again, otherwise the track can die as soon as the u32SensorsCurr equals zero.
 */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_deleteSensorInformation(const uint32 u32SensorUpdatePattern);

/**
 * Predict all internal tracks with given prediction delta
 */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_predictInternalTrkbl(const float32 f32PredictionDt);

/**
 * Compensate all internal tracks with ego motion to measurement instant of time
 */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_compensateInternalTrkbleList(const float32 f32MeasurementLatency);

/**
 * Update tracks with sensor input based on provided data association result
 * Create new tracks for sensor objects which have not been associated
 */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_updateTrkList(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeasList,
   CONSTP2CONST(stMatchIndexArrayType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMatchIndexArray, 
	VAR(boolean, ObjFusn_VAR_NOINIT) abObjectAssignedFlags[],
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);

/**
 * Setup new tracks for all objects in object list that have not been assigned
 */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_setupNewLkfTrkble(CONSTP2CONST(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeasList,
	CONST(boolean, ObjFusn_VAR_NOINIT) abObjectAssignedFlags[]);

/**
 * Copy track data to output list
 */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_copyLkfTrkbl2Outputlist(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pOutputList,
   const boolean abObjectsToBeDropped[]);

/**
 * get age of the track list
 * i.e. the data was valid (updated/predicted to) lkfTrackManagement_GetTrkListAge() sec ago
 */
FUNC(float32, ObjFusn_CODE) lkfTrackManagement_getTrkListAge(void);

/** returns the internal track list data structure of the tracker for reading
 * (must not be modified) */
FUNC(P2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) lkfTrackManagement_getTrkbleList(void);

/** updates the existence probability for the internal track list */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_updateExistenceProbability(void);

/** selects VIO trackables from internal trackable list if coasting is active */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_selectVioTrackables(const uint16 u16NumMeasurements, const uint16 u16nBestMatches);

/** Calls the track merge algorithm */
FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_runTrackMerge(CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);

FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_removeObsoleteTracks(const uint32 u32SensorPattern);
#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif
#endif /* JK_LKF_TRACKMANAGEMENT_H */
/*==================[end of file]===========================================*/
/** @} */
