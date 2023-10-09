/**
 * \defgroup  common Common Types
 * \brief common definitions and types
 * 
 * \addtogroup common 
 * @{
 * \file        Jk_common_types.h
 *
 * \brief       Provision of Standard Types.
 *
 * \author      $Author: Stephan Rohr (stephan.rohr) $
 *
 * Revision:    $Revision: 1.4.1.10 $
 * Created on:  $Date: 2018/05/23 14:09:15CEST $
 *
 * <br>=====================================================<br>
 * <b>Copyright 2012 by JiKa Electronics Europe.</b>
 *
 *  All rights reserved. Property of JiKa Electronics Europe.<br>
 *  Restricted rights to use, duplicate or disclose of this code<br>
 *  are granted through contract.
 * <br>=====================================================<br>
 *
 * \todo    Check intrinsics for C6x
 *          Check integer width
 *          Floats and Doubles 
 */
 
#ifndef JK_COMMON_TYPES_H
#define JK_COMMON_TYPES_H

/*==================[inclusions]============================================*/
#include "Std_Types.h"

#ifdef TRICORE
#include "support/mcu_common/Types.h"
#endif

#ifndef LOCAL
#define LOCAL static
#endif

#ifndef FLT_ZERO
#define FLT_ZERO  (float32)(0.0f)
#endif

#ifndef FLT_ONE
#define FLT_ONE            (float32)(1.0f)
#endif

#ifndef FLT_TWO
#define FLT_TWO            (float32)(2.0f)
#endif

#ifndef FLT_THREE
#define FLT_THREE          (float32)(3.0f)
#endif

#ifndef FLT_FOUR
#define FLT_FOUR           (float32)(4.0f)
#endif

#ifndef FLT_SIX
#define FLT_SIX            (float32)(6.0f)
#endif

#ifndef FLT_EIGHT
#define FLT_EIGHT          (float32)(8.0f)
#endif

#ifndef FLT_ONE_HALF
#define FLT_ONE_HALF (0.5f)
#endif

#ifndef FLT_ONE_THIRD
#define FLT_ONE_THIRD      (0.333334f)
#endif

#ifndef FLT_ONE_QUARTER
#define FLT_ONE_QUARTER    (0.25f)
#endif
   
/* -----------------------------------------------------------------------*//**
* \typedef          FLT_MAX
*
* \brief            maximum value for float32
*//* -----------------------------------------------------------------------*/
#ifndef FLT_MAX
#define FLT_MAX            (float32)3.402823466e+38F        // max value
#endif

#ifndef FLT_EPSILON
#define FLT_EPSILON        (float32)1.192092896e-07F        // smallest such that 1.0+FLT_EPSILON != 1.0
#endif

/* -----------------------------------------------------------------------*//**
* \macro            UNUSED
*
* \brief            Avoid "unused" argument warnings during compilation
*//* -----------------------------------------------------------------------*/
#ifndef UNUSED
#define UNUSED(x) (void)(x)
#endif


#ifndef TRICORE
   
   /*------------------[limits for defined types]-------------------------------*/
/* -----------------------------------------------------------------------*//**
* \typedef          U8_MAX
*
* \brief            maximum value for uint8
*//* -----------------------------------------------------------------------*/

#ifndef U8_MAX
#define U8_MAX             (uint8)(255u)
#endif

/* -----------------------------------------------------------------------*//**
* \typedef          U8_MIN
*
* \brief            minimum value for uint8
*//* -----------------------------------------------------------------------*/
#ifndef U8_MIN
#define U8_MIN             (uint8)(0u)
#endif
/* -----------------------------------------------------------------------*//**
* \typedef          S8_MAX
*
* \brief            maximum value for sint8
*//* -----------------------------------------------------------------------*/
#ifndef S8_MAX
#define S8_MAX             (sint8)(127)
#endif
/* -----------------------------------------------------------------------*//**
* \typedef          S8_MIN
*
* \brief            minimum value for sint8
*//* -----------------------------------------------------------------------*/
#ifndef S8_MIN
#define S8_MIN             (sint8)(-128)
#endif
/* -----------------------------------------------------------------------*//**
* \typedef          U16_MAX
*
* \brief            maximum value for uint16
*//* -----------------------------------------------------------------------*/
#ifndef U16_MAX
#define U16_MAX            (uint16)(65535u)
#endif
/* -----------------------------------------------------------------------*//**
* \typedef          U16_MIN
*
* \brief            minium value for uint16
*//* -----------------------------------------------------------------------*/
#ifndef U16_MIN
#define U16_MIN            (uint16)(0u)
#endif
/* -----------------------------------------------------------------------*//**
* \typedef          S16_MAX
*
* \brief            maximum value for sint16
*//* -----------------------------------------------------------------------*/
#ifndef S16_MAX
#define S16_MAX            (sint16)(32767)
#endif
/* -----------------------------------------------------------------------*//**
* \typedef          S16_MIN
*
* \brief            minimum value for s16_t
*//* -----------------------------------------------------------------------*/
#ifndef S16_MIN
#define S16_MIN            (sint16)(-32768)
#endif
/* -----------------------------------------------------------------------*//**
* \typedef          U32_MAX
*
* \brief            maximum value for uint32
*//* -----------------------------------------------------------------------*/
#ifndef U32_MAX
#define U32_MAX            (uint32)(4294967295u)
#endif
/* -----------------------------------------------------------------------*//**
* \typedef          U32_MIN
*
* \brief            minimum value for uint32
*//* -----------------------------------------------------------------------*/
#ifndef U32_MIN
#define U32_MIN            (uint32)(0u)
#endif
/* -----------------------------------------------------------------------*//**
* \typedef          S32_MAX
*
* \brief            maximum value for sint32
*//* -----------------------------------------------------------------------*/

#ifndef S32_MAX
#define S32_MAX            (sint32)(2147483647)
#endif
/* -----------------------------------------------------------------------*//**
* \typedef          S32_MIN
*
* \brief            minimum value for sint32
*//* -----------------------------------------------------------------------*/
#ifndef S32_MIN
#define S32_MIN            (sint32)(-2147483648)
#endif


#endif /* ifndef TRICORE */

#endif    /**@} JK_COMMON_TYPES_H */
/*==================[end of file]===========================================*/
