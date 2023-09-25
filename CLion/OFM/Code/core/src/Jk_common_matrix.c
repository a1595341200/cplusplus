/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_common_matrix.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Utilities for manipulating matrixes
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

/**********************************************************************/
/* note that this is a library file so MISRA 1503 has been suppressed */
/**********************************************************************/

/*==================[inclusions]============================================*/
#include "Jk_common_matrix.h"
#include "Jk_fusion_math.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"
#include "Jk_error_management.h"
#include "Jk_fusion_memory.h"
#include "Jk_fusion_math.h"
#include "JkObjFusn_TrackableConstants.h"

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
#define ObjFusn_START_SEC_ROM
#include "ObjFusn_MemMap.h"
LOCAL CONST(uint16, ObjFusn_CONST) au16SymMatrixLookup[JKOBJFUSN_MATRIX_SIZE][JKOBJFUSN_MATRIX_SIZE] = {
   { 0u,   1u, 3u,   6u, 10u, 15u },
   { 1u,   2u, 4u,   7u, 11u, 16u },
   { 3u,   4u, 5u,   8u, 12u, 17u },
   { 6u,   7u, 8u,   9u, 13u, 18u },
   { 10u, 11u, 12u, 13u, 14u, 19u },
   { 15u, 16u, 17u, 18u, 19u, 20u }
};

/* Static constant matrix used for "fast" zeroing */
/* PRQA S 3218 1 */ /**< Static buffer */
LOCAL CONST(stf32Matrix_t, ObjFusn_CONST) sf32ZeroMatrix = { { { 0.0f }, { 0.0f } }, 0u, 0u };   /* PRQA S 0686 *//* variable initialisers */

/* Static constant vector used for "fast" zeroing */
/* PRQA S 3218 1 */ /**< Static buffer */
LOCAL CONST(stf32Vec_t, ObjFusn_CONST) sf32ZeroVector = { { 0.0f }, 0u, 0u };   /* PRQA S 0686 *//* variable initialisers */
#define ObjFusn_STOP_SEC_ROM
#include "ObjFusn_MemMap.h"

/*==================[functions]============================================*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
* @brief performs matrix addition C = A+B
*
* - does not change matrix A or B
* - matrices can be of dimensions nxm, 1 <= n,m <= @ref JKOBJFUSN_MATRIX_SIZE
* - matrices A and B must have same dimensions
* - memory of matrix C must be allocated before function call
* - C may point to A and/or B
* - Complexity: O(n^2).
* @param[in]  A   input matrix A
* @param[in]  B   input matrix B
* @param[out] C   output matrix C = A + B
* @return TRUE (ok) or FALSE (error occured)
*/
FUNC(uint32, ObjFusn_CODE) f32MatAdd(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                       CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B,
                                       CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C) /* PRQA S 1503 */
{
   uint16 uRow       = 0u;
   uint16 uCol       = 0u;
#if STD_OFF == JK_RUNTIME_ERROR_CHECK
      const uint32 u32Success    = JKOBJFUSN_ERROR_NOERROR;
#else
      uint32 u32Success    = JKOBJFUSN_ERROR_NOERROR;
#endif

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == A) || (NULL_PTR == B) || (NULL_PTR ==C))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATADD);
   }
   else
#endif
   if ((A->nCols != B->nCols) || (A->nRows != B->nRows))
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATADD);
   }
   else if ((A->nCols > JKOBJFUSN_MATRIX_SIZE) || (A->nRows > JKOBJFUSN_MATRIX_SIZE))
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATADD);
   }
   else
#endif
   {   
      /* we allow C and A or B to point to same data => do not erase C */
      C->nRows = A->nRows;
      C->nCols = A->nCols;

      for (uRow = 0u; uRow < C->nRows; uRow++)
      {
         for (uCol = 0u ; uCol < C->nCols; uCol++)
         {
            C->data[uRow][uCol] = A->data[uRow][uCol] + B->data[uRow][uCol];
         }
      }
   }

   return u32Success;
}

/**
* @brief performs matrix substraction C = A-B
* 
* - does not change matrix A or B
* - matrices can be of dimensions nxm, 1 <= n,m <= @ref JKOBJFUSN_MATRIX_SIZE
* - matrices A and B must have same dimensions
* - memory of matrix C must be allocated before function call
* - C may point to A and/or B
* - Complexity: O(n^2).
* @param[in]  A   input matrix A
* @param[in]  B   input matrix B
* @param[out] C   output matrix C = A - B
* @return TRUE (ok) or FALSE (error occured)
*/
/* PRQA S 1532 2 *//* Library Function */
FUNC(uint32, ObjFusn_CODE) f32MatSub(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                       CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B,
                                       CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C) /* PRQA S 1503 */
{
   uint16 uRow;
   uint16 uCol;
   uint32 u32Success;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == A) || (NULL_PTR == B) || (NULL_PTR ==C))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATSUB);
   }
   else
#endif
   if ((A->nCols != B->nCols) || (A->nRows != B->nRows))
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATSUB);
   }
   else if ((A->nCols > JKOBJFUSN_MATRIX_SIZE) || (A->nRows > JKOBJFUSN_MATRIX_SIZE))
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE);
   }
   else
#endif
   {
      /* we allow C and A or B to point to same data => do not erase C */
      C->nRows = A->nRows;
      C->nCols = A->nCols;

      for (uRow = 0u ; uRow < C->nRows ; uRow++)
      {
         for (uCol = 0u ; uCol < C->nCols ; uCol++)
         {
            C->data[uRow][uCol] = A->data[uRow][uCol] - B->data[uRow][uCol];
         }
      }

      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }
   return u32Success;
}

/**
* @brief performs vector substraction C = A+B
* 
* - does not change vectors A or B
* - vecotr can be of dimensions n, 1 <= n <= @ref JKOBJFUSN_MATRIX_SIZE
* - vectors A and B must have same dimensions
* - memory of vector C must be allocated before function call
* - C may point to A and/or B
* - Complexity: O(n).
*
* @param[in]  A   const stf32Vec_t * const, input vector A
* @param[in]  B   const stf32Vec_t * const, input vector  B
* @param[out] C   stf32Vec_t * const, output vector C = A + B
* @return TRUE (ok) or FALSE (error occured)
*/
FUNC(uint32, ObjFusn_CODE) f32VecAdd(CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                       CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B,
                                       CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C)
{
   uint32 u32Success;
   uint16 i;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == A) || (NULL_PTR == B) || (NULL_PTR == C))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32VECADD);
   }
   else
