#include "../include//P.h"
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <vector>

//申明结构体类型
typedef struct __test {
	int i;
	void (*echo_fun)(struct __test *p);
} Test;
typedef struct __test1 {
	int i;
	P p;
} Test1;
//申明注冊函数原型
void __register(Test *p);
void __register1(Test1 *p);

static void __printf(Test *p) { printf("i = %d\n", p->i); }

//动态库申请一个全局变量空间
//这样的 ".成员"的赋值方式为c99标准
static Test config = {
	.i = 0,
	.echo_fun = __printf,
};
static Test1 config1{0, P()};

extern "C" {
int add(int a, int b) {
	std::vector<int> v{1};
	printf("[%d]\n", v[0]);
	printf("a+b [%d]\n", a + b);
	return a + b;
}
}

//载入动态库的自己主动初始化函数
extern "C" {
void _init(void) {
	printf("initn\n");
	//调用主程序的注冊函数
	__register1(&config1);
}
}
