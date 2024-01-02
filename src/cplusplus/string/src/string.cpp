#include <Log.h>

#include <cctype>
#include <iostream>

#include <gtest/gtest.h>
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
  //  SLOG(INFO) << "new : " << size << std::endl;
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

TEST(string, a) {
  char a = 'A' + 'a' - 'A';
  char A = 'A';
  SLOG(INFO) << (int)a << "\n";
  SLOG(INFO) << (int)A << "\n";
}

class Solution {
 public:
  bool isPalindrome(string s) {
    for (auto& c : s) {
      c = std::tolower(c);
    }
    SLOG(INFO) << s << "\n";
    for (auto it = s.begin(); it != s.end();) {
      if ((*it) < 'a' || (*it) > 'z') {
        it = s.erase(it);
      } else {
        ++it;
      }
    }

    std::cout << s << std::endl;
    return check(s);
  }

  bool check(const string& s) {
    int r = s.size() - 1;
    int l{};
    while (l < s.size() && r >= 0 && l < r) {
      if (s[l] != s[r]) {
        SLOG(INFO) << l << " " << r << std::endl;
        SLOG(INFO) << s[l] << " " << s[r] << std::endl;
        return false;
      }
      l++;
      r--;
    }
    return true;
  }
};

TEST(Solution, 1) {
  Solution s;
  auto res = s.isPalindrome("A man, a plan, a canal: Panama");
  SLOG(INFO) << res;
}

TEST(istringstream, 1) {
  std::string inputString = "Hello C++ World";
  std::istringstream iss(inputString);

  std::string word;
  while (iss >> word) {
    // 处理每个单词，例如输出
    std::cout << "Word: " << word << std::endl;
  }
}

int main(int argc, char* argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
