/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-11-30 11:56:22
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-11-30 11:57:52
 * @FilePath: /cplusplus/src/cplusplus/c_call_C++/src/MyTest.cpp
 * @Description: 
 * 
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved. 
 */
//
// Created by 谢瑶 on 2023/11/30.
//

#include "MyTest.h"

#include <iostream>

void MyTest::print(int a, int b) {
  std::cout << a << ", " << b << std::endl;
}

#ifdef __cplusplus
extern "C" {
#endif

void print(int a, int b) {
  MyTest::getInstance()->print(a, b);
}

void* getMyTest() {
  return MyTest::getInstance();
}

void* createMyTest() {
  return new MyTest();
}
void deleteMyTest(void* mytest) {
  delete (MyTest*) mytest;
}

void print_with_instance(void* mytest,int a, int b) {
  ((MyTest*)mytest)->print(a, b);
}
#ifdef __cplusplus
}
#endif
