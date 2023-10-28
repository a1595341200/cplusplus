/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 15:39:42
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 15:39:42
 * @FilePath: /cplusplus/src/boost/lambda/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <algorithm>
#include <iostream>
#include <iterator>

#include <boost/lambda/lambda.hpp>

int main() {
  std::vector<int> in{0, 1, 2, 3, 4, 5, 6};

  std::for_each(in.begin(), in.end(), std::cout << (boost::lambda::_1 * 3) << " ");
}
