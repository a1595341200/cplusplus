/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 16:01:52
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:06:30
 * @FilePath: /cplusplus/src/DesignMode/ObserverPattern/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>

#include <iostream>

#include "Observer.hpp"
using namespace std;

int main(int argc, char const *argv[]) {
  using namespace BossEmployee;
  std::shared_ptr<Boss> boos(new Boss());
  std::shared_ptr<ObserverType> em1(new Employee(boos));
  em1->subscription([](bool b) { SLOG(INFO) << "老板来啦！" << boolalpha << b; });
  std::shared_ptr<ObserverType> em2(new Employee(boos));
  em2->subscription([](bool b) { SLOG(INFO) << "老板来啦！" << boolalpha << b; });
  boos->notify();
  return 0;
}
