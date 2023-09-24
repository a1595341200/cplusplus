/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-03 15:11:29
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-03 15:11:30
 * @FilePath: /boost学习/type_index/src/6.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/type_index/ctti_type_index.hpp>
#include <boost/type_index/stl_type_index.hpp>
#include <iostream>

template <class T> void print(const char *name) {
  boost::typeindex::stl_type_index sti =
      boost::typeindex::stl_type_index::type_id<T>();
  boost::typeindex::ctti_type_index cti =
      boost::typeindex::ctti_type_index::type_id<T>();
  std::cout << "\t[" /* start of the row */
            << "[" << name << "]"
            << "[`" << sti.raw_name() << "`] "
            << "[`" << sti.pretty_name() << "`] "
            << "[`" << cti.raw_name() << "`] "
            << "]\n" /* end of the row */;
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

namespace ns3 {
namespace {
namespace ns4 {
struct in_anon_type {};
} // namespace ns4
} // namespace
} // namespace ns3

template <class T0, class T1> class templ {};

template <> class templ<int, int> {};

int main() {
  std::cout << "[table:id Table of names\n";
  std::cout << "\t[[Type] [RTTI & raw_name] [RTTI & pretty_name] [noRTTI & "
               "raw_name]]\n";

  print<user_defined_type>("User defined type");
  print<in_anon_type>("In anonymous namespace");
  print<ns3::ns4::in_anon_type>("In ns3::{anonymous}::ns4 namespace");
  print<templ<short, int>>("Template class");
  print<templ<int, int>>("Template class (full specialization)");
  print<templ<templ<char, signed char>, templ<int, user_defined_type>>>(
      "Template class with templae classes");

  std::cout << "]\n";
}
