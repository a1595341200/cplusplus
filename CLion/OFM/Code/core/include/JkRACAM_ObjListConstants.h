/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: jkracam_objlistconstants.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: 
	Interface for RaCam Object
	Header file for RaCam Object definition
* Others:
* Function List:
    1.��������
    2.��������
* History: 
    1.Date:
      Author:
      Modification:
    2.��������
**********************************************************************************/

#ifndef JKRACAM_OBJLISTCONSTANTS_H_
#define JKRACAM_OBJLISTCONSTANTS_H_ 

/******************************************************************************
EXTERNAL DEPENDENCIES
******************************************************************************/

#include "Std_Types.h"
#include "Jk_common_types.h"

#ifdef __cplusplus
extern "C" {
#endif

/******************************************************************************
DEFINITION OF CONSTANTS
******************************************************************************/

#define  RACAM_MOTION_PATTERN_HIST_UNKWN        (0x00u)
#define  RACAM_MOTION_PATTERN_HIST_STOPPED      (0x01u)
#define  RACAM_MOTION_PATTERN_HIST_RECEDABLE    (0x02u)
#define  RACAM_MOTION_PATTERN_HIST_ONCOMEABLE   (0x03u)

#define  RACAM_MOTION_PATTERN_CURRENT_UNKWN     (0x00u)
#define  RACAM_MOTION_PATTERN_CURRENT_STATIC    (0x01u)
#define  RACAM_MOTION_PATTERN_CURRENT_RECEDE    (0x02u)
#define  RACAM_MOTION_PATTERN_CURRENT_ONCOME    (0x03u)

#define  RACAM_CAM_OBJ_TYPE_UNKWN         (0x00u)
#define  RACAM_CAM_OBJ_TYPE_CAR           (0x01u)
#define  RACAM_CAM_OBJ_TYPE_MOTORCYCLE    (0x02u)
#define  RACAM_CAM_OBJ_TYPE_TRUCK         (0x03u)
#define  RACAM_CAM_OBJ_TYPE_PEDESTRIAN    (0x04u)
#define  RACAM_CAM_OBJ_TYPE_NOTUSED       (0x05u)
#define  RACAM_CAM_OBJ_TYPE_NOTUSED1      (0x06u)
#define  RACAM_CAM_OBJ_TYPE_ANIMAL        (0x07u)
#define  RACAM_CAM_OBJ_TYPE_GEN_OBJ       (0x08u)
#define  RACAM_CAM_OBJ_TYPE_BICYCLE       (0x09u)
#define  RACAM_CAM_OBJ_TYPE_UNID_VEH      (0x0Au)

#define  RACAM_OBJ_CONFIDENCE_NOT_RELIABLE   (0x00u)
#define  RACAM_OBJ_CONFIDENCE_RELIABLE       (0x01u)
#define  RACAM_OBJ_CONFIDENCE_RELIABLE1      (0x02u)

#define  RACAM_OBJ_MOTION_MODEL_CONST_ACC    (0x00u)
#define  RACAM_OBJ_MOTION_MODEL_COORD_TURN   (0x01u)

#define  RACAM_OBJ_TRACK_STATUS_INVALID      (0x00u)
#define  RACAM_OBJ_TRACK_STATUS_MERGED       (0x01u)
#define  RACAM_OBJ_TRACK_STATUS_NEW          (0x02u)
#define  RACAM_OBJ_TRACK_STATUS_NEW_COASTED  (0x03u)
#define  RACAM_OBJ_TRACK_STATUS_NOT_USED     (0x04u)
#define  RACAM_OBJ_TRACK_STATUS_UPDATED      (0x05u)
#define  RACAM_OBJ_TRACK_STATUS_COASTED      (0x06u)
   
#define  RACAM_CMBB_PRIMARY_CONFIDENCE_NOT_RELIABLE               (0x00u)
#define  RACAM_CMBB_PRIMARY_CONFIDENCE_COASTED_RELIABLE           (0x01u)
#define  RACAM_CMBB_PRIMARY_CONFIDENCE_BRAKE_SUPPORT_RELIABLE     (0x02u)
#define  RACAM_CMBB_PRIMARY_CONFIDENCE_BRAKE_RELIABLE             (0x03u)

#define  RACAM_CMBB_SECONDARY_CONFIDENCE_NOT_RELIABLE             (0x00u)
#define  RACAM_CMBB_SECONDARY_CONFIDENCE_RELIABLE                 (0x01u)

#define  RACAM_FCW_CONFIDENCE_NOT_RELIABLE   (0x00u)
#define  RACAM_FCW_CONFIDENCE_RELIABLE       (0x01u)

#define  JK_RACAM_CONVERTER_IDX_INVALID      (-1)

#define  JKOBJFUSN_RACAM_U16ID_INVALID         (0xFFFFu)
#define  JKRACAM_MILLI_SECONDS_PER_SECOND      (1000.f)
#define  JKRACAM_UINT_MAX                      (0xFFFFFFFFu)

/******************************************************************************
DECLARATION OF TYPES
******************************************************************************/

/******************************************************************************
DECLARATION OF VARIABLES
******************************************************************************/

/******************************************************************************
DECLARATION OF CONSTANT DATA
******************************************************************************/

/******************************************************************************
DECLARATION OF FUNCTIONS
******************************************************************************/

/******************************************************************************
DECLARATION OF FUNCTION-LIKE MACROS
******************************************************************************/

#ifdef __cplusplus
}
#endif
/******************************************************************************
End Of File
*****************************************************************************/

#endif /* _JKRACAM_OBJLISTCONSTANTS_H_ */