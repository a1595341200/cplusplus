/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_egoMotion.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: public header for ego motion module
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

#ifndef JK_EGOMOTION_H
#define JK_EGOMOTION_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "JkObjFusn_EgoMotionType.h"
#include "Jk_common_types.h"
/*==================[macros]================================================*/
/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/
/*==================[external function declarations]========================*/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(void, ObjFusn_CODE)  EgoMotion_historyInit(void);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) EgoMotion_addItemToHistory(CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pNewEgoMotion,
                                                        const float32 f32Dt);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) EgoMotion_getEgoMotionHistory(CONSTP2VAR(JkObjFusn_EgoMotionType *, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion, const float32 f32Age);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) EgoMotion_getDeltaPath(CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Dx,
                                                    CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Dy,
                                                    CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Dphi,
                                                    CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Sin,
                                                    CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Cos,
                                                    float32 f32AgeStart, const float32 f32AgeEnd);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif /* JK_EGOMOTION_H */
/**
 * @}
 */
/*==================[end of file]===========================================*/