#endif
   if (A->nRows != B->nRows)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32VECADD);
   }
   else if (A->nRows > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32VECADD);
   }
   else
#endif
   {
      for (i = 0u; i < A->nRows; i++)
      {
         C->data[i] = A->data[i] + B->data[i];
      }
      
      C->nRows = A->nRows;
      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/**
* @brief performs vector substraction C = A-B
* 
* - does not change vectors A or B
* - vecotr can be of dimensions n, 1 <= n <= @ref JKOBJFUSN_MATRIX_SIZE
* - vectors A and B must have same dimensions
* - memory of vector C must be allocated before function call
* - C may point to A and/or B
* - Complexity: O(n).
*
* @param[in]  A   const stf32Vec_t * const, input vector A
* @param[in]  B   const stf32Vec_t * const, input vector  B
* @param[out] C   stf32Vec_t * const, output vector C = A - B
* @return TRUE (ok) or FALSE (error occured)
*/
FUNC(uint32, ObjFusn_CODE) f32VecSub(CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                       CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B,
                                       CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C)
{
   uint32 u32Success;
   uint16 i;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == A) || (NULL_PTR == B) || (NULL_PTR == C))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32VECSUB);
   }
   else if ((A == C) || (A==B))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_POINTER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_POINTER, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32VECSUB);
   }
   else
#endif
   if (A->nRows > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32VECSUB);
   }
   else if (A->nRows != B->nRows)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32VECSUB);
   }
   else
#endif
   {
      for (i = 0u; i < A->nRows; i++)
      {
         C->data[i] = A->data[i] - B->data[i];
      }
      
      C->nRows = A->nRows;
      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/**
* @brief performs matrix multiplication C = A * B
* 
* - does not change matrix A or B
* - matrices can be of dimensions A:nxm, B:mxk, 1 <= n,m,k <= @ref JKOBJFUSN_MATRIX_SIZE, 
*   i.e. number of colums of A must be equal to number of rows of B
* - memory of matrix C must be allocated before function call
* - C must not to A and/or B
* - Complexity: O(n*m*k). Multiplication of two nxn-matrices requires: 2 * n^3 multiplications + 4 * n^3 additions + O(n^2)
* @param[in]  A   input matrix A
* @param[in]  B   input matrix B
* @param[out] C   output matrix C = A * B
* @return TRUE (ok) or FALSE (error occured)
*/
FUNC(uint32, ObjFusn_CODE) f32MatMul(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                       CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B,
                                       CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C) /* PRQA S 1503 */
{
   uint16 uRow       = 0u;      /* counts row of C */
   uint16 uCol       = 0u;      /* counts column of C */
   uint16 uCnt       = 0u;      /* counts column of A = row of B */
#if STD_OFF == JK_RUNTIME_ERROR_CHECK
      const uint32 u32Success    = JKOBJFUSN_ERROR_NOERROR;
#else
      uint32 u32Success    = JKOBJFUSN_ERROR_NOERROR;
#endif

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   /* check dimensions and ensure C does not point to A or B */
   if ((NULL_PTR == A) || (NULL_PTR == B) || (NULL_PTR == C))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATMUL);
   }
   else if ((C == A) || (C == B))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_POINTER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_POINTER, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATMUL);
   }
   else
#endif
   if (A->nCols != B->nRows)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATMUL);
   }
   else if ((A->nCols > JKOBJFUSN_MATRIX_SIZE) || (A->nRows > JKOBJFUSN_MATRIX_SIZE))
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATMUL);
   }
   else
#endif
   {
      C->nRows = A->nRows;
      C->nCols = B->nCols;

      for (uRow = 0u; uRow < C->nRows; uRow++)
      {
         for (uCol = 0u; uCol < C->nCols; uCol++)
         {
            C->data[uRow][uCol] = FLT_ZERO;
            for (uCnt = 0u; uCnt<A->nCols; uCnt++)
            {
               C->data[uRow][uCol] += A->data[uRow][uCnt] * B->data[uCnt][uCol];
            }
         }
      }
   }

   return u32Success;
}

/**
* @brief performs matrix vector multiplication C = A * B where A is a matrix, B and C are vectors 
* 
* - does not change matrix A or vector B
* - matrices can be of dimensions A:nxm, B:m, 1 <= n,m <= @ref JKOBJFUSN_MATRIX_SIZE, 
*   i.e. number of colums of A must be equal to number of rows of B
* @param[in]  A   const stf32Matrix_t * const A, input matrix A
* @param[in]  B   const stf32Vec_t * const B, input vector B
* @param[out] C   stf32Vec_t * const C, output vector C = A * B
* @return TRUE (ok) or FALSE (error occured)
*/
FUNC(uint32, ObjFusn_CODE) f32MatMulVec(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                          CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B,
                                          CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C)
{
#if STD_OFF == JK_RUNTIME_ERROR_CHECK
      const uint32 u32Success    = JKOBJFUSN_ERROR_NOERROR;
#else
      uint32 u32Success    = JKOBJFUSN_ERROR_NOERROR;
#endif
   uint16 u16i       = 0u;
   uint16 u16j       = 0u;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == A) || (NULL_PTR == B) || (NULL_PTR == C))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATMULVEC);
   }
   else
#endif
   if (A->nCols != B->nRows)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATMULVEC);
   }
   else if ((A->nCols > JKOBJFUSN_MATRIX_SIZE) || (A->nRows > JKOBJFUSN_MATRIX_SIZE))
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATMULVEC);
   }
   else
#endif
   {
      for (u16i = 0u; u16i < A->nRows; u16i++)
      {
         C->data[u16i] = FLT_ZERO;
         for (u16j = 0u; u16j < A->nCols; u16j++)
         {
            C->data[u16i] += A->data[u16i][u16j] * B->data[u16j];
         }
      }

      C->nRows = A->nRows;
   }

   return u32Success;
}

