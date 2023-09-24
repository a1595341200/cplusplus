/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-03 15:05:25
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-03 15:05:25
 * @FilePath: /boost学习/type_index/src/5.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/type_index.hpp>
#include <cstdlib>
#include <iostream>
#include <stdexcept>

#include <cassert>

class type_erased_unary_function {
  void *function_ptr_;
  boost::typeindex::type_index exact_param_t_;

public:
  template <class ParamT>
  type_erased_unary_function(void (*ptr)(ParamT))
      : function_ptr_(reinterpret_cast<void *>(
            ptr)) // ptr - is a pointer to function returning `void` and
                  // accepting parameter of type `ParamT`
        ,
        exact_param_t_(boost::typeindex::type_id_with_cvr<ParamT>()) {}

  template <class ParamT> void call(ParamT v) {
    if (exact_param_t_ != boost::typeindex::type_id_with_cvr<ParamT>()) {
      throw std::runtime_error("Incorrect `ParamT`");
    }

    return (reinterpret_cast<void (*)(ParamT)>(function_ptr_))(v);
  }
};

void foo(int) {}

int main() {
  type_erased_unary_function func(&foo);
  func.call(100); // OK, `100` has type `int`

  try {
    int i = 100;

    // An attempt to convert stored function to a function accepting reference
    func.call<int &>(i); // Will throw, because types `int&` and `int` mismatch

    assert(false);
  } catch (const std::runtime_error & /*e*/) {
  }
}
