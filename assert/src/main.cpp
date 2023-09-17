/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-14 15:34:52
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-14 15:38:24
 * @FilePath: /cplusplus/assert/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <cassert>
#include <gtest/gtest.h>
//预编译断言
#ifndef TEST
#error no test
#endif
//运行时断言
void runtimeAssert() {
  int i = 1;
  assert(i == 1);
}

TEST(ASSERT, runtime) { runtimeAssert(); }
bool constexpr isEQ(int a, int b) { return a == b; }

//编译期断言
const static int i = 1;
static_assert(isEQ(i, 1), "false");

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
