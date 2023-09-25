/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-25 11:48:59
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 15:55:22
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/preprocess/RadarPreprocessInternal.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef RADARPREPROCESSINTERNAL_H
#define RADARPREPROCESSINTERNAL_H

#include "FrontRadarObjectList.h"
#include "SensorType.h"
#include "MeasurementObjectList.h"

namespace PreprocessInternal {

bool validateObject(const FrontRadarObject &frontRadarObject);

MeasurementObject convertObject(const FrontRadarObject &frontRadar, SensorType::Type sensorPattern);

};     // namespace PreprocessInternal
#endif /* RADARPREPROCESSINTERNAL_H */
