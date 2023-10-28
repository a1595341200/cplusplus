/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 16:05:41
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:05:41
 * @FilePath: /cplusplus/src/DesignMode/StrategyPattern/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <dbg.h>

#include <iostream>

#include "operation.h"
using namespace std;
int main(int argc, char const *argv[]) {
  OperationContext Context('+');
  dbg(Context.getResult(1, 2));
  return 0;
}
