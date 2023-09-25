/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-17 18:01:23
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-19 10:52:07
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/MeasurementObjectList.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _MEASUREMENT_OBJECT_LIST_H_
#define _MEASUREMENT_OBJECT_LIST_H_
#include <array>

#define MAX_MEASUREMENT_OBJ_NUM (42)
struct MeasurementObject {
    unsigned char type;
    float existenceProbability;
    unsigned char ID;
    float width;
    float length;
    float height;
    float heading;
    float x;
    float y;
    float vx;
    float vy;
    float ax;
    float ay;
    float xStdDev;
    float yStdDev;
    float vxStdDev;
    float vyStdDev;
    float axStdDev;
    float ayStdDev;
};

struct MeasurementObjectList {
    unsigned char nObject{};
    unsigned char sensor{};
    double timestamp{};
    std::array<MeasurementObject, MAX_MEASUREMENT_OBJ_NUM> object{};
};

#endif
