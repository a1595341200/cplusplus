/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-03 15:44:33
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-03 16:01:44
 * @FilePath: /boost学习/uuid/src/3.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <iostream>
#include <vector>

int main(int argc, char const *argv[]) {
  boost::uuids::uuid u = boost::uuids::random_generator()();
  std::vector<uint8_t> uuids(u.size());
  std::copy(u.begin(), u.end(), uuids.begin());
  for (auto i : uuids) {
    std::cout << (int)i << "-";
  }
  std::cout << "\n" << u << "\n";
  return 0;
}
