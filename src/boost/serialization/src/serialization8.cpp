/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-04 09:58:19
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-04 09:59:28
 * @FilePath: /boost学习/serialization/src/8.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/serialization/list.hpp>
#include <boost/serialization/split_member.hpp>
#include <boost/serialization/string.hpp>
#include <boost/serialization/version.hpp>

class bus_route {
  friend class boost::serialization::access;
  std::list<int> stops;
  std::string driver_name;
  template <class Archive>
  void save(Archive &ar, const unsigned int version) const {
    // note, version is always the latest when saving
    ar &driver_name;
    ar &stops;
  }
  template <class Archive> void load(Archive &ar, const unsigned int version) {
    if (version > 0)
      ar &driver_name;
    ar &stops;
  }
  BOOST_SERIALIZATION_SPLIT_MEMBER()
public:
  bus_route() {}
};

BOOST_CLASS_VERSION(bus_route, 1)

int main(int argc, char const *argv[]) { return 0; }
