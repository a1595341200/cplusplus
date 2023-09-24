/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-03 16:10:13
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-03 16:14:17
 * @FilePath: /boost学习/uuid/src/5.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/uuid/random_generator.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <boost/uuid/uuid_serialize.hpp>
#include <iostream>

int main(int argc, char const *argv[]) {
  boost::uuids::uuid u;
  u = boost::uuids::random_generator()();
  std::cout << u << std::endl;
  return 0;
}
