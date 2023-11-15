/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-15 15:29:34
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git git config user.email & please set dead value or install git & please set dead value
 * or install git git config user.email & please set dead value or install git & please set dead
 * value or install git git config user.email & please set dead value or install git & please set
 * dead value or install git git config user.email & please set dead value or install git & please
 * set dead value or install git git config user.email & please set dead value or install git &
 * please set dead value or install git git config user.email & please set dead value or install git
 * & please set dead value or install git git config user.email & please set dead value or install
 * git & please set dead value or install git git config user.email & please set dead value or
 * install git & please set dead value or install git
 * @LastEditTime: 2023-11-15 15:46:51
 * @FilePath: /cplusplus/src/cplusplus/vector/src/vector_move_array.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <iterator>
#include <numeric>
#include <vector>

using namespace std;

int main() {
  int arr[5]{};  // 创建一个数组
  std::iota(std::begin(arr), std::end(arr), 1);
  int* p = arr;
  std::vector<int> vec;  // 创建一个空的 std::vector

  vec.assign(std::make_move_iterator(p),
             std::make_move_iterator(p + 5));  // 将数组的元素移动到 std::vector 中

  // 对于数组可以使用std::begin std::end 获得迭代器
  // vec.assign(std::make_move_iterator(std::begin(arr)),
  //            std::make_move_iterator(std::end(arr)));  // 将数组的元素移动到 std::vector 中
  // 打印arr
  for (auto& i : vec) {
    std::cout << i << std::endl;
  }
  for (auto& i : arr) {
    std::cout << i << std::endl;
  }
  return 0;
}
