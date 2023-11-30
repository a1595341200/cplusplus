/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-14 14:06:19
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-11-29 16:41:11
 * @FilePath: /cplusplus/src/cplusplus/addressof/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <gtest/gtest.h>
class TestAddressof {
public:
  int operator&() { return 1; }
};

TEST(TestAddressof, addressof) {
  TestAddressof t;
  SLOG(INFO) << &t;
  //返回对象真实的地址，而不是&的重载
  SLOG(INFO) << std::addressof(t);
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
