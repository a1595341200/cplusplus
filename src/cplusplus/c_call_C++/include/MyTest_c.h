//
// Created by 谢瑶 on 2023/11/30.
//

#ifndef CPLUSPLUS_MYTEST_C_H
#define CPLUSPLUS_MYTEST_C_H
#ifdef __cplusplus
extern "C" {
#endif

void print(int a, int b);
void* getMyTest();
void* createMyTest();
void deleteMyTest(void* mytest);
void print_with_instance(void* mytest, int a, int b);

#ifdef __cplusplus
}
#endif

#endif  // CPLUSPLUS_MYTEST_C_H