/**
* performs matrix transpose B = A^T
*
* - does not change matrix A
* - matrix can be of dimensions nxm, 1 <= n,m <= @ref JKOBJFUSN_MATRIX_SIZE
* - memory of matrix B must be allocated before function call
* - B must not point to A
* - Complexity: O(n^2).
* @param[in]  A           input matrix A
* @param[out] B           output matrix B = A^T
* @return TRUE (ok) or FALSE (error occured)
*/
FUNC(uint32, ObjFusn_CODE) f32MatTranspose(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                             CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B) /* PRQA S 1503 */
{
   uint16 uRow;    /* counts row of B = column of A */
   uint16 uCol;    /* counts column of B = row of A */
   uint32 u32Success;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   /* ensure B does not point to A */
   if ((NULL_PTR == A) || (NULL_PTR == B))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATTRANSPOSE);
   }
   else if (B == A)
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_POINTER;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_POINTER, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATTRANSPOSE);
   }
   else
#endif
   if ((A->nCols > JKOBJFUSN_MATRIX_SIZE) || (A->nRows > JKOBJFUSN_MATRIX_SIZE))
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATTRANSPOSE);
   }
   else
#endif
   {
      B->nCols = A->nRows;
      B->nRows = A->nCols;

      for (uCol = 0u; uCol < A->nRows; uCol++)
      {
         for (uRow = 0u; uRow < A->nCols; uRow++)
         {
            B->data[uRow][uCol] = A->data[uCol][uRow];
         }
      }

      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/**
* @brief inverts a matrix
* 
* - the input matrix is inverted and thus changed
* - matrix can be of dimensions nxn, 1 <= n <= @ref JKOBJFUSN_MATRIX_SIZE
*    i.e. matrix must be square
* - Inversion algorithm used is: 
*   LU factorization with partial pivoting, 
*   modified version of: http://chandraacads.blogspot.jp/2015/12/c-program-for-matrix-inversion.html
* - verifies the result by calculation the condition number and comparing it against
*   threshold @ref JK_COMMON_MATRIX_INV_THRESHOLD
* - complexity: O(n^3).
* @param[in,out]  MatrixA       input and output matrix A
* @return TRUE (ok) or FALSE (error occured)
*/
FUNC(uint32, ObjFusn_CODE) f32MatInv(CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) MatrixA)
{
   VAR(float32, ObjFusn_VAR_NOINIT) A[JKOBJFUSN_MATRIX_SIZE][JKOBJFUSN_MATRIX_SIZE];
   VAR(float32, ObjFusn_VAR_NOINIT) B[JKOBJFUSN_MATRIX_SIZE][JKOBJFUSN_MATRIX_SIZE];
   VAR(float32, ObjFusn_VAR_NOINIT) X[JKOBJFUSN_MATRIX_SIZE];
   VAR(float32, ObjFusn_VAR_NOINIT) Y[JKOBJFUSN_MATRIX_SIZE];
   VAR(uint8, ObjFusn_VAR_NOINIT) auP[JKOBJFUSN_MATRIX_SIZE];
   VAR(sint8, ObjFusn_VAR_NOINIT) s8Size = (sint8)JKOBJFUSN_MATRIX_SIZE;
   sint8 s8i;
   sint8 s8j;
   sint8 s8k;
   sint8 s8kd;
   uint8 u8Swap;
   float32 f32p;
   float32 f32t;
   float32 f32Swap;
   uint32 u32Success;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == MatrixA)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATINV);
   }
   else
#endif
   if (MatrixA->nCols != MatrixA->nRows)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATINV);
   }
   else if (MatrixA->nRows > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32MATINV);
   }
   else
#endif
   {
      s8Size = (sint8)(MatrixA->nRows);
      s8kd = 0;

      for (s8i = 0; s8i < s8Size; s8i++) 
      {
         for (s8k = 0; s8k < s8Size; s8k++)
         {
            A[s8i][s8k] = MatrixA->data[s8i][s8k];
         }

         /* Initializing. */
         auP[s8i] = (uint8)s8i;
      }
      
      /* Finding the pivot of the LUP decomposition. */
      for (s8k = 0; s8k < (s8Size - 1); s8k++)
      {
         f32p = FLT_ZERO;
         for (s8i = s8k; s8i < s8Size; s8i++)
         {
            f32t = jk_fusion_abs(A[s8i][s8k]);
            if (f32t > f32p)
            {
               f32p = f32t;
               s8kd = s8i;
            }
            else
            {
               /* MISRA */
            }
         }

         /* Exchanging the rows according to the pivot determined above. */
         u8Swap = auP[s8kd];
         auP[s8kd] = auP[s8k];
         auP[s8k] = u8Swap;
         for (s8i = 0; s8i < s8Size; s8i++)
         {
            f32Swap = A[s8kd][s8i];
            A[s8kd][s8i] = A[s8k][s8i];
            A[s8k][s8i] = f32Swap;
         }

         /* Performing substraction to decompose A as LU. */
         for (s8i = s8k + 1; s8i < s8Size; s8i++) 
         {
            A[s8i][s8k] = A[s8i][s8k]/A[s8k][s8k];
            for (s8j = s8k + 1; s8j < s8Size; s8j++) 
            {
               A[s8i][s8j] -= A[s8i][s8k]*A[s8k][s8j];
            }
         }
      }
      /* Now, 'A' contains the L (without the diagonal elements, which are all 1)
      * and the U. */

      /* check that diagnoal elements are not zero */
      u32Success = JKOBJFUSN_ERROR_NOERROR;
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
      for (s8j = 0; s8j < s8Size; s8j++) 
      {
         if (jk_fusion_abs(A[s8j][s8j]) < JK_COMMON_MATRIX_INV_EPS)    /* PRQA S 3416 *//* simple fcn */
         {
            u32Success |= JKOBJFUSN_ERROR_COMMON_MATRIX_DIAG_ZERO;
            (void)jk_error_management_addError(JKOBJFUSN_ERROR_COMMON_MATRIX_DIAG_ZERO, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32MATINV);
         }
         else
         {
            /* MISRA */
         }
      }

      if (u32Success == JKOBJFUSN_ERROR_NOERROR)
#endif
      {
         /* Initializing X and Y. */
         for (s8j = 0; s8j < s8Size; s8j++)
         {
           X[s8j] = FLT_ZERO;
           Y[s8j] = FLT_ZERO;
         }

         /* Solving LUX = Pe, in order to calculate the inverse of 'A'. Here, 'e' is a column
         * vector of the identity matrix of 4 '4-1'. Solving for all 'e'. */
         for (s8i = 0; s8i < s8Size; s8i++)
         {
            /* Storing elements of the s8i-th column of the identity matrix in s8i-th row of 'B'. */
            for (s8j = 0; s8j < s8Size; s8j++)
            {
               B[s8i][s8j] = FLT_ZERO;
            }
            B[s8i][s8i] = FLT_ONE;

            /* Solving Ly = Pb. */
            for (s8j = 0; s8j < s8Size; s8j++)
            {
               f32t = FLT_ZERO;
               for (s8k = 0; s8k <= (s8j - 1); s8k++)
               {
                  f32t += A[s8j][s8k] * Y[s8k];
               }
               Y[s8j] = B[s8i][auP[s8j]] - f32t;
            }

            /* Solving Ux = y. */
            for (s8j = (sint8)s8Size - 1; s8j >= 0; s8j--)
            {
               f32t = FLT_ZERO;
               for (s8k = s8j + 1; s8k < s8Size; s8k++)
               {
                  f32t += A[s8j][s8k] * X[s8k];
               }

               /* Now, X contains the solution. */
               X[s8j] = (Y[s8j]-f32t) / A[s8j][s8j];

               /* Copying transpose of 'B' into 'MatrixA', which would the inverse of 'A'. */
               MatrixA->data[s8j][s8i] = X[s8j];
            }
         }
      }
#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
      else
      {
         /* MISRA */
      }
#endif
   }

   return u32Success;
}

