/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: Jk_association.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: header file of Jk_association.c
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
#ifndef JK_ASSOCIATION_H
#define JK_ASSOCIATION_H

#ifdef	__cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/
#include "Jk_common_types.h" /* standard types (uint16, float32, etc.) */
#include "JkObjFusn_DistMatrix.h" /* distance score matrix */
#include "JkObjFusn_MatchIndex.h" /* association matrix */

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

/*****************************************************************************
   FORWARD DECLARATIONS
*****************************************************************************/

/*****************************************************************************
   TYPEDEFS
*****************************************************************************/

/*****************************************************************************
   VARIABLES
*****************************************************************************/

/*****************************************************************************
   FUNCTIONS
*****************************************************************************/

/*==================[external function declarations]========================*/
#define ObjFusn_START_SEC_CODE
#include "ObjFusn_MemMap.h"

FUNC(uint32, ObjFusn_CODE) jk_association_runAssociation(CONSTP2CONST(stDistMatrix_t, AUTOMATIC, ObjFusn_VAR_NOINIT) pSdist_mat,
	const float32 f32MatchGate,
   CONSTP2VAR(stMatchIndexArrayType, AUTOMATIC, ObjFusn_VAR_NOINIT) pMatchIndexArray);
#define ObjFusn_STOP_SEC_CODE
#include "ObjFusn_MemMap.h"

/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef	__cplusplus
}
#endif

#endif /* JK_ASSOCIATION_H */
/**@}==================[end of file]===========================================*/
