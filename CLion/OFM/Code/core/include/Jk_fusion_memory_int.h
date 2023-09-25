/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_fusion_memory.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Implementation file for memory operations
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
#include "Jk_common_types.h"

/*==================[macros]================================================*/
#define LONGWORD_BYTES   sizeof(uint64)
#define LONGWORD_ALIGNED (uint64)0x7u
#define INTEGER_ALIGNED  (uint64)0x3u
#define HALFWORD_ALIGNED (uint64)0x2u
#define BYTE_ALIGNED     (uint64)0x1u

/*==================[type definitions]======================================*/
/*==================[static variables]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[functions]=============================================*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/*!
 * \brief       Copies byte wise n bytes from source to destination.
 *
 * \param[in]   size   Number of bytes to copy. This number is unsigned integral type.
 * \param[out]  dst    Pointer to the destination array where the content is to be copied.
 * \param[in]   src    Pointer to the source of data to be copied.
 *
 * \return      void
 */
LOCAL FUNC(void, ObjFusn_CODE) intern_memcpy_byte(CONST(uint16, ObjFusn_VAR_NOINIT) size,
                                                           VAR(uint8, ObjFusn_VAR_NOINIT) dst[],
                                                           CONST(uint8, ObjFusn_VAR_NOINIT) src[]);

/*!
 * \brief       Copies double word wise n bytes from source to destination.
 *
 * \param[in]   size   Number of bytes to copy. This number is unsigned integral type.
 * \param[out]  dst    Pointer to the destination array where the content is to be copied.
 * \param[in]   src    Pointer to the source of data to be copied.
 *
 * \return      Pointer to the destination.
 *
 * \retval      unsigned long long *   Pointer to the destinations memory address.
 */
LOCAL FUNC(P2VAR(uint64, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) intern_memcpy_doubleword(CONST(uint16, ObjFusn_VAR_NOINIT) size,
                                                                                                           VAR(uint64, ObjFusn_VAR_NOINIT) dst[],
                                                                                                           CONST(uint64, ObjFusn_VAR_NOINIT) src[]);

/*!
 * \brief       Copies n bytes from source to destination.
 *
 * \details     Copies data from default memory to default memory.
 *             Does not check for overlapping spaces.
 *
 * \param[out]  dst    Pointer to the destination array where the content is to be copied,
 *                   type-casted to a pointer of type void*.
 * \param[in]   src    Pointer to the source of data to be copied, type-casted to a pointer
 *                   of type const void*.
 * \param[in]   size   Number of bytes to copy. This number is unsigned integral type.
 *
 * \return      Pointer to the destination.
 *
 * \retval      void*   void casted pointer to the destinations memory address.
 *
 * Example usage:
 * \code
 *              #define SIZE 15
 *              unsigned char   source[SIZE]      = "Hello World!";
 *              unsigned char   destination[SIZE] = "";
 *              unsigned char * result;
 *              result = (unsigned char *)memcpy(destination, source, SIZE);
 *              // Copies the characters from source to destination and return destination,
 *              // result will point to destination[0].
 * \endcode
 */
LOCAL FUNC(P2VAR(uint8, AUTOMATIC, ObjFusn_VAR_NOINIT), ObjFusn_CODE) intern_memcpy(VAR(uint8, ObjFusn_VAR_NOINIT) dst[],
                                                                                        CONST(uint8, ObjFusn_VAR_NOINIT) src[],
                                                                                        CONST(uint16, ObjFusn_VAR_NOINIT) n);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"
/**
* \}
*/
