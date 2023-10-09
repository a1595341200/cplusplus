/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_objectSelection.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
	object selection module for JkObjFusn_ObjInputType and JkObjFusn_ObjListInputType
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

#ifndef JK_OBJECTSELECTION_H
#define JK_OBJECTSELECTION_H

#include "Jk_common_types.h"
#include "JkObjFusn_TrackableListType.h"

#ifdef __cplusplus
extern "C" {
#endif
                                    
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) jk_object_selection_select_objects(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkblList,
   VAR(sint16, ObjFusn_VAR_NOINIT) s16ObjectsToDelete, VAR(boolean, ObjFusn_VAR_NOINIT) abObjectsToBeDropped[]);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef __cplusplus
}
#endif

#endif /**@} JK_OBJECTSELECTION_H */
