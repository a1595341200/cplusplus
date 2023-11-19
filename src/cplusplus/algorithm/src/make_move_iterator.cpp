/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-11-23 16:32:16
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-11-23 16:32:26
 * @FilePath: /cplusplus/src/cplusplus/algorithm/src/make_move_iterator.cpp
 * @Description: 
 * 
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved. 
 */

#include <iostream>
#include <list>
#include <string>
#include <vector>

/**
 * @brief The main function demonstrates the usage of std::make_move_iterator to move elements from a list to a vector.
 */
int main() {
  std::list<std::string> s{"one", "two", "three"};

  std::vector<std::string> v1(s.begin(), s.end());  // copy

  std::vector<std::string> v2(std::make_move_iterator(s.begin()),
                              std::make_move_iterator(s.end()));  // move
  std::cerr << "v1 now holds: ";
  for (const auto& str : v1) std::cout << "\"" << str << "\" ";
  std::clog << "\nv2 now holds: ";
  for (const auto& str : v2) std::cout << "\"" << str << "\" ";
  std::cout << "\noriginal list now holds: ";
  for (const auto& str : s) std::cout << "\"" << str << "\" ";
  std::cout << '\n';
}
