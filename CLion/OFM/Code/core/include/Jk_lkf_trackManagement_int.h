/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_lkf_trackManagement_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description:
	internal header file for Jk_lkf_trackManagement.c
	for unit tests define LOCAL prior to including this file!
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

#ifndef JK_LKF_TRACKMANAGEMENT_INT_H
#define JK_LKF_TRACKMANAGEMENT_INT_H

#include "Jk_lkf.h"
#include "JkObjFusn_EgoMotionType.h"

#ifdef __cplusplus
extern "C" {
#endif

#define JK_LKF_MILISEC_PER_SEC (1000.f)

#define JK_LKF_ASIL_PATTERN_MVS      (0x04u)
#define JK_LKF_ASIL_PATTERN_RADAR    (0x02u)

#define JK_LKF_CLEAR_ASIL_PATTERN_MVS      (0xFBu)
#define JK_LKF_CLEAR_ASIL_PATTERN_RADAR    (0xFDu)


#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

LOCAL FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_updateTrkbleInfos(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas,
                                                   CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pLkfTrkble, const uint16 u16SensPos);

LOCAL FUNC(uint32, ObjFusn_CODE) updateAge(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pLkfTrkble, const float32 f32CycleDt);

LOCAL FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_dropObjects(const boolean abMarkedForDeletion[]);

LOCAL FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_addTrkbl(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas, 
   const uint16 u16SensPos);

LOCAL FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_clearVisionInformation(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkTrkbl);

LOCAL FUNC(uint32, ObjFusn_CODE) lkfTrackManagement_clearRadarInformation(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pJkTrkbl);

LOCAL FUNC(void, ObjFusn_CODE) lkfTrackManagement_clearVisionInformationFromList(const uint16 u16SensorID, 
   const uint16 u16SensPos, const uint32 u32SensPattern);

/** increase P on diagonal */
LOCAL FUNC(void, ObjFusn_CODE) lkfTrackManagement_increaseDiagonalP(CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) matP);


#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/* begin: getter/setter for unit testing */
#ifdef UNITTEST
LOCAL JkObjFusn_TrackableListType * accessTrkMgmtTrackList(void);
#endif /* UNITTEST */
/* end: getter/setter for unit testing */

#ifdef __cplusplus
}
#endif

#endif /* JK_LKF_TRACKMANAGEMENT_INT_H */

/** @} */
