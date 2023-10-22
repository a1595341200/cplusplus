#include <iostream>

#include <boost/circular_buffer.hpp>

int main() {
  boost::circular_buffer<int> q(5);  // 创建一个大小为 5 的循环队列

  q.push_back(1);
  q.push_back(2);
  q.push_back(3);
  q.push_back(4);
  q.push_back(5);  // 队列已满，无法添加元素

  std::cout << "队列的第一个元素是：" << q.front() << std::endl;
  std::cout << "队列的最后一个元素是：" << q.back() << std::endl;

  q.pop_front();  // 删除并返回队列的第一个元素
  q.pop_back();   // 删除并返回队列的最后一个元素

  std::cout << "队列的第一个元素是：" << q.front() << std::endl;
  std::cout << "队列的最后一个元素是：" << q.back() << std::endl;

  return 0;
}
