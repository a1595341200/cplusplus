/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 16:00:57
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:05:54
 * @FilePath: /cplusplus/src/DesignMode/DecoratorPattern/src/DecoratorPattern.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/3/2.
//
#define TAG "DecoratorPattern"
#include "DecoratorPattern.h"

#include <Log.h>

Person::Person(const std::string &name) : mName(name) {}

void Person::show() {
  SLOG(INFO) << mName;
}

void Decorator::show() {
  mContext->show();
}

void Suit::show() {
  SLOG(INFO) << " Suit ";
  Decorator::show();
}

void Sneaker::show() {
  SLOG(INFO) << " Sneaker ";
  Decorator::show();
}

void Cat::show() {
  SLOG(INFO) << " Cat ";
  Decorator::show();
}

void Decorator::setContext(std::shared_ptr<Person> context) {
  mContext = context;
}
