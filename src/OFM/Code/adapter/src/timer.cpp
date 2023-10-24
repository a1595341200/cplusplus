/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-23 11:24:15
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-23 11:30:25
 * @FilePath: /cplusplus/src/OFM/Code/adapter/src/timer.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "timer.h"

#include <atomic>
#include <chrono>
#include <condition_variable>
#include <functional>
#include <memory>
#include <mutex>
#include <sstream>
#include <string>
#include <thread>

// get current system time
std::string getCurrentSysTime();

Timer::Timer(const Timer &timer) {
  expired_ = timer.expired_.load();
  try_to_expire_ = timer.try_to_expire_.load();
}

void Timer::start(std::chrono::milliseconds interval, std::function<void()> task) {
  // is started, do not start again
  if (expired_ == false)
    return;

  // start async timer, launch thread and wait in that thread
  expired_ = false;
  std::thread([this, &interval, task]() {
    while (!try_to_expire_) {
      // sleep every interval and do the task again and again until times up
      std::this_thread::sleep_for(interval);
      auto startTimeStamp = std::chrono::steady_clock::now();
      task();
      auto endTimeStamp = std::chrono::steady_clock::now();
      auto usedTime =
          std::chrono::duration_cast<std::chrono::milliseconds>((endTimeStamp - startTimeStamp));
      if (usedTime >= interval) {
      } else {
        interval = std::chrono::milliseconds(25) - usedTime;
      }
    }

    {
      // timer be stopped, update the condition variable expired and wake
      // main thread
      std::lock_guard<std::mutex> locker(mutex_);
      expired_ = true;
      expired_cond_.notify_one();
    }
  }).detach();
}

void Timer::stop() {
  // do not stop again
  if (expired_)
    return;

  if (try_to_expire_)
    return;

  // wait until timer
  try_to_expire_ = true;  // change this bool value to make timer while loop stop
  {
    std::unique_lock<std::mutex> locker(mutex_);
    expired_cond_.wait(locker, [this] { return expired_ == true; });

    // reset the timer
    if (expired_ == true)
      try_to_expire_ = false;
  }
}

std::string getCurrentSysTime() {
  auto current_time = std::chrono::system_clock::now();
  auto tt = std::chrono::system_clock::to_time_t(current_time);

  struct tm *ptm = localtime(&tt);
  char date[60] = {0};
  sprintf(date, "%d-%02d-%02d-%02d:%02d:%02d", (int)ptm->tm_year + 1900, (int)ptm->tm_mon + 1,
          (int)ptm->tm_mday, (int)ptm->tm_hour, (int)ptm->tm_min, (int)ptm->tm_sec);

  auto ms =
      std::chrono::duration_cast<std::chrono::milliseconds>(current_time.time_since_epoch()) % 1000;

  std::ostringstream sys_time;

  sys_time << "[" << std::string(date) << "." << ms.count() << "]";
  return sys_time.str();
}
