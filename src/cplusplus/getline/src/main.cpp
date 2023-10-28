/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 16:49:47
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 16:49:48
 * @FilePath: /cplusplus/src/getline/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <array>
#include <iostream>
#include <sstream>
#include <vector>

int main() {
  std::istringstream input("abc|def|gh");
  char buf[1024]{0};
  // 注意：下列循环在从  getline() 返回的流上的
  // std::ios_base::operator bool() 返回 false 时终止
  while (input.getline(buf, 1024, '|')) {
    std::cout << buf << std::endl;
  }
}
