/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-13 13:08:56
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git git config user.email & please set dead value or install git & please set
 * dead value or install git git config user.email & please set dead value or install git & please
 * set dead value or install git git config user.email & please set dead value or install git &
 * please set dead value or install git git config user.email & please set dead value or install git
 * & please set dead value or install git
 * @LastEditTime: 2023-11-15 15:55:34
 * @FilePath: /cplusplus/vector/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#define TAG "vector"
#include <Log.h>
#include <Utils.h>

#include <iostream>
#include <numeric>
#include <vector>

#include <gtest/gtest.h>

TEST(vector, resize) {
  std::vector<int> v(5);
  std::iota(v.begin(), v.end(), 1);
  // 只改变大小，不改变capacity
  // 当n小于现有大小，保留前n个，销毁后面的
  v.resize(2);
  SLOG(INFO) << v.capacity();
  for (int i = 0; i < v.size(); i++) {
    SLOG(INFO) << v[i];
  }
}

TEST(vector, reserve) {
  std::vector<int> v(5);
  std::iota(v.begin(), v.end(), 1);
  //当n小于capacity，什么都不做
  v.reserve(2);
  SLOG(INFO) << v.capacity();
  for (int i = 0; i < v.size(); i++) {
    SLOG(INFO) << v[i];
  }
}

TEST(vector, sizeof) {
  std::vector<int> v(1000);
  std::iota(v.begin(), v.end(), 1);
  SLOG(INFO) << "capacity(v)= " << v.capacity();
  SLOG(INFO) << "real size(v) " << Utils::getVectorSize(v);
}

TEST(vector, data) {
  std::vector<int> v(6);
  std::iota(v.begin(), v.end(), 1);
  int *p = v.data();
  for (int i = 0; i < v.size(); ++i) {
    SLOG(INFO) << *(p + i);
  }

  std::vector<int> v1(p, p + v.size());
  for (int i = 0; i < v1.size(); ++i) {
    SLOG(INFO) << v1[i];
  }
}

int main(int argc, char *argv[]) {
  Log::init(argc, argv);
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
