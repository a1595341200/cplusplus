/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-03 16:55:25
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-03 16:59:27
 * @FilePath: /boost学习/serialization/src/4.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <boost/serialization/base_object.hpp>
#include <fstream>
#include <string>

class gps_position {
public:
  int degrees{};
  int minutes{};
  float seconds{};
  gps_position(){};
  gps_position(int d, int m, float s) : degrees(d), minutes(m), seconds(s) {}
};

namespace boost {
namespace serialization {

template <class Archive>
void serialize(Archive &ar, gps_position &g, const unsigned int version) {
  ar &g.degrees;
  ar &g.minutes;
  ar &g.seconds;
}

} // namespace serialization
} // namespace boost

class bus_stop {
  friend class boost::serialization::access;
  template <class Archive>
  void serialize(Archive &ar, const unsigned int version) {
    ar &latitude;
    ar &longitude;
  }
  gps_position latitude;
  gps_position longitude;

protected:
  bus_stop(const gps_position &lat_, const gps_position &long_)
      : latitude(lat_), longitude(long_) {}

public:
  bus_stop() {}
  // See item # 14 in Effective C++ by Scott Meyers.
  // re non-virtual destructors in base classes.
  virtual ~bus_stop() {}
};

class bus_stop_corner : public bus_stop {
  friend class boost::serialization::access;
  template <class Archive>
  void serialize(Archive &ar, const unsigned int version) {
    // serialize base class information
    ar &boost::serialization::base_object<bus_stop>(*this);
    ar &street1;
    ar &street2;
  }
  std::string street1{"sss"};
  std::string street2{"aaa"};
  virtual std::string description() const {
    return street1 + " and " + street2;
  }

public:
  bus_stop_corner() {}
  bus_stop_corner(const gps_position &lat_, const gps_position &long_,
                  const std::string &s1_, const std::string &s2_)
      : bus_stop(lat_, long_), street1(s1_), street2(s2_) {}
};

int main(int argc, char const *argv[]) {
  // create and open a character archive for output
  std::ofstream ofs("filename");

  // create class instance
  bus_stop_corner bs;
  // save data to archive
  {
    boost::archive::text_oarchive oa(ofs);
    // write class instance to archive
    oa << bs;
    // archive and stream closed when destructors are called
  }

  // ... some time later restore the class instance to its orginal state
  bus_stop_corner newbf;
  {
    // create and open an archive for input
    std::ifstream ifs("filename");
    boost::archive::text_iarchive ia(ifs);
    // read class state from archive
    ia >> newbf;
    // archive and stream closed when destructors are called
  }
  return 0;

  return 0;
}
