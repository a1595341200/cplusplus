#include <printT.h>

#include <algorithm>

#include <gtest/gtest.h>

#include "backward-cpp/backward.hpp"

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
