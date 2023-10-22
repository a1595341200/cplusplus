/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_TrackableListProps.h
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

#ifndef JKOBJFUSN_OBJECTLISTPROPS_H_
#define JKOBJFUSN_OBJECTLISTPROPS_H_

/*==================[inclusions]============================================*/
#include "JkObjFusn_ConfigConstants.h"

/*==================[macros]================================================*/

/********************/
/* u32SensorPattern */
/********************/
/// \name u32SensorPattern
/** minimum value */
#define JKOBJFUSN_OBJECTLIST_U32SENSORPATTERN_MIN (0u)
/** maximum value */
#define JKOBJFUSN_OBJECTLIST_U32SENSORPATTERN_MAX (0xFFFFFFFFu)
/** default value */
#define JKOBJFUSN_OBJECTLIST_U32SENSORPATTERN_DEFAULT (0xFFFFFFFFu)
/** flag indicating if this field will be filled by sensor */
#define JKOBJFUSN_OBJECTLIST_U32SENSORPATTERN_FILLEDBYSENSOR    (JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_VISION)
/// \}

/*************************/
/* f32MeasurementLatency */
/*************************/
/// \name f32MeasurementLatency
/** minimum value */
#define JKOBJFUSN_OBJECTLIST_F32MEASUREMENTLATENCY_MIN               (-5.0f)
/** maximum value */
#define JKOBJFUSN_OBJECTLIST_F32MEASUREMENTLATENCY_MAX               (5.0f)
/** default value */
#define JKOBJFUSN_OBJECTLIST_F32MEASUREMENTLATENCY_DEFAULT           (-1000.0f)
/** flag indicating if this field will be filled by sensor */
#define JKOBJFUSN_OBJECTLIST_F32MEASUREMENTLATENCY_FILLEDBYSENSOR    (JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_VISION)
/// \}

/********************/
/* u16NumObjects */
/********************/
/// \name u16NumObjects
/** minimum value */
#define JKOBJFUSN_OBJECTLIST_U16NUMOBJECTS_MIN                             (0u)
/** maximum value for */
#define JKOBJFUSN_OBJECTLIST_U16NUMOBJECTS_MAX                             (JK_FUSION_OBJECT_LIST_SIZE)
/** default value for */
#define JKOBJFUSN_OBJECTLIST_U16NUMOBJECTS_DEFAULT                         (61234u)
/** flag indicating if this field will be filled by sensor */
#define JKOBJFUSN_OBJECTLIST_U16NUMOBJECTS_FILLEDBYSENSOR                  (JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_VISION)
///\}

/************************/
/* u16ListUpdateCounter */
/************************/
/// \name u16ListUpdateCounter
/** minimum value */
#define JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MIN                (0u)
/** maximum value */
#define JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_MAX                (60000u)
/** default value */
#define JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_DEFAULT            (61234u)
/** flag indicating if this field will be filled by sensor */
#define JKOBJFUSN_OBJECTLIST_U16LISTUPDATECOUNTER_FILLEDBYSENSOR     (JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_VISION)
/// \}

#endif /* JKOBJFUSN_OBJECTLISTPROPS_H_ */

/** @} */
