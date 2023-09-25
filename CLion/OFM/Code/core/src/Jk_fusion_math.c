/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_fusion_math.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Platform dependent implementation file for mathematical functions
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
#include "Jk_fusion_math.h"
#include "Jk_fusion_math_int.h"

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
#define ObjFusn_START_SEC_ROM
#include "ObjFusn_MemMap.h"
/* PRQA S 0759 1 *//* Union required to define NaN */
LOCAL CONST(JkObjFusn_f32UnionType, ObjFusn_CONST) uf32NaN = { JK_FUSION_MATH_FLOAT32_NAN_DEFAULT };
#define ObjFusn_STOP_SEC_ROM
#include "ObjFusn_MemMap.h"

/*==================[functions]=============================================*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(float32, ObjFusn_CODE) jk_fusion_abs(const float32 f32x) /* PRQA S 1503 *//* library fcn*/
{
   /* PRQA S 0759 2 *//* Union required here */
   JkObjFusn_f32UnionType uf32Union;   /* PRQA S 3204 */ /* union members are modified */

   uf32Union.f32Val = f32x;
   uf32Union.u32Val = (uf32Union.u32Val & (JK_FUSION_MATH_FLOAT32_MANTISSA_MASK | JK_FUSION_MATH_FLOAT32_EXP_MASK));

   return uf32Union.f32Val;
}

LOCAL FUNC(uint32, ObjFusn_CODE) jk_fusion_exp(const float32 f32x )
{
   /* Shift by number of mantissa bits, exponent is now on bit position 0 to 7, sign bit is on position 8 */
   /* PRQA S 0310 1 *//* Cast to Union type required */
   return (((((const JkObjFusn_f32UnionType *)&f32x)->u32Val) >> JK_FUSION_MATH_FLOAT32_MANTISSA_NUM_BITS) & JK_FUSION_MATH_FLOAT32_EXP_MASK_INF);
}

/* PRQA S 1505 2 *//* Internal function */
LOCAL FUNC(boolean, ObjFusn_CODE) jk_fusion_isInf(const float32 f32x)
{
   /* PRQA S 0759 2 *//* Union required here */
   JkObjFusn_f32UnionType uf32Union;   /* PRQA S 3204 */ /* union members are modified */
   boolean bRes;

   uf32Union.f32Val  = f32x;

   /** All exponend bits should be set and all mantissa bits should be zero to code Inf */
   if ((uf32Union.u32Val & (JK_FUSION_MATH_FLOAT32_MANTISSA_MASK | JK_FUSION_MATH_FLOAT32_EXP_MASK)) == JK_FUSION_MATH_FLOAT32_EXP_MASK)
   {
      bRes = TRUE;
   }
   else
   {
      bRes = FALSE;
   }

   return bRes;
}

/* PRQA S 1505 2 *//* Internal function */
LOCAL FUNC(boolean, ObjFusn_CODE) jk_fusion_isNaN(const float32 f32x)
{
   /* PRQA S 0759 2 *//* Union required here */
   JkObjFusn_f32UnionType uf32Union;   /* PRQA S 3204 */ /* union members are modified */
   boolean bRes;

   uf32Union.f32Val  = f32x;

   /* All exponent bits set to one, at least one mantissa bit set to one */
   if (((uf32Union.u32Val & JK_FUSION_MATH_FLOAT32_EXP_MASK) == JK_FUSION_MATH_FLOAT32_EXP_MASK) && 
       ((uf32Union.u32Val & JK_FUSION_MATH_FLOAT32_MANTISSA_MASK) > 0u))
   {
      bRes = TRUE;
   }
   else
   {
      bRes = FALSE;
   }

   return bRes;
}

/* PRQA S 1505 2 *//* Internal function */
LOCAL FUNC(float32, ObjFusn_CODE) jk_fusion_copysign(const float32 f32x, const float32 f32Sign)
{
   /* PRQA S 0759 3 *//* Union required here */
   JkObjFusn_f32UnionType uf32UnionX;      /* PRQA S 3204 */ /* union members are modified */

   uf32UnionX.f32Val = f32x;

   uf32UnionX.u32Val &= (JK_FUSION_MATH_FLOAT32_MANTISSA_MASK | JK_FUSION_MATH_FLOAT32_EXP_MASK);
   /* PRQA S 0310 1 *//* Cast to Union type required */
   uf32UnionX.u32Val |= ((((const JkObjFusn_f32UnionType *) &f32Sign)->u32Val) & JK_FUSION_MATH_FLOAT32_SIGN_BIT_MASK);
      
   return uf32UnionX.f32Val;
}

