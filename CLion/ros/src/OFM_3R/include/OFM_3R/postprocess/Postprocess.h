/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-19 14:59:59
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 14:19:34
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/postprocess/Postprocess.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef POSTPROCESS_H
#define POSTPROCESS_H

#include "FusionObjectList.h"
#include "KineticParameter.h"
#include "timemanager/TimeBase.h"
#include "AttributeManager.h"

class Postprocess {
public:
    Postprocess(std::shared_ptr<KineticParameter> kineticParameter, std::shared_ptr<TimeBase> time);
    void process(FusionObjectList &fusionObjectList, EgoMotion &egoMotion);

private:
    void kinematicCompensation(FusionObject &fusionObject);

    std::shared_ptr<KineticParameter> mKineticParameter;
    std::shared_ptr<TimeBase> mTime;
    std::shared_ptr<AttributeManager::AttributeManager> mAttributeManager;
};

#endif /* POSTPROCESS_H */
