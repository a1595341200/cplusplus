/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-10 14:13:17
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-11-10 14:13:20
 * @FilePath: /cplusplus/src/cplusplus/thread/src/call_once.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>
#include <thread>
#include <mutex>

std::once_flag flag;

void init() {
    std::cout << "Initializing..." << std::endl;
}

int main() {
    std::thread threads[5];

    for (int i = 0; i < 5; ++i) {
        threads[i] = std::thread([] {
            std::call_once(flag, init);
        });
    }

    for (int i = 0; i < 5; ++i) {
        threads[i].join();
    }

    return 0;
}
