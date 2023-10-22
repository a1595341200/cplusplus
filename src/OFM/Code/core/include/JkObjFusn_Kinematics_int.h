/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_Kinematics_int.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description:
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

#ifndef JKOBJFUSN_KINEMATICS_INT_H
#define JKOBJFUSN_KINEMATICS_INT_H

#ifdef __cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "JkObjFusn_Kinematics.h"

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/
/*==================[forward declarations]==================================*/
/*==================[symbolic constants]====================================*/
/*==================[return codes]==========================================*/
/*==================[functions]=============================================*/


#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
/**
* @brief Implements ego motion compensation with yaw rate f32w for covariance matrix P_overGround = A * P_relative * A^T 
* in a sparse way (A is highly sparse)
*
* number of rows and columns must not exceed @ref JKOBJFUSN_MATRIX_SIZE
*/
LOCAL FUNC(uint32, ObjFusn_CODE) EgoCompensationRel2OverGroundP (CONSTP2VAR(stf32SymMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) _matP,
   CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) pEgoMotion);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/**
 * @brief transforms a single trackable from a trackable list  
 * this method is the same as the method "Kinematics_OverGround2Relative" from
 * JkObjFusn_Kinematics.h - the only difference is the fact that this method
 * works on trackables instead of object lists.
 * 
 * params see Kinematics_Relative2OverGround
 *
 * @return see Kinematics_Relative2OverGround
 */
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"
LOCAL FUNC(uint32, ObjFusn_CODE) OverGround2Relative(CONSTP2CONST(JkObjFusn_EgoMotionType, AUTOMATIC, ObjFusn_VAR_NOINIT) stEgoMotion,
	CONSTP2VAR(JkObjFusn_TrackableType, AUTOMATIC, ObjFusn_VAR_NOINIT) stTrkbl, const float32 f32deltaX);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef __cplusplus
}
#endif

#endif // JKOBJFUSN_KINEMATICS_INT_H
/*==================[end of file]===========================================*/