/* PRQA S 1505 2 *//* Internal function */
LOCAL FUNC(float32, ObjFusn_CODE) jk_fusion_frexp(const float32 f32x, CONSTP2VAR(sint32, AUTOMATIC, ObjFusn_VAR_NOINIT) ps32Exp)
{
   float32 f32Res;
   const uint32 u32Exp  = jk_fusion_exp(f32x);

   /* Exponent is zero, inputted number is either zero or denormalized value */
   if (u32Exp == 0u)
   {
      *ps32Exp = 0;
      /* Return +- Zero depending on input sign */
      f32Res = FLT_ZERO;
   }
   else if (u32Exp == JK_FUSION_MATH_FLOAT32_EXP_MASK_INF)
   {
      /* Infinite value */
      f32Res = f32x;
   }
   else
   {
      /* Unbiased exponent */
      *ps32Exp = (((sint32)u32Exp) - JK_FUSION_MATH_FLOAT32_EXP_BIAS) + 1;
      f32Res = jk_fusion_set_exp(f32x, (uint32)(JK_FUSION_MATH_FLOAT32_EXP_BIAS - 1));
   }

   f32Res = jk_fusion_copysign(f32Res, f32x);

   return f32Res;
}

/* PRQA S 1532 2 *//* Library Function */
FUNC(float32, ObjFusn_CODE) jk_fusion_interp1(const float32  f32x0, const float32  f32y0, const float32  f32x1, const float32  f32y1, const float32  f32x) /* PRQA S 1503 *//* library fcn*/
{
   float32 f32Res                   = FLT_ZERO;
   const float32 f32Denominator     = f32x1 - f32x0;
   const float32 f32AbsDenominator  = jk_fusion_abs(f32Denominator);

   /* PRQA S 0759 1 *//* Union required to define Inf */
   const JkObjFusn_f32UnionType uf32Inf = { JK_FUSION_MATH_FLOAT32_INF_DEFAULT };
   
   if(f32AbsDenominator < JK_FUSION_MATH_COMPARE_TO_ZERO)
   {
      f32Res = uf32Inf.f32Val;
   }
   else if(f32x1 < f32x0)
   {
      f32Res = uf32NaN.f32Val;
   }
   else if((f32x < f32x0) || (f32x > f32x1))
   {
      f32Res = uf32NaN.f32Val;
   }
   else
   {
      f32Res = (f32y1 - f32y0) * (f32x - f32x0);
      f32Res /= f32Denominator;
      f32Res += f32y0;
   }
      
   return f32Res;
}


/* PRQA S 1505 2 *//* Internal function */
LOCAL FUNC(float32, ObjFusn_CODE) jk_fusion_set_exp(const float32 f32x, const uint32 u32Exp)
{
   /* PRQA S 0759 2 *//* Union required here */
   JkObjFusn_f32UnionType uf32Union;   /* PRQA S 3204 */ /* union members are modified */

   uf32Union.f32Val = f32x;

   /* Clear exponent */
   uf32Union.u32Val &= (JK_FUSION_MATH_FLOAT32_MANTISSA_MASK | JK_FUSION_MATH_FLOAT32_SIGN_BIT_MASK);
   /* Apply new exponent */
   uf32Union.u32Val |= ((u32Exp & JK_FUSION_MATH_FLOAT32_EXP_MASK_INF) << JK_FUSION_MATH_FLOAT32_MANTISSA_NUM_BITS);

   return uf32Union.f32Val;
}

/* PRQA S 1505 2 *//* Internal function */
LOCAL FUNC(float32, ObjFusn_CODE) jk_fusion_modff(const float32 f32x, CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32IntVal)
{
   /* PRQA S 0759 2 *//* Union type required here */
   JkObjFusn_f32UnionType uf32Union;   /* PRQA S 3204 */ /* union members are modified */
   uint32   u32l;
   sint32   s32Exp;
   uint32   u32Tmp;
   float32  f32Res;
   const boolean bIsNan = jk_fusion_isNaN(f32x);

   uf32Union.f32Val = f32x;
   u32l = uf32Union.u32Val;

   u32Tmp = (u32l >> JK_FUSION_MATH_FLOAT32_MANTISSA_NUM_BITS) & JK_FUSION_MATH_FLOAT32_EXP_MASK_INF;
   s32Exp = (sint32) u32Tmp - JK_FUSION_MATH_FLOAT32_EXP_BIAS;

   if (TRUE == bIsNan)
   {
      f32Res      = uf32NaN.f32Val;
      *pf32IntVal = uf32NaN.f32Val;
   }
   /** Negative unbiased exponent means that the resulting floating point value is < 1 */
   else if (s32Exp < 0)
   {
      *pf32IntVal  = jk_fusion_copysign(FLT_ZERO, f32x);
      f32Res      = f32x;
   }
   /*
   * for IEEE-754 single precision, an (unbiased!) exponent >= FLOAT_FRACTION_SIZE tells us
   * that the fraction == 0.0
   * So check if the value EXCEEDS +-1 * 2 ^ 22
   */
   /** Single precision numbers with unbiased exponents greater than the number of mantissa bits */
   /** Do not have a franctional part anymore but are rounded to closest integer with gap 1 */
   else if (s32Exp >= (sint32)JK_FUSION_MATH_FLOAT32_MANTISSA_NUM_BITS)
   {
      *pf32IntVal  = f32x; 
      f32Res       = jk_fusion_copysign(FLT_ZERO, f32x);
   }
   else
   {
      /* here the float is <-1*2^FLOAT_FRACTION_SIZE..+1*2^FLOAT_FRACTION_SIZE> */
      /* now clear the least significant bits, which would drop off at the integer */
      /* that are the last FLOAT_FRACTION_SIZE - exp bits */
      u32l &= U32_MAX << (JK_FUSION_MATH_FLOAT32_MANTISSA_NUM_BITS - (uint32) s32Exp);
      uf32Union.u32Val     = u32l;
      *pf32IntVal          = uf32Union.f32Val;
      f32Res               = jk_fusion_copysign(f32x - (*pf32IntVal), f32x);
   }

   return f32Res;
}

