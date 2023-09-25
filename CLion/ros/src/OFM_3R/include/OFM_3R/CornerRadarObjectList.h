/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-19 10:48:13
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 14:10:38
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/CornerRadarObjectList.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _CORNER_RADAR_OBJECT_LIST_H_
#define _CORNER_RADAR_OBJECT_LIST_H_
#define OBJ_NUM_CORNER_RADAR (15)
struct CornerRadarObject {
    float ax;
    float ay;
    unsigned char cntr;
    unsigned char existenceConfidence;
    float x;
    float xStdDev;
    float elevnConf;
    float boxCenterLat;
    float boxCenterLgt;
    unsigned char ID;
    unsigned char mtnPat;
    unsigned char confBike;
    unsigned char confPedestrian;
    unsigned char confVehicle;
    float vxStdDev;
    float vx;
    float vySteDev;
    float vy;
    float y;
    float yStdDev;
    unsigned char type;
    float heading;
    float vxRel;
    unsigned int observationHistory;
    float vyRel;
    float width;
    float length;
};

struct CornerRadarObjectList {
    double timestamp{};
    CornerRadarObject object[OBJ_NUM_CORNER_RADAR];
};
#endif
