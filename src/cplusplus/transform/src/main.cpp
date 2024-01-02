/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2024-01-02 14:33:22
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2024-01-02 16:08:51
 * @FilePath: /cplusplus/src/cplusplus/transform/src/main.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
#include <printT.h>

#include <algorithm>

#include <gtest/gtest.h>

#include <backward.hpp>

namespace backward {
backward::SignalHandling sh;
}
#include <Log.h>

TEST(transform, 1) {
  std::vector<int> v = {1, 2, 3, 4, 5};
  SLOG(INFO) << v;
  std::vector<int> w(v.size(), 0);
  std::transform(v.begin(), v.end(), w.begin(), [](int i) -> int { return i += 1; });
  SLOG(INFO) << w;
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);  //将命令行参数传递给gtest
  return RUN_ALL_TESTS();                // RUN_ALL_TESTS()运行所有测试案例
}
