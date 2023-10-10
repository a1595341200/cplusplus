/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 17:56:24
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-10 22:58:10
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

Timer::Timer() {
  start();
}

void Timer::start() {
  startTime = high_resolution_clock::now();
  isStop = false;
  SLOG(INFO) << "开始: " << getCurrentSysTime();
}

void Timer::stop() {
  stopTime = high_resolution_clock::now();
  SLOG(INFO) << "结束: " << getCurrentSysTime();
}

std::string Timer::getElapsedTime() {
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

Timer::~Timer() {
  stop();
  SLOG(INFO) << getElapsedTime();
}

}  // namespace Utils
