/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-24 10:24:38
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-24 11:03:41
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/postprocess/AttributeManagerBase.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef ATTRIBUTEMANAGERBASE_H
#define ATTRIBUTEMANAGERBASE_H

#include "EgoMotion.h"
#include "FusionObjectList.h"
#include "AttributeBase.h"
namespace AttributeManager {
class AttributeManagerBase {
public:
    virtual void setAttributeToFusionObject(FusionObject &fusionObject, EgoMotion &egoMotion) = 0;

protected:
    std::shared_ptr<AttributeBase> mAttribute;
};
}; // namespace AttributeManager

#endif /* ATTRIBUTEMANAGERBASE_H */
