/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: objfusnobjlisttovolvosnsrfusnconvert.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Output adapter from JKObjList v131 to Volvo RaCamObjList defined within CADS4
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

#ifndef OBJFUSNOBJLISTTOVOLVOSNSRFUSNCONVERT_H_
#define OBJFUSNOBJLISTTOVOLVOSNSRFUSNCONVERT_H_ 1

/******************************************************************************
EXTERNAL DEPENDENCIES
******************************************************************************/


#include "JkObjFusn_ObjectListType.h"
#include "JkRACAM_ObjListInput.h"
#include "JkObjFusn_EgoMotionType.h"
#include "JkObjFusn_TrackableProps.h"

#ifdef __cplusplus
extern "C" {
#endif
 
/******************************************************************************
DEFINITION OF CONSTANTS
******************************************************************************/

/******************************************************************************
DECLARATION OF TYPES
******************************************************************************/

/******************************************************************************
DECLARATION OF VARIABLES
******************************************************************************/

/******************************************************************************
DECLARATION OF CONSTANT DATA
******************************************************************************/

/******************************************************************************
DECLARATION OF FUNCTIONS
******************************************************************************/

FUNC(boolean, ObjFusn_CODE) ObjFusnObjListToVolvoSnsrFusnConvertInit(void);

FUNC(boolean, ObjFusn_CODE) ObjFusnObjListToVolvoSnsrFusnConvert(CONSTP2CONST(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjList,
                                             CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion,
                                             CONSTP2VAR(typeRaCamObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRACAMObjListOut,
                                             CONST(uint32, ObjFusn_VAR_NOINIT) u32TimeStamp);

FUNC(boolean, ObjFusn_CODE) initRaCamObjList(CONSTP2VAR(typeRaCamObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRACAMObjListOut);

/******************************************************************************
DECLARATION OF FUNCTION-LIKE MACROS
******************************************************************************/

#ifdef __cplusplus
}
#endif
/******************************************************************************
End Of File
*****************************************************************************/

#endif /* _OBJFUSNOBJLISTTOSITAOBJLISTCONVERT_H_ */
