/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-09 23:17:19
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-12-18 16:39:56
 * @FilePath: /cplusplus/src/benchmark_learning/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <benchmark/benchmark.h>

static void BM_StringCreation(benchmark::State& state) {
  for (auto _ : state)
    std::string empty_string;
}
// Register the function as a benchmark
BENCHMARK(BM_StringCreation);
BENCHMARK(BM_StringCreation)->ThreadPerCpu()->UseRealTime();

// Define another benchmark
static void BM_StringCopy(benchmark::State& state) {
  std::string x = "hello";
  for (auto _ : state)
    std::string copy(x);
}
BENCHMARK(BM_StringCopy);
BENCHMARK(BM_StringCopy)->ThreadPerCpu()->UseRealTime();

BENCHMARK_MAIN();
