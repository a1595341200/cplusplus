/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-25 11:55:07
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 17:03:08
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/preprocess/RadarConverter.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "RadarConverter.h"
#include <array>
#include "SensorType.h"
#include "FusionMotionType.h"
#include "FusionObjectType.h"

using namespace SensorType;
using namespace FusionObjectType;
using namespace FusionMotionType;

uint32_t ConvertRdrSensorPat(const uint8_t u8RdrSnsrIdx) {
    // clang-format off
    static const std::array<uint32_t, 4> RdrSensorPat = {
                            JKOBJFUSN_TRACKABLE_U32SENSOR_INVALID,
                            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER,
                            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_RIGHT,
                            JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_LEFT,
        };
    // clang-format on
    return RdrSensorPat.at(u8RdrSnsrIdx);
}

uint16_t ConvertRdrObjType_4D(const uint8_t objType) {
    static const std::array<uint16_t, 16> objType_4dMapObjClass = {
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,             // EClassification_Point = 0
        JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_CAR,         // EClassification_Car
        JKOBJFUSN_TRACKABLE_U16CLASS_VEHICLE_TRUCK,       // EClassification_Truck
        JKOBJFUSN_TRACKABLE_U16CLASS_PEDESTRIAN_UNKNOWN,  // EClassification_Pedestrian
        JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_MOTORCYCLE, // EClassification_Motorcycle
        JKOBJFUSN_TRACKABLE_U16CLASS_2WHEELER_BICYCLE,    // EClassification_Bicycle
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,             // EClassification_Wide
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,             // EClassification_Reserved1
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,             // EClassification_Reserved2
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,             // EClassification_Reserved3
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,             // EClassification_Unclassified
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,             // EClassification_Reserved4
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,             // EClassification_Reserved5
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,             // EClassification_Reserved6
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN,             // EClassification_Reserved7
        JKOBJFUSN_TRACKABLE_U16CLASS_UNKNOWN              // EClassification_Reserved8 = 15
    };
    return objType_4dMapObjClass.at(objType);
}

uint16_t ConvertRdrMtnPat_4D(const uint8_t objMtnPat) {
    static const std::array<uint16_t, 8> objMtnPat_4dMapObjMotionPat = {
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_DRIVING, // EDynamicProperty_Moving = 0
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_STATIONARY,      // EDynamicProperty_Stationary
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_ONCOMING, // EDynamicProperty_Oncoming
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING, // EDynamicProperty_CrossingLeftToRight
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_CROSSING, // EDynamicProperty_CrossingRightToLeft
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN,         // EDynamicProperty_Unknown
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_MOVING_EGODIRECTION_STOPPED, // EDynamicProperty_Stopped
        JKOBJFUSN_TRACKABLE_U16MOTIONTYPE_UNKNOWN // EDynamicProperty_Reserved1 = 7
    };
    return objMtnPat_4dMapObjMotionPat.at(objMtnPat);
}
