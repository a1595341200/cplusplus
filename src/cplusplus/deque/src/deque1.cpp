/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2024-01-05 11:36:21
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2024-01-05 11:37:53
 * @FilePath: /cplusplus/src/cplusplus/deque/src/deque1.cpp
 * @Description: 
 * 
 * Copyright (c) 2024 by ${git_name_email}, All Rights Reserved. 
 */
#include <Log.h>

#include <deque>

#include <gtest/gtest.h>

TEST(deque, 1) {
  std::deque<int> q;
  q.emplace_back(1);
  q.emplace_back(2);
  q.emplace_back(3);
  while (!q.empty())
  {
      SLOG(INFO) << q.back();
      q.pop_back();
  }
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
