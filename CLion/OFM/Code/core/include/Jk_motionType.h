/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_motionType.h
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

#ifndef JK_MOTIONTYPE_H
#define JK_MOTIONTYPE_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_TrackableListType.h"
#include "Jk_lkf_trackManagement.h"


/*==================[macros]================================================*/
/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

/**
*** JkObjFusn_setMotionTypeObjList ***
 * loops all objects and set motion type
 */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) jk_motionType_calculateMotionType(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif // JK_MOTIONTYPE_H
/*==================[end of file]===========================================*/
