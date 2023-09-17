/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-14 15:24:41
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-14 15:27:40
 * @FilePath: /cplusplus/time/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <ctime>
#include <gtest/gtest.h>
using namespace std;

TEST(Time, asctime) {
  std::time_t p = std::time(nullptr);
  SLOG(INFO) << std::asctime(std::localtime(&p));
  SLOG(INFO) << std::localtime(&p)->tm_hour;
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
