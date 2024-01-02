# Install script for directory: /Users/xieyao/work/cplusplus/src/linux

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/linux/DNS/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/linux/dlopen/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/linux/env/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/linux/epoll/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/linux/ifc/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/linux/netLink/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/linux/poll/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/linux/popen/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/linux/select/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/linux/sscanf/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/linux/syslog/cmake_install.cmake")

endif()

