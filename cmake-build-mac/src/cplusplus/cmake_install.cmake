# Install script for directory: /Users/xieyao/work/cplusplus/src/cplusplus

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
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/CRTP/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/Crc/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/Decorator/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/DesignMode/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/EBO/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/EnumClass/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/Execute_before_main/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/FactoryMethod/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/PIMPL/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/Variable_parameter_template/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/addressof/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/algorithm/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/align/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/any/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/assert/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/atomic/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/auto/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/boolalpha/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/c_call_C++/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/char/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/chrono/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/circularly_ordered_array/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/class_ptr/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/class_template/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/conditional/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/dynamic_cast/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/enable_shared_from_this/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/enum/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/filesystem/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/fold_expression_empty_packet_processing/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/for_each/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/from_chars/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/fstream/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/getline/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/inline/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/invocable/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/lamda/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/limits/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/mem_fn/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/memory/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/new/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/numeric/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/optional/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/overload/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/proxy/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/ptr/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/quoted/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/ref/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/reflect/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/regex/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/shared_ptr/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/string/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/strto/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/structure/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/structured_binding/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/templatesAchieveSeparation/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/thread/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/time/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/transform/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/udl/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/unique_ptr/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/vector/cmake_install.cmake")
  include("/Users/xieyao/work/cplusplus/cmake-build-mac/src/cplusplus/weakPtr/cmake_install.cmake")

endif()

