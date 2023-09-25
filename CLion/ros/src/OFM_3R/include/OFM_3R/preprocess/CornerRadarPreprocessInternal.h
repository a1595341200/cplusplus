/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-25 11:50:21
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 14:00:13
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/preprocess/CornerRadarPreprocessInternal copy.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef CORNERRADARPREPROCESSINTERNAL
#define CORNERRADARPREPROCESSINTERNAL
#include "CornerRadarObjectList.h"
#include "SensorType.h"
#include "MeasurementObjectList.h"

namespace PreprocessInternal {

bool validateObject(const CornerRadarObject &cornerRadarObjectList);

MeasurementObject convertObject(const CornerRadarObject &cornerRadarObjectList,
                                SensorType::Type sensorPattern);

};     // namespace PreprocessInternal
#endif /* CORNERRADARPREPROCESSINTERNAL */
