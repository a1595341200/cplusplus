/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-18 09:50:29
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 14:10:21
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/FrontRadarObjectList.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _FRONT_RADAR_OBJECT_LIST_H_
#define _FRONT_RADAR_OBJECT_LIST_H_

#define OBJ_NUM_FRONT_RADAR (42)
struct FrontRadarObject {
    unsigned char classification;
    unsigned char cntr;
    float distX;
    float distXStd;
    float distY;
    float distYStd;
    float distZ;
    float distZStd;
    unsigned char dynamicProperty;
    float headingAngle;
    unsigned char ID;
    unsigned char lifeCycles;
    float objBoundingBoxHeight;
    float objBoundingBoxLength;
    float objBoundingBoxWidth;
    float objNearestPtX;
    float objNearestPtY;
    float objNearestPtZ;
    float objXAccRel;
    float objYAccRel;
    float obstacleProbability;
    unsigned char probabilityOfExistence;
    float targetClassificationConfidence;
    bool updateFlag;
    float vAbsX;
    float vAbsXStd;
    float vAbsY;
    float vAbsYStd;
    bool validFlag;
};
struct FrontRadarObjectList {
    double timestamp{};
    FrontRadarObject object[OBJ_NUM_FRONT_RADAR];
};
#endif
