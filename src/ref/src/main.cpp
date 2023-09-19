#define TAG "ref"
#include <Log.h>
#include <gtest/gtest.h>
#include <thread>
void f(int &a) { SLOG(INFO) << &a; }

TEST(ref, bind_cpoy) {
  int a = 1;
  SLOG(INFO) << &a;
  // bind默认传递拷贝
  auto func = std::bind(f, a);
  func();
}

TEST(ref, bind_ref) {
  int a = 1;
  SLOG(INFO) << &a;
  auto func = std::bind(f, std::ref(a));
  func();
}

TEST(thread, thread_copy) {
  int a = 1;
  SLOG(INFO) << &a;
  // threa对于传递引用函数在编译时会编译失败
  //   auto t = std::thread(f, a);
  //   t.join();
}

TEST(thread, thread_ref) {
  int a = 1;
  SLOG(INFO) << &a;
  auto t = std::thread(f, std::ref(a));
  t.join();
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
