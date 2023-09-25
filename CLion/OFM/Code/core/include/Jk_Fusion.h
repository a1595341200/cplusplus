/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_Fusion.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Inerface for  Jk_Fusion.c Main functions
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

#ifndef __JK_FUSION_H__
#define __JK_FUSION_H__

#ifdef   __cplusplus
extern "C" {
#endif

/*****************************************************************************
   INCLUDES
*****************************************************************************/
#include "Jk_common_types.h"
#include "JkObjFusn_ObjectListType.h"
#include "JkObjFusn_EgoMotionType.h"
#include "JkObjFusn_ErrorBufferType.h"

#include "JkObjFusn_ParameterInterface.h"
#include "JkObjFusn_Version.h"

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

/** Initializes all fusion components.
 * Call this method once prior to executing any fusion cycle.
 * returns TRUE on success */
FUNC(void, ObjFusn_CODE) Fusion_init(void);
#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/**
 * @brief Fusion Interface for timer event. To be called everey xx ms.
 *
 * @param[out]    pTrackableList_Output,  new ego motion element
 * @param[in]     f32dt,       age to be added to existing elements in buffer [s]
 * @param[out]    pErrorBuffer, pointer to error buffer. Internal error buffer is copied to this address. 
 * @return      JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
FUNC(uint32, ObjFusn_CODE) Fusion_performTimerEvent(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectList_out,
                                                      const float32 f32dt,
                                                      CONSTP2VAR(JkObjFusn_ErrorBufferType, AUTOMATIC, ObjFusn_VAR_NOINIT) pErrorBuffer);

/**
 * @brief   Start Fusion Cycle
 *
 * @param[in]  f32dT, Measurement Latency 
 * return      JKOBJFUSN_ERROR_NOERROr if no error occured and error code otherwise.
 */
FUNC(uint32, ObjFusn_CODE) Fusion_startCycle(const uint32 au32SensPatList[], const uint16 u16NumLists, const float32 f32dt,
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);

/** @brief Perform one fusion cycle
 * The first input of object fusion is an array to pointers of object lists.
 * Each object list originates from one physical sensor. The order of sensors
 * in the array may be arbitrary. The list may be NULL-terminated but currently
 * only up to two input lists are taken into account (fusion is taylored for 2
 * sensors).
 * f_dt must be greater than zero.
 * fusion cycle fills the memory region of a single object list pointed to
 * by the second parameter.
 * Additionally the Debug Output list may or may not be filled. This output is
 * untested. However, make sure to provide the required memory because the 
 * PerformFusionCycle method may write data to this region.
 */

FUNC(uint32, ObjFusn_CODE) PerformFusionCycle(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectLists_Input[], // PRQA S 1503
                                                CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion,
                                                const float32 f32dt,
                                                CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectList_Output,
                                                CONSTP2VAR(JkObjFusn_ErrorBufferType, AUTOMATIC, ObjFusn_VAR_NOINIT) pErrorBuffer);


FUNC(uint32, ObjFusn_CODE) Fusion_PerformSensorEvent(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjList);

FUNC(uint32, ObjFusn_CODE) Fusion_ClearSensorInformation(const uint32 u32SensorPattern);

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef   __cplusplus
}
#endif

#endif /**@} __JK_FUSION_H__ */

