/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 16:20:25
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:20:26
 * @FilePath: /cplusplus/src/env/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#define TAG "env"
#include <Log.h>

#include <cstdlib>
#include <iostream>
using namespace std;

void test1() {
  std::string env = std::getenv("PATH");
  env = "PATH="s + env;
  //修改env就等于直接修改环境变量
  putenv(env.data());
  SLOG(INFO) << env;
  env = "PATH=\"\"";
  env = std::getenv("PATH");
  SLOG(INFO) << env;
}

void test2() {
  std::string env = std::getenv("PATH");
  //修改env并不修改环境变量
  setenv("PATH", env.c_str(), 1);
  SLOG(INFO) << env;
  env = R"(PATH="")";
  env = std::getenv("PATH");
  SLOG(INFO) << env;
}

int main(int argc, char const *argv[]) {
  test1();
  test2();
  return 0;
}
