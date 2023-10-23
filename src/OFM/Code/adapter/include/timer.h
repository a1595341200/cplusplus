/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-23 11:24:06
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-23 11:28:20
 * @FilePath: /cplusplus/src/OFM/Code/adapter/include/timer.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#pragma once
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <functional>
#include <memory>
#include <mutex>
#include <sstream>
#include <string>
#include <thread>

class Timer {
 public:
  Timer() : expired_(true), try_to_expire_(false) {}

  Timer(const Timer& timer);

  ~Timer() {
    stop();
  }

  void start(std::chrono::milliseconds interval, std::function<void()> task);

  void stop();

 private:
  std::atomic<bool> expired_;        // timer stopped status
  std::atomic<bool> try_to_expire_;  // timer is in stop process
  std::mutex mutex_;
  std::condition_variable expired_cond_;
};

// get current system time
std::string getCurrentSysTime();
