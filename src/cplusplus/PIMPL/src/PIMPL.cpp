/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-06 17:48:13
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git
 * @LastEditTime: 2023-11-06 17:56:10
 * @FilePath: /cplusplus/src/cplusplus/PIMPL/src/PIMPL.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/11/6.
//

#include "PIMPL.h"

#include <iostream>
// MyClass.cpp
class MyClass::Impl {
 public:
  void doSomethingPrivate();
};

MyClass::MyClass() : m_pImpl(std::make_unique<Impl>()) {}

MyClass::~MyClass() {

}

void MyClass::doSomething() {
  m_pImpl->doSomethingPrivate();
}

void MyClass::Impl::doSomethingPrivate() {
  // implementation details
  std::cout << "MyClass::Impl::doSomethingPrivate()" << std::endl;
}
