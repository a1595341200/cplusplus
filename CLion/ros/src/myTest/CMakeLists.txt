cmake_minimum_required(VERSION 3.5 FATAL_ERROR)
project(MyTest)

find_package(catkin REQUIRED COMPONENTS rviz)

find_package(Qt5Widgets REQUIRED)

catkin_package(CATKIN_DEPENDS rviz)

qt5_wrap_cpp(src_MOCS src/MyTest.h)

add_library(${PROJECT_NAME} 
src/MyTest.cpp 
src/SelectTest.cpp
${src_MOCS}
)

target_include_directories(${PROJECT_NAME} PRIVATE include)

target_include_directories(
  ${PROJECT_NAME} SYSTEM PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
                                 ${catkin_INCLUDE_DIRS})

add_dependencies(${PROJECT_NAME} ${catkin_EXPORTED_TARGETS})

target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES} Qt5::Widgets)

install(
  TARGETS ${PROJECT_NAME}
  ARCHIVE DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  LIBRARY DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
  RUNTIME DESTINATION ${CATKIN_PACKAGE_BIN_DESTINATION})

install(FILES plugin_description.xml
        DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})

install(DIRECTORY icons DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION})
