/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_fusion_tools.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: defines a bunch of methods that are used all throughout fusion on different occasions
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

#ifndef JK_FUSION_TOOLS_H
#define JK_FUSION_TOOLS_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "Jk_common_types.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/** Count number of bits that are set in i */
FUNC(uint32, ObjFusn_CODE) getNumberOfSetBits(uint32 i);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef	__cplusplus
}
#endif

#endif /**@} JK_FUSION_TOOLS_H */
