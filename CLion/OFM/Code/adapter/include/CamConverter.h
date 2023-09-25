#ifndef CAMCONVERTER_H_
#define CAMCONVERTER_H_ 1

#include "Jk_common_types.h"
#include "JkObjFusn_ObjectListType.h"
#include "Converters_types.h"

#ifdef __cplusplus
extern "C" {
#endif

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
   
FUNC(boolean, ObjFusn_CODE) FrntCamObjListToJkObjListConverter(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pNewObjList,
   CONSTP2CONST(FrntCamObjList, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObjList,const uint32 u32globalTimeStamp);
FUNC(boolean, ObjFusn_CODE) AroundCamObjListToJkObjListConverter(CONSTP2VAR(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pNewObjList,
   CONSTP2CONST(AroundCamObjList, AUTOMATIC, ObjFusn_VAR_NOINIT) pOldObjList,const uint32 u32globalTimeStamp,uint32 sensorPattern);

#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
/******************************************************************************
DECLARATION OF FUNCTION-LIKE MACROS
******************************************************************************/


#ifdef __cplusplus
}
#endif
/******************************************************************************
End Of File
*****************************************************************************/

#endif /* CAMCONVERTER_H_ */
