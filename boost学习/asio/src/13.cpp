//
// deferred_1.cpp
// ~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2023 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <boost/asio.hpp>
#include <boost/asio/impl/src.hpp>
#include <iostream>

int main() {
  std::cout << "Using Boost " << BOOST_VERSION / 100000 << "." // major version
            << BOOST_VERSION / 100 % 1000 << "."               // minor version
            << BOOST_VERSION % 100                             // patch level
            << std::endl;
  return 0;
}
