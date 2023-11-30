/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-11-30 11:59:51
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-11-30 11:59:52
 * @FilePath: /cplusplus/src/cplusplus/c_call_C++/src/mian.c
 * @Description: 
 * 
 * Copyright (c) 2023 by ${git_name_email}, All Rights Reserved. 
 */
#include "MyTest_c.h"
int main(int argc, char const *argv[]) {
  print(1,2);
  void *mytest = createMyTest();
  print_with_instance(mytest, 3, 4);
  deleteMyTest(mytest);
  return 0;
}
