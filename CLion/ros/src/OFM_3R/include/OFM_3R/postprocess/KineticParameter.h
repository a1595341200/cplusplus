/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-19 15:23:28
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-21 10:25:55
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/postprocess/KineticParameter.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef KINETICPARAMETER_H
#define KINETICPARAMETER_H
#include "Eigen/Dense"
#include <cmath>

class KineticParameter {
public:
    KineticParameter() = default;
    KineticParameter(double dt) : mDt(dt), mDtPower(std::pow(mDt, 2)) {
    }
    virtual ~KineticParameter() = default;
    virtual Eigen::MatrixXf getStateTransitionMatrix(double dt) = 0;

protected:
    float mDt{-1};
    float mDtPower{-1};
    Eigen::MatrixXf mStateTransitionMatrix{6, 6};
};

#endif /* KINETICPARAMETER_H */