/* PRQA S 1505 2 *//* Internal function */
LOCAL FUNC(float32, ObjFusn_CODE) jk_fusion_remainder(const float32 f32x, const float32 f32y)
{
   const uint32 u32ExpX  = jk_fusion_exp(f32x);
   const uint32 u32ExpY  = jk_fusion_exp(f32y);
   uint32   u32MantX     = jk_fusion_mant(f32x);
   uint32   u32MantY     = jk_fusion_mant(f32y);
   uint32   u32Exp       = u32ExpX;
   boolean  bSign        = jk_fusion_signbit(f32x);
   uint32   u32Remain;
   uint32   u32Remain2;
   uint32   u32Mant;
   float32  f32Result;

   if (u32ExpY == JK_FUSION_MATH_FLOAT32_EXP_MASK_INF)
   {
      // f32y is NaN or Infinity
      if (u32MantY == 0u)
      {
         // f32y is +- Infinity
         if (u32ExpX != JK_FUSION_MATH_FLOAT32_EXP_MASK_INF)
         {
            // remainder( f32x, +-Infinity ) -> d1
            f32Result = f32x;
         }
         else
         {
            // remainder (+-Inf / +-NaN, +-Inf) -> 0
            f32Result = FLT_ZERO;
         }
      }
      else
      {
         // f32y is NaN, just return it.
         f32Result = f32y;
      }
   }
   else if (u32ExpX == JK_FUSION_MATH_FLOAT32_EXP_MASK_INF)
   {
      if (u32MantX == 0u)
      {
         // remquo(+-Infinity, d2) -> NaN
         f32Result = uf32NaN.f32Val;
      }
      else
      {
         // d1 is NaN, just return it.
         f32Result = f32x;
      }
   }
   else if (u32ExpY == 0u)
   {
      // remquo(f32x, zero) -> NaN
      f32Result = FLT_ZERO;
   }
   else if ((u32ExpX == 0u) || ((u32ExpX + 1u) < u32ExpY))
   {
      f32Result = f32x;
   }
   else
   {
      u32MantX    = u32MantX | JK_FUSION_MATH_FLOAT32_MANT_ADD_IMPLICIT_ONE; /* add implicit 1 to mantissa */
      u32MantY    = u32MantY | JK_FUSION_MATH_FLOAT32_MANT_ADD_IMPLICIT_ONE; /* add implicit 1 to mantissa */
      u32Remain   = u32MantX;
      /* Calculate the remainder. The numerator op1 is scaled in advance to
      * make sure the quotient always contains P bits.
      */
      if (u32Remain < u32MantY)
      {
         u32Remain <<= 1u;
         u32Exp--;
      }
      else
      {
         /* MISRA */
      }

      if (u32Exp >= u32ExpY)
      {
         while (u32Exp > u32ExpY)
         {
            if (u32Remain >= u32MantY)
            {
               u32Remain -= u32MantY;
            }
            else
            {
               /* MISRA */
            }

            u32Remain <<= 1u;
            u32Exp--;
         }

         if (u32Remain >= u32MantY)
         {
            u32Remain -= u32MantY;
         }
         else
         {
            /* MISRA */
         }

         /* normalize */
         while ((u32Remain != 0u) && ((u32Remain >> JK_FUSION_MATH_FLOAT32_MANTISSA_NUM_BITS) == 0u))
         {
            u32Remain <<= 1u;
            u32Exp--;
         }
      }
      else
      {
         /* MISRA */
      }

      if ((u32Exp == 0u) || (u32Remain == 0u))
      {
         /* no denormals */
         u32Exp = 0u;
         u32Remain = 0u;
      }
      else
      {
         /* MISRA */
      }

      /* The remainder can be almost twice as large as
      * mant2 (divisor) in which case continuing the division would yield
      * an endless stream of '1's.
      * When the remaining dividend is larger than the divisor we should
      * round up. The special case dividend == divisor cannot occur because
      * that would imply an exact quotient of P + 1 bits starting and ending
      * with '1': There is no multiplier which would yield an exact P bit
      * representable product (==original dividend) for that.
      */
      if ((u32Exp == u32ExpY) || ((u32Exp == (u32ExpY - 1u)) && 
         ((u32Remain > u32MantY) || ((u32Remain == u32MantY)))))
      {
         /* Round quotient up => extra subtract => negative remainder.
         * The exact quotient can never have P+1 leading '1's so no
         * need to test for a final carry into the exponent.
         */
         u32Remain2 = u32MantY;

         if (u32Exp == (u32ExpY - 1u))
         {
            u32Remain2 = u32MantY << 1u;
         }
         else
         {
            /* MISRA */
         }

         if (TRUE == bSign)
         {
            bSign = FALSE;
         }
         else
         {
            bSign = TRUE;
         }

         if (u32Remain > u32Remain2)
         {
            u32Remain -= u32Remain2;
         }
         else
         {
            u32Remain = u32Remain2 - u32Remain;
         }

         /* normalize again.. */
         if ((u32Remain >> (JK_FUSION_MATH_FLOAT32_MANTISSA_NUM_BITS + 1u)) > 0u)
         {
            u32Remain >>= 1u;
            u32Exp++;
         }
         else
         {
            /* MISRA */
         }

         while ((u32Remain != 0u) && ((u32Remain >> JK_FUSION_MATH_FLOAT32_MANTISSA_NUM_BITS) == 0u))
         {
            u32Remain <<= 1u;
            u32Exp--;
         }
      }
      else if ((u32Remain >> (JK_FUSION_MATH_FLOAT32_MANTISSA_NUM_BITS + 1u)) > 0u)
      {
         u32Remain >>= 1u;
         u32Exp++;
      }
      else
      {
         /* MISRA */
      }

      u32Mant     = u32Remain & (JK_FUSION_MATH_FLOAT32_MANT_ADD_IMPLICIT_ONE - 1u); /* hide hidden bit again */   
      f32Result   = jk_fusion_pack( bSign, u32Exp, u32Mant );
   }

   return f32Result;
}

