/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 16:05:26
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:05:26
 * @FilePath: /cplusplus/src/DesignMode/FactoryPattern/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <dbg.h>

#include <iostream>

#include "Abstractfactory.h"
#include "FactoryMethod.h"
#include "operation.h"
using namespace std;

void SimpleFactory() {
  auto operation = OperationFactory::creatOperation('+');
  operation->setNumberA(1);
  operation->setNumberB(2);
  dbg(operation->getResult());
  operation = OperationFactory::creatOperation('-');
  operation->setNumberA(1);
  operation->setNumberB(2);
  dbg(operation->getResult());
}

void factoryMethod() {
  std::shared_ptr<FactoryMethodFactoryInterface> factory(new AddFactory());
  auto op = factory->creatFactoryMethod();
  op->setNumberA(2);
  op->setNumberB(1);
  dbg(op->getResult());
  factory = std::make_shared<SubFactory>();
  op = factory->creatFactoryMethod();
  op->setNumberA(2);
  op->setNumberB(1);
  dbg(op->getResult());
}

void abstract() {
  auto &&res = creatFactory(DATEBASETYPE);
  auto user = res->ceateUser();
  auto department = res->ceateDepartMent();
}

int main(int argc, char const *argv[]) {
  SimpleFactory();
  factoryMethod();
  abstract();
  return 0;
}
