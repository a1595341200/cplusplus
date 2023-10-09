/*************************************************************************

AUTOLIV ELECTRONIC document.

-------------------------------------

DUPLICATION or DISCLOSURE PROHIBITED without prior written consent

******************************************************************************/
/* PRQA S 0288 ++ */
/*
 * Explanation:
 *    Disabled for MKS keywords
 */
/*
Current revision: $Revision: 1.1 $
Checked in:       $Date: 2017/01/27 08:51:13EST $
*/
/* PRQA S 0288 -- */
/*****************************************************************************/
/*****************************************************************************/
/* COMPILER.H v5.2.0A13098                                                   */
/*                                                                           */
/* Copyright (c) 2008-2013 Texas Instruments Incorporated                    */
/* http://www.ti.com/                                                        */
/*                                                                           */
/*  Redistribution and  use in source  and binary forms, with  or without    */
/*  modification,  are permitted provided  that the  following conditions    */
/*  are met:                                                                 */
/*                                                                           */
/*     Redistributions  of source  code must  retain the  above copyright    */
/*     notice, this list of conditions and the following disclaimer.         */
/*                                                                           */
/*     Redistributions in binary form  must reproduce the above copyright    */
/*     notice, this  list of conditions  and the following  disclaimer in    */
/*     the  documentation  and/or   other  materials  provided  with  the    */
/*     distribution.                                                         */
/*                                                                           */
/*     Neither the  name of Texas Instruments Incorporated  nor the names    */
/*     of its  contributors may  be used to  endorse or  promote products    */
/*     derived  from   this  software  without   specific  prior  written    */
/*     permission.                                                           */
/*                                                                           */
/*  THIS SOFTWARE  IS PROVIDED BY THE COPYRIGHT  HOLDERS AND CONTRIBUTORS    */
/*  "AS IS"  AND ANY  EXPRESS OR IMPLIED  WARRANTIES, INCLUDING,  BUT NOT    */
/*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR    */
/*  A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT    */
/*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,    */
/*  SPECIAL,  EXEMPLARY,  OR CONSEQUENTIAL  DAMAGES  (INCLUDING, BUT  NOT    */
/*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,    */
/*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY    */
/*  THEORY OF  LIABILITY, WHETHER IN CONTRACT, STRICT  LIABILITY, OR TORT    */
/*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE    */
/*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.     */
/*                                                                           */
/*****************************************************************************/
#ifndef _COMPILER_H_
#define _COMPILER_H_

