/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_lkf_coordinatedTurn.h
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

#ifndef JK_LKF_COORDINATED_TURN_H
#define JK_LKF_COORDINATED_TURN_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_TrackableType.h"

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

/*****************************************************************************
   FORWARD DECLARATIONS
*****************************************************************************/

/*****************************************************************************
   TYPEDEFS
*****************************************************************************/

/*****************************************************************************
   FUNCTIONS
*****************************************************************************/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) LKF_CoordinatedTurn_DoPredict(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
	const float32 f32PredictionDt);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) LKF_CoordinatedTurn_DoCorrect(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef	__cplusplus
}
#endif
#endif /** JK_LKF_COORDINATED_TURN_MODEL_H */
