<!--
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-03 16:16:46
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-04 10:40:27
 * @FilePath: /boost学习/serialization/README.md
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
-->
# Serialization
1. 侵入式序列化至文件
    [侵入式](src/1.cpp)
侵入式需要定义如下：
```
 friend class boost::serialization::access;
 template <class Archive>
 void serialize(Archive &ar, const unsigned int version) {
    ar &degrees;
    ar &minutes;
    ar &seconds;
 }
```
2. 非侵入式
    [非侵入式](src/2.cpp)
    需要暴漏足够多的信息
```
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
```
3. 序列化成员
[序列化成员](src/3.cpp)

4. 派生类序列化
    [派生类序列化](src/4.cpp)
需要使用 #include <boost/serialization/base_object.hpp>
```
class bus_stop_corner : public bus_stop {
  friend class boost::serialization::access;
  template <class Archive>
  void serialize(Archive &ar, const unsigned int version) {
    // serialize base class information
    ar &boost::serialization::base_object<bus_stop>(*this);
    ar &street1;
    ar &street2;
  }
  std::string street1;
  std::string street2;
  virtual std::string description() const {
    return street1 + " and " + street2;
  }

public:
  bus_stop_corner() {}
  bus_stop_corner(const gps_position &lat_, const gps_position &long_,
                  const std::string &s1_, const std::string &s2_)
      : bus_stop(lat_, long_), street1(s1_), street2(s2_) {}
};
```
5. 多态序列化
[多态序列化](src/5.cpp)

6. 容器序列化

```
#include <boost/serialization/list.hpp>
```
[容器序列化](src/6.cpp)
7. 版本控制
针对类的版本控制
[版本控制](src/7.cpp)

8. 将序列化拆分为save/load
[将序列化拆分为save/load](src/8.cpp)
```
BOOST_SERIALIZATION_SPLIT_MEMBER()
```
9. demo_xml
[demo_xml](src/9.cpp)
