/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 16:21:25
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:27:15
 * @FilePath: /cplusplus/src/Execute_before_main/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>

#include <iostream>
#include <memory>
using namespace std;
const char defaultT[] = "A";

template <const char T[] = defaultT>
class A {
 public:
  A() {
    SLOG(INFO) << T << endl;
  }

  ~A() {
    SLOG(INFO) << "~" << T << endl;
  }
};

A<defaultT> *a = new A();
const char B[] = "B";
std::unique_ptr<A<B>> b = std::make_unique<A<B>>();
const char C[] = "C";
std::unique_ptr<A<C>> c = []() { return std::make_unique<A<C>>(); }();

int main(int argc, char const *argv[]) {
  SLOG(INFO) << "main" << endl;
  delete a;
  return 0;
}