/* PRQA S 1505 2 *//* Internal function */
LOCAL FUNC(float32, ObjFusn_CODE) jk_fusion_fmod(const float32 f32x, const float32 f32y)
{
   boolean  bSignBit;
   float32  f32Result;
   const boolean bYisZero  = jk_fusion_isZero(f32y);
   const float32 f32AbsX   = jk_fusion_abs(f32x);
   const float32 f32AbsY   = jk_fusion_abs(f32y);

   f32Result               = jk_fusion_remainder(f32AbsX, f32AbsY);
   bSignBit                = jk_fusion_signbit(f32Result);

   if (bSignBit == TRUE)
   {
      f32Result += f32AbsY;
   }
   else
   {
      /* MISRA */
   }

   f32Result = jk_fusion_copysign(f32Result, f32x);

   if (TRUE == bYisZero)
   {     
      /* Encode NaN */
      f32Result = uf32NaN.f32Val; 
   }
   else
   {
      /* MISRA */
   }

   return f32Result;
}

/* PRQA S 1503 2 *//* Library Function */
FUNC(float32, ObjFusn_CODE) jk_fusion_sqrt(float32 f32x) 
{
   float32  f32Z;
   sint32   s32Exp;
   uint32   u32Tmp;

   const uint32 u32Exp  = jk_fusion_exp(f32x);
   const boolean bIsInf = jk_fusion_isInf(f32x);
   const boolean bIsNan = jk_fusion_isNaN(f32x);

   if (u32Exp == 0u)
   {
      f32x = jk_fusion_copysign(FLT_ZERO, f32x);
   }
   else if (TRUE == bIsInf)
   {
      /* Simply return Inf --> return x */
   }
   else if(TRUE == bIsNan)
   {
      /* Simply return NaN --> return x */
   }
   else if (f32x < FLT_ZERO)
   {
      /* Encode NaN */
      f32x = uf32NaN.f32Val;
   }
   else
   {

      f32Z = jk_fusion_frexp(f32x, &s32Exp);

      if (0u != (((uint32)s32Exp & 1u)))
      {
         /* Clear lowest bit due to subsequent right shift */
         f32Z += f32Z;
         s32Exp--;
      }
      else
      {
         /* MISRA */
      }

      u32Tmp = ((uint32) s32Exp) >> 1u;
      s32Exp = (sint32) u32Tmp;

      if (f32Z > JK_FUSION_MATH_SQRT2)
      {
         f32Z -= FLT_TWO;

         f32x = (((((((((((JK_FUSION_MATH_SQRT_POLYNOM_1_CONSTANT_1 * f32Z) +
                         JK_FUSION_MATH_SQRT_POLYNOM_1_CONSTANT_2) * f32Z) -
                       JK_FUSION_MATH_SQRT_POLYNOM_1_CONSTANT_3) * f32Z) +
                     JK_FUSION_MATH_SQRT_POLYNOM_1_CONSTANT_4) * f32Z) -
                   JK_FUSION_MATH_SQRT_POLYNOM_1_CONSTANT_5) * f32Z) +
                 JK_FUSION_MATH_SQRT_POLYNOM_1_CONSTANT_6) * f32Z) +
                JK_FUSION_MATH_SQRT2;
      }
      else if (f32Z > JK_FUSION_MATH_INV_SQRT2)
      {
         /* z is between sqrt(2)/2 and sqrt(2). */
         f32Z -= FLT_ONE;

         f32x = (((((((((((((JK_FUSION_MATH_SQRT_POLYNOM_2_CONSTANT_1 * f32Z) -
                           JK_FUSION_MATH_SQRT_POLYNOM_2_CONSTANT_2) * f32Z) +
                         JK_FUSION_MATH_SQRT_POLYNOM_2_CONSTANT_3) * f32Z) -
                       JK_FUSION_MATH_SQRT_POLYNOM_2_CONSTANT_4) * f32Z) +
                     JK_FUSION_MATH_SQRT_POLYNOM_2_CONSTANT_5) * f32Z) -
                  JK_FUSION_MATH_SQRT_POLYNOM_2_CONSTANT_6) * f32Z) * f32Z) +
                 (JK_FUSION_MATH_SQRT_POLYNOM_2_CONSTANT_7 * f32Z)) + FLT_ONE;
      }
      else
      {
         /* z is between 0.5 and sqrt(2)/2. */
         f32Z -= FLT_ONE_HALF;

         f32x = (((((((((((JK_FUSION_MATH_SQRT_POLYNOM_3_CONSTANT_1 * f32Z) +
                         JK_FUSION_MATH_SQRT_POLYNOM_3_CONSTANT_2) * f32Z) -
                       JK_FUSION_MATH_SQRT_POLYNOM_3_CONSTANT_3) * f32Z) +
                     JK_FUSION_MATH_SQRT_POLYNOM_3_CONSTANT_4) * f32Z) -
                   JK_FUSION_MATH_SQRT_POLYNOM_3_CONSTANT_5) * f32Z) +
                 JK_FUSION_MATH_SQRT_POLYNOM_3_CONSTANT_6) * f32Z) +
                JK_FUSION_MATH_SQRT_POLYNOM_3_CONSTANT_7;
      }

      s32Exp += (sint32) jk_fusion_exp(f32x);
      f32x = jk_fusion_set_exp(f32x, (uint32) s32Exp);
   }

   return f32x;
}

