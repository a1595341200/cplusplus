/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git
 * config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-12 12:06:21
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error:
 * git config user.email & please set dead value or install git & please set dead value or install
 * git git config user.email & please set dead value or install git & please set dead value or
 * install git
 * @LastEditTime: 2023-11-12 12:11:27
 * @FilePath: /cplusplus/src/cplusplus/memory/src/memory_layout.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置:
 * https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iomanip>

#include "iostream"

using namespace std;

constexpr int c_a = 10;
const int c_b = 2;
constexpr static int c_c = 3;
int g_a = 10;
static int s_g_b = 10;

int main() {
  static int s_l_c = 0;

  int l_a = 2;
  const int l_c_b = 3;
  constexpr int l_c_c = 10;

  int* p_a = new int(10);
  void* p_b = malloc(sizeof(int));

  cout << "=========常量数据区======" << endl;
  cout << setw(30) << left << "字符串常量 hello 地址：" << static_cast<const void*>("hello")
       << endl;
  cout << setw(30) << left << "常量表达式 c_a 地址：" << &c_a << endl;
  cout << setw(30) << left << "全局常量 c_b 地址：" << &c_b << endl;
  cout << setw(30) << left << "全局常量 c_c 地址：" << &c_c << endl;
  cout << "=========全局数据区======" << endl;
  cout << setw(30) << left << "全局变量 g_a 地址：" << &g_a << endl;
  cout << setw(30) << left << "静态全局变量 s_g_b 地址：" << &s_g_b << endl;
  cout << setw(30) << left << "静态局部变量 s_l_c 地址：" << &s_l_c << endl;
  cout << "=========栈区======" << endl;
  cout << setw(30) << left << "局部变量 l_a 地址：" << &l_a << endl;
  cout << setw(30) << left << "局部常量 l_c_b 地址：" << &l_c_b << endl;
  cout << setw(30) << left << "局部常量表达式 l_c_c 地址：" << &l_c_c << endl;
  cout << "=========自由存储======" << endl;
  cout << setw(30) << left << "指针 p_a 指向地址：" << p_a << endl;
  cout << "=========堆区======" << endl;
  cout << setw(30) << left << "指针 p_b 指向地址：" << p_b << endl;
  cout << "=========代码区======" << endl;
  cout << setw(30) << left << "main 函数地址：" << main << endl;
  return 0;
}
