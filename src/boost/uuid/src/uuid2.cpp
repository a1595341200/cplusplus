/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-03 15:31:20
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-03 15:41:45
 * @FilePath: /boost学习/uuid/src/2.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// example using memcpy and aggregate initializers
// example of a class uuid see boost/libs/uuid/test/test_uuid_class.cpp

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>
#include <iostream>
#include <memory.h>

// example of creating a uuid class that
// initializes the uuid in the constructor
// using a defined mechanism

class uuid_class : public boost::uuids::uuid {
public:
  uuid_class() : boost::uuids::uuid(boost::uuids::random_generator()()) {}

  explicit uuid_class(boost::uuids::uuid const &u) : boost::uuids::uuid(u) {}

  boost::uuids::uuid operator()() {
    return static_cast<boost::uuids::uuid &>(*this);
  }

  boost::uuids::uuid operator()() const {
    return static_cast<boost::uuids::uuid const &>(*this);
  }
};

int main(int argc, char const *argv[]) {
  { // example using memcpy
    unsigned char uuid_data[16];
    // fill uuid_data

    boost::uuids::uuid u{};

    memcpy(&u, uuid_data, 16);
  }

  { // example using aggregate initializers
    boost::uuids::uuid u = {0x12, 0x34, 0x56, 0x78, 0x90, 0xab, 0xcd, 0xef,
                            0x12, 0x34, 0x56, 0x78, 0x90, 0xab, 0xcd, 0xef};
  }

  uuid_class u1;
  uuid_class u2;
  assert(u1 != u2);
  for (int i = 0; i < 16; ++i) {
    std::cout << (int)(u1().data[i]) << "\n";
  }
  return 0;
}
