/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-21 15:06:03
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 14:15:38
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/postprocess/Attributes.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef ATTRIBUTES_H
#define ATTRIBUTES_H
#include "FusionObjectList.h"
#include <memory>
#include "EgoMotion.h"

class AttributeBase {
public:
    AttributeBase() = default;
    AttributeBase(std::shared_ptr<AttributeBase> attribute);
    virtual void setAttributeToFusionObject(FusionObject &fusionObject, EgoMotion &egoMotion) = 0;
    void setAttribute(std::shared_ptr<AttributeBase> attribute);

protected:
    std::shared_ptr<AttributeBase> mAttribute;
};

#endif /* ATTRIBUTES_H */
