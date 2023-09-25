/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_gainEstimation.h
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

#ifndef JK_GAINESTIMATION_H
#define JK_GAINESTIMATION_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "JkObjFusn_TrackableListType.h"
#include "JkObjFusn_EgoMotionType.h"
#include "JkObjFusn_ConfigAlgorithm.h"

/*==================[macros]================================================*/
#if JK_GAIN_ESTIMATION_ENABLE_GAIN_CALCULATION == STD_ON

/** number of radar cylces after which covariance is adapted  - required by trackmerge*/
#define JK_GAIN_RADAR_CYCLES_RESET           (5u)

/*==================[type definitions]======================================*/  
/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/

#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
FUNC(uint32, ObjFusn_CODE) limitGain(const uint16 u16Class, CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Gain,
                                             CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32GainVar);


 /**
 * @fn   gain_update(JkObjFusn_TrackableType * const pTrkbl, JkObjFusn_TrackableType * const pMeas, const f32_t f32Latency)
 *
 * @brief   calculates gain / updates gain information, based on if pMeas is camera (1) or radar (2) the following action are taken:
 *             camera:
 *             (1a) radar available and same camera measurement -> calculate gain -> update gain (since same camera - gain should be available before)
 *             (1b) radar available but differet camera id or first time -> calculate gain -> (re-)initialize gain
 *             (in all cases (1)) compensate measurement using gain_compensation(): rotate P-matrix & adapt
 *             radar measurement + camera updated track in last cycle :
 *             (2a) no gain was calculated before or new radar measurement updating this track -> calculate gain -> and compensate TRACK -> reset acceleration
 *             (2b) gain was calculated before using this radar measurement, but the last cycles no update was performed ->  increase gain (since it was shrunk by camera only)
 *
 * @param   [in,out] pTrkbl   JkObjFusn_TrackableType * const, track 
 * @param   [in,out] pMeas    JkObjFusn_TrackableType * const, measurement 
 * @param   f32Latency        f32_t, current latency of trackable (to get ego motion)
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
FUNC(uint32, ObjFusn_CODE) gain_update(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
                                          CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas,
                                          CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);
/**
 * @fn   gain_prediction(JkObjFusn_TrackableType * const pTrkbl, const f32_t f32dt)
 *
 * @brief   Predicts gain value with time f32dt - increases variance due to model uncertainty
 *
 * @param   [in,out] pTrkbl   JkObjFusn_TrackableType * const, track
 * @param   f32Latency        f32_t, prediction time
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
FUNC(uint32, ObjFusn_CODE) gain_prediction(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
                                               const float32 f32dt);

/**
 * @fn   gain_estimation(JkObjFusn_TrackableType const * const pTrkbl, JkObjFusn_TrackableType const * const pMeas, f32_t * const f32Gain, f32_t * const f32GainVar);
 *
 * @brief   calculates gain between two trackables, but does not change either of them 
 *
 * @param   [in] pTrkbl       JkObjFusn_TrackableType * const, Trackable which contains radar measurement (free of gain - radar track or radar measurement)
 * @param   [in] pMeas        JkObjFusn_TrackableType * const, Trackable which has gain and should be compensated (usually measurement, but can be camera-only track)
 * @param   [out] f32Gain     f32_t, output of estimated gain
 * @param   [out] f32GainVar  f32_t, output of estimated gain variance
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
FUNC(uint32, ObjFusn_CODE) gain_estimation(CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
   CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMeas, CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32Gain,
   CONSTP2VAR(float32, AUTOMATIC, ObjFusn_VAR_NOINIT) pf32GainVar);

/**
 * @fn   gain_compensation(JkObjFusn_TrackableType * const pTrkbl, f32_t f32Gain, f32_t f32GainVar, const f32_t f32Latency, bool_t bIncreaseP);
 *
 * @brief   compensates state and covaraince of this trackable 
 *             states (vecX):
 *             if gain is available, all states are compensated. E.g. if gain is 0.8 and xPos of pTrkbl is 100m -> xPos afterwards is 120m 
 *             covariance (matP):
 *             matP is roated in radial distance and covariance is increased before if bIncreaseP is TRUE
 *             
 *
 * @param   [in,out] pTrkbl       JkObjFusn_TrackableType * const, Trackable which contains radar measurement (free of gain - radar track or radar measurement)
 * @param   [in] f32Gain     f32_t, estimated gain for comensation
 * @param   [in] f32GainVar  f32_t, estimated gain variance for compensation (only required if bIncreaseP == TRUE)
 * @param   [in] f32Latency  f32_t, latency of current Trackable -> required to get correct ego motion for transformation in relative states
 * @param   [in] f32RadDist  f32_t, radial distance from camera to target (if calculated in gain estimation)
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
FUNC(uint32, ObjFusn_CODE) gain_compensation(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pOutTrkbl,
		                                      CONSTP2CONST(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,    
                                            const float32 f32Gain, const float32 f32GainVar,     
                                            CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);
/**
 * @fn   gain_PIncrease(JkObjFusn_TrackableType * const pTrkbl, f32_t f32Gain, f32_t f32GainVar, f32_t f32Latency);
 *
 * @brief   increase P matrix, based on accurancy of gain -> e.g. required to expand P matrix, if fused track is updated by camera only for a long time
 *             
 *
 * @param   [in,out] pTrkbl       JkObjFusn_TrackableType * const, Trackable which P-matrix should be increased
 * @param   [in] f32GainVar  f32_t, estimated gain variance for compensation (only required if bIncreaseP == TRUE)
 * @param   [in] f32Latency  f32_t, latency of current Trackable -> required to get correct ego motion for transformation in relative states
 *
 * @return  JKOBJFUSN_ERROR_NOERROR if no error occured and error code otherwise.
 */
FUNC(uint32, ObjFusn_CODE) gain_PIncrease(CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) pTrkbl,
                                             const float32 f32GainVar, 
                                             CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

#endif /* JK_GAIN_ESTIMATION_ENABLE_GAIN == STD_ON */

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif /* JK_GAINESTIMATION_H */
/**
 * @}
 */
/*==================[end of file]===========================================*/
