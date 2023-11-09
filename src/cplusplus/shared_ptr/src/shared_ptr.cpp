/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-09 14:44:53
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git
 * @LastEditTime: 2023-11-09 14:47:23
 * @FilePath: /cplusplus/src/cplusplus/shared_ptr/src/shared_ptr.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <memory>
using namespace std;

void test(const shared_ptr<int>& t) {
  std::cout << t.use_count() << std::endl;
}

class BadCase : public std::enable_shared_from_this<BadCase> {
 public:
  std::shared_ptr<BadCase> get() {
    return shared_from_this();
  }

 private:
};

int main(int argc, char const* argv[]) {
  shared_ptr<int> t(new int(1));
  std::cout << t.use_count() << std::endl;
  test(t);
  std::cout << t.use_count() << std::endl;
  try {
    BadCase badCase;
    badCase.get();
  } catch (const std::exception& e) {
    std::cerr << e.what() << '\n';
  }
  return 0;
}
