<!--
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 17:51:54
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-23 13:22:30
 * @FilePath: /cplusplus/README.md
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
-->
- [1. cplusplus](#1-cplusplus)
  - [1.1. 设置DEBUG与release前缀](#11-设置debug与release前缀)
  - [1.2. gtest](#12-gtest)
    - [1.2.1. 安装](#121-安装)
  - [1.3. glog](#13-glog)
    - [1.3.1. 构建](#131-构建)
    - [1.3.2. 使用](#132-使用)
    - [1.3.3. DLOG 只在Debug模式下生效](#133-dlog-只在debug模式下生效)
  - [1.4. eigen](#14-eigen)
    - [1.4.1. 模块与头文件](#141-模块与头文件)
  - [1.5. vector](#15-vector)
  - [1.6. ref](#16-ref)
  - [1.7. opencv](#17-opencv)
    - [1.7.1. ImageWatch](#171-imagewatch)
  - [1.8. benchmark](#18-benchmark)
    - [1.8.1. 安装](#181-安装)
    - [1.8.2. 使用](#182-使用)
  - [1.9. spdlog](#19-spdlog)
  - [1.10. pcapplusplus](#110-pcapplusplus)
    - [1.10.1. 使用](#1101-使用)
  - [1.11. 终端代理](#111-终端代理)
  - [1.12. tinyxml2](#112-tinyxml2)
    - [1.12.1. 使用](#1121-使用)
  - [1.13. QT5](#113-qt5)
  - [1.14. cmake 区分平台](#114-cmake-区分平台)
  - [1.15. C++区分平台](#115-c区分平台)
  - [1.16. cmake版本升级](#116-cmake版本升级)
  - [1.17. cmake 添加库路径](#117-cmake-添加库路径)
  - [1.18. pythontutor](#118-pythontutor)
  - [1.19. backward-cpp](#119-backward-cpp)
  - [1.20. boost](#120-boost)
    - [1.20.1. boost tcp](#1201-boost-tcp)
    - [1.20.2. boost udp](#1202-boost-udp)
  - [1.21. abseil](#121-abseil)
  - [1.22. nlohmann-json](#122-nlohmann-json)
  - [1.23. find\_package.](#123-find_package)
  - [1.24. linux多线程gdb](#124-linux多线程gdb)
  - [1.25. 配置ssh免密](#125-配置ssh免密)
  - [1.26. for\_each 并行](#126-for_each-并行)
  - [1.27. tbb](#127-tbb)
  - [1.28. vcpkg cmake 配置](#128-vcpkg-cmake-配置)
  - [1.29. std::packaged\_task](#129-stdpackaged_task)
  - [1.30. std::shared\_future](#130-stdshared_future)
  - [1.31. notify\_all](#131-notify_all)

# 1. cplusplus
## 1.1. 设置DEBUG与release前缀
```cmake
set_target_properties(${PROJECT_N} PROPERTIES
    DEBUG_POSTFIX "_debug"
    RELEASE_POSTFIX "_release"
)
```
构建debug
```sh
cmake .. -DCMAKE_BUILD_TYPE=Debug
```
## 1.2. gtest
[csdn教程](https://blog.csdn.net/sevenjoin/article/details/89962344?app_version=6.1.4&csdn_share_tail=%7B%22type%22%3A%22blog%22%2C%22rType%22%3A%22article%22%2C%22rId%22%3A%2289962344%22%2C%22source%22%3A%22a159534120%22%7D&utm_source=app)
```
TEST是一个宏，用来创建测试用例，它有test_case_name和test_name两个参数。分别是测试用例名和测试名
```
### 1.2.1. 安装
```sh
# 下载googletest
$ sudo apt-get install libgtest-dev

# 进入googletest目录
$ cd /usr/src/googletest

# 执行cmake && make
$ sudo cmake -S . -B build
$ sudo cmake --build build -j20
$ sudo cmake --build build --target install
```
## 1.3. glog
[教程](https://blog.csdn.net/weixin_44947987/article/details/126214261)
### 1.3.1. 构建
```sh
# cmake [<选项>] -S <源路径> -B <构建路径>
cmake -S . -B build -G "Unix Makefiles"
# 该命令的含义是：执行build目录下的构建系统，生成构建目标。
cmake --build build
# 安装
sudo cmake --build build --target install
```
### 1.3.2. 使用
```C++
    google::InitGoogleLogging("test");//使用glog之前必须先初始化库，仅需执行一次，括号内为程序名
    FLAGS_alsologtostderr = true;     //是否将日志输出到文件和stderr
    FLAGS_colorlogtostderr = true;    //是否启用不同颜色显示
    google::SetLogDestination(google::GLOG_INFO, "E:\\logs\\INFO_");  //INFO级别的日志都存放到logs目录下且前缀为INFO_
    google::SetLogDestination(google::GLOG_WARNING, "E:\\logs\\WARNING_");  //WARNING级别的日志都存放到logs目录下且前缀为WARNING_
    google::SetLogDestination(google::GLOG_ERROR, "E:\\logs\\ERROR_");  //ERROR级别的日志都存放到logs目录下且前缀为ERROR_
    google::SetLogDestination(google::GLOG_FATAL, "E:\\logs\\FATAL_");  //FATAL级别的日志都存放到logs目录下且前缀为FATAL_
    LOG(INFO) << "info";
    LOG(WARNING) << "warning";
    LOG(ERROR) << "error";
    /*LOG(FATAL) << "fatal";*/
    google::ShutdownGoogleLogging();  //当要结束glog时必须关闭库，否则会内存溢出
```

```c++
	google::SetLogDestination(google::GLOG_INFO, "E:\\logs\\INFO_");//INFO级别的日志都存放到logs目录下且前缀为INFO_
	google::SetLogDestination(google::GLOG_WARNING, "E:\\logs\\WARNING_");//WARNING级别的日志都存放到logs目录下且前缀为WARNING_
	google::SetLogDestination(google::GLOG_ERROR, "E:\\logs\\ERROR_");	//ERROR级别的日志都存放到logs目录下且前缀为ERROR_
	google::SetLogDestination(google::GLOG_FATAL, "E:\\logs\\FATAL_");	//FATAL级别的日志都存放到logs目录下且前缀为FATAL_
```
### 1.3.3. DLOG 只在Debug模式下生效
## 1.4. eigen
### 1.4.1. 模块与头文件
https://zhuanlan.zhihu.com/p/462494086
|模块	|头文件	|内容|
|---|---|---|
|Core       | #include <Eigen/Core>       |矩阵和数组 (向量) 类 (Matrix, Array)，基于线性代数还有数组操作|
|Geometry|	| #include <Eigen/Geometry>   |变换，平移，缩放，2D 旋转和 3D 旋转 (包括四元数和角轴)|
|LU	        | #include <Eigen/LU>         |使用求解器进行求逆，行列式，LU 分解操作|
|Cholesky|	| #include <Eigen/Cholesky>   |使用求解器进行 LLT, LT, Cholesky 分解|
|Householder|	#include <Eigen/Householder>|Householder 变换；被用作几个线性代数模块|
|SVD        |	#include <Eigen/SVD>        |SVD 分解与最小二乘求解器|
|QR         |	#include <Eigen/QR>	        |QR 分解|
|Eigenvalues|	#include <EIgen/Eigenvalues>|特征值，特征向量分解|
|Sparse     |	#include <Eigen/Sparse>     |稀疏矩阵存储以及相关的基本线性代数|
|Dense      |	#include <Eigen/Dense>	    |包括 Core, Geometry, LU, Cholesky, SVD, QR, Eigenvalues 的头文件|
|Eigen      |	#include <Eigen/Eigen>	    |包括 Dense 和 Sparse 的头文件|
## 1.5. vector
不允许存取引用
## 1.6. ref
引用包装，内存存着对象的指针。
## 1.7. opencv
### 1.7.1. ImageWatch
```sh
git clone https://github.com/csantosbh/gdb-imagewatch
cd gdb-imagewatch
sudo ./configure_ubuntu_16.sh
```
## 1.8. benchmark
### 1.8.1. 安装
```sh
# Check out the library.
$ git clone https://github.com/google/benchmark.git
# Go to the library root directory
$ cd benchmark
# Make a build directory to place the build output.
$ cmake -E make_directory "build"
# Generate build system files with cmake, and download any dependencies.
$ cmake -E chdir "build" cmake -DBENCHMARK_DOWNLOAD_DEPENDENCIES=on -DCMAKE_BUILD_TYPE=Release ../
# or, starting with CMake 3.13, use a simpler form:
# cmake -DCMAKE_BUILD_TYPE=Release -S . -B "build"
# Build the library.
$ cmake --build "build" --config Release
# sudo cmake --build "build" --config Release --target install
```
### 1.8.2. 使用

```cmake
# this is heuristically generated, and may not be correct
find_package(benchmark CONFIG REQUIRED)
target_link_libraries(main PRIVATE benchmark::benchmark benchmark::benchmark_main)
```

## 1.9. spdlog
```cmake
    find_package(spdlog CONFIG REQUIRED)
    target_link_libraries(main PRIVATE spdlog::spdlog)
```
## 1.10. pcapplusplus
### 1.10.1. 使用
```cmake
  find_package(unofficial-pcapplusplus CONFIG REQUIRED)
  target_link_libraries(main PRIVATE unofficial::pcapplusplus::pcappp unofficial::pcapplusplus::commonpp unofficial::pcapplusplus::packetpp)
```
## 1.11. 终端代理
```sh
export HTTP_PROXY=" 192.168.123.106:7890"

export HTTPS_PROXY=" 192.168.123.106:7890"
```
## 1.12. tinyxml2
### 1.12.1. 使用
```cmake
  find_package(tinyxml2 CONFIG REQUIRED)
  target_link_libraries(main PRIVATE tinyxml2::tinyxml2)
```

## 1.13. QT5
## 1.14. cmake 区分平台
```cmake
if (CMAKE_HOST_WIN32)
    set(WINDOWS 1)
elseif (CMAKE_HOST_APPLE)
    set(MACOS 1)
elseif (CMAKE_HOST_UNIX)
    set(LINUX 1)
endif ()

```
## 1.15. C++区分平台
https://blog.csdn.net/ouyang_peng/article/details/124703411
## 1.16. cmake版本升级
```sh
wget https://cmake.org/files/v3.22/cmake-3.22.1.tar.gz
tar -xvzf cmake-3.22.1.tar.gz
chmod 777 ./configure
./configure
make
sudo make install
sudo update-alternatives --install /usr/bin/cmake cmake /usr/local/bin/cmake 1 --force
cmake --version
```
## 1.17. cmake 添加库路径
```
list(APPEND CMAKE_PREFIX_PATH /opt/def/lib)
```
## 1.18. pythontutor
学习网站
https://pythontutor.com/cpp.html#mode=edit

## 1.19. backward-cpp
```
apt-get install binutils-dev
```

```cmake
find_package(Backward REQUIRED)

target_link_libraries(${PROJECT_N}
PUBLIC Backward::Backward
)
```

```c++
#include "backward-cpp/backward.hpp"
namespace backward {
backward::SignalHandling sh;
}
```

## 1.20. boost
### 1.20.1. boost tcp
### 1.20.2. boost udp
## 1.21. abseil
```
    # this is heuristically generated, and may not be correct
    find_package(absl CONFIG REQUIRED)
    # note: 173 additional targets are not displayed.
    target_link_libraries(main PRIVATE absl::any absl::log absl::base absl::bits)
```
## 1.22. nlohmann-json

```
The package nlohmann-json provides CMake targets:

    find_package(nlohmann_json CONFIG REQUIRED)
    target_link_libraries(main PRIVATE nlohmann_json::nlohmann_json)

The package nlohmann-json can be configured to not provide implicit conversions via a custom triplet file:

    set(nlohmann-json_IMPLICIT_CONVERSIONS OFF)

For more information, see the docs here:

    https://json.nlohmann.me/api/macros/json_use_implicit_conversions/
```
## 1.23. find_package.
```cmake
cmake_minimum_required(VERSION 3.10.2)
project(find_package_test)
find_package(mylib
    CONFIG
    REQUIRED
    COMPONENTS test
    PATHS ./mylib/mylib
)

if(mylib_FOUND)
    message("Find mylib: ${mylib_INCLUDE_DIR}; ${mylib_LIBRARY};")
endif()
```
## 1.24. linux多线程gdb
https://mp.weixin.qq.com/s/Pnm7wzDAkfrwFYSsHHNocQ
## 1.25. 配置ssh免密
```sh
touch authorized_keys
echo xxxx >> ~/.ssh/authorized_keys
```
## 1.26. for_each 并行
https://blog.csdn.net/weixin_43165135/article/details/125526408

## 1.27. tbb
```cmake
# this is heuristically generated, and may not be correct
find_package(TBB CONFIG REQUIRED)
target_link_libraries(main PRIVATE TBB::tbb TBB::tbbmalloc)
```
## 1.28. vcpkg cmake 配置
```
在project之前使用
SET(CMAKE_TOOLCHAIN_FILE "D:\\vcpkg\\scripts\\buildsystems\\vcpkg.cmake")
```
## 1.29. std::packaged_task
类模板 std::packaged_task 包装任何可调用 (Callable) 目标（函数、 lambda 表达式、 bind 表达式或其他函数对象），使得能异步调用它。其返回值或所抛异常被存储于能通过 std::future 对象访问的共享状态中。
正如 std::function ， std::packaged_task 是多态、具分配器的容器：可在堆上或以提供的分配器分配存储的可调用对象。
构造新的 std::packaged_task 对象。
1) 构造无任务且无共享状态的 std::packaged_task 对象。
2) 构造拥有共享状态和任务副本的 std::packaged_task 对象，以 std::forward<F>(f) 初始化副本。若 std::decay<F>::type 与 std::packaged_task<R(ArgTypes...)> 是同一类型，则此构造函数不参与重载决议。
3) 构造拥有共享状态和任务副本的 std::packaged_task 对象，以 std::forward<F>(f) 初始化副本。用提供的分配器分配存储任务所需的内存。 若 std::decay<F>::type 与 std::packaged_task<R(ArgTypes...)> 是同一类型，则此构造函数不参与重载决议。
4) 复制构造函数被删除， std::packaged_task 仅可移动。
5) 以 rhs 之前所占有的共享状态和任务构造 std::packaged_task ，令 rhs 留在无共享状态且拥有被移动后的任务的状态。
参数
f	-	要执行的可调用目标（函数、成员函数、 lambda 表达式、函数对象）
a	-	存储任务时所用的分配器
rhs	-	要移动的 std::packaged_task
异常
2) f 的复制/移动构造函数所抛的任何异常，而若内存分配失败则可能为 std::bad_alloc 。
3) f 的复制/移动构造函数，而若内存分配失败则有分配器的 allocate 函数所抛的任何异常
## 1.30. std::shared_future
类模板 std::shared_future 提供访问异步操作结果的机制，类似 std::future ，除了允许多个线程等候同一共享状态。不同于仅可移动的 std::future （故只有一个实例能指代任何特定的异步结果），std::shared_future 可复制而且多个 shared_future 对象能指代同一共享状态。
若每个线程通过其自身的 shared_future 对象副本访问，则从多个线程访问同一共享状态是安全的。
## 1.31. notify_all
notify_one()与notify_all()常用来唤醒阻塞的线程。

notify_one()：因为只唤醒等待队列中的第一个线程；不存在锁争用，所以能够立即获得锁。其余的线程不会被唤醒，需要等待再次调用notify_one()或者notify_all()。

notify_all()：会唤醒所有等待队列中阻塞的线程，存在锁争用，只有一个线程能够获得锁。那其余未获取锁的线程接着会怎么样？会阻塞？还是继续尝试获得锁？

                             答案是会继续尝试获得锁(类似于轮询)，而不会再次阻塞。当持有锁的线程释放锁时，这些线程中的一个会获得锁。而其余的会接着尝试获得锁。
