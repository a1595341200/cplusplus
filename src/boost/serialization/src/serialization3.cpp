/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-03 16:41:06
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-03 16:48:53
 * @FilePath: /boost学习/serialization/src/2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/text_oarchive.hpp>
#include <fstream>

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

int main() {
  // create and open a character archive for output
  std::ofstream ofs("filename");

  // create class instance
  bus_stop bs;
  // save data to archive
  {
    boost::archive::text_oarchive oa(ofs);
    // write class instance to archive
    oa << bs;
    // archive and stream closed when destructors are called
  }

  // ... some time later restore the class instance to its orginal state
  bus_stop newbf;
  {
    // create and open an archive for input
    std::ifstream ifs("filename");
    boost::archive::text_iarchive ia(ifs);
    // read class state from archive
    ia >> newbf;
    // archive and stream closed when destructors are called
  }
  return 0;
}
