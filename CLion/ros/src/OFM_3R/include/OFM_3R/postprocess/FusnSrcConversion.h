/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-28 15:43:06
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-28 15:43:07
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/postprocess/FusnSrcConversion.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef FUSNSRCCONVERSION_H
#define FUSNSRCCONVERSION_H

#include "AttributeBase.h"

namespace AttributeManager {
class FusnSrcConversion : public AttributeBase {
public:
    using AttributeBase::AttributeBase;
    void setAttributeToFusionObject(FusionObject &fusionObject, EgoMotion &egoMotion) override;
};
};     // namespace AttributeManager
#endif /* FUSNSRCCONVERSION_H */
