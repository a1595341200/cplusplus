/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_EgoMotionType.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Header to define ego motion structure containing motion of the ego vehicle
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

#ifndef JKOBJFUSN_EGOMOTIONTYPE_H
#define JKOBJFUSN_EGOMOTIONTYPE_H

#include "Jk_common_types.h"


/********************************/
/* u16UpdateCounter - mandatory */
/********************************/
#define  JKOBJFUSN_EGOMOTION_BISVALID_DEFAULT (FALSE)

/// \name f32Speed

/************************/
/* F32SPEED - mandatory */
/************************/
/** minimum value, more than 720 kph is unrealistic */
#define JKOBJFUSN_EGOMOTION_F32SPEED_MIN                           (-200.0f)
/** maximum value, more than 720 kph is unrealistic */
#define JKOBJFUSN_EGOMOTION_F32SPEED_MAX                           (200.0f)
/** default value */
#define JKOBJFUSN_EGOMOTION_F32SPEED_DEFAULT                       (12345.0f)
/** flag indicating if this field will be filled by fusion module */
#define JKOBJFUSN_EGOMOTION_F32SPEED_FILLEDBYFUSION                (1)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_EGOMOTION_F32SPEED_ISENUM                        (0)


///\}

/// \name f32Acc

/**********************/
/* F32ACC - opitional */
/**********************/
/** minimum value, more than 100m/s^2 is unrealistic */
#define JKOBJFUSN_EGOMOTION_F32ACC_MIN                           (-100.0f)
/** maximum value, more than 100m/s^2 is unrealistic */
#define JKOBJFUSN_EGOMOTION_F32ACC_MAX                           (100.0f)
/** default value */
#define JKOBJFUSN_EGOMOTION_F32ACC_DEFAULT                       (0.0f)
/** flag indicating if this field will be filled by fusion module */
#define JKOBJFUSN_EGOMOTION_F32ACC_FILLEDBYFUSION                (0)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_EGOMOTION_F32ACC_ISENUM                        (0)


///\}

/// \name f32YawRate

/**************************/
/* F32YAWRATE - mandatory */
/**************************/
/** minimum value, more than 300 deg/s is unrealistic */
#define JKOBJFUSN_EGOMOTION_F32YAWRATE_MIN                           (-6.0f)
/** maximum value,more than 300 deg/s is unrealistic */
#define JKOBJFUSN_EGOMOTION_F32YAWRATE_MAX                           (6.0f)
/** default value */
#define JKOBJFUSN_EGOMOTION_F32YAWRATE_DEFAULT                       (12345.0f)
/** flag indicating if this field will be filled by fusion module */
#define JKOBJFUSN_EGOMOTION_F32YAWRATE_FILLEDBYFUSION                (1)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_EGOMOTION_F32YAWRATE_ISENUM                        (0)

///\}

/// \name f32Age

/*********************/
/* F32AGE - optional */
/*********************/
/** minimum value; negative value corresponds to prediction into future; might be possible e.g. by DSE */
#define JKOBJFUSN_EGOMOTION_F32AGE_MIN                           (-1.0f)
/** maximum value, more than 1s latency is unrealistic */
#define JKOBJFUSN_EGOMOTION_F32AGE_MAX                           (1.0f)
/** default value; assume no latency */
#define JKOBJFUSN_EGOMOTION_F32AGE_DEFAULT                       (0.0f)
/** flag indicating if this field will be filled by fusion module */
#define JKOBJFUSN_EGOMOTION_F32AGE_FILLEDBYFUSION                (0)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_EGOMOTION_F32AGE_ISENUM                        (0)

///\}

/// \name u16Reserved

/**************************/
/* u16Reserved - optional */
/**************************/

/** minimum value */
#define JKOBJFUSN_EGOMOTION_U16RESERVED_MIN                           (0u)
/** maximum value */
#define JKOBJFUSN_EGOMOTION_U16RESERVED_MAX                           (0u)
/** default value */
#define JKOBJFUSN_EGOMOTION_U16RESERVED_DEFAULT                       (0u)
/** flag indicating if this field will be filled by fusion module */
#define JKOBJFUSN_EGOMOTION_U16RESERVED_FILLEDBYFUSION                (0)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_EGOMOTION_U16RESERVED_ISENUM                        (0)
///\}

typedef struct JkObjFusn_EgoMotionTypeTag
{
   boolean     bIsValid;         /**< valid flag to check whether valid data is read on RTE */
   uint8       u8Reserved;        /**< reserved value to ensure 4 byte alignment */
   uint16      u16Reserved;      /**< reserved value to ensure 4 byte alignment */
   float32     f32Speed;         /**< Speed of ego vehicle [m/s] */
   float32     f32Acc;           /**< Acceleration of ego vehicle [m/s^2] */
   float32     f32YawRate;       /**< Yaw rate of ego vehicle [rad/s] */
   float32     f32Age;           /**< age of ego motion, including latency [s]*/
   boolean bE2eIsValid;
} JkObjFusn_EgoMotionType;


#endif //JKOBJFUSN_EGOMOTIONTYPE_H