FUNC(float32, ObjFusn_CODE) jk_fusion_log(float32 f32x) /* PRQA S 1503 *//* library fcn*/
{
   float32  f32Zsq;
   sint32   s32Exp;
   const uint32 u32Exp     = jk_fusion_exp(f32x);
   const boolean bIsZero   = jk_fusion_isZero(f32x);

   if (f32x <= FLT_ZERO)
   {
      if (bIsZero == TRUE)
      {
         /* Return - Inf */
         f32x = jk_fusion_pack(TRUE, JK_FUSION_MATH_FLOAT32_EXP_MASK_INF, 0x0u);
      }
      else
      {
         f32x = uf32NaN.f32Val;
      }
   }
   else if (u32Exp == JK_FUSION_MATH_FLOAT32_EXP_MASK_INF)
   {
      /*
      * We have to handle infinity separately since this limit case is not
      * handled properly by the polynomials below.
      * simply return x 
      */
   }
   else
   {
      f32x = jk_fusion_frexp(f32x, &s32Exp);
      if (f32x < JK_FUSION_MATH_INV_SQRT2)
      {
         f32x = FLT_TWO * f32x;
         s32Exp = s32Exp - 1;
      }
      else
      {
         /* MISRA */
      }

      f32x     = (f32x - FLT_ONE) / (f32x + FLT_ONE);
      f32Zsq   = f32x * f32x;

      f32x = (((JK_FUSION_MATH_LOG_COEFFICIENTS_P1 * f32Zsq) +
               JK_FUSION_MATH_LOG_COEFFICIENTS_P0) /
              (f32Zsq + JK_FUSION_MATH_LOG_COEFFICIENTS_Q0)) * f32x;
      f32x += ((float32)s32Exp) * JK_FUSION_MATH_LOG2F;
   }

   return f32x;
}

