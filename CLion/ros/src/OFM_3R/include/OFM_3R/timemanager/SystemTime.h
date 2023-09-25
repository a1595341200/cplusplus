/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-19 17:01:03
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-19 17:59:48
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/timemanager/RosTime.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef ROSTIME_H
#define ROSTIME_H
#include "TimeBase.h"
#include <ros/ros.h>
#include <chrono>
class SystemTime : public TimeBase {
public:
    double getCurrentTime() override {
        return std::chrono::duration_cast<std::chrono::milliseconds>(
                   std::chrono::steady_clock::now().time_since_epoch())
            .count();
    }
};

#endif /* ROSTIME_H */
