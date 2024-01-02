/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-14 14:24:33
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-14 14:40:34
 * @FilePath: /cplusplus/align/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>

#include <gtest/gtest.h>

using namespace std;

struct unAlign {
  char a{};
  int b{};
};

#pragma pack(push, 1)
struct Align {
  char a{};
  int b{};
};

#pragma pack(pop)
// alignas 对齐不可小于最小对齐
struct alignas(8) AlignAs {
  double c{};
  char a{};
  int b{};
};

TEST(Align, PragmaTest) {
  SLOG(INFO) << alignof(unAlign);
  SLOG(INFO) << alignof(Align);
}

TEST(Align, alignasTest) {
  SLOG(INFO) << alignof(AlignAs);
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
