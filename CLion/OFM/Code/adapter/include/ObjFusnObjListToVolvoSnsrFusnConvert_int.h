/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: ObjFusnObjListToVolvoSnsrFusnConvert_int.h 
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

#ifndef OBJFUSNOBJLISTTOVOLVOSNSRFUSNCONVERT_INT_H_
#define OBJFUSNOBJLISTTOVOLVOSNSRFUSNCONVERT_INT_H_ 1


#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_ObjectListType.h"
#include "ObjFusnObjListToVolvoSnsrFusnConvert_Cfg.h"

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[external functions]====================================*/

#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

LOCAL FUNC(void, ObjFusn_CODE) initIdMngArray(void);

LOCAL FUNC(boolean, ObjFusn_CODE) setRaCamFusnID(CONSTP2CONST(JkObjFusn_ObjectListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pObjList);

LOCAL FUNC(void, ObjFusn_CODE) checkRaCamFusnID(CONST(uint16, ObjFusn_VAR_NOINIT) u16FusionId, CONST(uint16, ObjFusn_VAR_NOINIT) u16Idx);

LOCAL FUNC(void, ObjFusn_CODE) clearTrackStatus(void);

LOCAL FUNC(void, ObjFusn_CODE) setNewRaCamID(CONST(uint16, ObjFusn_VAR_NOINIT) u16FusionId, CONST(uint16, ObjFusn_VAR_NOINIT) u16Idx);

LOCAL FUNC(uint8, ObjFusn_CODE) getRaCamMotionType(CONST(uint16, ObjFusn_VAR_NOINIT) u16MotionType);

LOCAL FUNC(uint8, ObjFusn_CODE) getRaCamMotionTypeHist(CONSTP2CONST(uint8, AUTOMATIC, ObjFusn_VAR_NOINIT) u8motionType,
		CONSTP2CONST(uint8, AUTOMATIC, ObjFusn_VAR_NOINIT) u8MotionTypeHist);

LOCAL FUNC(void, ObjFusn_CODE) getRaCamClassType( CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pFsnObj,
                                                   CONSTP2VAR(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj,
                                                   const boolean bEgoIsStationary, const uint16 u16RaCamIdx);

LOCAL FUNC(uint8, ObjFusn_CODE) getRaCamTrackStatus(CONST(uint16, ObjFusn_VAR_NOINIT) u16Idx, CONST(uint32, ObjFusn_VAR_NOINIT) u32SensorCurrent);


LOCAL FUNC(void, ObjFusn_CODE) getPrimaryCMBB(CONSTP2VAR(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj,
   CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pFusnObj,
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);

LOCAL FUNC(uint8, ObjFusn_CODE) getPositionConfidence(CONSTP2CONST(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj,
		CONST(uint16, ObjFusn_VAR_NOINIT) u16Idx, CONST(uint32, ObjFusn_VAR_NOINIT) u32SensorCurrent, CONST(uint32, ObjFusn_VAR_NOINIT) u32Timestamp);

LOCAL FUNC(uint8, ObjFusn_CODE) getTjaConfidence(void);


LOCAL FUNC(uint8, ObjFusn_CODE) calculateConfidenceRoi(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkObject, CONSTP2CONST(uint8, AUTOMATIC, ObjFusn_VAR_NOINIT) u8EgoMotionIndex);

LOCAL FUNC(void, ObjFusn_CODE) updateVariances(CONSTP2VAR(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj,
		CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkObject,
      CONST(float32, ObjFusn_VAR_NOINIT) f32SinHeading, CONST(float32, ObjFusn_VAR_NOINIT) f32CosHeading);

LOCAL INLINE FUNC(uint8, ObjFusn_CODE) getFusionSource(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkObject);

LOCAL INLINE FUNC(boolean, ObjFusn_CODE) egoIsStationary(CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);

LOCAL FUNC(uint8, ObjFusn_CODE) getVisionClassType(const uint16 u16ClassType, const uint16 u16RaCamIdx);

#if JK_RACAM_CONVERTER_OBJ_PLAUSIBILITY == STD_ON

LOCAL FUNC(boolean, ObjFusn_CODE) verifyObjectPlausibility(CONSTP2CONST(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj,
   const float32 f32YawRate, const float32 f32EgoSpeed, const uint16 u16MotionType);

#endif // JK_RACAM_CONVERTER_OBJ_PLAUSIBILITY == STD_ON

#if JK_RACAM_CONVERTER_ASIL_VERIFICATION == STD_ON

LOCAL FUNC(boolean, ObjFusn_CODE) verifyAsilLevel(P2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pFusnObj);

#endif // JK_RACAM_CONVERTER_ASIL_VERIFICATION == STD_ON


#if JK_RACAM_CONVERTER_CMBB_VALIDATION == STD_ON

LOCAL FUNC(void, ObjFusn_CODE) validateConfidence(CONSTP2VAR(typeFrontFusionObjectVcc, AUTOMATIC, ObjFusn_VAR_NOINIT) pRaCamObj, 
   CONST(uint16, ObjFusn_VAR_NOINIT) u16EgoMotionIndex);

LOCAL FUNC(uint16, ObjFusn_CODE) getEgoMotionIndex(CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);

#endif // JK_RACAM_CONVERTER_CMBB_VALIDATION == STD_ON


#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

/* begin: getter/setter for unit testing */
#ifdef UNITTEST
LOCAL uint16 getNumberOfRaCamObjects();

LOCAL const sint16 * const getPointerToMapFsnIdx();

LOCAL const uint16 * const  getPointerToMapVolvoID();

LOCAL uint8 * const getPointerToTrackStatus();

LOCAL const boolean * const getPointerToInputMatchedArray();

LOCAL const boolean * const getPointerToJkFsnProcessObjToVolvoList();

LOCAL const uint32* getPointerToPositionConfidenceAge();

LOCAL uint32 * const getPointerToSensorPatternHistory();

LOCAL uint16 getIndexToLastRelevantObject();

LOCAL void setNumberOfRaCamObjects(const uint16 u16NumRaCamObj);

#endif /* UNITTEST */
/* end: getter/setter for unit testing */

/******************************************************************************
DECLARATION OF FUNCTION-LIKE MACROS
******************************************************************************/

#ifdef __cplusplus
}
#endif
/******************************************************************************
End Of File
*****************************************************************************/

#endif /* OBJFUSNOBJLISTTOVOLVOSNSRFUSNCONVERT_INT_H_ */
