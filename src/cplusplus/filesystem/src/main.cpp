/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-18 17:51:35
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:30:22
 * @FilePath: /cplusplus/src/filesystem/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <Utils.h>

#include <filesystem>
#include <fstream>

#include <gtest/gtest.h>

TEST(filesystem, dir) {
  for (auto &path : std::filesystem::recursive_directory_iterator(".")) {
    SLOG(INFO) << std::filesystem::absolute(path).generic_string();
  }
}

TEST(filesystem, 2) {
  std::filesystem::path mPath(Utils::getExePath().value() + "/c.txt");
  if (!std::filesystem::exists(mPath)) {
    std::fstream out(mPath, std::ios_base::out | std::ios_base::in | std::ios_base::trunc);
    if (!out.is_open()) {
      SLOG(INFO) << "isopen";
      exit(-1);
    }
  }

  SLOG(INFO) << mPath;
  std::error_code ec;
  std::filesystem::rename(mPath, Utils::getExePath().value() + "/b.txt", ec);
  SLOG(INFO) << ec.message();
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
