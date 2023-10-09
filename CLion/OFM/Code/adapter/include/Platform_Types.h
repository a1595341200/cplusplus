/*************************************************************************

AUTOLIV ELECTRONIC document.

-------------------------------------

DUPLICATION or DISCLOSURE PROHIBITED without prior written consent

**************************************************************************

Current revision: $Revision: 1.1 $
Checked in:       $Date: 2017/01/27 08:51:14EST $

*************************************************************************/
/*****************************************************************************/
/* PLATFORM_TYPES.H v5.2.0A13098                                             */
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
#ifndef _PLATFORM_TYPES_H_
#define _PLATFORM_TYPES_H_

#ifdef __cplusplus
extern "C" {
#endif
/*****************************************************************************/
/* GLOBAL DEFINITIONS                                                        */
/*****************************************************************************/
#define CPU_TYPE_8          8
#define CPU_TYPE_16         16
#define CPU_TYPE_32         32

#define MSB_FIRST           0
#define LSB_FIRST           1

#define HIGH_BYTE_FIRST     0
#define LOW_BYTE_FIRST      1

#ifndef TRUE
  #define TRUE              1
#endif

#ifndef FALSE
  #define FALSE             0
#endif

/*****************************************************************************/
/* REGISTER WIDTH                                                            */
/*****************************************************************************/
#define CPU_TYPE            CPU_TYPE_32

/*****************************************************************************/
/* ENDIANESS                                                                 */
/*****************************************************************************/
#define CPU_BIT_ORDER       LSB_FIRST

#define CPU_BYTE_ORDER      HIGH_BYTE_FIRST

/*****************************************************************************/
/* TYPE DEFINITIONS                                                          */
/*****************************************************************************/
typedef unsigned char       boolean;

typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned int        uint32;

typedef signed char         sint8;
typedef signed short        sint16;
typedef signed int          sint32;

typedef unsigned int        uint8_least;
typedef unsigned int        uint16_least;
typedef unsigned int        uint32_least;

typedef signed int          sint8_least;
typedef signed int          sint16_least;
typedef signed int          sint32_least;

typedef float               float32;
typedef double              float64;

/*************************************************************************
Evolution of the component

Created by : E. Kagan

$Log: Platform_Types.h  $
Revision 1.1 2017/01/27 08:51:14EST Eugene Kagan (eugene.kagan) 
Initial revision
Member added to project /ADS/Software/Platforms/Mid/Arch02/Integrations/XC90AEA/SwIntegration/Platform/Implementation/Public/project.pj
Revision 1.1 2016/11/29 11:16:22EST Eugene Kagan (eugene.kagan) 
Initial revision
Member added to project /ADS/Software/Platforms/Mid/Arch02/Integrations/Prototype/SwIntegration/Platform/Implementation/Public/project.pj
Revision 1.1 2016/08/10 10:54:00EDT Eugene Kagan (eugene.kagan) 
Initial revision
Member added to project /ADS/Software/Platforms/Mid/Arch02/Integrations/Prototype/SwIntegration/Platform/Public/project.pj
Revision 1.1 2015/08/13 09:35:22EDT Eugene Kagan (eugene.kagan) 
Initial revision
Member added to project /ADS/Platforms/Mid/Architecture01/XC90AEA/SwIntegration/Platform/Implementation/Public/project.pj
Revision 1.1 2014/10/17 09:16:58EDT Eugene Kagan (ekagan) 
Initial revision
Member added to project e:/FoundationLibrary/UtilityLibrary/ToolLibrary/MBCGUtilities/Test/TestModel/MBCG/GlobalDataDictionary/Source/Platform/Public/project.pj
Revision 1.1 2013/04/10 19:34:40EDT Eugene Kagan (ekagan) 
Initial revision
Member added to project e:/FoundationLibrary/UtilityLibrary/ToolLibrary/MBCGUtilities/Test/TestModel/MBCG/Models/GlobalDataDictionary/Source/project.pj
Revision 1.1 2012/03/05 07:50:09EST Eugene Kagan (ekagan) 
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Views/Source/Cmn/Platform/Public/Public.pj
Revision 1.1 2012/02/17 08:03:26EST Eugene Kagan (ekagan) 
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Source/PreRelease/Haima/Cmn/Platform/Public/project.pj
Revision 1.1 2012/01/18 15:08:29EST Daniel Krause (dkrause) 
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Source/PreRelease/Haima/Cmn/SysCmn/Public/project.pj
Revision 1.1 2011/11/11 07:26:00EST Eugene Kagan (ekagan) 
Initial revision
Member added to project e:/MKSProjects/Domain_Controller/Customer_Specific/Haima/SC00/Source/PreRelease/Haima/Cmn/SysCmn/Source/project.pj

*************************************************************************/
#ifdef __cplusplus
}
#endif
    
#endif /* _PLATFORM_TYPES_H_ */
