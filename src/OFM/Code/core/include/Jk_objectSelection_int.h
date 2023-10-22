/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_objectSelection_int.h
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

#ifndef JK_OBJECTSELECTION_INT_H
#define JK_OBJECTSELECTION_INT_H

#ifdef __cplusplus
extern "C" {
#endif


/*==================[inclusions]============================================*/

#include "JkObjFusn_TrackableType.h"
/*==================[macros]================================================*/

/**
* Number of bins used in object selection algorithm
*/
#define  JK_OBJECTSELECTION_MAX_BINS                   (15u)

#define  JK_OBJECT_SELECTION_SENSOR_PATTERN_FUSED      (JKOBJFUSN_TRACKABLE_U32SENSOR_MVS_FRONT | JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER)

/**
  * define numbers for object distance binning
  */
#define  JK_OBJECTSELECTION_GLOBAL_OBSZONE_BIN         (0u)
#define  JK_OBJECTSELECTION_RADARONLY_FAR_BIN          (1u)
#define  JK_OBJECTSELECTION_RADARONLY_NEAR_BIN         (2u)
   
#define  JK_OBJECTSELECTION_OBSZONE1_BIN               (3u)
#define  JK_OBJECTSELECTION_OBSZONE2_BIN               (4u)
#define  JK_OBJECTSELECTION_OBSZONE3_BIN               (5u)
#define  JK_OBJECTSELECTION_OBSZONE4_BIN               (6u)

#define  JK_OBJECTSELECTION_FUSED_OBSZONE1_BIN         (7u)
#define  JK_OBJECTSELECTION_FUSED_OBSZONE2_BIN         (8u)
#define  JK_OBJECTSELECTION_FUSED_OBSZONE3_BIN         (9u)
#define  JK_OBJECTSELECTION_FUSED_OBSZONE4_BIN         (10u)

#define  JK_OBJECTSELECTION_NOTCOASTED_OBSZONE1_BIN    (11u)
#define  JK_OBJECTSELECTION_NOTCOASTED_OBSZONE2_BIN    (12u)
#define  JK_OBJECTSELECTION_NOTCOASTED_OBSZONE3_BIN    (13u)
#define  JK_OBJECTSELECTION_NOTCOASTED_OBSZONE4_BIN    (14u)

/*==================[type definitions]======================================*/


/*==================[functions]============================================*/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

LOCAL FUNC(uint32, ObjFusn_CODE) calculateObjectRange(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurTrkbl,
                                                        CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) f32Range);

LOCAL FUNC(uint32, ObjFusn_CODE) calculateObjectAngle(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurTrkbl,
                                                        CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) f32Angle);

LOCAL FUNC(uint32, ObjFusn_CODE) setTrackableBinPosition(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pCurTrkbl);

LOCAL FUNC(uint32, ObjFusn_CODE) setDroppedTrackableBins(CONSTP2VAR(uint8, AUTOMATIC, ObjFusn_VAR_NOINIT) u8LastBinToDelete,
                                                           VAR(sint16, ObjFusn_VAR_NOINIT) s16NumberTrackablesToDelete);

LOCAL FUNC(void, ObjFusn_CODE) initTrackableBinCounter(void);

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif /* JK_COMMON_MATRIX_H */
/**@}==================[end of file]===========================================*/
