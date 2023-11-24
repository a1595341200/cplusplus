
#include <algorithm>
#include <numeric>
#include <random>

#include "gtest/gtest.h"
#define private public
#include "circularly_ordered_array.hpp"

template <size_t size>
void generate(std::array<double, size> &array) {
  std::random_device rd;   // 用于获取随机数种子
  std::mt19937 gen(rd());  // 使用Mersenne Twister算法生成随机数
  //  std::uniform_real_distribution<> dis(100.0, 0.0);
  std::uniform_int_distribution<> dis(0, 100);
  //  std::normal_distribution<> dis(0, 100.0);  //
  //  创建一个生成0.0到100.0之间正态分布分布的随机数分布
  std::generate_n(array.begin(), size, [&]() {
    return dis(gen);  // 用dis(gen)生成随机数
  });
}

TEST(circularly_ordered_array, generate) {
  CircularlyOrderedArray<double, 30> test;
  std::array<double, 30> array{};
  generate(array);
  for (auto &val : array) {
    test.push(val);
  }
//  test.printSortMaxToMin();
  auto result = test.getSortMaxToMin();
  std::sort(array.begin(), array.end(),std::greater());
  for(int i = 0; i < result.size(); ++i) {
    EXPECT_EQ(result[i], array[i]);
  }
}

TEST(circularly_ordered_array, outRangePush) {
  CircularlyOrderedArray<double, 10> test;
  std::array<double, 30> array{};
  generate(array);
  for (auto &val : array) {
    test.push(val);
  }
//  test.printSortMaxToMin();
  auto result = test.getSortMaxToMin();
  std::sort(array.begin(), array.end(),std::greater());
  for(int i = 0; i < result.size(); ++i) {
    EXPECT_EQ(result[i], array[i]);
  }
}

int main(int argc, char const *argv[]) {
  testing::InitGoogleTest(&argc, const_cast<char **>(argv));
  return RUN_ALL_TESTS();
}
