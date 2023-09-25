/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_Version.c
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Accessor for object fusion version
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
#include "JkObjFusn_Version_int.h"
#include "JkObjFusn_ErrorCodes.h"
#include "Jk_common_types.h"

/**
 * @brief Get version and configuration information
 *
 * @param pVersion pointer to output structure
 * 
 * @return TRUE (ok) or FALSE (error occured)
 */
#define ObjFusn_START_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"
FUNC(boolean, ObjFusn_CODE) Fusion_fill_Version(CONSTP2VAR(JkObjFusn_VersionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pVersion) /* PRQA S 1503 *//* external interface function */
{
   boolean bSuccess = FALSE;

#if (JK_RUNTIME_POINTER_CHECK == STD_ON)
   if (NULL_PTR == pVersion)
   {
      bSuccess = FALSE;
   }
   else
#endif
   {
      pVersion->sw_branchID = JKOBJFUSN_VERSION_SW_BRANCHID;
      pVersion->sw_major_version = JKOBJFUSN_VERSION_SW_MAJOR_VERSION;
      pVersion->sw_minor_version = JKOBJFUSN_VERSION_SW_MINOR_VERSION;
      pVersion->sw_patch_version = JKOBJFUSN_VERSION_SW_PATCH_VERSION;
      pVersion->sw_minor_patch_version = JKOBJFUSN_VERSION_SW_MINOR_PATCH_VERSION;
      pVersion->sw_configID = JKOBJFUSN_VERSION_SW_CONFIGID;

      bSuccess = TRUE; /* no errror */
   }

   return bSuccess;
}
#define ObjFusn_STOP_SEC_SLOW_CODE
#include "ObjFusn_MemMap.h"

/** \} */
