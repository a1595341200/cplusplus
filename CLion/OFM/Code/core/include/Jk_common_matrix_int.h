/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_common_matrix_int.h
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

#ifndef JK_COMMON_MATRIX_INT_H
#define JK_COMMON_MATRIX_INT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "Jk_common_matrix.h"
#include "JkObjFusn_ConfigVehicle.h"

/*==================[macros]================================================*/

#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_00        (0u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_01        (1u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_02        (3u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_03        (6u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_04        (10u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_05        (15u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_11        (2u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_12        (4u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_13        (7u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_14        (11u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_15        (16u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_22        (5u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_23        (8u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_24        (12u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_25        (17u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_33        (9u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_34        (13u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_35        (18u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_44        (14u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_45        (19u)
#define JK_COMMOM_MATRIX_SYM_MATRIX_INDEX_55        (20u)

/*==================[type definitions]======================================*/

/**
 * threshold for consistency check in matrix inversion
 */
#define JK_COMMON_MATRIX_INV_EPS           (1e-6f)

/*==================[functions]============================================*/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

LOCAL FUNC(uint32, ObjFusn_CODE) f32CopyMat(CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pDest, 
                                              CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pSrc);

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif /* Jk_COMMON_MATRIX_H */
/**@}==================[end of file]===========================================*/
