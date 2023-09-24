/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-03 15:25:47
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-03 15:28:23
 * @FilePath: /boost学习/uuid/src/1.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
// example of tagging an object with a uuid
// see boost/libs/uuid/test/test_tagging.cpp

#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_generators.hpp>

class object {
public:
  object() : tag(boost::uuids::random_generator()()), state(0) {}

  explicit object(int state)
      : tag(boost::uuids::random_generator()()), state(state) {}

  object(object const &rhs) : tag(rhs.tag), state(rhs.state) {}

  bool operator==(object const &rhs) const { return tag == rhs.tag; }

  object &operator=(object const &rhs) {
    tag = rhs.tag;
    state = rhs.state;
    return *this;
  }

  bool operator!=(object const &rhs) {
    return tag != rhs.tag || state != rhs.state;
  }

  int get_state() const { return state; }
  void set_state(int new_state) { state = new_state; }

private:
  boost::uuids::uuid tag;

  int state;
};

int main(int argc, char const *argv[]) {
  object o1(1);
  object o2 = o1;
  o2.set_state(2);
  assert(o1 == o2);

  object o3(3);
  assert(o1 != o3);
  assert(o2 != o3);
  return 0;
}
