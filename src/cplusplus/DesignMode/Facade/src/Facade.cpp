/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 16:01:15
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:06:07
 * @FilePath: /cplusplus/src/DesignMode/Facade/src/Facade.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/3/4.
//
#define TAG "Facade"
#include "Facade.h"

#include <Log.h>

Facade::Facade() {
  mA = SystemA();
  mB = SystemB();
  mC = SystemC();
  mD = SystemD();
}

void Facade::methodA() {
  SLOG(INFO) << "methodA";
  mA.methodOne();
  mB.methodTwo();
}

void SystemA::methodOne() {
  SLOG(INFO) << "methodOne";
}

void SystemB::methodTwo() {
  SLOG(INFO) << "methodTwo";
}

void SystemC::methodThree() {
  SLOG(INFO) << "methodThree";
}

void SystemD::methodFour() {
  SLOG(INFO) << "methodFour";
}
