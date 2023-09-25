/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_TrackableList.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
	This is a structure definition file for the internal object fusion list 
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

#ifndef JKOBJFUSN_TRACKABLELIST_H_
#define JKOBJFUSN_TRACKABLELIST_H_

#include "Jk_common_types.h"
#include "JkObjFusn_TrackableType.h"
#include "JkObjFusn_TrackableListProps.h"

/*==================[macros]================================================*/
/*==================[type definitions]======================================*/

/** Variable-sized list of trackables.
 * the trackable list represents object and track lists
 */
typedef struct JkObjFusn_TrackableListTypeTag
{
   uint16      u16ListUpdateCounter;   /** Counter that is incremented whenever a module outputs an updated object (starting from 0, maximum value is 60.000, counter will overflow to 0 afterwards) */
   uint16      u16ValidTrackables;     /** Number of trackables which have a non-dying lifespan */
   float32     f32MeasurementLatency;  /** Common age [s] of all object estimations within the data array: positive latencies indicate outdated information; negative latencies indicate predicted object data. */
   sint16      as16TrackableMap[JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX]; /** mapping of used trackables, -1 is used if there are no more tracks*/
   JkObjFusn_TrackableType aTrackable[JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX]; /** object array with limited capacity */
} JkObjFusn_TrackableListType;

#endif /**\} JKOBJFUSN_TRACKABLELIST_H_ */
