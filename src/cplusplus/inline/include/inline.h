//
// Created by 谢瑶 on 2023/11/8.
//

#ifndef CPLUSPLUS_INLINE_H
#define CPLUSPLUS_INLINE_H
// static 用在头文件会增加程序大小
// 默认全局 定义
int a;
// 声明
extern int c;
// 全局共享 多个文件定义了b变量随意选一个使用
inline int b;
// 默认 extern
void inlineTest();

class InlineTest {
 public:
  // 内类实现默认inline
  // 下面这个只是 声明
  void Test();
  // 默认inline 定义
  void Test2() {}
};
// 多个文件使用这个头文件 会产生Test重定义
void InlineTest::Test(){};
#endif  // CPLUSPLUS_INLINE_H
