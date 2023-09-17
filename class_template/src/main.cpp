/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-15 09:47:14
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-15 09:58:37
 * @FilePath: /cplusplus/class_template/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#define TAG "class_template"
#include <Log.h>
using namespace std;

class A {
public:
  void set() { SLOG(INFO) << "A set"; }
};

class B : public A {
public:
  void set() { SLOG(INFO) << "B set"; }
};

class C : public B {
public:
};

int main(int argc, char *argv[]) {
  Log::init(argc, argv);
  B *a = new C();
  a->set();
  delete a;
  Log::shutdown();
  return 0;
}
