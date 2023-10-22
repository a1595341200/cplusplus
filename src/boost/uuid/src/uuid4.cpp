/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-03 15:54:01
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-08-03 16:08:48
 * @FilePath: /boost学习/uuid/src/4.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <boost/lexical_cast.hpp>
#include <boost/uuid/name_generator.hpp>
#include <boost/uuid/uuid.hpp>
#include <boost/uuid/uuid_io.hpp>
#include <iostream>

int main(int argc, char const *argv[]) {
  boost::uuids::name_generator_sha1 gen(boost::uuids::ns::dns());
  boost::uuids::uuid udoc = gen("boost.org");
  std::cout << "boost.org uuid in dns namespace, sha1 version: " << udoc
            << std::endl;
  std::cout << "boost.org uuid in dns namespace, sha1 version: "
            << boost::lexical_cast<std::string>(udoc) << std::endl;

  std::cout << "boost.org uuid in dns namespace, sha1 version: "
            << boost::uuids::to_string(udoc) << std::endl;
  return 0;
}
