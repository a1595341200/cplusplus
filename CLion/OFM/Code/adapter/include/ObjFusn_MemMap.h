/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: ObjFusn_MemMap.h
* Author:  This file automatically generated
* Version: 1.00
* Date:  2021/08/11
* Description: Definition of memory map for component JK
* Others:
* Function List:
    1.��������
    2.��������
* History: 
    1.Date:
      Author:
      Modification:
    2.��������
**********************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif
    
#if defined ObjFusn_START_SEC_CODE
   #if defined JK_CODE_OPEN
      #error "ObjFusn_START_SEC_CODE: Close the former segment before opening a new one."
   #else
      #undef ObjFusn_START_SEC_CODE
      #define JK_CODE_OPEN
      #pragma code_seg(push, s1, "fusion_code")  
   #endif
#elif defined ObjFusn_STOP_SEC_CODE
   #undef ObjFusn_STOP_SEC_CODE
   #undef JK_CODE_OPEN
   #pragma code_seg(pop, s1)  
#elif defined ObjFusn_START_SEC_SLOW_CODE
   #if defined JK_CODE_OPEN
      #error "ObjFusn_START_SEC_SLOW_CODE: Close the former segment before opening a new one."
   #else
      #undef ObjFusn_START_SEC_SLOW_CODE
      #define JK_CODE_OPEN
      #pragma code_seg(push, s1, "fusion_code")  
   #endif
#elif defined ObjFusn_STOP_SEC_SLOW_CODE
   #undef ObjFusn_STOP_SEC_SLOW_CODE
   #undef JK_CODE_OPEN
   #pragma code_seg(pop, s1)  
#elif defined ObjFusn_START_SEC_CONV_CODE
   #if defined JK_CODE_OPEN
      #errorObjFusn_START_SEC_CONV_CODE
   #else
      #undef ObjFusn_START_SEC_CONV_CODE
      #define JK_CODE_OPEN
      #pragma code_seg(push, s1, "fusion_code")  
   #endif
#elif defined ObjFusn_STOP_SEC_CONV_CODE
   #undef ObjFusn_STOP_SEC_CONV_CODE
   #undef JK_CODE_OPEN
   #pragma code_seg(pop, s1)  
#elif defined ObjFusn_START_SEC_ROM
   #if defined JK_ROM_OPEN
      #error "ObjFusn_START_SEC_ROM: Close the former segment before opening a new one."
   #else
      #undef ObjFusn_START_SEC_ROM
      #define JK_ROM_OPEN
      #pragma const_seg(push, s2, "fusion_text") 
   #endif
#elif defined ObjFusn_STOP_SEC_ROM
   #undef ObjFusn_STOP_SEC_ROM
   #undef JK_ROM_OPEN
   #pragma const_seg(pop, s2) 
#elif defined ObjFusn_START_SEC_FUSI_CODE
   #if defined JK_FUSI_CODE_OPEN
      #error "ObjFusn_START_SEC_FUSI_CODE: Close the former segment before opening a new one."
   #else
      #undef ObjFusn_START_SEC_FUSI_CODE
      #define JK_FUSI_CODE_OPEN
      #pragma code_seg(push, s1, "fusion_code")  
   #endif
#elif defined ObjFusn_STOP_SEC_FUSI_CODE
   #undef ObjFusn_STOP_SEC_FUSI_CODE
   #undef JK_FUSI_CODE_OPEN
   #pragma code_seg(pop, s1)  
#elif defined ObjFusn_START_SEC_MATH_CODE
   #if defined JK_MATH_CODE_OPEN
      #error "ObjFusn_START_SEC_MATH_CODE: Close the former segment before opening a new one."
   #else
      #undef ObjFusn_START_SEC_MATH_CODE
      #define JK_MATH_CODE_OPEN
      #pragma code_seg(push, s1, "fusion_code") 
      #pragma auto_inline(on)
   #endif
#elif defined ObjFusn_STOP_SEC_MATH_CODE
   #undef ObjFusn_STOP_SEC_MATH_CODE
   #undef JK_MATH_CODE_OPEN
   #pragma auto_inline(off)
   #pragma code_seg(pop, s1) 
#elif defined ObjFusn_START_SEC_VAR8
   #if defined JK_VAR8_OPEN
      #error "ObjFusn_START_SEC_VAR8: Close the former segment before opening a new one."
   #else
      #undef ObjFusn_START_SEC_VAR8
      #define JK_VAR8_OPEN
      #pragma push_macro("section")
      // #pragma section( "fusion_data", read, write) //Owen modify
     // __declspec(allocate("fusion_data"))   //Ryan modify
   #endif
#elif defined ObjFusn_STOP_SEC_VAR8
   #undef ObjFusn_STOP_SEC_VAR8
   #undef JK_VAR8_OPEN
   #pragma pop_macro("section")
#elif defined ObjFusn_START_SEC_VAR16
   #if defined JK_VAR16_OPEN
      #error "ObjFusn_START_SEC_VAR16: Close the former segment before opening a new one."
   #else
      #undef ObjFusn_START_SEC_VAR16
      #define JK_VAR16_OPEN
      #pragma push_macro("section")
      // #pragma section( "fusion_data", read, write) //Owen modify
      // __declspec(allocate("fusion_data")) 
   #endif
#elif defined ObjFusn_STOP_SEC_VAR16
   #undef ObjFusn_STOP_SEC_VAR16
   #undef JK_VAR16_OPEN
   #pragma pop_macro("section")
#elif defined ObjFusn_START_SEC_VAR32
   #if defined JK_VAR32_OPEN
      #error "ObjFusn_START_SEC_VAR32: Close the former segment before opening a new one."
   #else
      #undef ObjFusn_START_SEC_VAR32
      #define JK_VAR32_OPEN
      #pragma push_macro("section")
      // #pragma section( "fusion_data", read, write) //Owen modify
     // __declspec(allocate("fusion_data")) 
   #endif
#elif defined ObjFusn_STOP_SEC_VAR32
   #undef ObjFusn_STOP_SEC_VAR32
   #undef JK_VAR32_OPEN
   #pragma pop_macro("section")
#elif defined ObjFusn_START_SEC_VAR_UNSPECIFIED
   #if defined JK_VAR_UNSPECIFIED_OPEN
      #error "ObjFusn_START_SEC_VAR_UNSPECIFIED: Close the former segment before opening a new one."
   #else
      #undef ObjFusn_START_SEC_VAR_UNSPECIFIED
      #define JK_VAR_UNSPECIFIED_OPEN
      #pragma push_macro("section")
      // #pragma section( "fusion_data", read, write) //Owen modify
    //  __declspec(allocate("fusion_data")) 
   #endif
#elif defined ObjFusn_STOP_SEC_VAR_UNSPECIFIED
   #undef ObjFusn_STOP_SEC_VAR_UNSPECIFIED
   #undef JK_VAR_UNSPECIFIED_OPEN
   #pragma pop_macro("section")
#else
   #error "ObjFusn_MemMap.h, unknown section"
#endif

#ifdef __cplusplus
}
#endif