/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-11-29 09:57:54
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-11-29 09:57:54
 * @FilePath: /cplusplus/src/cplusplus/reflect/src/reflect_3.cpp
 * @Description:
 *
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved.
 */
#include <iostream>
#include <string>

#ifdef _WIN64
#define __FUNC__ __FUNCSIG__
#else
#define __FUNC__ __PRETTY_FUNCTION__
#endif

enum class DataType { USB, PCI, HD };
enum DType { USB, PCI, HD };

template <auto T>
auto TypeInfo() {
  std::string type = __FUNC__;
  std::cout << type << std::endl;
  auto begin = type.find("T = ") + 4;
  auto end = type.find_last_of(']');
  return std::string_view{type.data() + begin, end - begin};
}

int main() {
  std::cout << TypeInfo<DataType::HD>() << std::endl;
  std::cout << TypeInfo<DType::HD>() << std::endl;
}