/* PRQA S 1532 2 *//* Library Function */
FUNC(float32, ObjFusn_CODE) jk_fusion_rtod(const float32 f32x)
{
   /* PRQA S 3492 1 *//* Tertiary operator outside of macro: function is inlined */
   return (JK_FUSION_MATH_DEGREES_PER_RAD * ((f32x < FLT_ZERO) ? -f32x : f32x));
}

/* PRQA S 1503 2 *//* Library Function */
FUNC(float32, ObjFusn_CODE) jk_fusion_cos(const float32 f32x)
{
   /* PRQA S 3492 1 *//* Tertiary operator outside of macro: function is inlined */
   return jk_fusion_sin_impl(((f32x < FLT_ZERO) ? -f32x : f32x), 1);
}

/* PRQA S 1503 2 *//* Library Function */
FUNC(float32, ObjFusn_CODE) jk_fusion_sin(const float32 f32x) 
{
   return jk_fusion_sin_impl(f32x, 0);
}

/* PRQA S 1505 2 *//* Internal Function */
LOCAL FUNC(float32, ObjFusn_CODE) jk_fusion_sin_impl(float32 f32x, sint32 s32Quad) 
{
   float32  f32y;
   float32  f32Tmp;
   uint32   u32Tmp;

   const uint32 u32Exp  = jk_fusion_exp(f32x);
   const boolean bIsNan = jk_fusion_isNaN(f32x);

   if (u32Exp == JK_FUSION_MATH_FLOAT32_EXP_MASK_INF)
   {
      if (TRUE == bIsNan)
      {
         // The code below is not safe for NaN, so we have to handle it separately.
         // Simply return x as x == NaN
      }
      else
      {
         // C11 F.10.1.6: sin(+-Infinity) -> NaN

         /* Encode NaN */
         f32x = uf32NaN.f32Val;
      }
   }
   else
   {
      if (f32x < FLT_ZERO)
      {
         f32x = -f32x;
         s32Quad = s32Quad + 2;   /* PRQA S 3120 1 *//* math */
      }
      else
      {
         /* MISRA */
      }

      f32x = f32x * JK_FUSION_MATH_SIN_SCALING_FACTOR;         /* underflow ? */

      if (f32x > JK_FUSION_MATH_SIN_MAX_SCALING)
      {
         f32y = jk_fusion_modff( f32x, &f32Tmp );
         /* From here, we don't need the original 'x' anymore
         * So we just use it for other purposes
         */
         f32x = f32Tmp + (float32) s32Quad;
         (void) jk_fusion_modff(FLT_ONE_QUARTER * f32x, &f32Tmp);
         f32x -= (FLT_FOUR * f32Tmp);
         s32Quad = (sint32) f32x;
      }
      else
      {
         f32y     = f32x - ((float32) ((sint32) f32x));
         u32Tmp   = ((uint32) s32Quad + (uint32) f32x) & 0x03u;   /* PRQA S 3120 1 *//* math */
         s32Quad  = (sint32) u32Tmp;
      }

      /* Quadrant 1 or 3 */
      if (0u != ((uint32) s32Quad & 0x01u))      
      {
         f32y = FLT_ONE - f32y;
      }
      else
      {
         /* MISRA */
      }

      if (s32Quad > 1)
      {
         f32y = -f32y;
      }
      else
      {
         /* MISRA */
      }

      f32x = f32y * f32y;      /* y-square */

      f32x =  (((((JK_FUSION_MATH_SIN_COEFFICIENTS_P2 * f32x) + JK_FUSION_MATH_SIN_COEFFICIENTS_P1 ) * f32x) + 
                  JK_FUSION_MATH_SIN_COEFFICIENTS_P0) * f32y) / 
                  (((f32x + JK_FUSION_MATH_SIN_COEFFICIENTS_Q1 ) * f32x) + JK_FUSION_MATH_SIN_COEFFICIENTS_Q0);
   }

   return f32x;
}

/* PRQA S 1503 2 *//* library fcn*/
FUNC(float32, ObjFusn_CODE) jk_fusion_norm_angle(const float32 f32x) 
{
   float32 f32Temp;

   f32Temp = jk_fusion_fmod(f32x + JK_FUSION_MATH_PI, JK_FUSION_MATH_TWO_PI) + JK_FUSION_MATH_TWO_PI;  // modulo 360deg
   f32Temp = jk_fusion_fmod(f32Temp, JK_FUSION_MATH_TWO_PI);  // modulo 360deg
   f32Temp -= JK_FUSION_MATH_PI;                          // substract 180deg

   return f32Temp;
}

