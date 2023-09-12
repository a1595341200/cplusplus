#ifndef TIMER_H
#define TIMR_H
#include <chrono>
namespace Utils {

// namespace Utils

class Timer {

public:
  void start();
  void stop();

  double getElapsedTime();

private:
  std::chrono::time_point<std::chrono::steady_clock> startTime;
  std::chrono::time_point<std::chrono::steady_clock> stopTime;
};
} // namespace Utils
#endif /* TIMER_H */
