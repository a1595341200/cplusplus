# Install script for directory: /tmp/tmp.fhqj6AkBPz

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

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/utils/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/eigenlearning/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/vector/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/ref/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/addressof/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/align/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/any/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/time/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/assert/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/atomic/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/auto/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/backtrace/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/boolalpha/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/char/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/chrnon/cmake_install.cmake")
  include("/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/class_template/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/tmp/tmp.fhqj6AkBPz/cmake-build-debug-linux/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
