/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 18:26:13
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 17:41:18
 * @FilePath: /utils/src/Utils.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#define TAG "Utils"
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include <filesystem>
#include <iomanip>
#include <regex>
#include <thread>

#include "Log.h"
namespace Utils {

void bindThreadToCore(int coreId, std::thread::native_handle_type handle) {
#if __APPLE__
  // apple specific code
#elif _WIN32
  // windows specific code
#elif __LINUX__
  //  设置CPU亲和性
  cpu_set_t cpu_set;
  CPU_ZERO(&cpu_set);
  CPU_SET(coreId, &cpu_set);
  int rc = pthread_setaffinity_np(handle, sizeof(cpu_set_t), &cpu_set);
  if (rc != 0) {
    SLOG(INFO) << "Error binding thread to core: " << rc;
  }
#elif BSD
  // BSD specific code
#else
  // general code or warning
#endif
}

void bindProcessToCore(int coreId) {
#if __APPLE__
  // apple specific code
#elif _WIN32
  // windows specific code
#elif __LINUX__
  int cpus = 0;
  int i = 0;
  cpu_set_t mask;
  cpu_set_t get;

  cpus = sysconf(_SC_NPROCESSORS_ONLN);
  SLOG(INFO) << cpus;

  CPU_ZERO(&mask); /* 初始化set集，将set置为空*/
  /*将本进程绑定到CPU*上*/
  CPU_SET(coreId, &mask);
  if (sched_setaffinity(0, sizeof(mask), &mask) == -1) {
    SLOG(INFO) << "Set CPU affinity failue, ERROR: " << strerror(errno);
    return;
  }
#elif BSD
  // BSD specific code
#else
  // general code or warning
#endif
}

std::string getCurrentSysTime() {
  auto current_time = std::chrono::system_clock::now();
  auto tt = std::chrono::system_clock::to_time_t(current_time);

  struct tm *ptm = localtime(&tt);
  char date[60] = {0};
  sprintf(date, "%d-%02d-%02d-%02d:%02d:%02d", (int)ptm->tm_year + 1900, (int)ptm->tm_mon + 1,
          (int)ptm->tm_mday, (int)ptm->tm_hour, (int)ptm->tm_min, (int)ptm->tm_sec);

  auto ms =
      std::chrono::duration_cast<std::chrono::milliseconds>(current_time.time_since_epoch()) % 1000;

  std::ostringstream sys_time;
  // 不足三位默认填0, 不加std::setfill 默认填空格
  sys_time << "[" << date << "." << std::setw(3) << std::setfill('0') << ms.count() << "]";
  return sys_time.str();
}

std::vector<std::string> getFils(std::string_view dirPath, std::string_view extension) {
  std::filesystem::path path(dirPath);
  std::vector<std::string> res;
  for (auto &file : std::filesystem::directory_iterator(path)) {
    if (file.path().extension() == extension) {
      SLOG(INFO) << "file: " << file.path();
      res.emplace_back(file.path().string());
    }
  }
  return res;
}

std::string getTime() {
  auto now = std::chrono::system_clock::now();
  uint64_t dis_millseconds =
      std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()).count() -
      std::chrono::duration_cast<std::chrono::seconds>(now.time_since_epoch()).count() * 1000;
  time_t tt = std::chrono::system_clock::to_time_t(now);
  auto time_tm = localtime(&tt);
  char strTime[25] = {0};
  sprintf(strTime, "%d-%02d-%02d %02d:%02d:%02d:%04d", time_tm->tm_year + 1900, time_tm->tm_mon + 1,
          time_tm->tm_mday, time_tm->tm_hour, time_tm->tm_min, time_tm->tm_sec,
          (int)dis_millseconds);
  return strTime;
}

std::optional<std::string> getExePath() {
  const int MAXPATH = 250;
  char buffer[MAXPATH];
  getcwd(buffer, MAXPATH);
  printf("The current directory is: %s\n", buffer);
  return buffer;
}

void operator""_p(const char *str, size_t size) {
  SLOG(INFO) << str;
}

std::vector<std::string> split(const std::string &str, const std::string &regex) {
  std::regex re(regex);
  std::sregex_token_iterator start{str.begin(), str.end(), re, -1}, end;
  return {start, end};
}

}  // namespace Utils
