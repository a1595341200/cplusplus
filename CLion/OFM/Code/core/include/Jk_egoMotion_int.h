/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_egoMotion_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: internal header for ego motion module
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

#ifndef JK_EGOMOTION_INT_H
#define JK_EGOMOTION_INT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_EgoMotionType.h"
#include "JkObjFusn_ConfigVehicle.h"
/*==================[macros]================================================*/
/* defaults for egomotionhistory */
#define JKOBJFUSN_EGOMOTIONHISTORY_U16NEXTWRITEIDX_DEFAULT (0u)   /**< default for next write index in ring buffer */
#define JKOBJFUSN_EGOMOTIONHISTORY_U16NUMOFITEMS_DEFAULT (0u)     /**< default for number of items in ring buffer */
#define JKOBJFUSN_EGOMOTIONHISTORY_F32SPACER_DEFAULT (0.0f)       /**< default for spacer (used for padding) */

/*==================[type definitions]======================================*/
/**
 * \brief Type to store ego motion in ring buffer
 *
 * Data are stored "oldest first", i.e. elements with lower index are older,
 * except for ring-buffer wrap-around.
 */
typedef struct JkObjFusn_EgoMotionHistoryTag
{  
   JkObjFusn_EgoMotionType aEgoMotionItem[JKOBJFUSN_EGOMOTIONHISTORY_SIZE]; /**< ringbuffer items for an amount of time*/
   uint16  u16NextWriteIdx;        /**< index of next free item */  
   uint16  u16NumOfItems;          /**< amount of items saved */
   float32 f32Spacer;              /**< padding field to ensure 64bit alignment; shall always be set to 0 */
} JkObjFusn_EgoMotionHistory;

/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

LOCAL FUNC(void, ObjFusn_CODE) EgoMotion_itemInit(CONSTP2VAR(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotionItem);

LOCAL FUNC(uint32, ObjFusn_CODE) EgoMotion_getEgoMotionHistoryIdx(CONSTP2VAR(uint16, AUTOMATIC, ObjFusn_VAR_NOINIT) pu16Idx, const float32 f32Age);


LOCAL FUNC(uint32, ObjFusn_CODE) EgoMotion_copyEgoMotionItem(CONSTP2VAR(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pDest, CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pSrc);


LOCAL FUNC(uint32, ObjFusn_CODE) EgoMotion_copyEgoMotionHistory(CONSTP2VAR(JkObjFusn_EgoMotionHistory, AUTOMATIC, ObjFusn_VAR_NOINIT) pDest, CONSTP2CONST(JkObjFusn_EgoMotionHistory, AUTOMATIC, ObjFusn_VAR_NOINIT) pSrc);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/* begin: getter/setter for unit testing */
#ifdef UNITTEST
JkObjFusn_EgoMotionHistory * EgoMotion_accessEgoMotionHistory(void);
#endif /* UNITTEST */

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif /* JK_EGOMOTION_INT_H */
/**
 * @}
 */
/*==================[end of file]===========================================*/
