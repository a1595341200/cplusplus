/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-07-31 13:56:25
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-07-31 14:21:18
 * @FilePath: /ros_learning/src/OFM_3R/include/Looper/Thread.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef THREAD_H
#define THREAD_H
#include <thread>
#include <memory>
#include <functional>
class Thread {
public:
    Thread(std::function<void()> Func) : mFunc(Func) {
    }
    ~Thread();
    void start();
    void join();

private:
    std::function<void()> mFunc;
    std::unique_ptr<std::thread> mThread;
};

#endif /* THREAD_H */
