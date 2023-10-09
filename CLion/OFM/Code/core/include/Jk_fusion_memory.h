/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_fusion_memory.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Defines common memory operations to be implemented in platform specific implementation
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

#ifndef JK_FUSION_MEMORY
#define JK_FUSION_MEMORY

#ifdef __cplusplus
extern "C" {
#endif

#include "Jk_common_types.h"

/**
 * Defines and functions from math.h 
 **/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(void, ObjFusn_CODE) jk_fusion_memcpy(CONSTP2VAR(void, AUTOMATIC, ObjFusn_VAR_NOINIT) pDest, CONSTP2CONST(void, AUTOMATIC, ObjFusn_VAR_NOINIT) pSrc, const uint32 u32Size);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /**\} JK_FUSION_MEMORY */
