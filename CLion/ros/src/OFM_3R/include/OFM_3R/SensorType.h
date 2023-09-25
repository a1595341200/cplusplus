/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-25 13:28:17
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 16:59:15
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/preprocess/SensorType.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef SENSORTYPE_H
#define SENSORTYPE_H

#include <stdint.h>

namespace SensorType {
enum Type : uint32_t {
    JKOBJFUSN_TRACKABLE_U32SENSOR_INVALID = 0x00000000u,
    JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_CENTER = 0x00000002u,
    JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_RIGHT = 0x00000004u,
    JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_RIGHT = 0x00000010u,
    JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_REAR_LEFT = 0x00000040u,
    JKOBJFUSN_TRACKABLE_U32SENSOR_RADAR_FRONT_LEFT = 0x00000001u,
};
};

#endif /* SENSORTYPE_H */