/* PRQA S 1505 2 *//* library fcn*/
LOCAL FUNC(float32, ObjFusn_CODE) jk_fusion_atan(float32 f32x)
{
   float32 f32Res;
   float32 f32argsq;
   float32 f32Tmp;

   if (f32x < JK_FUSION_MATH_ATAN_SQ2M1)
   {
      f32argsq = f32x * f32x;
      f32Res   = (JK_FUSION_MATH_ATAN_P1 * f32argsq) + JK_FUSION_MATH_ATAN_P0;
      f32Res   /= ((f32argsq + JK_FUSION_MATH_ATAN_Q1) * f32argsq) + JK_FUSION_MATH_ATAN_Q0;
      f32Res   *= f32x;
   } 
   else if (f32x > JK_FUSION_MATH_ATAN_SQ2P1)
   {
      f32x      = FLT_ONE / f32x;
      f32argsq = f32x * f32x; 
      f32Res   = (JK_FUSION_MATH_ATAN_P1 * f32argsq) + JK_FUSION_MATH_ATAN_P0;
      f32Res   /= ((f32argsq + JK_FUSION_MATH_ATAN_Q1) * f32argsq) + JK_FUSION_MATH_ATAN_Q0;
      f32Res   *= f32x;
      f32Res = JK_FUSION_MATH_PI_HALF - f32Res;
   }
   else
   {
      f32Tmp = (f32x - FLT_ONE) / (f32x + FLT_ONE);
      f32argsq = f32Tmp * f32Tmp; 
      f32x     = f32Tmp;
      f32Res   = (JK_FUSION_MATH_ATAN_P1 * f32argsq) + JK_FUSION_MATH_ATAN_P0;
      f32Res   /= ((f32argsq + JK_FUSION_MATH_ATAN_Q1) * f32argsq) + JK_FUSION_MATH_ATAN_Q0;
      f32Res   *= f32x;
      f32Res   += JK_FUSION_MATH_PI_QUARTER;
   }

   return f32Res;
}

/* PRQA S 1503 2 *//* library fcn*/
FUNC(float32, ObjFusn_CODE) jk_fusion_atan2(const float32 f32y, const float32 f32x) 
{
   float32 f32Res;
   const boolean bIsInfY   = jk_fusion_isInf(f32y);
   const boolean bIsInfX   = jk_fusion_isInf(f32x);
   const boolean bIsZeroX  = jk_fusion_isZero(f32x);
   const boolean bIsZeroY  = jk_fusion_isZero(f32y);
   const boolean bSignBitX = jk_fusion_signbit(f32x);

   if (TRUE == bIsInfY)
   {
      if ((TRUE == bIsInfX) && (TRUE == bSignBitX))
      {
         f32Res = jk_fusion_copysign(JK_FUSION_MATH_PI_THREE_QUARTER, f32y);
      }
      else if((TRUE == bIsInfX) && (FALSE == bSignBitX))
      {
         f32Res = jk_fusion_copysign(JK_FUSION_MATH_PI_QUARTER, f32y);
      }
      else
      {
         f32Res = jk_fusion_copysign( JK_FUSION_MATH_PI_HALF, f32y );
      }
   }
   else if (TRUE == bIsZeroX)
   {
      if (TRUE == bIsZeroY)
      {
         if (TRUE == bSignBitX)
         {
            /* y is +-0, x is -0, return +- pi */
            f32Res = jk_fusion_copysign(JK_FUSION_MATH_PI, f32y);
         }
         else
         {
            f32Res = f32y;
         }
      }
      else
      {
         f32Res = jk_fusion_copysign(JK_FUSION_MATH_PI_HALF, f32y);
      }
   }
   else if (f32x < FLT_ZERO)
   {
      if (TRUE == bIsZeroY)
      {
         f32Res = jk_fusion_copysign(JK_FUSION_MATH_PI, f32y);
      }
      else if (f32y > FLT_ZERO)
      {
         f32Res = JK_FUSION_MATH_PI - jk_fusion_atan(-f32y / f32x);
      }
      else
      {
         f32Res = -JK_FUSION_MATH_PI + jk_fusion_atan(f32y / f32x);
      }
   }
   else if (f32y > FLT_ZERO)
   {
      f32Res = jk_fusion_atan(f32y / f32x);
   }
   else
   {
      f32Res = -jk_fusion_atan(-f32y / f32x);
   }

   return f32Res;
}

FUNC(float32, ObjFusn_CODE) jk_fusion_pow2(const float32 f32x) /* PRQA S 1503 *//* library fcn*/
{
   return (f32x * f32x);
}

/* -----------------------------------------------------------------------*/
/**
* \typedef          MAX
*
* \brief               maximum of two numbers
*
*-----------------------------------------------------------------------*/

/* PRQA S 1532 2 *//* Library Function */
FUNC(uint16, ObjFusn_CODE) jk_fusion_max_U16(const uint16 A, const uint16 B)
{
   /* PRQA S 3492 1 *//* Tertiary operator outside of macro: function is inlined */
   return ((A > B) ? A : B);
}

FUNC(float32, ObjFusn_CODE) jk_fusion_max_F32(const float32 A, const float32 B)
{
   /* PRQA S 3492 1 *//* Tertiary operator outside of macro: function is inlined */
   return ((A > B) ? A : B);
}

