/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 18:25:37
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-19 11:30:43
 * @FilePath: /utils/include/Utils.h
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#ifndef UTILS_H
#define UTILS_H
#include <Log.h>

#include <iostream>
#include <thread>

#include <boost/type_index.hpp>
namespace Utils {

void bindThreadToCore(int coreId, std::thread::native_handle_type handle);

void bindProcessToCore(int coreId);

template <typename T>
void lookType(T &&param) {
  using boost::typeindex::type_id_with_cvr;
  SLOG(INFO) << "T=" << type_id_with_cvr<T>().pretty_name();
  SLOG(INFO) << "param=" << type_id_with_cvr<decltype(param)>().pretty_name();
}

template <typename T>
void lookType() {
  using boost::typeindex::type_id_with_cvr;
  SLOG(INFO) << "T=" << type_id_with_cvr<T>().pretty_name();
}

template <typename E>
constexpr auto toUType(E e) noexcept {
  return static_cast<std::underlying_type_t<E>>(e);
}

// 打印二维数组
template <typename T>
void print2DArray(T &array) {
  for (auto &i : array) {
    for (auto &j : i) {
      std::cout << j << " ";
    }
    std::cout << std::endl;
  }
}

std::string getCurrentSysTime();

std::vector<std::string> getFils(std::string_view dirPath, std::string_view extension);

std::string getTime();

template <typename T>
size_t getVectorSize(const std::vector<T> &v) {
  return v.capacity() * sizeof(T);
}

}  // namespace Utils
#endif /* UTILS_H */
