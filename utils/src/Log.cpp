/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-08-29 17:43:53
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-15 09:36:26
 * @FilePath: /ros_learning/src/qtlog/src/Log.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Log.h"
// __attribute__((constructor)) void before() { Log::init(0, nullptr); }

// __attribute__((destructor)) void after() { google::ShutdownGoogleLogging(); }
void Log::init(int argc, char *argv[]) {
  google::InitGoogleLogging(argv[0]);
  FLAGS_alsologtostderr = true;
  FLAGS_colorlogtostderr = true;
  // google::SetLogDestination(google::GLOG_INFO, "./INFO_");
  // google::SetLogDestination(google::GLOG_WARNING, "./WARNING_");
  // google::SetLogDestination(google::GLOG_ERROR, "./ERROR_");
  // google::SetLogDestination(google::GLOG_FATAL, "./FATAL_");
};

void Log::shutdown() { google::ShutdownGoogleLogging(); }
