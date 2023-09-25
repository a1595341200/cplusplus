/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_DistMatrix.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: This is a structure definition file for the distance score matrix
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

#ifndef JKOBJFUSN_DISTMATRIX_H_
#define JKOBJFUSN_DISTMATRIX_H_

#ifdef   __cplusplus
extern "C" {
#endif

#include "Jk_common_types.h" /* standard types (uint16, float32, etc.) */
#include "JkObjFusn_ConfigConstants.h"
#include "JkObjFusn_Params.h"

/*==================[macros]================================================*/
/** size of the distance matrix; needs to be large enough to accomodata all objects rsp. trackables  */

#define JK_DISTSCORE_MAX_ROW_SIZE    JK_FUSION_TRACKABLE_LIST_SIZE
#define JK_DISTSCORE_MAX_COL_SIZE    JK_FUSION_MAX_INPUT_OBJECTS

#define JK_DISTSCORE_CONVERT_F16_MAX_FIXED_INT     (JKOBJFUSN_PARAMS_F32MATCHGATE_MAX)
#define JK_DISTSCORE_CONVERT_F32_SCALE             (((float32) U16_MAX) / JKOBJFUSN_PARAMS_F32MATCHGATE_MAX)

/*==================[typedef]================================================*/
/**
 * The stDistMatrix_t type stores the distances between objects in two lists.
 */
typedef struct stDistMatrix_t_tag
{
   uint16 data[JK_DISTSCORE_MAX_ROW_SIZE][JK_DISTSCORE_MAX_COL_SIZE]; /**< data[i][j] is the distance between object i in first and object j in second list */
   uint16 nRows;                                                                      /**< number of rows used in data */
   uint16 nCols;                                                                      /**< number of columns used in data */
} stDistMatrix_t;

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
 * @fn      void initDistMatrix(stDistMatrix_t* const pMat, uint16 const u16Rows, uint16 const u16Cols, float32 const f32InitVal)
 *
 * @brief   Inits the distance matrix to the inputted default value
 *
 * @param   [in,out] pMat     stDistMatrix_t* const, distance matrix
 * @param   u16Rows           u16_t const, number of rows
 * @param   u16Cols           u16_t const, number of cols
 * @param   f32InitVal        f32_t const, default value 
 *
 * @return  void
 */

FUNC(void, ObjFusn_CODE) initDistMatrix(CONSTP2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) spMat,
	const uint16 u16Rows, const uint16 u16Cols, const float32 f32InitVal);


/**
 * @fn      stDistMatrix_t * const getDistMat(void)
 *
 * @brief   Returns a pointer to the internal distance matrix 
 *
 *
 * @return  stDistMatrix_t * const
 */

FUNC(P2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) getDistMat(void);

FUNC(P2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) getDistMatCamF(void);
FUNC(P2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) getDistMatRadF(void);
FUNC(P2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) getDistMatRadFL(void);
FUNC(P2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) getDistMatRadFR(void);
FUNC(P2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) getDistMatRadRL(void);
FUNC(P2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) getDistMatRadRR(void);


/**
* @fn     uint16 convertFloatToFixedtDistMat(f32_t f32float)
*
* @brief   converts floating point to fixed point
*
* @param   f32float        f32_t f32float, value in floating point
*
* @return  u16_t
*/

FUNC(uint16, ObjFusn_CODE) convertFloatToFixedtDistMat(const float32 f32Float);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"


#ifdef UNITTEST

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/**
* @fn     float32 convertFixedToFloatDistMat(uint16 u16Num)
*
* @brief   converts fixed point to floatign point
*
* @param   u16Num        u16_t u16Num, value in fixed point format
*
* @return  f32_t        Converted to f32_t 
*/
FUNC(float32, ObjFusn_CODE) convertFixedToFloatDistMat(const uint16 u16Num);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#endif // UnitTest

#ifdef   __cplusplus
}
#endif

#endif /**\} JKOBJFUSN_DISTMATRIX_H_ */
