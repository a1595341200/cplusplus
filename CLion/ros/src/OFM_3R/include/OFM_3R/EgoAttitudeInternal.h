/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-25 14:11:14
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 14:11:14
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/EgoAttitudeInternal.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef _EGO_ATTITUDE_INTERNAL_H_
#define _EGO_ATTITUDE_INTERNAL_H_

#include "Eigen/Dense"
#define NUM_EGO_ATTITUDE_STATE (8)
typedef struct {
    Eigen::Matrix<float, NUM_EGO_ATTITUDE_STATE, 1> stateEst;
    Eigen::Matrix<float, NUM_EGO_ATTITUDE_STATE, NUM_EGO_ATTITUDE_STATE> PEst;
} EgoAttitudeInternal;

#endif
