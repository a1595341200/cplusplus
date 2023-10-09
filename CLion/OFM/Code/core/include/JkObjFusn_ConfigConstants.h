/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_ConfigConstants.h
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


#ifndef JKOBJFUSN_CONFIGCONSTANTS_H
#define JKOBJFUSN_CONFIGCONSTANTS_H

#ifdef	__cplusplus
extern "C" {
#endif

/*==================[inclusions]============================================*/

#include "JkObjFusn_ConfigAlgorithm.h"
#include "JkObjFusn_ConfigVehicle.h"
#include "JkObjFusn_TrackableConstants.h"

/*==================[macros]================================================*/


/**
 *    Maximum number of objects inputted in a single cycle assuming that
 *    both sensors provide inputs in the same cycle and no "fused" track is created
 */
/*
#define  JK_FUSION_MAX_SENSOR_OBJECTS \
   (JK_FUSION_MAX_OBJECTS_FRONT_RADAR + JK_FUSION_MAX_OBJECTS_FRONT_CAMERA + JK_FUSION_MAX_OBJECTS_CORNER_RADAR * 4)  //Ryan add
*/

#define  JK_FUSION_MAX_SENSOR_OBJECTS \
   (JK_FUSION_MAX_OBJECTS_FRONT_RADAR + JK_FUSION_MAX_OBJECTS_FRONT_CAMERA)



/* Maximum number of input objects */
#if (JK_FUSION_MAX_OBJECTS_FRONT_RADAR < JK_FUSION_MAX_OBJECTS_FRONT_CAMERA)
#define JK_FUSION_MAX_INPUT_OBJECTS     (JK_FUSION_MAX_OBJECTS_FRONT_CAMERA)
#else
#define JK_FUSION_MAX_INPUT_OBJECTS     (JK_FUSION_MAX_OBJECTS_FRONT_RADAR)
#endif

/*
 * Minimum size of internal trackable list assuming that max input objects are provided and not updated in the next cycle 
 */
#define JK_FUSION_TRACKABLE_LIST_SIZE      (JKOBJFUSN_TRACKABLE_U16LIFESPAN_NEW * JK_FUSION_MAX_SENSOR_OBJECTS)

#if (STD_ON == JK_OBJECT_SELCTION_ENABLE_OBJECT_SELECTION_FOR_OUTPUT)
#define JK_FUSION_MAX_OUTPUT_OBJECTS    (JK_OBJECT_SELECTION_NUMBER_OF_OUTPUT_OBJECTS)
#else
#define JK_FUSION_MAX_OUTPUT_OBJECTS    (JK_FUSION_TRACKABLE_LIST_SIZE)
#endif


/* 
 *    Minimum size of external object list interface. 
 *    Can be considered as max(max(number of radar, number of vision), number of output objects). 
 */
#if (JK_FUSION_MAX_INPUT_OBJECTS > JK_FUSION_MAX_OUTPUT_OBJECTS)
#define JK_FUSION_OBJECT_LIST_SIZE         (JK_FUSION_MAX_INPUT_OBJECTS)
#else
#define JK_FUSION_OBJECT_LIST_SIZE         (JK_FUSION_MAX_OUTPUT_OBJECTS)
#endif


 
/*==================[type definitions]======================================*/
/*==================[functions]============================================*/
/*==================[external function declarations]========================*/
/*==================[external constants]====================================*/
/*==================[external data]=========================================*/

#ifdef	__cplusplus
}
#endif

#endif /* JKOBJFUSN_CONFIGCONSTANTS_H */
/**@}==================[end of file]===========================================*/
