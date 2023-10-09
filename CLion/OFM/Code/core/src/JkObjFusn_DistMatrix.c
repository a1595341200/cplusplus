/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_DistMatrix.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: distance matrix functions
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

/*==================[inclusions]============================================*/

#include "JkObjFusn_DistMatrix.h"
#include "Jk_fusion_math.h"



/*==================[variables]=============================================*/
/** \name Global Variables */
/**
 * \brief current value of update counter, used for output lists
 */
#define ObjFusn_START_SEC_VAR_UNSPECIFIED
#include "ObjFusn_MemMap.h"
/* PRQA S 3218 1 */ /**< Static buffer */
LOCAL VAR(stDistMatrix_t, ObjFusn_VAR_ZERO_INIT) stDistMatrix = { { { 0u }, { 0u } }, 0u, 0u };
#define ObjFusn_STOP_SEC_VAR_UNSPECIFIED
#include "ObjFusn_MemMap.h"

/*==================[functions]=============================================*/
#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
FUNC(void, ObjFusn_CODE) initDistMatrix(CONSTP2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) spMat,
   const uint16 u16Rows, const uint16 u16Cols, const float32 f32InitVal)
{
   uint16 u16A;
   uint16 u16B;
   const uint16 u16InitVal = convertFloatToFixedtDistMat(f32InitVal);
   const uint16 nRowsSet = jk_fusion_min_U16(JK_DISTSCORE_MAX_ROW_SIZE, u16Rows);
   const uint16 nColsSet = jk_fusion_min_U16(JK_DISTSCORE_MAX_COL_SIZE, u16Cols);

   for (u16B = 0u; u16B < nRowsSet; u16B++)
   {
      for (u16A = 0u; u16A < nColsSet; u16A++)
      {
         spMat->data[u16B][u16A] = u16InitVal;
      }
   }

   spMat->nRows = nRowsSet;
   spMat->nCols = nColsSet;
}
#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(P2VAR(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) getDistMat(void)
{
   return &stDistMatrix;
}

FUNC(uint16, ObjFusn_CODE) convertFloatToFixedtDistMat(const float32 f32Float)
{
   uint32  u32temp;
   float32 f32temp;

   if (f32Float > JK_DISTSCORE_CONVERT_F16_MAX_FIXED_INT)
   { 
      u32temp = (uint32)U16_MAX;
   }
   else if (f32Float < FLT_ZERO)
   {
      u32temp = (uint32)U16_MAX;
   }
   else
   {
      f32temp = f32Float * JK_DISTSCORE_CONVERT_F32_SCALE;
      u32temp = (uint32)f32temp;

      u32temp = jk_fusion_min_max_U32(u32temp, 0u, (uint32) U16_MAX);
   }

   return (uint16)u32temp;
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef UNITTEST
float32 convertFixedToFloatDistMat(const uint16 u16Num)
{
   float32 f32Return = (float32) u16Num;
   f32Return /= JK_DISTSCORE_CONVERT_F32_SCALE;
   return f32Return;
}
#endif

/**
* \}
*/
