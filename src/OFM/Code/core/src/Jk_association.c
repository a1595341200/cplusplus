/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_association.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Interface between association algorithm files and fusion framework
* Others:
	The association module associates different trackables on basis of different algorithms.
	The distance score matrix is used as input for these algorithms.

	This AAU includes several association algorithms
	- Global Min Algorithm
	- Hungarian Algorithm
	- DinicKronrod Algorithm
	- Auction Algorithm (suboptimal!)
	as called by the JK fusion framework.

	Note that DinicKronrod might allow for some more performance improvements
	due to parallelization while Hungarian might be improved by further code
	enhancements, namely growing multiple alternating trees at a time...
* Function List:
    1.¡­¡­¡­¡­
    2.¡­¡­¡­¡­
* History:
    1.Date:
      Author:
      Modification:
    2.¡­¡­¡­¡­
**********************************************************************************/

/*==================[inclusions]============================================*/
#include "Jk_association.h"
#include "Jk_association_int.h"
#include "JkObjFusn_ErrorCodes.h"
#include "JkObjFusn_AAU_Codes.h"
#include "Jk_error_management.h"
#include "Jk_common_array_utils.h"
#include "Jk_fusion_math.h"
#include "JkObjFusn_TrackableProps.h"
#include "JkObjFusn_Params.h"

/*==================[macros]================================================*/ 
/*==================[external functions]====================================*/

/**
 * \fn   bool_t association_runAssociation(stDistMatrix_t * const pSdist_mat,
                                  f32_t const f32MatchGate,
                                  u8_t const u8AssociationMode,
                                  stMatchIndex_t stMatchesArray[],
                                  u16_t const u16MatchArraySize,
                                  u16_t * const pNumMatches)
 *
 * \brief   Creates the match index with the help of the distance matrix.
 *          Different association can be used which are set in the config parameters.
 *
 * \param   pSdist_mat                 const stDistMatrix_t * const, distance matrix
 * \param   f32MatchGate               f32_t const, match gate set in the parameter interface
 * \param   u8AssociationMode          u8_t const, association mode set in the parameter interface 
 * \param  [out] stMatchesArray[]   stMatchIndex_t, match index array filled within association
 * \param   u16MatchArraySize          u16_t const, size of the match index array
 * \param  [out] pNumMatches        u16_t * const, number of matches found in the association
 *
 * \return  TRUE (ok) or FALSE (error occured)
 */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

