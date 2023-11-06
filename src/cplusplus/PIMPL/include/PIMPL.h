/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-06 17:48:13
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-11-06 17:55:25
 * @FilePath: /cplusplus/src/cplusplus/PIMPL/include/PIMPL.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/11/6.
//

#ifndef CPLUSPLUS_PIMPL_H
#define CPLUSPLUS_PIMPL_H
#include <memory>
// MyClass.h
class MyClass {
 public:
  MyClass();
  ~MyClass();

  void doSomething();

 private:
  class Impl;
  std::unique_ptr<Impl> m_pImpl;
};

#endif  // CPLUSPLUS_PIMPL_H
