/*****************************************************************************

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
Checked in:       $Date: 2017/01/27 08:51:15EST $
*/
/* PRQA S 0288 -- */
/*****************************************************************************/
/*****************************************************************************/
/* STD_TYPES.H v5.2.0A13098                                                  */
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
#ifndef STD_TYPES_H
#define STD_TYPES_H

/******************************************************************************
*  AUTOSAR Standard Types
*  Document reference: AUTOSAR_SWS_PlatformTypes.pdf
*
*                         Non COM SW modules
*                                 |
*                            Std_Types.h
*                             |       |
*                 Platform_Types.h   Compiler.h
*                                        |
*                                  Compiler_Cfg.h
******************************************************************************/
#include "Platform_Types.h"
#include "Compiler.h"

/******************************************************************************
Extension to AUTOSAR Standard Types for 64bit variables
******************************************************************************/
typedef signed long long sint64;
typedef unsigned long long uint64;

/******************************************************************************
   TYPE DEFINITIONS
******************************************************************************/
typedef uint8 Std_ReturnType;

typedef struct
{
    uint16 vendorID;
    uint16 moduleID;
    uint8  instanceID;
    uint8  sw_major_version;
    uint8  sw_minor_version;
    uint8  sw_patch_version;
} Std_VersionInfoType;

/*****************************************************************************/
/* SYMBOL DEFINITIONS                                                        */
/*****************************************************************************/
#ifndef STATUSTYPEDEFINED
  #define STATUSTYPEDEFINED
  #define E_OK     0x00U

  typedef unsigned char StatusType;
#endif

#define E_NOT_OK   0x01U

#define STD_HIGH   0x01U  /* Physical state 5V or 3.3V */
#define STD_LOW    0x00U  /* Physical state 0v         */

#define STD_ACTIVE 0x01U  /* Logical state active */
#define STD_IDLE   0x00U  /* Logical state idle   */

#define STD_ON     0x01U
#define STD_OFF    0x00U

/******************************************************************************
Evolution of the component
******************************************************************************/
/* PRQA S 0288 ++ */
/*
 * Explanation:
 *    Disabled for MKS keywords
 */
/*
$Log: Std_Types.h  $
Revision 1.1 2017/01/27 08:51:15EST Eugene Kagan (eugene.kagan) 
Initial revision
Member added to project /ADS/Software/Platforms/Mid/Arch02/Integrations/XC90AEA/SwIntegration/Platform/Implementation/Public/project.pj
Revision 1.1 2016/11/29 11:16:22EST Eugene Kagan (eugene.kagan) 
Initial revision
Member added to project /ADS/Software/Platforms/Mid/Arch02/Integrations/Prototype/SwIntegration/Platform/Implementation/Public/project.pj
Revision 1.1 2016/08/18 06:51:19EDT Eugene Kagan (eugene.kagan) 
Initial revision
Member added to project /ADS/Software/Platforms/Mid/Arch02/Integrations/Prototype/SwIntegration/Platform/Public/project.pj
Revision 1.1 2015/08/13 09:35:24EDT Eugene Kagan (eugene.kagan)
Initial revision
Member added to project /ADS/Platforms/Mid/Architecture01/XC90AEA/SwIntegration/Platform/Implementation/Public/project.pj
Revision 1.1 2014/10/17 09:16:59EDT Eugene Kagan (ekagan)
Initial revision
Member added to project e:/FoundationLibrary/UtilityLibrary/ToolLibrary/MBCGUtilities/Test/TestModel/MBCG/GlobalDataDictionary/Source/Platform/Public/project.pj
Revision 1.1 2013/04/10 19:35:59EDT Eugene Kagan (ekagan)
Initial revision
Member added to project e:/FoundationLibrary/UtilityLibrary/ToolLibrary/MBCGUtilities/Test/TestModel/MBCG/Models/GlobalDataDictionary/Source/project.pj
Revision 1.2 2012/07/27 09:28:40EDT Eugene Kagan (ekagan)
Updates for QAC
Revision 1.1 2012/03/05 07:50:10EST Eugene Kagan (ekagan)
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Views/Source/Cmn/Platform/Public/Public.pj
Revision 1.1 2012/02/17 13:55:15EST Eugene Kagan (ekagan)
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Source/PreRelease/Haima/Cmn/Platform/Public/project.pj
Revision 1.1 2012/01/18 15:08:30EST Daniel Krause (dkrause)
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Source/PreRelease/Haima/Cmn/SysCmn/Public/project.pj
Revision 1.1 2011/12/02 12:18:50EST Eugene Kagan (ekagan)
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Source/PreRelease/Haima/Cmn/SysCmn/Source/project.pj
*/
/* PRQA S 0288 -- */
/*****************************************************************************/
    
#endif /* STD_TYPES_H */
