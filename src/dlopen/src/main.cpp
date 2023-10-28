/*
 * @Author: 谢瑶
 * @Date: 2022-03-11 20:18:12
 * @LastEditors: huangl
 * @LastEditTime: 2022-04-01 23:04:56
 * @Description: file content
 * @FilePath: \dlopen\src\dlopen\main.cpp
 */
#include "P.h"
#include <cstdio>
#include <cstdlib>
#include <dlfcn.h>
#include <iostream>

//申明结构体
typedef struct __test {
	int i;
	void (*echo_fun)(struct __test *p);
} Test;
typedef struct __test1 {
	int i;
	P p;
} Test1;
//供动态库使用的注冊函数
static int op = 10;

void __register(Test *p) {
	p->i = 1;
	p->echo_fun(p);
	// std::cout << op << std::endl;
}

void __register1(Test1 *p) {
	p->i = 1;
	p->p.run();
}

int main(void) {

	void *handle = NULL;
	std::string myso = "libtest.so";
	if ((handle = dlopen(myso.c_str(), RTLD_NOW)) == NULL) {
		printf("dlopen - %s \n", dlerror());
		exit(-1);
	}
	auto ptr = (int (*)(int, int)) dlsym(handle, "add");
	ptr(1, 2);

	return 0;
}