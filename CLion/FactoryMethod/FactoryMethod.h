//
// Created by 谢瑶 on 2023/5/30.
//

#ifndef FACTORYMETHOD__FACTORYMETHOD_H_
#define FACTORYMETHOD__FACTORYMETHOD_H_
#include <memory>

class Method {
public:
	virtual ~Method() = default;
	virtual double operation(double a,double b) = 0;
};

class Add : public Method {
public:
	double operation(double a,double b) override {
        return a + b;
    }
};

class ObstractFactory {
public:
	virtual ~ObstractFactory() = default;
	virtual std::unique_ptr<Method> createMethod() = 0;
};

class AddFactory : public ObstractFactory {
public:
	std::unique_ptr<Method> createMethod() override {
		return std::make_unique<Add>();
    }
};

#endif //FACTORYMETHOD__FACTORYMETHOD_H_
