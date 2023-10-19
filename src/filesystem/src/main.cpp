/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-18 17:51:35
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-18 18:04:25
 * @FilePath: /cplusplus/src/filesystem/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>

#include <filesystem>
#include <iostream>

#include <gtest/gtest.h>

TEST(filesystem, dir) {
  for (auto &path : std::filesystem::recursive_directory_iterator(".")) {
    SLOG(INFO) << std::filesystem::absolute(path).generic_string();
  }
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
