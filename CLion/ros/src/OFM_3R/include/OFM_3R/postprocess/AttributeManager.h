/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-21 15:11:44
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 14:16:39
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/postprocess/AttributeManager.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef ATTRIBUTEMANAGER_H
#define ATTRIBUTEMANAGER_H
#include "EgoMotion.h"
#include "unordered_map"
#include "UnitConversion.h"
#include "SpeedConversion.h"
#include "AccelerationConversion.h"
#include "AttributeManagerBase.h"

namespace AttributeManager {
class AttributeManager : public AttributeManagerBase {
public:
    AttributeManager();
    void setAttributeToFusionObject(FusionObject &fusionObject, EgoMotion &egoMotion) override;
};
}; // namespace AttributeManager

#endif /* ATTRIBUTEMANAGER_H */
