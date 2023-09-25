/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_Version.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Type definition and accessor for object fusion version
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

#ifndef JKOBJFUSN_VERSION_H
#define JKOBJFUSN_VERSION_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
   
/*==================[macros]================================================*/
   
/** @name branch ID enumeration */
/** mainline */
#define JKOBJFUSN_VERSION_SW_BRANCHID_MAINLINE       (0u)
/** Mid Platform Branch */
#define JKOBJFUSN_VERSION_SW_BRANCHID_MIDPLATFORM    (1u)
/** undefined */
#define JKOBJFUSN_VERSION_SW_BRANCHID_UNDEFINED      (255u)
/** @} */

/** @name config ID enumeration */
/** HPF */
#define JKOBJFUSN_VERSION_SW_CONFIGID_HPF        (0u)
/** MPF */
#define JKOBJFUSN_VERSION_SW_CONFIGID_MPF        (1u)
/** undefined */
#define JKOBJFUSN_VERSION_SW_CONFIGID_UNDEFINED  (255u)
/** @} */

/*==================[type definitions]======================================*/
/** Version and configuration information
 */
typedef struct JkObjFusn_VersionTypeTag
{
   uint8 sw_branchID;        /** branch ID (0=mainline/...) */
   uint8 sw_major_version;   /** major version number */
   uint8 sw_minor_version;   /** minor version number */
   uint8 sw_patch_version;   /** patch version number */
   uint8 sw_minor_patch_version;   /** minor patch version number */
   uint8 sw_configID;        /** configuration ID (HPF/MPF/...) */
} JkObjFusn_VersionType;

/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(boolean, ObjFusn_CODE) Fusion_fill_Version(CONSTP2VAR(JkObjFusn_VersionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pVersion);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif // JKOBJFUSN_VERSION_H
/*==================[end of file]===========================================*/

/** @} */
