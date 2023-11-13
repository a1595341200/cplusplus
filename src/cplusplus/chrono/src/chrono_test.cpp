/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-15 09:45:31
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 15:26:09
 * @FilePath: /cplusplus/chrnon/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>
#include <Utils.h>

#include <gtest/gtest.h>
class Base {
 public:
  virtual void show(int a = 0) = 0;
};

class D : public Base {
 public:
  virtual void show(int a) {
    SLOG(INFO) << a << std::endl;
  }
};

TEST(chrono, type) {
  using namespace std::chrono_literals;
  auto res = 1s;

  Utils::lookType(res);
  SLOG(INFO) << res.count() << std::endl;
  auto res2 = std::chrono::duration_cast<std::chrono::milliseconds>(1s);
  Utils::lookType(res2);
  SLOG(INFO) << res2.count() << std::endl;
}

TEST(chrono, asctime) {
  //秒
  std::time_t p = std::time(nullptr);
  SLOG(INFO) << p;
  auto res = std::localtime(&p);
  SLOG(INFO) << std::asctime(std::localtime(&p));
  SLOG(INFO) << std::localtime(&p)->tm_hour;
}

TEST(chrono, timestamp) {
  for (size_t i = 0; i < 3; i++) {
    //时间点---1000000000 单位是ns
    std::chrono::high_resolution_clock::time_point res = std::chrono::high_resolution_clock::now();
    //时间点转time_t
    auto ressec = std::chrono::high_resolution_clock::to_time_t(res);
    SLOG(INFO) << ressec;
    Utils::lookType(res);
    SLOG(INFO) << res.time_since_epoch().count();
    auto resmil = std::chrono::duration_cast<std::chrono::milliseconds>(res.time_since_epoch());
    SLOG(INFO) << resmil.count();
    std::time_t restime_t = std::chrono::high_resolution_clock::to_time_t(res);
    SLOG(INFO) << std::asctime(std::localtime(&restime_t));
    std::this_thread::sleep_for(std::chrono::seconds(1));
  }
}

int main(int argc, char *argv[]) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