/**
* @brief initializes the matrix with zeros and set rows and columns
*
* number of rows and columns must not exceed @ref JKOBJFUSN_MATRIX_SIZE
* @param[out] A         output matrix
* @param[in]  u16nRows  desired number of rows
* @param[in]  u16nCols  desired number of columns
*/
FUNC(uint32, ObjFusn_CODE) f32MatZeros(CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                         const uint16 u16nRows, const uint16 u16nCols)
{
   uint32 u32Success;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == A)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32MATZEROS);
   }
   else
#endif
   if ((u16nCols > JKOBJFUSN_MATRIX_SIZE) || (u16nRows > JKOBJFUSN_MATRIX_SIZE))
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32MATZEROS);
   }
   else
#endif
   {
      /* PRQA S 0314 1 *//* Cast to void required for copy function */
      jk_fusion_memcpy((void *)A, (const void *)&sf32ZeroMatrix, (uint32)sizeof(stf32Matrix_t));
      A->nCols = u16nCols;
      A->nRows = u16nRows;

      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/**
* @brief initializes a vector with zeros and set rows
*
* number of rows must not exceed @ref JKOBJFUSN_MATRIX_SIZE
* @param[out] A         output vector
* @param[in]  u16nRows  desired number of rows
*/
FUNC(uint32, ObjFusn_CODE) f32VecZeros(CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A, const uint16 u16nRows)
{
   uint32 u32Success;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == A)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32VECZEROS);
   }
   else
#endif
   if (u16nRows > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32VECZEROS);
   }
   else
#endif
   {
      /* PRQA S 0314 1 *//* Cast to void required for copy function */
      jk_fusion_memcpy((void *)A, (const void *)&sf32ZeroVector, (uint32)sizeof(stf32Vec_t));
      A->nRows = u16nRows;
      u32Success  = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/**
* @brief generates an identity matrix of certain size
*
* number of rows and columns must not exceed @ref JKOBJFUSN_MATRIX_SIZE
* @param[out] A         output matrix
* @param[in]  u16Size   dimension of output matrix
*/
FUNC(uint32, ObjFusn_CODE) f32MatEye(CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                       const uint16 u16Size)
{
   uint16  u16i;
   uint32  u32Success;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
   if (u16Size > JKOBJFUSN_MATRIX_SIZE )
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32MATEYE);
   }
   else
#endif
   {
      u32Success = f32MatZeros(A, u16Size, u16Size);
      for (u16i = 0u; u16i < u16Size; u16i++)
      {
         A->data[u16i][u16i] = FLT_ONE;
      }
   }

   return u32Success;
}

/* PRQA S 1503 2*//* Library function currently not used */
FUNC(uint32, ObjFusn_CODE) f32SymMatZeros(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A, const uint16 u16Size)
{
   uint32 u32Success;
   uint16 u16i;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if(NULL_PTR == A)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void) jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32SYM_MAT_ZEROS);
   }
   else
#endif
   if (u16Size > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32SYM_MAT_ZEROS);
   }
   else
#endif
   {
      A->u16Size = u16Size;

      for (u16i = 0u; u16i < JKOBJFUSN_SYMMETRIC_MATRIX_SIZE; u16i++)
      {
         A->data[u16i] = FLT_ZERO;
      }

      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/**
* @brief converts a symmetrix matrix of type stf32Matrix_t into a matrix of tpye stf32SymMatrix_t
*
* number of rows and columns for the matrix B must not exceed @ref JKOBJFUSN_MATRIX_SIZE
* @param[out] B   output matrix, 
* @param[in]  A   input matrix that needs to be converted into an stf32MatrxSym_t
*/
FUNC(uint32, ObjFusn_CODE) f32MatToSymMat(CONSTP2CONST(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                            CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B)
{
   uint32 u32Success;
   uint16 u16Row;
   uint16 u16Col;
   uint16 u16Idx;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == A) || (NULL_PTR == B))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
   }
   else
#endif
   if (A->nCols != A->nRows)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
   }
   else if (A->nRows > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
   }
   else
#endif
   {
      B->u16Size = A->nRows;
      u16Idx = 0u;

      for (u16Row = 0u; u16Row < A->nRows; u16Row++)
      {
         for (u16Col = 0u; u16Col <= u16Row; u16Col++)
         {
            B->data[u16Idx] = A->data[u16Row][u16Col];
            u16Idx++;
         }
      }

      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/**
* @brief Implements conversion of symmetric matrix A to regular matrix B
*
* number of rows and columns must not exceed @ref JKOBJFUSN_MATRIX_SIZE
* @param[out] B      stf32Matrix_t * const, regular matrix
* @param[in]  A      const stf32SymMatrix_t * const, symmetric input matrix A
*/
FUNC(uint32, ObjFusn_CODE) f32SymMatToMat(CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                            CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B)
{
   uint32 u32Success;
   uint16 u16Row;
   uint16 u16Col;
   uint16 u16Idx;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == A) || (NULL_PTR == B))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32SYM_MAT_TO_MAT);
   }
   else
