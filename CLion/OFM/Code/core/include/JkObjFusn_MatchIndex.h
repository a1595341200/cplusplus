/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_MatchIndex.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: This is a structure definition file for the internal association match index matrix
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

#ifndef JKOBJFUSN_MATCHINDEX_H_
#define JKOBJFUSN_MATCHINDEX_H_

#include "Jk_common_types.h" /* standard types (uint16, float32, etc.) */
#include "JkObjFusn_ConfigConstants.h"

/*==================[macros]================================================*/

#if (JK_FUSION_MAX_INPUT_OBJECTS < JK_FUSION_TRACKABLE_LIST_SIZE)
#define JK_MATCH_INDEX_ARRAY_SIZE JK_FUSION_MAX_INPUT_OBJECTS
#else
#define JK_MATCH_INDEX_ARRAY_SIZE JK_FUSION_TRACKABLE_LIST_SIZE
#endif

/**
 * @struct stMatchIndex_t
 * @brief   describes a matching index of an associated object pair coming from list 1 and list 2
 * @param   u16IndexCol    uint16, position of the object of list 1 associated to list 2
 * @param   u16IndexRow    uint16, position of the object of list 2 associated to list 1
 * @param   u16Score       uint16, distance score
*/
typedef struct stMatchIndex_t_tag
{
   uint16 u16IndexCol;    
   uint16 u16IndexRow;   
   uint16 u16Score;  //Ryan add Debug 2021-02-03
} stMatchIndex_t;

/**
 * @struct  stMatchIndexArrayType
 * @brief   describes the matching index array
 * @param   u16NumMatches     uint16, Number of matches currently stored in the array    
 * @param   aMatchIndexArray  stMatchIndex_t[], match index array
 */
typedef struct stMatchIndexArrayTypeTag
{
   uint16 u16NumMatches;
   stMatchIndex_t aMatchIndexArray [JK_MATCH_INDEX_ARRAY_SIZE];
} stMatchIndexArrayType;

#endif /**@} JKOBJFUSN_MATCHINDEX_H_ */
