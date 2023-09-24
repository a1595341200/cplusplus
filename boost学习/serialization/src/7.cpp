/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-04 09:50:00
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-04 09:54:19
 * @FilePath: /boost学习/serialization/src/7.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/serialization/list.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/version.hpp>
#include <iostream>

class bus_route {
  friend class boost::serialization::access;
  std::list<int> stops;
  std::string driver_name;
  template <class Archive>
  void serialize(Archive &ar, const unsigned int version) {
    // only save/load driver_name for newer archives
    std::cout << "\nversion : " << version << std::endl;
    if (version > 0)
      ar &driver_name;
    ar &stops;
  }

public:
  bus_route() {}
};

BOOST_CLASS_VERSION(bus_route, 1)

int main(int argc, char const *argv[]) {
  bus_route b;
  boost::archive::text_oarchive oa(std::cout);
  oa << b;
  return 0;
}
