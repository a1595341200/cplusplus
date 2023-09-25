/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_idProvider_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: internal header file for Jk_idProvider.c
	for unit tests define LOCAL prior to including this file!
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

#ifndef JK_IDPROVIDER_INT_H
#define JK_IDPROVIDER_INT_H

#ifdef __cplusplus
extern "C" {
#endif

#include "Jk_common_types.h"
#include "JkObjFusn_ConfigAlgorithm.h"

   /* Define ID provider state machine */
#define JK_IDPROVIDER_UNINITIALIZED   (1u)
#define JK_IDPROVIDER_INITIALIZED     (2u)

/* size of the array for the used fusion ids */
#define S_AU16USEDFUSIONID_RANGE           (JKOBJFUSN_IDPROVIDER_U16ID_MAX - JKOBJFUSN_IDPROVIDER_U16ID_MIN)
#define S_AU16USEDFUSIONID_SIZE            (S_AU16USEDFUSIONID_RANGE + 1u)
/* The number of elements in the ID array is expanded to a 32-bit (4-byte) boundary */
#define S_AU16USEDFUSIONID_ELEMENTS        (S_AU16USEDFUSIONID_SIZE + (4u - (S_AU16USEDFUSIONID_SIZE % 4u)))

/* the first id which should be used for the fusion objects */
#define S_U16CURRENTFUSIONID_INIT          (JKOBJFUSN_IDPROVIDER_U16ID_MIN)

/* value for that an id is not in use */
#define U8FUSIONID_NOT_INUSE (0u)

/* value for that an id is in use */
#define U8FUSIONID_INUSE (1u)

/* value for an id deleted in this cycle and should not given to any other objects */
#define U8FUSIONID_DELETED (2u)

/* begin: getter/setter for unit testing */
#ifdef UNITTEST
LOCAL u8_t * idProvider_accessIdList(void);
LOCAL u8_t * idProvider_accessCurrentState(void);
#endif /* UNITTEST */
/* end: getter/setter for unit testing */

#ifdef __cplusplus
}
#endif

#endif /* JK_IDPROVIDER_INT_H */
