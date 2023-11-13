/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-13 11:14:07
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git
 * @LastEditTime: 2023-11-13 11:21:04
 * @FilePath: /cplusplus/src/cplusplus/chrono/src/chrono_time.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <ctime>
#include <iomanip>
#include <iostream>

int main() {
  std::time_t currentTime;
  //获取时间戳
  std::time(&currentTime);
  std::cout << "Current time as std::time_t: " << currentTime << std::endl;
  // std::put_time 可以自定义显示风格
  std::cout << "Current time: " << std::put_time(std::localtime(&currentTime), "%c") << std::endl;
  return 0;
}
