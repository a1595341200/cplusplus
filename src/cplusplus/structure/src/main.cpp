/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 15:48:32
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 15:54:36
 * @FilePath: /cplusplus/src/structure/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

#include <gtest/gtest.h>

class Structure {
 public:
  Structure() {
    std::cout << "默认构造" << std::endl;
  }

  Structure(const Structure &c) {
    std::cout << "拷贝构造" << std::endl;
  }

  Structure(Structure &&c) {
    std::cout << "移动构造" << std::endl;
  }

  Structure &operator=(const Structure &c) {
    std::cout << "拷贝赋值" << std::endl;
    return *this;
  }

  Structure &operator=(Structure &&c) {
    std::cout << "移动赋值" << std::endl;
    return *this;
  }
};

Structure func() {
  Structure xx;
  std::cout << &xx << std::endl;
  return xx;
}

TEST(structure, 1) {
  Structure c1 = func();
  std::cout << &c1 << std::endl;
}

TEST(structure, 2) {
  Structure c1;
  //等效 都是拷贝构造
  Structure c2(c1);
  Structure c3 = c2;
  //等效 都是移动构造
  Structure c4 = std::move(c3);
  Structure c5(std::move(c4));
}

TEST(structure, 3) {
  Structure c1;
  Structure c2;
  c1 = c2;
  c1 = std::move(c2);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
