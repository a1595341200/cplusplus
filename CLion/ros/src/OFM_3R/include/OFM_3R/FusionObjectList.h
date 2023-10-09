/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-19 15:39:48
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-19 17:56:23
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/FusionObjectList.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _FUSION_OBJECT_LIST_H_
#define _FUSION_OBJECT_LIST_H_
#include "Eigen/Dense"
#define MAX_FUSION_OBJ_NUM (100)
#define FUSION_HISTORY (7)
#define NUM_STATE (6)

typedef struct {
    float updateTime;
    unsigned char type;
    float existenceProbability;
    unsigned char ID;
    float width;
    float length;
    float height;
    float heading;
    Eigen::Matrix<float, NUM_STATE, 1> stateEst; // x y vx vy ax ay
    Eigen::Matrix<float, NUM_STATE, NUM_STATE> PEst;
    float headingStdDev;
    unsigned char visionID;
    unsigned char fusionHistory[FUSION_HISTORY];
} FusionObject;
typedef struct {
    unsigned char nObject;
    double timestamp;
    FusionObject object[MAX_FUSION_OBJ_NUM];
} FusionObjectList;

#endif
