/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-13 13:08:56
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-13 13:31:49
 * @FilePath: /cplusplus/vector/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#define TAG "vector"
#include <Log.h>
#include <gtest/gtest.h>
#include <iostream>
#include <vector>

TEST(vector, resize) {
  std::vector<int> v = {1, 2, 3, 4, 5};
  //只改变大小，不改变capacity
  //当n小于现有大小，保留前n个，销毁后面的
  v.resize(2);
  SLOG(INFO) << v.capacity();
  for (int i = 0; i < v.size(); i++) {
    SLOG(INFO) << v[i];
  }
}

TEST(vector, reserve) {
  std::vector<int> v = {1, 2, 3, 4, 5};
  //当n小于capacity，什么都不做
  v.reserve(2);
  SLOG(INFO) << v.capacity();
  for (int i = 0; i < v.size(); i++) {
    SLOG(INFO) << v[i];
  }
}

int main(int argc, char *argv[]) {
  Log::init(argc, argv);
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
