/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-14 14:06:19
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-14 14:10:36
 * @FilePath: /cplusplus/addressof/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>

#include <gtest/gtest.h>
//结构化绑定

TEST(structured_binding, 1) {
  int a[] = {1, 2, 3};
  auto [a1, a2, a3]{a};
  SLOG(INFO) << a1;
  SLOG(INFO) << a2;
  SLOG(INFO) << a3;
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
