/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-19 16:56:38
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-19 17:00:39
 * @FilePath: /ros_learning/src/OFM_3R/include/OFM_3R/timemanager/timeManager.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef TIMEBASE_H
#define TIMEBASE_H

class TimeBase {
public:
    virtual ~TimeBase() = default;
    virtual double getCurrentTime() = 0;
};

#endif /* TIMEBASE_H */
