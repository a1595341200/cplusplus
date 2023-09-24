/*
 * @Author: 谢瑶
 * @Date: 2023-08-03 14:39:48
 * @LastEditors: 谢瑶
 * @LastEditTime: 2023-08-03 14:43:45
 * @FilePath: /type_index/src/1.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/type_index.hpp>
#include <iostream>

template <class T> void foo(T) {
  std::cout << "\n Short name: " << boost::typeindex::type_id<T>().raw_name();
  std::cout << "\n Readable name: "
            << boost::typeindex::type_id<T>().pretty_name();
}

struct user_defined_type {};

namespace ns1 {
namespace ns2 {
struct user_defined_type {};
} // namespace ns2
} // namespace ns1

namespace {
struct in_anon_type {};
} // anonymous namespace

int main() {
  // Call to
  foo(1);
  // will output something like this:
  //
  // (RTTI on)                                            (RTTI off)
  // Short name: i                                        Short name: int]
  // Readable name: int                                   Readable name: int

  user_defined_type t;
  foo(t);
  // Will output:
  //
  // (RTTI on)                                            (RTTI off)
  // Short name: 17user_defined_type                      user_defined_type]
  // Readable name: user_defined_type                     user_defined_type

  ns1::ns2::user_defined_type t_in_ns;
  foo(t_in_ns);
  // Will output:
  //
  // (RTTI on)                                            (RTTI off)
  // Short name: N3ns13ns217user_defined_typeE ns1::ns2::user_defined_type]
  // Readable name: ns1::ns2::user_defined_type ns1::ns2::user_defined_type

  in_anon_type anon_t;
  foo(anon_t);
  // Will output:
  //
  // (RTTI on)                                            (RTTI off)
  // Short name: N12_GLOBAL__N_112in_anon_typeE {anonymous}::in_anon_type]
  // Readable name: (anonymous namespace)::in_anon_type
  // {anonymous}::in_anon_type
}
