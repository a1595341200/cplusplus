/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-15 15:32:01
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-15 15:32:14
 * @FilePath: /cplusplus/src/algorithm/src/make_move_iterator.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <iterator>
#include <list>
#include <string>
#include <vector>

int main() {
  std::list<std::string> s{"one", "two", "three"};

  std::vector<std::string> v1(s.begin(), s.end());  // copy

  std::vector<std::string> v2(std::make_move_iterator(s.begin()),
                              std::make_move_iterator(s.end()));  // move

  std::cout << "v1 now holds: ";
  for (auto str : v1) std::cout << "\"" << str << "\" ";
  std::cout << "\nv2 now holds: ";
  for (auto str : v2) std::cout << "\"" << str << "\" ";
  std::cout << "\noriginal list now holds: ";
  for (auto str : s) std::cout << "\"" << str << "\" ";
  std::cout << '\n';
}
