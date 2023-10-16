#pragma once
#include <glog/logging.h>

#include "utils/file.h"
#include "utils/macro.h"

inline void InitLog(const std::string& argv0) {
  std::string root_path = GetCurrentWorkspace();
  std::string log_path = root_path + "/log";// + "/" + "log";
  AERROR << "log_path:" << log_path;
  EnsureDirectory(log_path);
  FLAGS_log_dir = log_path;
  FLAGS_alsologtostderr = true;   // 除了日志文件之外是否需要标准输出
  FLAGS_colorlogtostderr = true;  // 标准输出带颜色
  FLAGS_stderrthreshold = 2;
  FLAGS_minloglevel = -1;
  FLAGS_v = 1;

  google::InitGoogleLogging(argv0.c_str());
  google::SetLogDestination(google::GLOG_INFO, (log_path + "/" + argv0 + "_INFO_").c_str());
  google::SetLogDestination(google::GLOG_ERROR, (log_path + "/" + argv0 + "_ERROR_").c_str());
  google::SetLogDestination(google::GLOG_WARNING, (log_path + "/" + argv0 + "_WARNING_").c_str());
  google::SetLogDestination(google::GLOG_FATAL, (log_path + "/" + argv0 + "_FATAL_").c_str());
}
inline void ReleaseLog() {
  google::ShutdownGoogleLogging();
}
