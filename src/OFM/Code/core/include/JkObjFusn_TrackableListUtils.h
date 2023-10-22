/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_TrackableListUtils.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: header file for JkObjFusn_TrackableListUtils.c
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

#ifndef JKOBJFUSN_TRACKABLE_LIST_UTILS_H
#define JKOBJFUSN_TRACKABLE_LIST_UTILS_H

#ifdef __cplusplus
extern "C" {
#endif


/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_TrackableListType.h"
#include "JkObjFusn_ObjectListType.h"

/*==================[macros]================================================*/
      
#define JKOBJFUSN_SENS_POS_INVALID                (61234u)

/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
FUNC(void, ObjFusn_CODE) Trackable_initSensorPatternBuffer(void);
#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) Trackable_setSensorInfos(const uint32 au32SensPatList[],
	const uint16 u16NumLists);

FUNC(uint16, ObjFusn_CODE) Trackable_getSensPos(const uint32 u32SensorCurr);

FUNC(uint32, ObjFusn_CODE) Trackable_getSensPattern(const uint16 u16Idx);

FUNC(uint32, ObjFusn_CODE) Trackable_initObjectList(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjList);

FUNC(uint32, ObjFusn_CODE) Trackable_listInit(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkTrackableList);

FUNC(uint32, ObjFusn_CODE) Trackable_init(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkble);

FUNC(uint32, ObjFusn_CODE) Trackable_copyTrackable(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pDest, CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pSrc);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif // JKOBJFUSN_TRACKABLE_LIST_UTILS_H
/**@}==================[end of file]===========================================*/
