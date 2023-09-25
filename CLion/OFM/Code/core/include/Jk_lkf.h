/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_lkf.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: header file of Jk_lkf.c
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

#ifndef JK_LKF_H
#define JK_LKF_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h" /*uint16, float32*/
#include "JkObjFusn_TrackableListType.h" /*JkObjFusn_TrackableType */
#include "Jk_common_matrix.h" /*stf32Matrix_t*/

/*==================[macros]================================================*/

   
/*==================[type definitions]======================================*/

/**
 * @struct stInformationTrk_t
 * @brief   data structure for a information filter (inverse covariance filter)
*/
typedef struct
{
   stf32Matrix_t mat_i;    /**< information vector */
   stf32Matrix_t mat_I;    /**< information matrix */
} stInformationTrk_t;


/*****************************************************************************
   FUNCTIONS
*****************************************************************************/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) LKF_AddNewTrkbl(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
	CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) LKF_DoPredict(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   const float32 f32dT);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) LKF_DoCorrect(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
	CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif /* JK_LKF_H */

/**
 * @}
 */
/*==================[end of file]===========================================*/
