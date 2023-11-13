/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-13 10:29:45
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git git config user.email & please set dead value or install git & please set
 * dead value or install git git config user.email & please set dead value or install git & please
 * set dead value or install git git config user.email & please set dead value or install git &
 * please set dead value or install git git config user.email & please set dead value or install git
 * & please set dead value or install git
 * @LastEditTime: 2023-11-13 10:49:01
 * @FilePath: /cplusplus/src/cplusplus/chrnon/src/chrono_precision.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <chrono>
#include <iostream>

int main(int argc, char const *argv[]) {
  auto time = std::chrono::high_resolution_clock::now();
  auto now = time.time_since_epoch();

  std::cout << std::chrono::duration_cast<std::chrono::milliseconds>(now).count() << std::endl;
  // std::ratio
  auto test = std::chrono::duration_cast<std::chrono::duration<double, std::milli>>(now);
  std::cout << std::fixed << test.count() << std::endl;
  std::chrono::duration<double, std::ratio<1, 1000>> a(10.456);
  std::cout << a.count() << std::endl;
  return 0;
}
