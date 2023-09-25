/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-21 15:11:44
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 14:16:05
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/postprocess/AttributeManager.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include "EgoMotion.h"
#include "unordered_map"
#include "UnitConversion.h"
#include "SpeedConversion.h"
#include "AccelerationConversion.h"
#include "AttributeManagerBase.h"
#include "AttributeManager.h"

namespace AttributeManager {

AttributeManager::AttributeManager() {
    mAttribute = std::make_shared<UnitConversion>(
        std::make_shared<SpeedConversion>(std::make_shared<AccelerationConversion>()));
}

void AttributeManager::setAttributeToFusionObject(FusionObject &fusionObject,
                                                  EgoMotion &egoMotion) {
    mAttribute->setAttributeToFusionObject(fusionObject, egoMotion);
}

}; // namespace AttributeManager
