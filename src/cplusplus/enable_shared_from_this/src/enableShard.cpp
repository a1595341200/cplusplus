/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 16:15:25
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:16:51
 * @FilePath: /cplusplus/src/enable_shared_from_this/src/enableShard.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Utils.h>

#include <iostream>
#include <memory>
using namespace std;

class Test;

class B {
 public:
  B(const shared_ptr<Test> &t) {
    SLOG(INFO) << "B()" << endl;
    this->t = t;
  }

  ~B() {
    SLOG(INFO) << "~B()" << endl;
  }

 private:
  weak_ptr<Test> t;
};

class Test : public enable_shared_from_this<Test> {
 public:
  Test() {
    SLOG(INFO) << "Test()" << endl;
  }

  void init() {
    b = make_shared<B>(shared_from_this());
  }

  ~Test() {
    SLOG(INFO) << "~Test()" << endl;
  }

 private:
  shared_ptr<B> b;
};

int main() {
  //   Timer::printTime(__FILE__, __LINE__);
  shared_ptr<Test> t(new Test());
  {
    SLOG(INFO) << t.use_count() << std::endl;
    t->init();
    SLOG(INFO) << t.use_count() << std::endl;
  }
  SLOG(INFO) << t.use_count() << std::endl;
}
