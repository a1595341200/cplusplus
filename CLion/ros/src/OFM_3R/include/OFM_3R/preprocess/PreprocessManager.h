/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-17 17:04:02
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-01 14:37:35
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/Preprocess.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef PREPROCESS_H
#define PREPROCESS_H
#include <vector>
#include <algorithm>
#include <memory>
#include "MeasurementObjectList.h"
#include <unordered_map>
#include "FrontRadarObjectList.h"
#include "CornerRadarObjectList.h"
#include <iostream>
#include "PreprocessInternal.h"
#include "SensorType.h"
class VehicleStateEstimation {};

class PreprocessManager {
public:
    PreprocessManager() = default;
    PreprocessManager(std::shared_ptr<VehicleStateEstimation> vehicleStateEstimation)
        : mVehicleStateEstimation(vehicleStateEstimation){};

    template <typename... Args>
    void preprocess(std::vector<MeasurementObjectList> &measurementObjectList,
                    std::shared_ptr<VehicleStateEstimation> vehicleStateEstimation,
                    Args &&... args) {
        mVehicleStateEstimation = vehicleStateEstimation;
        std::cout << sizeof...(args) << std::endl;
        preprocessHelper(measurementObjectList, std::forward<Args>(args)...);
    }

private:
    template <typename T>
    void preprocessInternal(std::vector<MeasurementObjectList> &measurementObjectList, T &t,
                            SensorType::Type type) {
        if (prevTime[static_cast<int>(type)] != t.timestamp) {
            auto res = PreprocessInternal::preprocess(t, type);
            if (res.nObject > 0) {
                measurementObjectList.emplace_back(std::move(res));
            }
        }
    }

    template <typename T, typename U, typename... Args>
    void preprocessHelper(std::vector<MeasurementObjectList> &measurementObjectList, T &t, U type,
                          Args &&... args) {
        preprocessInternal(measurementObjectList, t, type);
        preprocessHelper(measurementObjectList, std::forward<Args>(args)...);
    }

    void preprocessHelper(std::vector<MeasurementObjectList> &measurementObjectList) {
    }

    std::shared_ptr<VehicleStateEstimation> mVehicleStateEstimation;
    std::array<double, 3> prevTime{-1, -1, -1};
};

#endif /* PREPROCESS_H */
