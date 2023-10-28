/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-10-28 17:23:46
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-10-28 17:23:47
 * @FilePath: /cplusplus/src/popen/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <cstdio>

int main() {
  FILE *fp = nullptr;
  char data[100] = {'0'};
  fp = popen("ls -a", "r");
  if (fp == nullptr) {
    printf("popen error!\n");
    return 1;
  }
  while (fgets(data, sizeof(data), fp) != nullptr) {
    printf("%s", data);
  }
  pclose(fp);
  return 0;
}