#endif
   if (A->u16Size > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32SYM_MAT_TO_MAT);
   }
   else
#endif
   {
      B->nCols = A->u16Size;
      B->nRows = A->u16Size;

      for (u16Row = 0u; u16Row < B->nRows; u16Row++)
      {
         for (u16Col = u16Row; u16Col < B->nCols; u16Col++)
         {
            u16Idx = au16SymMatrixLookup[u16Row][u16Col];
            B->data[u16Row][u16Col] = A->data[u16Idx];
            B->data[u16Col][u16Row] = A->data[u16Idx];
         }
      }

      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/**
* @brief Implements matrix matrix addition C = A + B whereas A,B and C are assumed to be symmetric
*
* number of rows and columns must not exceed @ref JKOBJFUSN_MATRIX_SIZE
* @param[out] C      stf32SymMatrix_t * const, symetric output matrix C
* @param[in]  A      const stf32SymMatrix_t * const, symmetric input matrix A
* @param[in]  B      const stf32SymMatrix_t * const, symmetric input matrix B
*/
/* PRQA S 1503 2 *//* Library function currently not used */
FUNC(uint32, ObjFusn_CODE) f32SymMatAddSymMat(CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                                CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B,
                                                CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C)
{
   uint32 u32Success;
   uint16 u16MaxIndex;
   uint16 u16Idx;

   const uint16 au16SymMatrixSizes[JKOBJFUSN_MATRIX_SIZE + 1u] = { 0u, 1u, 3u, 6u, 10u, 15u, 21u };

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == A) || (NULL_PTR == B) || (NULL_PTR == C))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
   }
   else
#endif
   if (A->u16Size != B->u16Size)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_SIZE_NOT_EQUAL;
   }
   else if(A->u16Size > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
   }
   else
#endif
   {
      u16MaxIndex = au16SymMatrixSizes[A->u16Size];

      for (u16Idx = 0u; u16Idx < u16MaxIndex; u16Idx++)
      {
         C->data[u16Idx] = A->data[u16Idx] + B->data[u16Idx];
      }

      C->u16Size = A->u16Size;
      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/* PRQA S 1503 2 *//* Library function currently not used */
FUNC(uint32, ObjFusn_CODE) f32SymMatEye(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A, const uint16 u16Size)
{
   uint32 u32Success;
   uint16 u16i;
   uint16 u16Idx;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == A)
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32SYM_MAT_EYE);
   }
   else
#endif
   if (u16Size > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_F32SYM_MAT_EYE);
   }
   else
#endif
   {
      u32Success = f32SymMatZeros(A, u16Size);

      for (u16i = 0u; u16i < u16Size; u16i++)
      {
         u16Idx = au16SymMatrixLookup[u16i][u16i];
         A->data[u16Idx] = FLT_ONE;
      }
   }

   return u32Success;
}

/**
* @brief    Copy vector A to vector B
*
* number of rows must not exceed @ref JKOBJFUSN_MATRIX_SIZE
* @param[out] B      stf32Vec_t * const, output matrix B
* @param[in]  A      const stf32Vec_t * const, regular input matrix A
*/
FUNC(uint32, ObjFusn_CODE) f32CopyVec(CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pDest,
                                        CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pSrc)
{
   uint32 u32Success;
   const uint32 u32Size  = (uint32) sizeof(stf32Vec_t);

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pDest) || (NULL_PTR == pSrc))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COMMON_MATRIX, 
         JKOBJFUSN_AAU_COMMON_MATRIX_COPY_VEC);
   }
   else
#endif
   if (pSrc->nRows > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COMMON_MATRIX, 
         JKOBJFUSN_AAU_COMMON_MATRIX_COPY_VEC);
   }
   else
#endif
   {
      /* PRQA S 0314 1 *//* Cast to void required for copy function */
      jk_fusion_memcpy((void *)pDest, (const void *)pSrc, u32Size);
      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/* PRQA S 1532 2 *//* library function used in LKF only*/
FUNC(void, ObjFusn_CODE) f32MatInit(CONSTP2VAR(stf32Matrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A)
{
   A->nCols = 0u;
   A->nRows = 0u;
}

/* PRQA S 1532 2 *//* library function */
FUNC(void, ObjFusn_CODE) f32VecInit(CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A)
{
   A->nRows = 0u;
}

/**
* @brief    Copy matrix A to matrix B
*
* number of rows and columns must not exceed @ref JKOBJFUSN_MATRIX_SIZE
* @param[out] B      stf32Matrix_t * const, output matrix B
* @param[in]  A      const stf32Matrix_t * const, regular input matrix A
*/
/* PRQA S 1532 2 *//* Library Function */ 
FUNC(uint32, ObjFusn_CODE) f32CopySymMat(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pDest,
                                           CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pSrc)
{
   uint32 u32Success;
   const uint32 u32Size  = (uint32) sizeof(stf32SymMatrix_t);

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pDest) || (NULL_PTR == pSrc))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COMMON_MATRIX, 
         JKOBJFUSN_AAU_COMMON_MATRIX_COPY_MAT);
   }
   else
#endif
   if (pSrc->u16Size > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COMMON_MATRIX, 
         JKOBJFUSN_AAU_COMMON_MATRIX_COPY_MAT);
   }
   else
