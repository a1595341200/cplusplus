/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-19 15:36:08
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 14:20:59
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/postprocess/CaKineticParameter.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef CAKINETICPARAMETER_H
#define CAKINETICPARAMETER_H
#include "KineticParameter.h"

class CaKineticParameter : public KineticParameter {
public:
    using KineticParameter::KineticParameter;
    CaKineticParameter(double dt);

    Eigen::MatrixXf getStateTransitionMatrix(double dt) override;
};
#endif /* CAKINETICPARAMETER_H */
