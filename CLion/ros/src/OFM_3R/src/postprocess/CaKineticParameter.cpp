/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-19 15:36:08
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 14:21:55
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/postprocess/CaKineticParameter.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include "CaKineticParameter.h"

CaKineticParameter::CaKineticParameter(double dt) : KineticParameter(dt) {
    // clang-format off
        mStateTransitionMatrix << 1.0, 0.0, mDt, 0.0, 0.5 * mDtPower, 0.0,
                                  0.0, 1.0, 0.0, mDt, 0.0,            0.5 * mDtPower,
                                  0.0, 0.0, 1.0, 0.0, mDt,            0.0,
                                  0.0, 0.0, 0.0, 1.0, 0.0,            mDt,
                                  0.0, 0.0, 0.0, 0.0, 1.0,            0.0,       
                                  0.0, 0.0, 0.0, 0.0, 0.0,            1.0;
    // clang-format on
}

Eigen::MatrixXf CaKineticParameter::getStateTransitionMatrix(double dt) {
    mDt = dt;
    mDtPower = std::pow(mDt, 2);
    mStateTransitionMatrix(0, 1) = mDt;
    mStateTransitionMatrix(1, 3) = mDt;
    mStateTransitionMatrix(2, 4) = mDt;
    mStateTransitionMatrix(3, 5) = mDt;
    mStateTransitionMatrix(0, 4) = 0.5 * mDtPower;
    mStateTransitionMatrix(1, 5) = 0.5 * mDtPower;
    return mStateTransitionMatrix;
}
