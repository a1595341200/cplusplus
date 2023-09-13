/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 17:56:24
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-13 11:43:09
 * @FilePath: /utils/src/Timer.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Timer.h"
#include <sstream>
namespace Utils {
using namespace std::chrono;

void Timer::start() { startTime = steady_clock::now(); }

void Timer::stop() { stopTime = steady_clock::now(); }

std::string Timer::getElapsedTime() {
  std::chrono::duration<double> diff = stopTime - startTime;
  std::ostringstream o;
  o << "花费了 : " << diff.count() << " ms 毫秒";
  return o.str();
}

} // namespace Utils
