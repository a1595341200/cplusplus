/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_modes_filtering_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
	internal header file for Jk_modes_filtering.c
	for unit tests define LOCAL prior to including this file!
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

#ifndef JK_FILTERING_INT_H
#define JK_FILTERING_INT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_ObjectListType.h"
#include "JkObjFusn_TrackableListType.h"
#include "JkObjFusn_MatchIndex.h"
#include "JkObjFusn_EgoMotionType.h"
/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

#define JK_TRK_MGMT_INIT_BUFFER_AGE (JKOBJFUSN_OBJLISTINPUT_F32MEASUREMENTLATENCY_MAX * 2.0f)
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

/**
 * Sets the list update counter in the provided object list and all objects in
 * the list.
 * Increases the local counter variable afterwards. */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(void, ObjFusn_CODE) modes_updateCounter(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjList);

/**
 * performs in-place postprocessing on the given trackable list in all fusion modes.
 * - multi track removal (if requested via parameter)
 * - absolute to relative velocities & accelerations (if requested via parameter)
 * - update updateCounter
 */
LOCAL FUNC(uint32, ObjFusn_CODE) modes_postprocessing(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) outList);

/**
 * uses the single input list provided (and the corresponding sensor bit
 * pattern) for object-to-track fusion within the kalman filter.
 * Following steps are performed:
 * - lkfTrackManagement_deleteSensorBits
 * - distance matrix evaluation
 * - association
 * - lkfTrackManagement_updateTracks
 * TRUE is returned if all steps succeed. 
 *
 * Actual implementation is located in runObjectToTrackUpdate in \ref jk_modes_int.h
 *
 * \todo: move this function to jk_modes_filtering.h?*/
LOCAL FUNC(uint32, ObjFusn_CODE) modes_measToLkfUpdate(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectList);

LOCAL FUNC(uint32, ObjFusn_CODE) modes_runAssociation(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackListInternal, 
                                                        CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackListSensor,
                                                        CONSTP2VAR(stMatchIndexArrayType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMatchesArray,
                                                        CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);

LOCAL FUNC(uint32, ObjFusn_CODE) modes_predictObjectList(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectList,
                                                                 const float32 f32_dTforward,
                                                                 const boolean bPredictHeading);

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"


/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif // JK_FILTERING_INT_H
/**@}==================[end of file]===========================================*/
