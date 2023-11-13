/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-13 10:50:32
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git git config user.email & please set dead value or install git & please set
 * dead value or install git git config user.email & please set dead value or install git & please
 * set dead value or install git
 * @LastEditTime: 2023-11-13 11:01:39
 * @FilePath: /cplusplus/src/cplusplus/chrono/src/chrono_interval_calculation.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <chrono>
#include <iostream>
#include <thread>

int main() {
  using namespace std::chrono;

  // 创建两个时间点
  high_resolution_clock::time_point start = high_resolution_clock::now();
  std::this_thread::sleep_for(std::chrono::seconds(2));  // 模拟耗时操作
  high_resolution_clock::time_point end = high_resolution_clock::now();

  // 计算时间间隔
  // 第二个模版参数不填默认为1
  // std::ratio<1, 1>为秒
  duration<double> d = duration_cast<duration<double>>(end - start);

  // 输出时间间隔
  std::cout << "Elapsed time: " << d.count() << " seconds\n";

  return 0;
}
