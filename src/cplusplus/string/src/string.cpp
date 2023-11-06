#include <Log.h>

#include <iostream>
using namespace std;

enum EnumTest : uint8_t { A, B };

void test_assign() {
  char buf[] = "hello world";
  std::string s;
  SLOG(INFO) << sizeof(buf) - 1 << "\n";
  s.assign(buf, sizeof(buf) - 1);
  SLOG(INFO) << s << endl;
  SLOG(INFO) << sizeof(EnumTest::A) << endl;
}

void* operator new(size_t size) {
  SLOG(INFO) << "new : " << size << std::endl;
  return malloc(size);
}

void prints(const std::string& s) {
  SLOG(INFO) << s << std::endl;
}

void printsv(std::string_view s) {
  SLOG(INFO) << s << std::endl;
}

void test_string_view() {
  // 小于一定长度使用定长数组
  // 超过16个使用new 分配
  std::string s(16, '1');
  std::string_view sv = s;
  prints(s);
  // 1次new
  printsv(sv);
  // 0次new
  printsv("1111111111111111");
  // 1次new
  prints("1111111111111111");
}

int main(int argc, char* argv[]) {
  test_string_view();
  return 0;
}
