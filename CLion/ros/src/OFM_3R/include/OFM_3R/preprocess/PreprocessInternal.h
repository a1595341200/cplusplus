/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-19 15:55:32
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-25 11:50:44
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/preprocess/PreprocessInternal.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef PREPROCESSINTERNAL_H
#define PREPROCESSINTERNAL_H
#include "FrontRadarPreprocessInternal.h"
#include "CornerRadarPreprocessInternal.h"

namespace PreprocessInternal {
template <typename T>
MeasurementObjectList preprocess(T &t, SensorType::Type type) {
    MeasurementObjectList res{};
    // std::cout << t.object.size() << "\n";
    int i = 0;
    for (auto &it : t.object) {
        if (validateObject(it)) {
            res.object[i] = convertObject(it, type);
            res.nObject = i++;
        }
    }
    return res;
}
};     // namespace PreprocessInternal
#endif /* PREPROCESSINTERNAL_H */
