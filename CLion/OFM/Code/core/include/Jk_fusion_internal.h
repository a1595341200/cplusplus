/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_fusion_internal.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: internal header file for Jk_fusion.c
	for unit tests define LOCAL prior to including this file!
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

#ifndef JK_FUSION_INTERNAL_H
#define JK_FUSION_INTERNAL_H

#ifdef   __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_TrackableListType.h"
/** in unit test we need to test LOCAL functions => can't have them static */
/*==================[macros]================================================*/

/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

/*==================[internal constants]====================================*/
/*==================[internal data]=========================================*/

/** finds NULL termination and returns resulting list count. If no termination
 * can be found, returns JK_FUSION_MAX_INPUTS. */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint16, ObjFusn_CODE) countNrOfInputLists(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectListInput[]);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
 * Looks at the entries in pJkObjLists_Input[] where each input list originates
 * from the sensor indicated by the corresponding entry in the
 * au32InputSensorPatterns[] array. If no object has been seen so far the
 * pattern may also be zero.
 * Only the first u16nInputLists elements of the array are checked.
 *
 * Using these increments in list update counters are identified.
 * Whereever sensor lists have been updated the corresponding bits in
 * u32updatePatternOut are set.
 * At the same time the latencies are checked and the lists are ordered by
 * DESCending measurement latency. Object lists are not permuted. Instead the
 * series of indices is stores in the as8ProcessingOrderOut[] array.
 * Note that the as8ProcessingOrderOut[] array may have fewer entries than the
 * pJkObjListsInput[] and au32InputSensorPatterns[] arrays in case not all
 * sensor object lists have been updated. This is indicated by leaving out
 * those indices and filling the remaining as8ProcessingOrderOut[] array slots 
 * with defalt values -1.
 *
 * If any of the out pointers is set to NULL the corresponding data won't be generated.
 */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) analyzeInputLists(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectListInput[],
                                                     VAR(uint32, ObjFusn_VAR_NOINIT) au32InputSensorPatterns[], CONSTP2VAR(uint16, AUTOMATIC, ObjFusn_VAR_NOINIT) u16nInputLists,
                                                     VAR(sint8, ObjFusn_VAR_NOINIT) as8ProcessingOrderOut[]);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
 * Compares all u16nLists list update counters within the pAlTrkblListsInput
 * against internally stored update counters from the last fusion cycle. For
 * any list that has changed but valid update counters sets the corresponding
 * bool in sensorListsUpdatedList to TRUE. All other entries are set to FALSE.
 */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(void, ObjFusn_CODE) identifyUpdatedLists(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectListInput[],
                                                      VAR(boolean, ObjFusn_VAR_NOINIT) sensorListsUpdatedList[], const uint16 u16nLists);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/** 
 * Based on the measurement latencies of all valid input lists creates an array
 * of list indicies that indicates the order with which the lists are to be
 * processed in any kalman filtering algorithm. For this the latencies are 
 * sorted in descending order so that the oldest measurement is processed
 * first. 
 */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) computeInputListOrdering(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectList_Input[],
                                                            const boolean sensorListsValidList[], const uint16 u16nLists,
                                                            VAR(sint8, ObjFusn_VAR_NOINIT) pInputProcessOrder[]);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef UNITTEST
/// used for tests only
uint16 * idmodes_s_lastListUpdateCounters(const uint16 index);
#endif /* UNITTEST */

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif


#endif // JK_FUSION_INTERNAL_H
/**@}==================[end of file]===========================================*/
