/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_common_matrix.h
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

#ifndef Jk_COMMON_MATRIX_H
#define Jk_COMMON_MATRIX_H

#ifdef   __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"

/*==================[macros]================================================*/

/**
 * maximum number of matrix rows/cols for matrix computaqtion.
 * this value depends on the number of object states that are processed in
 * kalman filter estimation and distance measurement.
 * for const-velocity applications choose 4
 * for const-acceleration applications choose 6
 */
#define JKOBJFUSN_MATRIX_SIZE            (6u)

/**
 * size of data buffer used to store a symmetric matrix of size JKOBJFUSN_MATRIX_SIZE x JKOBJFUSN_MATRIX_SIZE
 */
#define JKOBJFUSN_SYMMETRIC_MATRIX_SIZE  ((JKOBJFUSN_MATRIX_SIZE * (JKOBJFUSN_MATRIX_SIZE + 1u)) / 2u)

/**
 * threshold for consistency check in matrix inversion
 */
#define JK_COMMON_MATRIX_INV_EPS           (1e-6f)


/*==================[type definitions]======================================*/

/**
 * @brief structure to store a matrix
 */
typedef struct
{
   float32 data[JKOBJFUSN_MATRIX_SIZE][JKOBJFUSN_MATRIX_SIZE]; /**< data */
   uint16 nRows;                                                /**< number of rows */
   uint16 nCols;                                                /**< number of columns */
} stf32Matrix_t;

/**
 * @brief structure to store a vector
 */
typedef struct
{
   float32 data[JKOBJFUSN_MATRIX_SIZE];                        /**< data */
   uint16 nRows;                                                /**< number of rows */
   uint16 u16Reserved;
} stf32Vec_t;

/**
 * @brief structure to store a symmetric matrix
 */
typedef struct
{
   float32 data[JKOBJFUSN_SYMMETRIC_MATRIX_SIZE];
   uint16 u16Size;
   uint16 u16Reserved;
} stf32SymMatrix_t;

/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

/*==================[functions]============================================*/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

FUNC(uint32, ObjFusn_CODE) f32MatAdd(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B, CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C);

FUNC(uint32, ObjFusn_CODE) f32MatSub(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B, CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C);

FUNC(uint32, ObjFusn_CODE) f32MatMul(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B, CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C);

FUNC(uint32, ObjFusn_CODE) f32MatTranspose(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B);

FUNC(uint32, ObjFusn_CODE) f32MatInv(CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) MatrixA);

FUNC(uint32, ObjFusn_CODE) f32MatZeros(CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   const uint16 u16nRows, const uint16 u16nCols);

FUNC(uint32, ObjFusn_CODE) f32MatEye(CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   const uint16 u16Size);

FUNC(void, ObjFusn_CODE) f32MatInit(CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A);

FUNC(uint32, ObjFusn_CODE) f32MatMulVec(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B, CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C);

FUNC(uint32, ObjFusn_CODE) f32CopySymMat(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pDest, CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pSrc);

FUNC(uint32, ObjFusn_CODE) f32VecAdd(CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B, CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C);

FUNC(uint32, ObjFusn_CODE) f32VecSub(CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B, CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C);

FUNC(uint32, ObjFusn_CODE) f32VecZeros(CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A, const uint16 u16nRows);

FUNC(uint32, ObjFusn_CODE) f32CopyVec(CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pDest, CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pSrc);

FUNC(void, ObjFusn_CODE) f32VecInit(CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A);

/* Function definitions for symmetric matrices */
FUNC(uint32, ObjFusn_CODE) f32SymMatZeros(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A, const uint16 u16Size);

FUNC(uint32, ObjFusn_CODE) f32MatToSymMat(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B);

FUNC(uint32, ObjFusn_CODE) f32SymMatToMat(CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B);

FUNC(uint32, ObjFusn_CODE) f32SymMatAddSymMat(CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
   CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B, CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C);

FUNC(uint32, ObjFusn_CODE) f32RotateSymMat(CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A, 
                                             CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C, 
                                             const float32 f32Sine, const float32 f32Cos);

FUNC(uint32, ObjFusn_CODE) f32SymMatEye(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A, const uint16 u16Size);

FUNC(uint32, ObjFusn_CODE) f32VecSubPart(CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                                CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B, CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C);

FUNC(uint32, ObjFusn_CODE) f32SymMatAddSymMatPart(CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                                      CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B, CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C);

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef UNITTEST
boolean f32VecMulScal(stf32Vec_t * const A, float32 f32Scal);
#endif

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef   __cplusplus
}
#endif

#endif /* JK_COMMON_MATRIX_H */
/**@}==================[end of file]===========================================*/
