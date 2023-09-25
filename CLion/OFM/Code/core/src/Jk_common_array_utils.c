/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_common_array_utils.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: utilities for manipulating arrays
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
#include "Jk_common_array_utils.h"
#include "Jk_fusion_math.h"

/********************************************************************************/
/* note that this is a library file so MISRA 1503 adn 1505 have been suppressed */
/********************************************************************************/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

/// \name Array Utils
/** array initializer */
/* PRQA S 1532 2 *//* Library functions */
FUNC(void, ObjFusn_CODE) jk_common_array_utils_defaultInit_as8(sint8 as8_arr[], const uint16 u16_n, const sint8 s8_def)
{
   uint16 u16_i;
   for(u16_i = 0u; u16_i < u16_n; u16_i++)
   {
      as8_arr[u16_i] = s8_def;
   }
}

/* PRQA S 1503 2 *//* Library functions */
FUNC(void, ObjFusn_CODE) jk_common_array_utils_defaultInit_au16(uint16 au16_arr[], const uint16 u16_n, const uint16 u16_def)
{
   uint16 u16_i;
   for(u16_i = 0u; u16_i < u16_n; u16_i++)
   {
      au16_arr[u16_i] = u16_def;
   }
}

/* PRQA S 1532 2 *//* Library functions */
FUNC(void, ObjFusn_CODE) jk_common_array_utils_defaultInit_au32(uint32 au32_arr[], const uint16 u16_n, const uint32 u32_def)
{
   uint16 u16_i;
   for(u16_i = 0u; u16_i < u16_n; u16_i++)
   {
      au32_arr[u16_i] = u32_def;
   }
}

/* PRQA S 1532 2 *//* Library functions */
FUNC(void, ObjFusn_CODE) jk_common_array_utils_defaultInit_af32(float32 af32_arr[], const uint16 u16_n, const float32 f32_def)
{
   uint16 u16_i;
   for(u16_i = 0u; u16_i < u16_n; u16_i++)
   {
      af32_arr[u16_i] = f32_def;
   }
}

/* PRQA S 1503 2 *//* Library functions */
FUNC(void, ObjFusn_CODE) jk_common_array_utils_defaultInit_abool(boolean ab_arr[], const uint16 u16_n, const boolean b_def)
{
   uint16 u16_i;
   for(u16_i = 0u; u16_i < u16_n; u16_i++)
   {
      ab_arr[u16_i] = b_def;
   }
}

/** find largest element from array and also return its index */
/* PRQA S 1532 2 *//* Library functions */
FUNC(float32, ObjFusn_CODE) jk_common_array_utils_findLargestIndex_f32(const float32 af32_arr[], const uint16 u16_n,
                                                                              CONSTP2VAR(sint16, AUTOMATIC, ObjFusn_VAR_NOINIT) s16_index)
{
   float32 retValue = -FLT_MAX;
   uint16 u16_i;
   sint16 s16idx = -1;

   for (u16_i = 0u; u16_i < u16_n; u16_i++)
   {
      if (af32_arr[u16_i] > retValue)
      {
         retValue = af32_arr[u16_i];
         s16idx = (sint16)u16_i;
      }
      else
      {
         /* MISRA */
      }
   }
   *s16_index = s16idx;

   return retValue;
}
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"
/**
 * \}
 */
