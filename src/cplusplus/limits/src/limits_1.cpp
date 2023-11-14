/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-13 23:44:19
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-13 23:44:19
 * @FilePath: /cplusplus/src/cplusplus/limits/src/1.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <limits>

int main() {
  // 获取不同整数类型的最大值
  int maxInt = std::numeric_limits<int>::max();
  long long maxLongLong = std::numeric_limits<long long>::max();
  short maxShort = std::numeric_limits<short>::max();

  std::cout << "Maximum int: " << maxInt << std::endl;
  std::cout << "Maximum long long: " << maxLongLong << std::endl;
  std::cout << "Maximum short: " << maxShort << std::endl;

  return 0;
}