FUNC(uint32, ObjFusn_CODE) jk_association_runAssociation(CONSTP2CONST(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pSdist_mat,
                                                                const float32 f32MatchGate, 
                                                                CONSTP2VAR(stMatchIndexArrayType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMatchIndexArray)
{
   uint32 u32Success = JKOBJFUSN_ERROR_NOERROR;   /* PRQA S 3204 1 *//* variable may be set to other values depending on run-time check activation */
   uint16 u16iCol, u16iRow, u16k;
   uint16 u16MaxMatches;         /*size of the maximum number of possible matches */
   uint16 u16nbMatches  = 0u; /*internal counter of matches */
   boolean bBreak       = FALSE; /* for breaking loop, if all minima are found */
   uint16 u16Score_buf;
   uint16 u16IndexScore = JK_ASSOCIATION_INIT_SCORE;
   /* marker of rows and cols which tracks are already associated
    * TRUE means track was already associated */
   VAR(boolean, ObjFusn_VAR_NOINIT) bUsedIndexCols[JK_DISTSCORE_MAX_COL_SIZE];
   VAR(boolean, ObjFusn_VAR_NOINIT) bUsedIndexRows[JK_DISTSCORE_MAX_ROW_SIZE];
   VAR(stMatchIndex_t, ObjFusn_VAR_NOINIT) index;
   const uint16 u16MatchGate = convertFloatToFixedtDistMat(f32MatchGate);

#if (JK_RUNTIME_ERROR_CHECK == STD_ON)
#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if ((NULL_PTR == pSdist_mat) || (NULL_PTR == pMatchIndexArray))
   {
      u32Success = JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_NULL_POINTER_EXCEPTION, JKOBJFUSN_AAU_ASSOCIATION, 
         JKOBJFUSN_AAU_ASSOCIATION_RUN_ASSOCIATION);
   }
   else
#endif 
   if ((pSdist_mat->nCols > JK_DISTSCORE_MAX_COL_SIZE) ||
       (pSdist_mat->nRows > JK_DISTSCORE_MAX_ROW_SIZE))
   {
      u32Success = JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_MATRIX_EXCEEDS_MAXIMUM_SIZE, JKOBJFUSN_AAU_ASSOCIATION,
         JKOBJFUSN_AAU_ASSOCIATION_RUN_ASSOCIATION);
      pMatchIndexArray->u16NumMatches = 0u;
   }
   else if( (f32MatchGate < JKOBJFUSN_PARAMS_F32MATCHGATE_MIN) || 
            (f32MatchGate > JKOBJFUSN_PARAMS_F32MATCHGATE_MAX))
   {
      u32Success = JKOBJFUSN_ERROR_INVALID_INPUT;
      (void)jk_error_management_addError(JKOBJFUSN_ERROR_INVALID_INPUT, JKOBJFUSN_AAU_ASSOCIATION, 
         JKOBJFUSN_AAU_ASSOCIATION_RUN_ASSOCIATION);
   }
   else
#endif
   {
      u16MaxMatches = jk_fusion_min_U16(pSdist_mat->nCols, pSdist_mat->nRows);

      /* Init matches array */
      for(u16iRow = 0u; u16iRow < JK_MATCH_INDEX_ARRAY_SIZE; u16iRow++)
      {
         pMatchIndexArray->aMatchIndexArray[u16iRow].u16IndexCol = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
         pMatchIndexArray->aMatchIndexArray[u16iRow].u16IndexRow = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT;
      }

      /** - clear arrays */
      jk_common_array_utils_defaultInit_abool(bUsedIndexCols, JK_DISTSCORE_MAX_COL_SIZE, FALSE);
      jk_common_array_utils_defaultInit_abool(bUsedIndexRows, JK_DISTSCORE_MAX_ROW_SIZE, FALSE);

      index.u16IndexCol = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT; 
      index.u16IndexRow = JKOBJFUSN_TRACKABLE_U16ID_DEFAULT; 
	  index.u16Score = JK_ASSOCIATION_INIT_SCORE;

      for (u16k = 0u; (u16k < u16MaxMatches) && (FALSE == bBreak); u16k++)
      {
         /** - Initialize index */
         u16IndexScore  = JK_ASSOCIATION_INIT_SCORE;

         /** - find global minima of distance score */
         /**    -- loop for new global minima as long as minimum is above threshold */
         /**    -- check only for tracks which are not yet used for association */
         for (u16iRow = 0u; u16iRow < pSdist_mat->nRows; u16iRow++)
         {
            if (FALSE == bUsedIndexRows[u16iRow])
            {
               for (u16iCol = 0u; u16iCol < pSdist_mat->nCols; u16iCol++)
               {
                  if (FALSE == bUsedIndexCols[u16iCol])
                  {
                     u16Score_buf = pSdist_mat->data[u16iRow][u16iCol];
                     if ((u16Score_buf < u16MatchGate) && (u16Score_buf < u16IndexScore))
                     {
                        index.u16IndexCol = u16iCol;
                        index.u16IndexRow = u16iRow; 
						index.u16Score    = u16Score_buf;  //Ryan add Debug
                        u16IndexScore     = u16Score_buf; 
                     }
                     else
                     {
                        /* MISRA */
                     }
                  }
                  else
                  {
                     /* MISRA */
                  }
               } /* for u16iCol */
            }
            else
            {
               /* MISRA */
            }
         } /* for u16iRow */

         /** - if distance score of global minimum is below threshold (match gate) */
         /**   -- store match in match index array */
         /**   -- increment number of matches */
         /**   -- save information which tracks are already associated */
         if (u16IndexScore != JK_ASSOCIATION_INIT_SCORE)
         {
            bUsedIndexCols[index.u16IndexCol] = TRUE;
            bUsedIndexRows[index.u16IndexRow] = TRUE;
            pMatchIndexArray->aMatchIndexArray[u16nbMatches].u16IndexCol = index.u16IndexCol;
            pMatchIndexArray->aMatchIndexArray[u16nbMatches].u16IndexRow = index.u16IndexRow;
			pMatchIndexArray->aMatchIndexArray[u16nbMatches].u16Score    = index.u16Score;  //Ryan add debug 2021-02-03
            u16nbMatches++;
         }
         else
         {
            /* no minima within match gate found --> break loop */
            bBreak = TRUE;
         }
      } /* for u16k */

      /* copy number of matches */
      pMatchIndexArray->u16NumMatches = u16nbMatches;
   }

   return u32Success;
}

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"
/**
 * \}
 */
