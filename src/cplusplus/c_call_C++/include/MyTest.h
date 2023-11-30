//
// Created by 谢瑶 on 2023/11/30.
//

#ifndef CPLUSPLUS_MYTEST_H
#define CPLUSPLUS_MYTEST_H

class MyTest {
 public:
  void print(int a, int b);
  static MyTest* getInstance() {
    static MyTest instance;
    return &instance;
  }

 private:
//  MyTest() = default;
//  MyTest(const MyTest&) = delete;
//  MyTest& operator=(const MyTest&) = delete;
//  MyTest(MyTest&&) = delete;
//  MyTest& operator=(MyTest&&) = delete;
};

#endif  // CPLUSPLUS_MYTEST_H
