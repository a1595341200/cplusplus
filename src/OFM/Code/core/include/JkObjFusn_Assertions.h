/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_Assertions.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Checks common \ global constant values needed for Fusion.
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

#ifndef JKOBJFUSN_ASSERTIONS_H
#define JKOBJFUSN_ASSERTIONS_H

#include "Jk_common_types.h"

#include "JkObjFusn_ConfigAlgorithm.h"
#include "JkObjFusn_ConfigVehicle.h"
#include "JkObjFusn_TrackableListProps.h"
#include "JkObjFusn_TrackableProps.h"
 
/** the object list shall be large enough for worst case RADAR + CAM (max # of objects from both sensors, no objects fused */
#if((JK_FUSION_MAX_OBJECTS_FRONT_RADAR + JK_FUSION_MAX_OBJECTS_FRONT_CAMERA) > JK_FUSION_MAX_SENSOR_OBJECTS)
#error "Fusion requires JK Object List to be large enough for worst case"
#endif

/**
 * Verify that the ID space is large enough to provide new ID's in worst case
 * OOSM handling situations (reprocessing with re-setup of tracks for full sensor
 * lists from all supported sensors).
 */
//#if ((JKOBJFUSN_TRACKABLE_U16ID_MAX - JKOBJFUSN_TRACKABLE_U16ID_MIN) < (JK_FUSION_MAX_SENSOR_OBJECTS * (JK_FUSION_MAX_INPUTS + 1)))
//#error "ID management space must be large enough to provide new ID's for all tracks that could be setup!"
//#endif

#if (JKOBJFUSN_OBJECTLIST_U16NUMOBJECTS_MAX < JK_FUSION_MAX_INPUT_OBJECTS)
#error "Number of tracks for input/output list not sufficient, increase JKOBJFUSN_OBJECTLIST_U16NUMOBJECTS_MAX"
#endif

/* require enough tracks */ 
#if (JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX < (JKOBJFUSN_TRACKABLE_U16LIFESPAN_NEW * JK_FUSION_MAX_SENSOR_OBJECTS))
 #error "Number of filter tracks too low for current number of objects. increase JKOBJFUSN_TRACKABLELIST_U16VALIDTRACKABLES_MAX!"
#endif
/* ASSERTION: JKOBJFUSN_OBJLISTINPUT_U16ID_DEFAULT must not be assigned by fusion id management */
#if (JKOBJFUSN_TRACKABLE_U16ID_DEFAULT)<=(JKOBJFUSN_TRACKABLE_U16ID_MAX)
#error "JKOBJFUSN_TRACKABLE_U16ID_DEFAULT must be larger than MAX_FUSION_ID!"
#endif

/** ASSERTION: require enough fusion IDs to be able to be assigned */
#if (JKOBJFUSN_TRACKABLE_U16ID_MAX + 1) <= (JKOBJFUSN_TRACKABLE_U16LIFESPAN_NEW*JK_FUSION_MAX_SENSOR_OBJECTS)
 #error "not enough fusion Ids available for current setup! "
#endif

/** ASSERTION: 'U16LIFESPAN_FREE_SLOT' and 'U16LIFESPAN_DEFAULT' must be set to identical values */
#if (JKOBJFUSN_TRACKABLE_U16LIFESPAN_FREE_SLOT != JKOBJFUSN_TRACKABLE_U16LIFESPAN_DEFAULT)
 #error "Default and 'free-slot' markers ofr lifespan must be identical"
#endif

#endif /**@} JKOBJFUSN_ASSERTIONS_H */