#endif
   {
      /* PRQA S 0314 1 *//* Cast to void required for copy function */
      jk_fusion_memcpy((void *)pDest, (const void *)pSrc, u32Size);
      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/**
* @brief Implements matrix matrix multiplication C = R * A *R  whereas A is a sysmetric matrix, C is assumed to 
* be symmetric and R is a rotaiton matrix with rotation by angle r
*
* number of rows and columns must not exceed @ref JKOBJFUSN_MATRIX_SIZE
* @param[out] C      stf32Matrix_t * const, regular output matrix C
* @param[in]  A      const stf32Matrix_t * const, regular input matrix A
* @param[in]  f32rot float32 f32rot , angle for rotation in rad
*/
/* PRQA S 1503 2 *//* Library function currently not used */
FUNC(uint32, ObjFusn_CODE) f32RotateSymMat(CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A, 
                                             CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C, 
                                             const float32 f32Sine, const float32 f32Cos)
{
   uint32 u32Success;
   const float32 f32DiagSq       = f32Cos * f32Cos;
   const float32 f32NoDiagSq     = f32Sine * f32Sine;
   const float32 f32DiagNonDiag  = f32Cos * f32Sine;

   const float32 f32Value00 = A->data[TRACKABLE_INDEX_VARIANCE_POSX];
   const float32 f32Value01 = A->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY];
   const float32 f32Value11 = A->data[TRACKABLE_INDEX_VARIANCE_POSY];
   const float32 f32Value02 = A->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX];
   const float32 f32Value12 = A->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX];
   const float32 f32Value22 = A->data[TRACKABLE_INDEX_VARIANCE_VELX];
   const float32 f32Value03 = A->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELY];
   
   const float32 f32Value13 = A->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELY];
   const float32 f32Value32 = A->data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY];
   const float32 f32Value33 = A->data[TRACKABLE_INDEX_VARIANCE_VELY];
   const float32 f32Value04 = A->data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCX];
   const float32 f32Value14 = A->data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCX];
   const float32 f32Value24 = A->data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCX];
   const float32 f32Value34 = A->data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCX];
   const float32 f32Value44 = A->data[TRACKABLE_INDEX_VARIANCE_ACCX];
   const float32 f32Value05 = A->data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCY];
   const float32 f32Value15 = A->data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCY];
   const float32 f32Value25 = A->data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCY];
   const float32 f32Value35 = A->data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCY];
   const float32 f32Value45 = A->data[TRACKABLE_INDEX_COVARIANCE_ACCX_ACCY];
   const float32 f32Value55 = A->data[TRACKABLE_INDEX_VARIANCE_ACCY];

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if((A == NULL_PTR) || (C == NULL_PTR))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_ROTATE_SYMMAT);
   }
   else
#endif
   if (A->u16Size > JKOBJFUSN_MATRIX_SIZE)
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_ROTATE_SYMMAT);
   }
   else if (A->u16Size < TRACKABLE_VELX)
   {
      /* Matrix too small, add error handling */
      u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
      (void)jk_error_management_addError(u32Success, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_ROTATE_SYMMAT);
   }
   else
