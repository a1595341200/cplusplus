/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_ErrorBufferType.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Defines common error buffer type and the corresponding min/max values.
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

#ifndef JKOBJFUSN_ERRORBUFFERTYPE_H
#define JKOBJFUSN_ERRORBUFFERTYPE_H

#include "Jk_common_types.h"
#include "JkObjFusn_ConfigVehicle.h"
#include "JkObjFusn_ConfigAlgorithm.h"

/// @name u32ErrorCode

/****************************/
/* U32ERRORCODE - mandatory */
/****************************/
/** minimum value */
#define JKOBJFUSN_ERRORBUFFER_U32ERRORCODE_MIN                            (0x00000001u)
/** maximum value */
#define JKOBJFUSN_ERRORBUFFER_U32ERRORCODE_MAX                            (0x80000000u)
/** default value */
#define JKOBJFUSN_ERRORBUFFER_U32ERRORCODE_DEFAULT                        (0xFFFFFFFFu)
/** flag indicating if this field will be filled by fusion module */
#define JKOBJFUSN_ERRORBUFFER_U32ERRORCODE_FILLEDBYFUSION                 (1)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_ERRORBUFFER_U32ERRORCODE_ISENUM                         (0)

///@}

/// @name u8AAU_Code

/**************************/
/* U8AAU_CODE - mandatory */
/**************************/
/** minimum value */
#define JKOBJFUSN_ERRORBUFFER_U8AAUCODE_MIN                            (0x01u)
/** maximum value */
#define JKOBJFUSN_ERRORBUFFER_U8AAUCODE_MAX                            (0xFEu)
/** default value */
#define JKOBJFUSN_ERRORBUFFER_U8AAUCODE_DEFAULT                        (0xFFu)
/** flag indicating if this field will be filled by fusion module */
#define JKOBJFUSN_ERRORBUFFER_U8AAUCODE_FILLEDBYFUSION                 (1)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_ERRORBUFFER_U8AAUCODE_ISENUM                         (0)

///@}

/// @name u8FunctionCode

/******************************/
/* U8FUNCTIONCODE - mandatory */
/******************************/
/** minimum value */
#define JKOBJFUSN_ERRORBUFFER_U8FUNCTIONCODE_MIN                             (0x01u)
/** maximum value */
#define JKOBJFUSN_ERRORBUFFER_U8FUNCTIONCODE_MAX                             (0xFEu)
/** default value */
#define JKOBJFUSN_ERRORBUFFER_U8FUNCTIONCODE_DEFAULT                         (0xFFu)
/** flag indicating if this field will be filled by fusion module */
#define JKOBJFUSN_ERRORBUFFER_U8FUNCTIONCODE_FILLEDBYFUSION                  (1)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_ERRORBUFFER_U8FUNCTIONCODE_ISENUM                          (0)

///@}


/// @name u16Age

/**********************/
/* U16AGE - mandatory */
/**********************/
/** minimum value */
#define JKOBJFUSN_ERRORBUFFER_U16AGE_MIN                               (0x0000u)
/** maximum value */
#define JKOBJFUSN_ERRORBUFFER_U16AGE_MAX                               (JK_ERROR_MANAGEMENT_MAX_ERROR_AGE)
/** default value */
#define JKOBJFUSN_ERRORBUFFER_U16AGE_DEFAULT                           (0xFFFFu)
/** flag indicating if this field will be filled by fusion module */
#define JKOBJFUSN_ERRORBUFFER_U16AGE_FILLEDBYFUSION                    (1)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_ERRORBUFFER_U16AGE_ISENUM                            (0)

///@}

/// @name u16NextWriteIdx

/*******************************/
/* U16NEXTWRITEIDX - mandatory */
/*******************************/
/** minimum value */
#define JKOBJFUSN_ERRORBUFFER_U16NEXTWRITEIDX_MIN                               (0x0000u)
/** maximum value */
#define JKOBJFUSN_ERRORBUFFER_U16NEXTWRITEIDX_MAX                               (JK_ERROR_MANAGEMENT_BUFFER_SIZE - 1u)
/** default value */
#define JKOBJFUSN_ERRORBUFFER_U16NEXTWRITEIDX_DEFAULT                           (0xFFFFu)
/** flag indicating if this field will be filled by fusion module */
#define JKOBJFUSN_ERRORBUFFER_U16NEXTWRITEIDX_FILLEDBYFUSION                    (1)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_ERRORBUFFER_U16NEXTWRITEIDX_ISENUM                            (0)

///@}

/// @name u16NumOfItems

/*****************************/
/* U16NUMOFITEMS - mandatory */
/*****************************/
/** minimum value */
#define JKOBJFUSN_ERRORBUFFER_U16NUMOFITEMS_MIN                               (0x0000u)
/** maximum value */
#define JKOBJFUSN_ERRORBUFFER_U16NUMOFITEMS_MAX                               (JK_ERROR_MANAGEMENT_BUFFER_SIZE)
/** default value */
#define JKOBJFUSN_ERRORBUFFER_U16NUMOFITEMS_DEFAULT                           (0xFFFFu)
/** flag indicating if this field will be filled by fusion module */
#define JKOBJFUSN_ERRORBUFFER_U16NUMOFITEMS_FILLEDBYFUSION                    (1)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_ERRORBUFFER_U16NUMOFITEMS_ISENUM                            (0)

///@}


typedef struct JkObjFusn_ErrorTypeTag
{
   uint32 u32ErrorCode;
   uint8  u8AAU_Code;
   uint8  u8FunctionCode;
   uint16 u16Age;
} JkObjFusn_ErrorType;

typedef struct JkObjFusn_ErrorBufferTypeTag
{
   JkObjFusn_ErrorType aErrorBuffer[JK_ERROR_MANAGEMENT_BUFFER_SIZE];   /**< ringbuffer items for an amount of time*/
   uint16 u16NextWriteIdx;                                                     /**< index of next free item */
   uint16 u16NumOfItems;                                                       /**< Note that u16NumOfItems does not necessarily point to the last object in the buffer */
} JkObjFusn_ErrorBufferType;

#endif /* JKOBJFUSN_ERRORBUFFERTYPE_H */
