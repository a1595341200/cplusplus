#pragma once
#include <chrono>
#include <iomanip>
#include <memory>
#include <ostream>
#include <string>
#include <thread>
#include <unordered_map>
#include <utility>
#include <vector>

#define ENABLE_PROFILE_TIMING 1

#include "Log.h"
struct EpcvProfileTool {
  using EpcvProfileToolPtr = std::shared_ptr<EpcvProfileTool>;
  explicit EpcvProfileTool(const std::string& n) : name_(n) {}
  ~EpcvProfileTool() {
    children.clear();
    times.clear();
  }
  EpcvProfileToolPtr addNewTool(const std::string& name) {
    EpcvProfileToolPtr p = std::make_shared<EpcvProfileTool>(name);
    children.emplace_back(p);
    return p;
  }
  void push_back(const std::pair<std::string, double>& p) {
    times.push_back(p);
  }
  void print(std::ostream& os, unsigned int print_len = 0x7fffffff) {
    for (unsigned int i = 0; i < times.size(); i++) {
      if (i < print_len)
        os << name_ << " TIMER " << times[i].first << " elapsed_time:" << std::fixed
           << std::setprecision(6) << times[i].second << " ms\n";
    }
    for (auto& p : children) {
      if (p)
        p->print(os, print_len);
    }
  }
  void clear() {
    times.clear();
    for (auto& p : children) {
      if (p)
        p->clear();
    }
  }

 private:
  std::vector<std::pair<std::string, double>> times;
  std::string name_;
  std::vector<EpcvProfileToolPtr> children;
};

inline std::string get_full_name(const std::string& full_name) {
  size_t end = full_name.find("(");

  if (end == std::string::npos) {
    return full_name;
  }

  std::string new_str = full_name.substr(0, end);
  size_t start = new_str.rfind(" ");

  if (start == std::string::npos) {
    return full_name;
  }

  return new_str.substr(start + 1);
}
class StdTimer {
 public:
  StdTimer() {}

  // no-thread safe.
  void Start();

  // return the elapsed time,
  // also output msg and time in glog.
  // automatically start a new timer.
  // no-thread safe.
  float End(const std::string& msg);

  StdTimer(const StdTimer&) = delete;
  StdTimer& operator=(const StdTimer&) = delete;

 private:
  // in ms.
  std::chrono::time_point<std::chrono::system_clock> start_time_;
  std::chrono::time_point<std::chrono::system_clock> end_time_;
};

class StdTimerWrapper {
 public:
  explicit StdTimerWrapper(const std::string& msg, EpcvProfileTool* profile)
      : msg_(msg), profile_timing_(profile) {
    timer_.Start();
  }

  ~StdTimerWrapper() {
#if ENABLE_PROFILE_TIMING
    float elapsed_time = timer_.End(msg_);
    if (profile_timing_)
      profile_timing_->push_back(std::make_pair(msg_, elapsed_time));
#endif
  }

  StdTimerWrapper(const StdTimerWrapper&) = delete;
  StdTimerWrapper& operator=(const StdTimerWrapper&) = delete;

 private:
  StdTimer timer_;
  std::string msg_;
  EpcvProfileTool* profile_timing_ = nullptr;
};

#if ENABLE_PROFILE_TIMING
extern EpcvProfileTool s_profiling_times;
extern std::unordered_map<std::thread::id, EpcvProfileTool::EpcvProfileToolPtr> thread_times_;

#ifndef DECLARE_PROFILE_TOOL
#define DECLARE_PROFILE_TOOL std::shared_ptr<EpcvProfileTool> profiling_timings_ = nullptr;
#endif

#ifndef INIT_PROFILE_TOOL
#define INIT_PROFILE_TOOL(name) profiling_timings_ = std::make_shared<EpcvProfileTool>(name);
#endif

#ifndef INIT_PROFILE_TOOL_THREAD
#define INIT_PROFILE_TOOL_THREAD(name)                                \
  {                                                                   \
    auto th_id = std::this_thread::get_id();                          \
    if (thread_times_.find(th_id) == thread_times_.end()) {           \
      thread_times_[th_id] = std::make_shared<EpcvProfileTool>(name); \
    }                                                                 \
  }
#endif

#ifndef ADD_NEW_TOOL
#define ADD_NEW_TOOL(p, name)                 \
  if (profiling_timings_) {                   \
    p = profiling_timings_->addNewTool(name); \
  }
