/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-12 18:26:13
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-12 18:38:05
 * @FilePath: /utils/src/Utils.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "Utils.h"
#include <iostream>
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void bindThreadToCore(int coreId, std::thread::native_handle_type handle) {
  // 设置CPU亲和性
  cpu_set_t cpu_set;
  CPU_ZERO(&cpu_set);
  CPU_SET(coreId, &cpu_set);
  int rc = pthread_setaffinity_np(handle, sizeof(cpu_set_t), &cpu_set);
  if (rc != 0) {
    std::cerr << "Error binding thread to core: " << rc << std::endl;
  }
}

void bindProcessToCore(int coreId) {
  int cpus = 0;
  int i = 0;
  cpu_set_t mask;
  cpu_set_t get;

  cpus = sysconf(_SC_NPROCESSORS_ONLN);
  printf("cpus: %d\n", cpus);

  CPU_ZERO(&mask); /* 初始化set集，将set置为空*/
  /*将本进程绑定到CPU*上*/
  CPU_SET(coreId, &mask);
  if (sched_setaffinity(0, sizeof(mask), &mask) == -1) {
    printf("Set CPU affinity failue, ERROR:%s\n", strerror(errno));
    return;
  }
}