#endif
   {
      C->u16Size = A->u16Size;

      if (A->u16Size == 3u)            /* PRQA S 3120 *//* math */
      {
         C->data[TRACKABLE_INDEX_VARIANCE_POSX] = ((f32DiagSq * f32Value00) - ((FLT_TWO * f32DiagNonDiag) * f32Value01)) + (f32NoDiagSq * f32Value11);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] = ((-f32NoDiagSq + f32DiagSq) * f32Value01) + (f32DiagNonDiag * (f32Value00 - f32Value11));
         C->data[TRACKABLE_INDEX_VARIANCE_POSY] = (f32DiagSq * f32Value11) + ((FLT_TWO * f32DiagNonDiag) * f32Value01) + (f32NoDiagSq * f32Value00);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] = (f32Cos * f32Value02) - (f32Sine*f32Value12);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] = (f32Sine * f32Value02) + (f32Cos*f32Value12);
         C->data[TRACKABLE_INDEX_VARIANCE_VELX] = f32Value22;
      }
      else if (A->u16Size == 4u)       /* PRQA S 3120 *//* math */
      {
         C->data[TRACKABLE_INDEX_VARIANCE_POSX] = ((f32DiagSq * f32Value00) -((FLT_TWO * f32DiagNonDiag) * f32Value01)) + (f32NoDiagSq * f32Value11);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] = ((-f32NoDiagSq + f32DiagSq) * f32Value01) + (f32DiagNonDiag * ((f32Value00) - (f32Value11)));
         C->data[TRACKABLE_INDEX_VARIANCE_POSY] = (f32DiagSq * f32Value11) + ((FLT_TWO * f32DiagNonDiag) * f32Value01) + (f32NoDiagSq * f32Value00);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] = ((f32DiagSq * (f32Value02)) + (f32NoDiagSq * (f32Value13))) - (f32DiagNonDiag * ((f32Value12) + (f32Value03)));
         C->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] = ((f32DiagSq * (f32Value12)) - (f32NoDiagSq * (f32Value03))) + (f32DiagNonDiag * ((-(f32Value13)) + f32Value02));
         C->data[TRACKABLE_INDEX_VARIANCE_VELX] = ((f32DiagSq * f32Value22) - ((FLT_TWO * f32DiagNonDiag) * f32Value32)) + (f32NoDiagSq * f32Value33);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELY] = ((f32DiagSq * (f32Value03)) - (f32NoDiagSq * (f32Value12))) + (f32DiagNonDiag * ((f32Value02) - (f32Value13)));
         C->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELY] = (f32DiagSq * f32Value13) + (f32NoDiagSq * f32Value02) + (f32DiagNonDiag * (f32Value12 + f32Value03));           
         C->data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY] = (((-f32NoDiagSq) + f32DiagSq) * (f32Value32)) + (f32DiagNonDiag * ((f32Value22) - (f32Value33)));
         C->data[TRACKABLE_INDEX_VARIANCE_VELY] = (f32DiagSq * f32Value33) + ((FLT_TWO * f32DiagNonDiag) * f32Value32) + (f32NoDiagSq * f32Value22);
      }
      else if (A->u16Size == 5u)       /* PRQA S 3120 *//* math */
      {
         C->data[TRACKABLE_INDEX_VARIANCE_POSX] = ((f32DiagSq * f32Value00) - ((FLT_TWO * f32DiagNonDiag) * f32Value01)) + (f32NoDiagSq * f32Value11);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] = (((-f32NoDiagSq) + f32DiagSq) * (f32Value01)) + (f32DiagNonDiag * ((f32Value00) - (f32Value11)));
         C->data[TRACKABLE_INDEX_VARIANCE_POSY] = (f32DiagSq * f32Value11) + ((FLT_TWO * f32DiagNonDiag) * f32Value01) + (f32NoDiagSq * f32Value00);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] = ((f32DiagSq * (f32Value02)) + (f32NoDiagSq * (f32Value13))) - (f32DiagNonDiag * ((f32Value12) + (f32Value03)));
         C->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] = ((f32DiagSq * (f32Value12)) - (f32NoDiagSq * (f32Value03))) + (f32DiagNonDiag * ((-(f32Value13)) +    (f32Value02)));
         C->data[TRACKABLE_INDEX_VARIANCE_VELX] = ((f32DiagSq * f32Value22) -  ((FLT_TWO * f32DiagNonDiag) * f32Value32)) + (f32NoDiagSq * f32Value33);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELY] = ((f32DiagSq * (f32Value03)) - (f32NoDiagSq * (f32Value12))) + (f32DiagNonDiag * ((f32Value02) - (f32Value13)));
         C->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELY] = (f32DiagSq * f32Value13) + (f32NoDiagSq * f32Value02) + (f32DiagNonDiag * (f32Value12 + f32Value03));  
         C->data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY] = ((-f32NoDiagSq + f32DiagSq) * f32Value32) + (f32DiagNonDiag * ((f32Value22) - (f32Value33)));
         C->data[TRACKABLE_INDEX_VARIANCE_VELY] = (f32DiagSq * f32Value33) + ((FLT_TWO * f32DiagNonDiag) * f32Value32) + (f32NoDiagSq * f32Value22);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCX] = (f32Cos * f32Value04) - (f32Sine*f32Value14);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCX] = (f32Sine * f32Value04) + (f32Cos*f32Value14);
         C->data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCX] = (f32Cos * f32Value24) - (f32Sine * f32Value34);
         C->data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCX] = (f32Sine * f32Value24) + (f32Cos * f32Value34);
         C->data[TRACKABLE_INDEX_VARIANCE_ACCX] = f32Value44;
      }
      else if (A->u16Size == 6u)       /* PRQA S 3120 *//* math */
      {
         C->data[TRACKABLE_INDEX_VARIANCE_POSX] = ((f32DiagSq * f32Value00) - ((FLT_TWO * f32DiagNonDiag) * f32Value01)) + (f32NoDiagSq * f32Value11);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] = ((-f32NoDiagSq + f32DiagSq) * f32Value01) + (f32DiagNonDiag * ((f32Value00) - (f32Value11)));
         C->data[TRACKABLE_INDEX_VARIANCE_POSY] = (f32DiagSq * f32Value11) + ((FLT_TWO * f32DiagNonDiag) * f32Value01) + (f32NoDiagSq * f32Value00);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] = ((f32DiagSq * f32Value02) + (f32NoDiagSq * (f32Value13))) - (f32DiagNonDiag * ((f32Value12) + (f32Value03)));
         C->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] = ((f32DiagSq * f32Value12) - (f32NoDiagSq * (f32Value03))) + (f32DiagNonDiag * ((-(f32Value13)) + (f32Value02)));
         C->data[TRACKABLE_INDEX_VARIANCE_VELX] = ((f32DiagSq * f32Value22) - ((FLT_TWO * f32DiagNonDiag) * f32Value32)) + (f32NoDiagSq * f32Value33);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELY] = ((f32DiagSq * (f32Value03)) - (f32NoDiagSq * (f32Value12))) + (f32DiagNonDiag * ((f32Value02) - (f32Value13)));
         C->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELY] = (f32DiagSq * f32Value13) + (f32NoDiagSq * f32Value02) + (f32DiagNonDiag * (f32Value12 + f32Value03));  
         C->data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY] = (((-f32NoDiagSq) + f32DiagSq) * (f32Value32)) + (f32DiagNonDiag * ((f32Value22) - (f32Value33)));
         C->data[TRACKABLE_INDEX_VARIANCE_VELY] = (f32DiagSq * f32Value33) + ((FLT_TWO * f32DiagNonDiag) * f32Value32) + (f32NoDiagSq * f32Value22);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCX] = ((f32DiagSq * (f32Value04)) + (f32NoDiagSq * (f32Value15))) - (f32DiagNonDiag * ((f32Value14) + (f32Value05)));
         C->data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCX] = ((f32DiagSq * (f32Value14)) - (f32NoDiagSq * (f32Value05))) + (f32DiagNonDiag * ((-(f32Value15)) +    (f32Value04)));
         C->data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCX] = ((f32DiagSq * (f32Value24)) + (f32NoDiagSq * (f32Value35))) - (f32DiagNonDiag * ((f32Value34) + (f32Value25)));
         C->data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCX] = ((f32DiagSq * (f32Value34)) - (f32NoDiagSq * (f32Value25))) + (f32DiagNonDiag * ((-(f32Value35)) +    (f32Value24)));
         C->data[TRACKABLE_INDEX_VARIANCE_ACCX] = ((f32DiagSq * f32Value44) - ((FLT_TWO * f32DiagNonDiag) * f32Value45)) + (f32NoDiagSq * f32Value55);
         C->data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCY] = ((f32DiagSq * (f32Value05)) - (f32NoDiagSq * (f32Value14))) + (f32DiagNonDiag * ((f32Value04) - (f32Value15)));
         C->data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCY] = (f32DiagSq * f32Value15) + (f32NoDiagSq * f32Value04) + (f32DiagNonDiag * (f32Value14 + f32Value05));  
         C->data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCY] = ((f32DiagSq * (f32Value25)) - (f32NoDiagSq * (f32Value34))) + (f32DiagNonDiag * ((f32Value24) - (f32Value35)));
         C->data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCY] = (f32DiagSq * f32Value35) + (f32NoDiagSq * f32Value24) + (f32DiagNonDiag * (f32Value34 + f32Value25));  
         C->data[TRACKABLE_INDEX_COVARIANCE_ACCX_ACCY] =  ((-f32NoDiagSq + f32DiagSq) * (f32Value45)) + (f32DiagNonDiag * ((f32Value44) - (f32Value55)));
         C->data[TRACKABLE_INDEX_VARIANCE_ACCY] = ((f32DiagSq * f32Value55) + ((FLT_TWO * f32DiagNonDiag) * f32Value45)) + (f32NoDiagSq * f32Value44);
      }
      else 
      {
         /* MISRA */
      }

      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/**
* @brief performs vector substraction C = A-B, wheras it is only calculated for mininmal number of rows from A,B
* 
* - vector can be of any dimensions n, 1 <= n <= @ref JKOBJFUSN_MATRIX_SIZE
* - the minimal size of both vectors is taken for C 
* - memory of vector C must be allocated before function call
* - Complexity: O(n).
*
* @param[in]  A   const stf32Vec_t * const, input vector A
* @param[in]  B   const stf32Vec_t * const, input vector  B
* @param[out] C   stf32Vec_t * const, output vector C = A - B
* @return error code
*/
/* PRQA S 1532 2 *//* Library Function */
FUNC(uint32, ObjFusn_CODE) f32VecSubPart(CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                           CONSTP2CONST(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B,
                                           CONSTP2VAR(stf32Vec_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C)
{
   uint32 u32Success;
   uint16 u16i;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == A) || (NULL_PTR == B) || (NULL_PTR == C))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void) jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32VECSUBPART);
   }
   else if (A==B) // C can be equal to A or B
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_POINTER;
      (void) jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_POINTER, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32VECSUBPART);
   }
   else
