/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 17:54:19
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-09 11:53:39
 * @FilePath: /cplusplus/utils/include/Timer.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef TIMER_H
#define TIMR_H
#include <chrono>
#include <string>
namespace Utils {

// namespace Utils

class Timer {
 public:
  void start();
  void stop();

  std::string getElapsedTime();

 private:
  std::chrono::time_point<std::chrono::steady_clock> startTime;
  std::chrono::time_point<std::chrono::steady_clock> stopTime;
};
}  // namespace Utils
#endif /* TIMER_H */
