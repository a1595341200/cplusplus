#include "perf.h"

#if ENABLE_PROFILE_TIMING
EpcvProfileTool s_profiling_times("global");
std::unordered_map<std::thread::id, EpcvProfileTool::EpcvProfileToolPtr> thread_times_;
#endif
// std::this_thread::get_id();
using std::string;

void StdTimer::Start() {
  start_time_ = std::chrono::system_clock::now();
}

float StdTimer::End(const string& msg) {
  end_time_ = std::chrono::system_clock::now();
  float elapsed_time =
      std::chrono::duration_cast<std::chrono::microseconds>(end_time_ - start_time_).count() /
      1000.0;
  // start new timer.
  start_time_ = end_time_;
  return elapsed_time;
}