#endif
   if ((JKOBJFUSN_MATRIX_SIZE < A->nRows) || (JKOBJFUSN_MATRIX_SIZE < B->nRows))
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_F32VECSUBPART);
   }
   else
#endif
   {
      C->nRows = jk_fusion_min_U16(A->nRows,B->nRows);

      for (u16i = 0u; u16i < C->nRows; u16i++)
      {
         C->data[u16i] = A->data[u16i] - B->data[u16i];
      }

      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

/**
* @brief Implements matrix matrix addition C = A (DIAG) + B whereas A,B and C are assumed to be symmetric
*        CURRENTLY from A only the diagonal elements are taken. It only accumulates the smallest size of A,B,
*
* number of rows and columns must not exceed @ref JKOBJFUSN_MATRIX_SIZE
* @param[out] C      stf32SymMatrix_t * const, symetric output matrix C - C don't has to be initialized!!!s
* @param[in]  A      const stf32SymMatrix_t * const, symmetric input matrix A (only diagonal elements are taken !!!)
* @param[in]  B      const stf32SymMatrix_t * const, symmetric input matrix B
*/
/* PRQA S 1532 2 *//* Library function currently not used */
FUNC(uint32, ObjFusn_CODE) f32SymMatAddSymMatPart(CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) A,
                                                    CONSTP2CONST(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) B,
                                                    CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) C)
{
   uint32 u32Success;

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == A) || (NULL_PTR == B) || (NULL_PTR == C))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void) jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_COMMON_MATRIX,
               JKOBJFUSN_AAU_COMMON_MATRIX_ADD_SYM_MAT_PART);
   }
   else if ((A == B) || (A == C)) // C can be equal to A or B
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_POINTER;
      (void) jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_POINTER, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_ADD_SYM_MAT_PART);
   }
   else
#endif
   if ((JKOBJFUSN_MATRIX_SIZE < B->u16Size) || (JKOBJFUSN_MATRIX_SIZE < A->u16Size))
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void) jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_COMMON_MATRIX,
         JKOBJFUSN_AAU_COMMON_MATRIX_ADD_SYM_MAT_PART);
   }
   else
#endif
   {
      /* takes only minimum size of both matrices and stores them in C */
      C->u16Size = jk_fusion_min_U16(A->u16Size, B->u16Size);

      C->data[TRACKABLE_INDEX_VARIANCE_POSX] = A->data[TRACKABLE_INDEX_VARIANCE_POSX] + B->data[TRACKABLE_INDEX_VARIANCE_POSX];
      C->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY] = B->data[TRACKABLE_INDEX_COVARIANCE_POSX_POSY];
      C->data[TRACKABLE_INDEX_VARIANCE_POSY] = A->data[TRACKABLE_INDEX_VARIANCE_POSY] + B->data[TRACKABLE_INDEX_VARIANCE_POSY];
      C->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX] = B->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELX];
      C->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX] = B->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELX];
      C->data[TRACKABLE_INDEX_VARIANCE_VELX] = A->data[TRACKABLE_INDEX_VARIANCE_VELX] + B->data[TRACKABLE_INDEX_VARIANCE_VELX];
      C->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELY] = B->data[TRACKABLE_INDEX_COVARIANCE_POSX_VELY];
      C->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELY] = B->data[TRACKABLE_INDEX_COVARIANCE_POSY_VELY];
      C->data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY] = B->data[TRACKABLE_INDEX_COVARIANCE_VELX_VELY];
      C->data[TRACKABLE_INDEX_VARIANCE_VELY] = A->data[TRACKABLE_INDEX_VARIANCE_VELY] + B->data[TRACKABLE_INDEX_VARIANCE_VELY];
      C->data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCX] = B->data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCX];
      C->data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCX] = B->data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCX];
      C->data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCX] = B->data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCX];
      C->data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCX] = B->data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCX];
      C->data[TRACKABLE_INDEX_VARIANCE_ACCX] = A->data[TRACKABLE_INDEX_VARIANCE_ACCX] + B->data[TRACKABLE_INDEX_VARIANCE_ACCX];
      C->data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCY] = B->data[TRACKABLE_INDEX_COVARIANCE_POSX_ACCY];
      C->data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCY] = B->data[TRACKABLE_INDEX_COVARIANCE_POSY_ACCY];
      C->data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCY] = B->data[TRACKABLE_INDEX_COVARIANCE_VELX_ACCY];
      C->data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCY] = B->data[TRACKABLE_INDEX_COVARIANCE_VELY_ACCY];
      C->data[TRACKABLE_INDEX_COVARIANCE_ACCX_ACCY] = B->data[TRACKABLE_INDEX_COVARIANCE_ACCX_ACCY];
      C->data[TRACKABLE_INDEX_VARIANCE_ACCY] = A->data[TRACKABLE_INDEX_VARIANCE_ACCY] + B->data[TRACKABLE_INDEX_VARIANCE_ACCY];

      u32Success = JKOBJFUSN_ERROR_NOERROR;
   }

   return u32Success;
}

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef UNITTEST
/**
* @brief multiplies a vector with a scalar value 
*
* number of rows must not exceed @ref JKOBJFUSN_MATRIX_SIZE
* @param[in,out]A       stf32Vec_t * const, input and output vector
* @param[in]f32Scal     f32_t, the scalar
*
* @return TRUE (ok) or FALSE (error occured)
*/
boolean f32VecMulScal(stf32Vec_t * const A, float32 f32Scal)
{
   boolean   bSuccess = TRUE;
   uint16    u16i = 0u;
   if (A->nRows > JKOBJFUSN_MATRIX_SIZE)
   {
      bSuccess = FALSE;
   }
   else
   {
      for (u16i = 0u; u16i < A->nRows; u16i++)
      {
         A->data[u16i] *= f32Scal;
      }
   }

   return bSuccess;
}
#endif /* UNITTEST */

/**
 * \}
 */
