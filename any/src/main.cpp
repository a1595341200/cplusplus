#include <Log.h>
#include <any>
#include <functional>
#include <gtest/gtest.h>
#include <iostream>
#include <map>
#include <tuple>

class Command {
  virtual void test();
  std::function<void()> f_;

public:
  Command() {}

  Command(std::function<void()> f) : f_(f) {}

  void execute() {
    if (f_)
      f_();
  }
};

TEST(Command, test) {
  std::map<int, std::any> m;
  std::any a = 1;
  m[1] = a;
  m[1] = std::function<int(int)>([](int x) { return x + 1; });
  m[2] = std::function<bool(int)>([](int x) { return true; });
  SLOG(INFO) << std::any_cast<std::function<bool(int)>>(m[2])(5);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
