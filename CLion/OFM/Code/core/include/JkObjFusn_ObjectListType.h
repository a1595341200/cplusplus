/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_TrackableListType.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: This is a structure definition file for the internal object fusion list 
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

#ifndef JKOBJFUSN_OBJECT_LIST_TYPE_H_
#define JKOBJFUSN_OBJECT_LIST_TYPE_H_

/*==================[inclusions]============================================*/
#include "Jk_common_types.h"
#include "JkObjFusn_ObjectListProps.h"
#include "JkObjFusn_TrackableType.h"

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

/** 
 * Object list for external Fusion interface
 */
typedef struct JkObjFusn_ObjectListTypeTag
{
   uint16      u16ListUpdateCounter;   /** Counter that is incremented whenever a module outputs an updated object (starting from 0, maximum value is 60.000, counter will overflow to 0 afterwards) */
   uint16      u16NumObjects;          /** Number of trackables which have a non-dying lifespan */
   uint32      u32SensorPattern;       /** Sensor pattern */
   float32     f32MeasurementLatency;  /** Common age [s] of all object estimations within the data array: positive latencies indicate outdated information; negative latencies indicate predicted object data. */
   JkObjFusn_TrackableType aTrackable[JKOBJFUSN_OBJECTLIST_U16NUMOBJECTS_MAX]; /** object array with limited capacity */
} JkObjFusn_ObjectListType;

#endif /**\} JKOBJFUSN_OBJECT_LIST_TYPE_H_ */