FUNC(float32, ObjFusn_CODE) jk_fusion_min_F32(const float32 A, const float32 B)
{
   /* PRQA S 3492 1 *//* Tertiary operator outside of macro: function is inlined */
   return ((A < B) ? A : B);
}

/* -----------------------------------------------------------------------*/
/**
* \typedef          MIN
*
* \brief               minimum of two numbers
*
* -----------------------------------------------------------------------*/

/* PRQA S 1532 2 *//* Library Function */
FUNC(uint8, ObjFusn_CODE) jk_fusion_min_U8(const uint8 A, const uint8 B)
{
   /* PRQA S 3492 1 *//* Tertiary operator outside of macro: function is inlined */
   return ((A < B) ? A : B);
}

FUNC(uint16, ObjFusn_CODE) jk_fusion_min_U16(const uint16 A, const uint16 B)
{
   /* PRQA S 3492 1 *//* Tertiary operator outside of macro: function is inlined */
   return ((A < B) ? A : B);
}

/* -----------------------------------------------------------------------*/
/**
* \typedef          MINMAX
*
* \brief            number inside boundary
*
*/
/* -----------------------------------------------------------------------*/

/* PRQA S 1503 2 *//* Library Function */
FUNC(sint16, ObjFusn_CODE) jk_fusion_min_max_S16(const sint16 A, const sint16 minVal, const sint16 maxVal)
{
   /* PRQA S 3492 1 *//* Tertiary operator outside of macro: function is inlined */
   return ((A < minVal) ? minVal : ((A > maxVal) ? maxVal : A));
}

FUNC(float32, ObjFusn_CODE) jk_fusion_min_max_F32(const float32 A, const float32 minVal, const float32 maxVal)
{
   /* PRQA S 3492 1 *//* Tertiary operator outside of macro: function is inlined */
   return ((A < minVal) ? minVal : ((A > maxVal) ? maxVal : A));
}

/* PRQA S 1532 2 *//* Library Function */
FUNC(uint32, ObjFusn_CODE) jk_fusion_min_max_U32(const uint32 A, const uint32 minVal, const uint32 maxVal)
{
   /* PRQA S 3492 1 *//* Tertiary operator outside of macro: function is inlined */
   return ((A < minVal) ? minVal : ((A > maxVal) ? maxVal : A));
}

LOCAL FUNC(boolean, ObjFusn_CODE) jk_fusion_signbit(const float32 f32x)
{
   boolean bRes;

   /* PRQA S 0310 1 *//* Cast to Union type required */
   if (((((const JkObjFusn_f32UnionType *)&f32x)->u32Val) & JK_FUSION_MATH_FLOAT32_SIGN_BIT_MASK) == JK_FUSION_MATH_FLOAT32_SIGN_BIT_MASK)
   {
      bRes = TRUE;
   }
   else
   {
      bRes = FALSE;
   }

   return bRes;
}

LOCAL FUNC(uint32, ObjFusn_CODE) jk_fusion_mant(const float32 f32x)
{
   /* Extract lower 23 Bits */
   /* PRQA S 0310 1 *//* Cast to Union type required */
   return ((((const JkObjFusn_f32UnionType *)&f32x)->u32Val) & JK_FUSION_MATH_FLOAT32_MANTISSA_MASK);
}

LOCAL FUNC(float32, ObjFusn_CODE) jk_fusion_pack(const boolean bSign, const uint32 u32Exp, const uint32 u32Mant) 
{
   /* PRQA S 0759 2 *//* Union required here */
   JkObjFusn_f32UnionType uf32Union;   /* PRQA S 3204 */ /* union members are modified */

   uf32Union.u32Val = ((uint32)bSign << JK_FUSION_MATH_FLOAT32_SIGN_BIT_POSITION) | 
                      ((u32Exp & JK_FUSION_MATH_FLOAT32_EXP_MASK_INF) << JK_FUSION_MATH_FLOAT32_MANTISSA_NUM_BITS) | 
                       (u32Mant & (JK_FUSION_MATH_FLOAT32_MANT_ADD_IMPLICIT_ONE - 1u));
   return uf32Union.f32Val;
}

LOCAL FUNC(boolean, ObjFusn_CODE) jk_fusion_isZero(const float32 f32x)
{
   boolean bResult;

   /* PRQA S 0310 1 *//* Cast to Union type required */
   if ((((const JkObjFusn_f32UnionType *)&f32x)->u32Val & 
         (JK_FUSION_MATH_FLOAT32_MANTISSA_MASK | JK_FUSION_MATH_FLOAT32_EXP_MASK)) == 0u)
   {
      bResult = TRUE;
   }
   else
   {
      bResult = FALSE;
   }

   return bResult;
}

#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"
/**
* \}
*/
