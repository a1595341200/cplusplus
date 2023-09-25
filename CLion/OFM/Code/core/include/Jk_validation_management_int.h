/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_validation_management_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description:
	internal header file for Jk_validation_management.c
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

#ifndef JKOBJFUSN_VALIDATION_MANAGEMENT_INT_H
#define JKOBJFUSN_VALIDATION_MANAGEMENT_INT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_TrackableListType.h"

/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) jk_validate_trackable(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackable);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif // JKOBJFUSN_VALIDATION_MANAGEMENT_INT_H
/**@}==================[end of file]===========================================*/
