#include <Log.h>

#include <algorithm>
// #include <execution>
#include <vector>

#include <gtest/gtest.h>

std::vector<int> generateDate() {
  int count = 1000;
  std::vector<int> v;

  for (size_t i = 0; i < count; i++) {
    v.emplace_back(i);
  }

  return v;
}

TEST(for_each, 1) {
  auto v = generateDate();
  std::for_each(v.begin(), v.end(), [](int i) { SLOG(INFO) << "{" << i << "}"; });
}
// //并行
// TEST(for_each, 2) {
//   auto v = generateDate();
//   std::for_each(std::execution::par, v.begin(), v.end(),
//                 [](int i) { SLOG(INFO) << "{" << i << "}"; });
// }

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);  //将命令行参数传递给gtest
  return RUN_ALL_TESTS();                // RUN_ALL_TESTS()运行所有测试案例
}
