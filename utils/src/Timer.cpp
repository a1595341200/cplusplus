/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 17:56:24
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git git config user.email & please set dead value or install git & please set
 * dead value or install git git config user.email & please set dead value or install git & please
 * set dead value or install git git config user.email & please set dead value or install git &
 * please set dead value or install git git config user.email & please set dead value or install git
 * & please set dead value or install git git config user.email & please set dead value or install
 * git & please set dead value or install git git config user.email & please set dead value or
 * install git & please set dead value or install git git config user.email & please set dead value
 * or install git & please set dead value or install git git config user.email & please set dead
 * value or install git & please set dead value or install git
 * @LastEditTime: 2023-11-08 13:31:10
 * @FilePath: /utils/src/Timer.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#define TAG "Timer"
#include "Timer.h"

#include <Log.h>
#include <Utils.h>

#include <sstream>
namespace Utils {
using namespace std::chrono;
class Timer::TimerImpl {
 public:
  TimerImpl();
  void start();
  void stop();
  ~TimerImpl();

  std::string getElapsedTime();

 private:
  std::chrono::time_point<std::chrono::high_resolution_clock> stopTime;
  std::chrono::time_point<std::chrono::high_resolution_clock> startTime;
  bool isStop{false};
};

Timer::TimerImpl::TimerImpl() {
  start();
}

void Timer::TimerImpl::start() {
  startTime = high_resolution_clock::now();
  isStop = false;
  SLOG(INFO) << "开始: " << getCurrentSysTime();
}

void Timer::TimerImpl::stop() {
  stopTime = high_resolution_clock::now();
  SLOG(INFO) << "结束: " << getCurrentSysTime();
}

std::string Timer::TimerImpl::getElapsedTime() {
  if (!isStop) {
    stopTime = high_resolution_clock::now();
    isStop = true;
  }
  //默认纳秒，高精度转低精度需要强转
  std::chrono::nanoseconds diff = stopTime - startTime;
  std::ostringstream o;
  o << "花费了 : " << std::chrono::duration_cast<std::chrono::microseconds>(diff).count()
    << " us 微秒";
  return o.str();
}

Timer::TimerImpl::~TimerImpl() {
  stop();
  SLOG(INFO) << getElapsedTime();
}

//移动语义
Timer::Timer() : pImpl(std::make_unique<TimerImpl>()) {}

void Timer::start() {
  pImpl->start();
}

void Timer::stop() {
  pImpl->stop();
}

std::string Timer::getElapsedTime() {
  return pImpl->getElapsedTime();
}

Timer::~Timer() = default;
}  // namespace Utils
