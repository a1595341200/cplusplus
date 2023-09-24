#include <boost/type_index.hpp>
#include <boost/unordered/unordered_set.hpp>
#include <cassert>
#include <iostream>

struct A {
  /* data */
};

int main() {
  boost::unordered_set<boost::typeindex::type_index> types;

  // Storing some `boost::type_info`s
  types.insert(boost::typeindex::type_id<int>());
  types.insert(boost::typeindex::type_id<float>());

  // `types` variable contains two `boost::type_index`es:
  assert(types.size() == 2);

  // Const, volatile and reference will be striped from the type:
  bool is_inserted =
      types.insert(boost::typeindex::type_id<const int>()).second;
  assert(!is_inserted);
  assert(types.erase(boost::typeindex::type_id<float &>()) == 1);

  // We have erased the `float` type, only `int` remains
  assert(*types.begin() == boost::typeindex::type_id<int>());
  auto t = boost::typeindex::type_id<int>();
  std::cout << boost::typeindex::type_id<decltype(t)>().pretty_name() << "\n";
  auto t1 = boost::typeindex::type_id<A>();
  std::cout << boost::typeindex::type_id<decltype(t1)>().pretty_name() << "\n";
}
