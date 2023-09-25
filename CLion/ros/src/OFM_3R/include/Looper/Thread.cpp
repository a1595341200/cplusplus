/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-31 13:58:08
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-31 14:21:35
 * @FilePath: /ros_learning/src/OFM_3R/include/Looper/Thread.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Thread.h"
void Thread::start() {
    mThread = std::make_unique<std::thread>(mFunc);
}
void Thread::join() {
    mThread->join();
}

Thread::~Thread() {
    if (mThread->joinable()) {
        mThread->join();
    }
}
