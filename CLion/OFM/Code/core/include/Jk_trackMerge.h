/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_trackMerge.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: public header for gain estimation
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

#ifndef JK_TRACKMERGE_H
#define JK_TRACKMERGE_H

#ifdef __cplusplus
extern "C" {
#endif


/*==================[inclusions]============================================*/
#include "JkObjFusn_TrackableListType.h"
#include "Jk_common_types.h"   /*uint16, float32*/
#include "JkObjFusn_EgoMotionType.h"
/*==================[macros]================================================*/
/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

/**
* @fn   trackMerge_mergeTracks(JkObjFusn_TrackableType * const pTrackList)
*
* @brief   postprocessing step to merge camera-only with radar-only
*          loops through TRK_List and fuses close camera-only and radar-only tracks based
*          on a modified distance, scaled by a factor (taking systematic camera error into account)
*
* @param   [in,out] pTrackList   JkObjFusn_TrackableListType * const, trackable list (usually TRK_LIST)
*
* @return  TRUE (ok) or FALSE (error occured)
*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) trackMerge_mergeTracks(CONSTP2VAR(JkObjFusn_TrackableListType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrackList,
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif /* JK_TRACKMERGE_H */
/**
 * @}
 */
/*==================[end of file]===========================================*/
