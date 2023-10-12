/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-15 09:45:31
 * @LastEditors: 谢瑶
 * @LastEditTime: 2023-10-12 09:44:02
 * @FilePath: /cplusplus/chrnon/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Utils.h>

#include <iostream>

using namespace std;

class Base {
 public:
  virtual void show(int a = 0) = 0;
};

class D : public Base {
 public:
  virtual void show(int a) {
    std::cout << a << std::endl;
  }
};

int main(int argc, char const *argv[]) {
  using namespace std::chrono_literals;
  auto res = 1s;

  Utils::lookType(res);
  std::cout << res.count() << std::endl;
  auto res2 = std::chrono::duration_cast<std::chrono::milliseconds>(1s);
  Utils::lookType(res2);
  std::cout << res2.count() << std::endl;
  return 0;
}
