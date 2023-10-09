/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_TrackableListProps.h
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

#ifndef JKOBJFUSN_TRACKABLELISTPROPS_H_
#define JKOBJFUSN_TRACKABLELISTPROPS_H_

/*==================[inclusions]============================================*/
#include "JkObjFusn_ConfigConstants.h"

/*==================[macros]================================================*/

/*************************/
/* f32MeasurementLatency */
/*************************/
/// \name f32MeasurementLatency
/** minimum value */
#define JKOBJFUSN_TRACKABLELIST_F32MEASUREMENTLATENCY_MIN               (-5.0f)
/** maximum value */
#define JKOBJFUSN_TRACKABLELIST_F32MEASUREMENTLATENCY_MAX               (5.0f)
/** default value */
#define JKOBJFUSN_TRACKABLELIST_F32MEASUREMENTLATENCY_DEFAULT           (-1000.0f)
/// \}

/**********************/
/* u16ValidTrackables */
/**********************/
/// \name u16ValidTrackables
/** minimum value */
#define JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MIN                    (0u)
/** maximum value dependent on coasting value*/
#define JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX                    (JK_FUSION_TRACKABLE_LIST_SIZE)
/** default value */
#define JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_DEFAULT                (65234u)
/// \}

/********************/
/* as16TrackableMap */
/********************/
/// \name as16TrackableMap
/** minimum value */
#define JKOBJFUSN_TRACKABLELIST_AS16TRACKABLEMAP_MIN                    (-1)
/** maximum value */
#define JKOBJFUSN_TRACKABLELIST_AS16TRACKABLEMAP_MAX                    (JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX)
/** default value */
#define JKOBJFUSN_TRACKABLELIST_AS16TRACKABLEMAP_DEFAULT                (-1)
/// \}

#endif /* JKOBJFUSN_TRACKABLELISTPROPS_H_ */

/** \} */
