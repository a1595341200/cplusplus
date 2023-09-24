/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-03 14:56:47
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-03 14:56:48
 * @FilePath: /boost学习/type_index/src/3.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/type_index.hpp>
#include <boost/type_index/runtime_cast/register_runtime_class.hpp>
#include <iostream>

struct A {
  BOOST_TYPE_INDEX_REGISTER_CLASS
  virtual ~A() {}
};
struct B : public A {
  BOOST_TYPE_INDEX_REGISTER_CLASS
};
struct C : public B {
  BOOST_TYPE_INDEX_REGISTER_CLASS
};
struct D : public C {
  BOOST_TYPE_INDEX_REGISTER_RUNTIME_CLASS(BOOST_TYPE_INDEX_NO_BASE_CLASS)
};

void print_real_type(const A &a) {
  std::cout << boost::typeindex::type_id_runtime(a).pretty_name() << '\n';
}

int main() {
  C c;
  const A &c_as_a = c;
  print_real_type(c_as_a); // Outputs `struct C`
  print_real_type(B());    // Outputs `struct B`
}
