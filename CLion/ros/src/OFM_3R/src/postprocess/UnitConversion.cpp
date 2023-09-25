/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-24 10:21:49
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 14:27:42
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/postprocess/UnitConversion.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */

#include <iostream>
#include "UnitConversion.h"

namespace AttributeManager {

void UnitConversion::setAttributeToFusionObject(FusionObject &fusionObject, EgoMotion &egoMotion) {
    if (mAttribute != nullptr) {
        mAttribute->setAttributeToFusionObject(fusionObject, egoMotion);
    }
    //do set attribute
    std::cout << "UnitConversion" << std::endl;
}

}; // namespace AttributeManager
