/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-31 14:03:20
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-31 15:48:47
 * @FilePath: /ros_learning/src/OFM_3R/include/Looper/ThreadLoop.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef THREADLOOP_H
#define THREADLOOP_H
#include "Thread.h"
#include <atomic>
class ThreadLoop {
public:
    ThreadLoop();
    void start();
    void stop();
    void join();
    virtual ~ThreadLoop() = default;
    virtual bool onThreadLoop() = 0;

private:
    void threadLoopInternal();
    std::unique_ptr<Thread> mThead;
    std::atomic_bool isRuning{false};
};
#endif /* THREADLOOP_H */
