/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-15 15:50:40
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git
 * @LastEditTime: 2023-11-15 15:52:36
 * @FilePath: /cplusplus/src/cplusplus/numeric/src/iota.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <algorithm>
#include <iostream>
#include <list>
#include <numeric>
#include <random>
#include <vector>

int main() {
  std::list<int> l(10);
  std::iota(l.begin(), l.end(), -4);

  std::vector<std::list<int>::iterator> v(l.size());
  std::iota(v.begin(), v.end(), l.begin());

  std::shuffle(v.begin(), v.end(), std::mt19937{std::random_device{}()});

  std::cout << "Contents of the list: ";
  for (auto n : l) std::cout << n << ' ';
  std::cout << '\n';

  std::cout << "Contents of the list, shuffled: ";
  for (auto i : v) std::cout << *i << ' ';
  std::cout << '\n';
}
