/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-04 09:46:08
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-04 09:46:09
 * @FilePath: /boost学习/serialization/src/6.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/serialization/list.hpp>
class gps_position {
  friend std::ostream &operator<<(std::ostream &os, const gps_position &gp);
  friend class boost::serialization::access;
  int degrees;
  int minutes;
  float seconds;
  template <class Archive>
  void serialize(Archive &ar, const unsigned int /* file_version */) {
    ar &degrees &minutes &seconds;
  }

public:
  // every serializable class needs a constructor
  gps_position(){};
  gps_position(int _d, int _m, float _s)
      : degrees(_d), minutes(_m), seconds(_s) {}
};
std::ostream &operator<<(std::ostream &os, const gps_position &gp) {
  return os << ' ' << gp.degrees << (unsigned char)186 << gp.minutes << '\''
            << gp.seconds << '"';
}

class bus_stop {
  friend class boost::serialization::access;
  friend std::ostream &operator<<(std::ostream &os, const bus_stop &gp);
  virtual std::string description() const = 0;
  gps_position latitude;
  gps_position longitude;
  template <class Archive>
  void serialize(Archive &ar, const unsigned int version) {
    ar &latitude;
    ar &longitude;
  }

protected:
  bus_stop(const gps_position &_lat, const gps_position &_long)
      : latitude(_lat), longitude(_long) {}

public:
  bus_stop() {}
  virtual ~bus_stop() {}
};

class bus_route {
  friend class boost::serialization::access;
  std::list<bus_stop *> stops;
  template <class Archive>
  void serialize(Archive &ar, const unsigned int version) {
    ar &stops;
  }

public:
  bus_route() {}
};

int main(int argc, char const *argv[]) { return 0; }
