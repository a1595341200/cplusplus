/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_lkf_quality_management.h
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

#ifndef JK_QUALITY_MANAGEMENT_H
#define JK_QUALITY_MANAGEMENT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/

#include "Jk_common_types.h" /*uint16, float32*/
#include "JkObjFusn_TrackableListType.h" /*JkObjFusn_TrackableType */

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/


#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/**
* @fn   boolean jk_update_track_quality(JkObjFusn_TrackableType * const pTrkbl, const stf32Vec_t * const pVecZ, const stf32Vec_t * const pVecZ_hat,
const stf32Matrix_t * const pMatS_inv, float32 f32DetS)
*
* @brief   Computes the probability that the measurement is a true positive event
*
* @param   [in,out] pTrkbl                  JkObjFusn_TrackableType * const pMeas, the trackable
* @param   pVecZ_diff                       const stf32Vec_t * const, the difference between the measurement and the predicted measurement
* @param   pMatS_inv                        const stf32Mat_t * const, Inverse of the Kalman innovation matrix
* @param   f32DetS                          float32, determinante of Kalman innovation matrix
*
* @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
*/
FUNC(uint32, ObjFusn_CODE) jk_update_track_quality(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
      CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pInvMatS, CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pVecZ_diff);

FUNC(uint32, ObjFusn_CODE) jk_update_existence_probability(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkblList);

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/



#ifdef __cplusplus
}
#endif

#endif /* JK_LKF_QUALITY_MANAGEMENT_H */
/*==================[end of file]===========================================*/
/** @} */
