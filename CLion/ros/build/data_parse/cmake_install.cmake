# Install script for directory: /media/psf/Home/Desktop/work/ros_learning/src/data_parse

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/media/psf/Home/Desktop/work/ros_learning/install")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/data_parse/msg" TYPE FILE FILES
    "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/msg/SensorFovData.msg"
    "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/msg/SensorFovList.msg"
    "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/msg/EgoMotion.msg"
    "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/msg/Object.msg"
    "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/msg/ObjectFrame.msg"
    "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/msg/LHParam.msg"
    "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/msg/EgoLane.msg"
    "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/msg/EgoLaneFrame.msg"
    "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/msg/AdjacentLane.msg"
    "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/msg/AdjacentLaneFrame.msg"
    "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/msg/JiCaEgoMotion.msg"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/data_parse/cmake" TYPE FILE FILES "/media/psf/Home/Desktop/work/ros_learning/build/data_parse/catkin_generated/installspace/data_parse-msg-paths.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE DIRECTORY FILES "/media/psf/Home/Desktop/work/ros_learning/devel/include/data_parse")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/roseus/ros" TYPE DIRECTORY FILES "/media/psf/Home/Desktop/work/ros_learning/devel/share/roseus/ros/data_parse")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/common-lisp/ros" TYPE DIRECTORY FILES "/media/psf/Home/Desktop/work/ros_learning/devel/share/common-lisp/ros/data_parse")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/gennodejs/ros" TYPE DIRECTORY FILES "/media/psf/Home/Desktop/work/ros_learning/devel/share/gennodejs/ros/data_parse")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND "/usr/bin/python3" -m compileall "/media/psf/Home/Desktop/work/ros_learning/devel/lib/python3/dist-packages/data_parse")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/python3/dist-packages" TYPE DIRECTORY FILES "/media/psf/Home/Desktop/work/ros_learning/devel/lib/python3/dist-packages/data_parse")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/media/psf/Home/Desktop/work/ros_learning/build/data_parse/catkin_generated/installspace/data_parse.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/data_parse/cmake" TYPE FILE FILES "/media/psf/Home/Desktop/work/ros_learning/build/data_parse/catkin_generated/installspace/data_parse-msg-extras.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/data_parse/cmake" TYPE FILE FILES
    "/media/psf/Home/Desktop/work/ros_learning/build/data_parse/catkin_generated/installspace/data_parseConfig.cmake"
    "/media/psf/Home/Desktop/work/ros_learning/build/data_parse/catkin_generated/installspace/data_parseConfig-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/data_parse" TYPE FILE FILES "/media/psf/Home/Desktop/work/ros_learning/src/data_parse/package.xml")
endif()