#endif

#ifndef ASSIGNMENT_PROFILE_TOOL
#define ASSIGNMENT_PROFILE_TOOL(val) profiling_timings_ = val;
#endif

#define START_HOST_TIMING(name)                                         \
  std::chrono::time_point<std::chrono::system_clock> name##start_time = \
      std::chrono::system_clock::now();

#define STOP_HOST_TIMING_THREAD(name)                                                              \
  {                                                                                                \
    auto th_id = std::this_thread::get_id();                                                       \
    if (thread_times_[th_id]) {                                                                    \
      std::chrono::time_point<std::chrono::system_clock> name##end_time =                          \
          std::chrono::system_clock::now();                                                        \
      float name##_elap =                                                                          \
          std::chrono::duration_cast<std::chrono::microseconds>(name##end_time - name##start_time) \
              .count() /                                                                           \
          1000.0;                                                                                  \
      thread_times_[th_id]->push_back(std::make_pair(#name, name##_elap));                         \
    }                                                                                              \
  }

// clang-format on
#define STOP_HOST_TIMING(name) STOP_HOST_TIMING_WITH_PTR(name, profiling_timings_)

#define STOP_HOST_TIMING_WITH_PTR(name, p)                                                     \
  std::chrono::time_point<std::chrono::system_clock> name##end_time =                          \
      std::chrono::system_clock::now();                                                        \
  float name##_elap =                                                                          \
      std::chrono::duration_cast<std::chrono::microseconds>(name##end_time - name##start_time) \
          .count() /                                                                           \
      1000.0;                                                                                  \
  if (p)                                                                                       \
    p->push_back(std::make_pair(#name, name##_elap));

#define STOP_HOST_TIMING_GLOBAL(name)                                                          \
  std::chrono::time_point<std::chrono::system_clock> name##end_time =                          \
      std::chrono::system_clock::now();                                                        \
  float name##_elap =                                                                          \
      std::chrono::duration_cast<std::chrono::microseconds>(name##end_time - name##start_time) \
          .count() /                                                                           \
      1000.0;                                                                                  \
  s_profiling_times.push_back(std::make_pair(#name, name##_elap));
// clang-format on

#define PROFILE_HOST_FUNCTION \
  StdTimerWrapper _timer_wrapper_(__FUNCTION__, profiling_timings_.get());

#define PROFILE_HOST_FUNCTION_GLOBAL \
  StdTimerWrapper _timer_wrapper_(__FUNCTION__, &s_profiling_times);

#define START_GPU_TIMING(name, stream)             \
  samplesCommon::GpuTimer name##gpu_timer(stream); \
  name##gpu_timer.start();

#define STOP_GPU_TIMING_GLOBAL(name) \
  name##gpu_timer.stop();            \
  s_profiling_times.emplace_back(std::make_pair(#name, name##gpu_timer.milliseconds()));

#define PRINT_ALL_TIMING()            \
  if (profiling_timings_) {           \
    profiling_timings_->print(AINFO); \
    profiling_timings_->clear();      \
  }

#define PRINT_ALL_TIMING_THREAD()            \
  {                                          \
    auto th_id = std::this_thread::get_id(); \
    if (thread_times_[th_id]) {              \
      thread_times_[th_id]->print(AINFO);    \
      thread_times_[th_id]->clear();         \
    }                                        \
  }

#define PRINT_ALL_TIMING_LOCAL(p) \
  if (p) {                        \
    p->print(AINFO);              \
    p->clear();                   \
  }

#define PRINT_ALL_TIMING_GLOBAL   \
  s_profiling_times.print(AINFO); \
  s_profiling_times.clear();
#else
#define START_HOST_TIMING(name)
#define STOP_HOST_TIMING(name)
#define STOP_HOST_TIMING_GLOBAL(name)
#define START_GPU_TIMING(name, stream)
#define STOP_GPU_TIMING(name)
#define PRINT_ALL_TIMING(name)
#define PRINT_ALL_TIMING_GLOBAL
#define PRINT_ALL_TIMING_LOCAL(p)
#define PROFILE_HOST_FUNCTION
#define PROFILE_HOST_FUNCTION_GLOBAL
#define DECLARE_PROFILE_TOOL
#define INIT_PROFILE_TOOL(name)
#define ASSIGNMENT_PROFILE_TOOL(val)
#define ADD_NEW_TOOL(p, name)
#endif
