/*
 * @Author: yao.xie 1595341200@qq.com
 * @Date: 2023-09-15 09:27:08
 * @LastEditors: yao.xie 1595341200@qq.com
 * @LastEditTime: 2023-09-15 09:35:05
 * @FilePath: /cplusplus/char/src/main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置
 * 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <Log.h>

using namespace std;

int main(int argc, char *argv[]) {
  Log::init(argc, argv);
  char a[] = "hello";
  a[5] = '1';
  SLOG(INFO) << a;
  Log::shutdown();
  return 0;
}
