#ifndef _TIMER_H_
#define _TIMER_H_

#include <atomic>
#include <chrono>
#include <condition_variable>
#include <functional>
#include <memory>
#include <mutex>
#include <sstream>
#include <string>
#include <thread>

//namespace localizationfusion {

class Timer {
 public:
  Timer() : expired_(true), try_to_expire_(false) {}

  Timer(const Timer& timer);

  ~Timer() { stop(); }

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

//}  // namespace localizationfusion

#endif  // _LFM_TIMER_HPP_
