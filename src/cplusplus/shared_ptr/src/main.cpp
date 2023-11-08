#include <iostream>
#include <memory>
using namespace std;

void test(const shared_ptr<int>& t) {
  std::cout << t.use_count() << std::endl;
}

int main(int argc, char const* argv[]) {
  shared_ptr<int> t(new int(1));
  std::cout << t.use_count() << std::endl;
  test(t);
  std::cout << t.use_count() << std::endl;
  return 0;
}
