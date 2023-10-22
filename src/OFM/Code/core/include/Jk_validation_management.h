/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_lkf_coordinatedTurn.h
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

#ifndef JK_VALIDATION_MANAGEMENT_H
#define JK_VALIDATION_MANAGEMENT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_TrackableListType.h"
#include "JkObjFusn_ObjectListType.h"

/*==================[macros]================================================*/

#define JKOBJFUSN_TRACKABLE_LIST_TYPE_INPUT       (0x0001u)
#define JKOBJFUSN_TRACKABLE_LIST_TYPE_OUTPUT      (0x0002u)
#define JKOBJFUSN_TRACKABLE_LIST_TYPE_INTERNAL    (0x0003u)

/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

FUNC(uint32, ObjFusn_CODE) jk_validate_trackable_list(CONSTP2CONST(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT)pJkTrackableList);

FUNC(uint32, ObjFusn_CODE) jk_validate_trackable_map(CONSTP2CONST(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkTrackableList);

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef	__cplusplus
}
#endif
#endif /** JK_VALIDATION_MANAGEMENT_H */
