#include <Log.h>

#include <queue>

#include <gtest/gtest.h>

TEST(queue, 1) {
  std::queue<int> q;
  q.emplace(1);
  q.emplace(2);
  q.emplace(3);
  while (!q.empty())
  {
      SLOG(INFO) << q.front();
      q.pop();
  }
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
