/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_fusion_math.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Header file for Fusion Math Library. Defines all math functions that shall be available to other AAU's 
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

#ifndef JK_FUSION_MATH_H_
#define JK_FUSION_MATH_H_

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]===========================================*/
#include "Jk_common_types.h"

/*==================[macros]===============================================*/
/*==================[type definitions]=====================================*/

/*==================[forward declarations]=================================*/
/*==================[symbolic constants]===================================*/

/** Various versions of PI */
#define JK_FUSION_MATH_PI                        (3.141592653589793f)
#define JK_FUSION_MATH_PI_HALF                   (1.570796326794896f)
#define JK_FUSION_MATH_PI_QUARTER                (0.785398163397448f)
#define JK_FUSION_MATH_PI_THREE_QUARTER          (2.356194490192345f)
#define JK_FUSION_MATH_TWO_PI                    (6.283185307179586f)

#define JK_FUSION_MATH_DEGREES_PER_RAD           (57.29577951308232f)

#define JK_FUSION_MATH_RAD_PER_DEGREE            (0.017453292519943295f)

#define JK_FUSION_MATH_COMPARE_TO_ZERO           (0.000001f)
   
/*==================[return codes]=========================================*/
/*==================[functions]============================================*/

/**
 * Defines and functions from math.h 
 **/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/** floating absolute value **/
FUNC(float32, ObjFusn_CODE) jk_fusion_abs(const float32 f32x);

/** squared root function for floating values **/
FUNC(float32, ObjFusn_CODE) jk_fusion_sqrt(float32 f32x);

/** log function for floating values **/
FUNC(float32, ObjFusn_CODE) jk_fusion_log(float32 f32x);

/** function for conversion between radians and degrees **/
FUNC(float32, ObjFusn_CODE) jk_fusion_rtod(const float32 f32x);

/** cosine function for floating values **/
FUNC(float32, ObjFusn_CODE) jk_fusion_cos(const float32 f32x);

/** sine function for floating values **/
FUNC(float32, ObjFusn_CODE) jk_fusion_sin(const float32 f32x);

/** angle normalization - angle is mapped between [-pi pi] **/
FUNC(float32, ObjFusn_CODE) jk_fusion_norm_angle(const float32 f32x);

/** atan function for floating values **/
FUNC(float32, ObjFusn_CODE) jk_fusion_atan2 (const float32 f32y, const float32 f32x);

/** power function for floating values **/
FUNC(float32, ObjFusn_CODE) jk_fusion_pow2(const float32 f32x);

/* interpolation function for segments between to points*/
FUNC(float32, ObjFusn_CODE) jk_fusion_interp1(const float32  f32x0, const float32  f32y0, const float32  f32x1, const float32  f32y1, const float32  f32x);


/* -----------------------------------------------------------------------*/
/**
* \typedef  MAX
*
* \brief    maximum of two numbers
*
*-----------------------------------------------------------------------*/
FUNC(uint16, ObjFusn_CODE) jk_fusion_max_U16(const uint16 A, const uint16 B);
FUNC(float32, ObjFusn_CODE) jk_fusion_max_F32(const float32 A, const float32 B);
FUNC(float32, ObjFusn_CODE) jk_fusion_min_F32(const float32 A, const float32 B);

/* -----------------------------------------------------------------------*/
/**
* \typedef  MIN
*
* \brief    minimum of two numbers
*
* -----------------------------------------------------------------------*/
FUNC(uint8, ObjFusn_CODE) jk_fusion_min_U8(const uint8 A, const uint8 B);
FUNC(uint16, ObjFusn_CODE) jk_fusion_min_U16(const uint16 A, const uint16 B);

/* -----------------------------------------------------------------------*/
/**
* \typedef  MINMAX
*
* \brief    Limit input to min and max value
*
* -----------------------------------------------------------------------*/
FUNC(sint16, ObjFusn_CODE) jk_fusion_min_max_S16(const sint16 A, const sint16 minVal, const sint16 maxVal);
FUNC(float32, ObjFusn_CODE) jk_fusion_min_max_F32(const float32 A, const float32 minVal, const float32 maxVal);
FUNC(uint32, ObjFusn_CODE) jk_fusion_min_max_U32(const uint32 A, const uint32 minVal, const uint32 maxVal);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#ifdef __cplusplus
}
#endif
#endif /** \} JK_FUSION_MATH_H_ */
