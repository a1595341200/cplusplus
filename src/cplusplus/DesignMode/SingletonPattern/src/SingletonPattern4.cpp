/*
 * @Author: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @Date: 2023-11-10 17:13:02
 * @LastEditors: error: error: git config user.name & please set dead value or install git && error: git config user.email & please set dead value or install git & please set dead value or install git
 * @LastEditTime: 2023-11-10 17:13:17
 * @FilePath: /cplusplus/src/cplusplus/DesignMode/SingletonPattern/src/SingletonPattern4.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include <iostream>

class Singleton {
private:
    int a{0};
    Singleton(){
        std::cout << "Singleton 构造函数" << std::endl;
    }
    Singleton(const Singleton& temp) {
        std::cout << "Singleton 拷贝构造函数" << std::endl;
    }
    Singleton& operator=(const Singleton& temp){
        return *this;
    }
public:
    static Singleton* getInstance() {
        static Singleton instance;
        return &instance;
    }

    void addA(){
        a++;
    }

    void printA(){
        std::cout << "printA:" << a << std::endl;
    }
};

int main() {
    Singleton* singleton = Singleton::getInstance();
    singleton->addA();
    singleton->printA();
    Singleton::getInstance()->addA();
    Singleton::getInstance()->printA();
    return 0;
}
