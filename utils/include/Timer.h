/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 17:54:19
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git git config user.email & please set dead value or install git & please set
 * dead value or install git git config user.email & please set dead value or install git & please
 * set dead value or install git
 * @LastEditTime: 2023-11-08 14:20:50
 * @FilePath: /cplusplus/utils/include/Timer.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef TIMER_H
#define TIMR_H
#include <chrono>
#include <memory>
#include <string>
namespace Utils {

// namespace Utils

class Timer {
 public:
  Timer();
  ~Timer();
  void start();
  void stop();

  std::string getElapsedTime();

 private:
  class TimerImpl;
  std::unique_ptr<TimerImpl> pImpl;
};
}  // namespace Utils
#endif /* TIMER_H */
