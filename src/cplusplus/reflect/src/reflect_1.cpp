/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-11-29 09:49:58
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-11-29 09:49:58
 * @FilePath: /cplusplus/src/cplusplus/reflect/src/reflect_1.cpp
 * @Description:
 *
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved.
 */
#include <iostream>
#ifdef _WIN64
#define __FUNC__ __FUNCSIG__
#else
#define __FUNC__ __PRETTY_FUNCTION__
#endif

template <typename T>
constexpr void Func() {
  std::cout << __FUNC__ << std::endl;
}

void getType() {
  Func<int>();
}
int main() {
  getType();
}
