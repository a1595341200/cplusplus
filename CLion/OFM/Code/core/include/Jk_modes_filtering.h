/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_modes_filtering.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: header file for Jk_modes_filtering.c
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

#ifndef JK_MODES_FILTERING_H
#define JK_MODES_FILTERING_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_ObjectListType.h"
#include "JkObjFusn_EgoMotionType.h"

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

/** initializer method */
FUNC(void, ObjFusn_CODE) modes_filtering_init(void);

FUNC(uint32, ObjFusn_CODE) modes_filtering_preCycle(const float32 f32dt,
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);

FUNC(uint32, ObjFusn_CODE) modes_filtering_cycle_SensorEvent(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjectList);

FUNC(uint32, ObjFusn_CODE) modes_filtering_cycle_TimerEvent(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjList_Output);

FUNC(uint32, ObjFusn_CODE) modes_filtering_postCycle(const float32 f32dt);

FUNC(uint32, ObjFusn_CODE) modes_filtering_removeDeadSensor(const uint32 u32Sensor);

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"
/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif // JK_MODES_FILTERING_H
/**@}==================[end of file]===========================================*/
