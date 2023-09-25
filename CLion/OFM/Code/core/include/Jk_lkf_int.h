/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_lkf_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: internal header file of Jk_lkf.c
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

#ifndef JK_LKF_INT_H
#define JK_LKF_INT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"   /*u16_t, f32_t*/
#include "Jk_common_matrix.h"  /*stf32Matrix_t*/

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) LKF_Calculate_KR(CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) matP,
                                                            CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) matK,
                                                            CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) matKR);

LOCAL FUNC(uint32, ObjFusn_CODE) LKF_PredictSymMat(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                           CONST(float32, ObjFusn_VAR_NOINIT) f32dt);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif // JK_LKF_INT_H

/**
 * @}
 */
/*==================[end of file]===========================================*/
