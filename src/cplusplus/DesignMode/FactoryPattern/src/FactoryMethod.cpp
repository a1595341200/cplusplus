/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 15:59:54
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:01:26
 * @FilePath: /cplusplus/src/DesignMode/FactoryPattern/src/FactoryMethod.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
//
// Created by 谢瑶 on 2023/3/3.
//

#include "FactoryMethod.h"

void FactoryMethod::setNumberA(double val) {
  numberA = val;
}

void FactoryMethod::setNumberB(double val) {
  numberB = val;
}

double FactoryMethodAdd::getResult() {
  return numberA + numberB;
}

double FactoryMethodSub::getResult() {
  return numberA - numberB;
}

std::shared_ptr<FactoryMethod> AddFactory::creatFactoryMethod() {
  return std::make_shared<FactoryMethodAdd>();
}

std::shared_ptr<FactoryMethod> SubFactory::creatFactoryMethod() {
  return std::make_shared<FactoryMethodSub>();
}