#ifdef __cplusplus
extern "C" {
#endif
    
#include <Compiler_Cfg.h>

#define _TEXAS_INSTRUMENTS_C_TMS470_
#define _TEXAS_INSTRUMENTS_C_ARM_

#define COMPILER_MAJOR_VERSION __TI_COMPILER_MAJOR_VERSION__
#define COMPILER_MINOR_VERSION __TI_COMPILER_MINOR_VERSION__
#define COMPILER_PATCH_VERSION __TI_COMPILER_PATCH_VERSION__

/*****************************************************************************/
/* Define:       AUTOMATIC                                                   */
/* Description:  Used for the declaration of local pointers                  */
/*****************************************************************************/
#define AUTOMATIC

/*****************************************************************************/
/* Define:       TYPEDEF                                                     */
/* Description:  The memory class shall be used within type definitions,     */
/*               where no memory qualifier can be specified                  */
/*****************************************************************************/
#define TYPEDEF

/*****************************************************************************/
/* Define:       STATIC                                                      */
/* Description:  Abstraction of the keyword static                           */
/*****************************************************************************/
#define STATIC static

/*****************************************************************************/
/* Define:       NULL_PTR                                                    */
/* Description:  Void pointer to 0                                           */
/*****************************************************************************/
#define NULL_PTR ((void *)0)

/*****************************************************************************/
/* Define:       INLINE                                                      */
/* Description:  Abstraction of the keyword inline                           */
/*****************************************************************************/
#if _MICROTEC == 1 /* MABX */
#define INLINE inline
#else
#define INLINE __inline
#endif

/*****************************************************************************/
/* Define:       LOCAL_INLINE                                                */
/* Description:  Abstraction of keyword inline with static scope.            */
/*****************************************************************************/
#define LOCAL_INLINE static __inline

/*****************************************************************************/
/* Macro name: FUNC                                                          */
/* Parameters: rettype     return type of the function                       */
/*             memclass    classification of the function itself             */
/*****************************************************************************/
#define FUNC(rettype, memclass) rettype memclass

/*****************************************************************************/
/* Macro name: P2VAR                                                         */
/* Parameters: ptrtype     type of the referenced variable                   */
/*             memclass    classification of the pointer's variable itself   */
/*             ptrclass    defines the classification of the pointer's       */
/*                         distance                                          */
/*****************************************************************************/
#define P2VAR(ptrtype, memclass, ptrclass) ptrclass ptrtype * memclass

/*****************************************************************************/
/* Macro name: P2CONST                                                       */
/* Parameters: ptrtype     type of the referenced constant                   */
/*             memclass    classification of the pointer's varaible itself   */
/*             ptrclass    defines the classification of the pointer's       */
/*                         distance                                          */
/*****************************************************************************/
#define P2CONST(ptrtype, memclass, ptrclass) const ptrclass ptrtype * memclass

/*****************************************************************************/
/* Macro name: CONSTP2VAR                                                    */
/* Parameters: ptrtype     type of the referenced variable                   */
/*             memclass    classification of the pointer's constant itself   */
/*             ptrclass    defines the classification of the pointer's       */
/*                         distance                                          */
/*****************************************************************************/
#define CONSTP2VAR(ptrtype, memclass, ptrclass) ptrclass ptrtype * const memclass

/*****************************************************************************/
/* Macro name: CONSTP2CONST                                                  */
/* Parameters: ptrtype     type of the referenced constant                   */
/*             memclass    classification of the pointer's constant itself   */
/*             ptrclass    defines the classification of the pointer's       */
/*                         distance                                          */
/*****************************************************************************/
#define CONSTP2CONST(ptrtype, memclass, ptrclass) const memclass ptrtype * const ptrclass

/*****************************************************************************/
/* Macro name: P2FUNC                                                        */
/* Parameters: rettype     return type of the function                       */
/*             ptrclass    defines the classification of the pointer's       */
/*                         distance                                          */
/*             fctname     function name respectively name of the defined    */
/*                         type                                              */
/*****************************************************************************/
#define P2FUNC(rettype, ptrclass, fctname) ptrclass rettype (*fctname)

/*****************************************************************************/
/* Macro name: FUNC_P2CONST                                                  */
/* Parameters: rettype     return type of the function                       */
/*             ptrclass    defines the classification of the pointer's       */
/*                         distance                                          */
/*             memclass    classification of the function itself             */
/*****************************************************************************/
#define FUNC_P2CONST(rettype, ptrclass, memclass) const ptrclass rettype * memclass

/*****************************************************************************/
/* Macro name: FUNC_P2CONST                                                  */
/* Parameters: rettype     return type of the function                       */
/*             ptrclass    defines the classification of the pointer's       */
/*                         distance                                          */
/*             memclass    classification of the function itself             */
/*****************************************************************************/
#define FUNC_P2VAR(rettype, ptrclass, memclass) ptrclass rettype * memclass

/*****************************************************************************/
/* Macro name: CONST                                                         */
/* Parameters: consttype   type of the constant                              */
/*             memclass    classification of the constant itself             */
/*****************************************************************************/
#define CONST(consttype, memclass) memclass const consttype

/*****************************************************************************/
/* Macro name: VAR                                                           */
/* Parameters: vartype     type of the variable                              */
/*             memclass    classification of the variable itself             */
/*****************************************************************************/
#define VAR(vartype, memclass) memclass vartype

/******************************************************************************
Evolution of the component
******************************************************************************/
/* PRQA S 0288 ++ */
/*
 * Explanation:
 *    Disabled for MKS keywords
 */
/*
$Log: Compiler.h  $
Revision 1.1 2017/01/27 08:51:13EST Eugene Kagan (eugene.kagan) 
Initial revision
Member added to project /ADS/Software/Platforms/Mid/Arch02/Integrations/XC90AEA/SwIntegration/Platform/Implementation/Public/project.pj
Revision 1.1 2016/11/29 11:16:22EST Eugene Kagan (eugene.kagan) 
Initial revision
Member added to project /ADS/Software/Platforms/Mid/Arch02/Integrations/Prototype/SwIntegration/Platform/Implementation/Public/project.pj
Revision 1.1 2016/08/18 06:51:19EDT Eugene Kagan (eugene.kagan) 
Initial revision
Member added to project /ADS/Software/Platforms/Mid/Arch02/Integrations/Prototype/SwIntegration/Platform/Public/project.pj
Revision 1.1 2015/11/19 10:12:40EST Eugene Kagan (eugene.kagan)
Initial revision
Member added to project /ADS/Platforms/Mid/Architecture01/XC90AEA/SwIntegration/Platform/Implementation/Public/project.pj
Revision 1.1 2014/11/25 09:49:22EST Eugene Kagan (ekagan)
Initial revision
Member added to project e:/Automated_Driving_System_Library/Projects/MY19/VolvoS60/Views/Models/Devel/GlobalDataDictionary/Source/Platform/Public/project.pj
Revision 1.2 2012/08/02 14:59:43EDT Eugene Kagan (ekagan)
QAC update for NULL_PTR
Revision 1.1 2012/03/05 07:50:08EST Eugene Kagan (ekagan)
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Views/Source/Cmn/Platform/Public/Public.pj
Revision 1.1 2012/02/17 08:03:26EST Eugene Kagan (ekagan)
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Source/PreRelease/Haima/Cmn/Platform/Public/project.pj
Revision 1.3 2012/01/30 17:16:04EST Eugene Kagan (ekagan)
include path
Revision 1.2 2012/01/18 21:42:41EST Daniel Krause (dkrause)
Add Public Directory
Revision 1.1 2012/01/18 15:08:25EST Daniel Krause (dkrause)
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Source/PreRelease/Haima/Cmn/SysCmn/Public/project.pj
Revision 1.1 2011/11/21 22:37:00EST Eugene Kagan (ekagan)
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Source/PreRelease/Haima/Cmn/SysCmn/Source/project.pj
*/
/* PRQA S 0288 -- */
/*****************************************************************************/
#ifdef __cplusplus
}
#endif
    
#endif /* _COMPILER_H_ */
