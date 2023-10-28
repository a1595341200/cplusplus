//
// Created by 谢瑶 on 2023/3/3.
//

#ifndef DEV_SRC_DESIGNMODE_FACTORYPATTERN_SRC_FACTORYMETHOD_H_
#define DEV_SRC_DESIGNMODE_FACTORYPATTERN_SRC_FACTORYMETHOD_H_

#include <memory>
#include <stdexcept>

class FactoryMethod {
public:
	void setNumberA(double val);
	void setNumberB(double val);
	virtual double getResult() = 0;
protected:
	double numberA{};
	double numberB{};
};

class FactoryMethodAdd : public FactoryMethod {
	double getResult() override;
};

class FactoryMethodSub : public FactoryMethod {
	double getResult() override;
};

class FactoryMethodFactoryInterface {
public:
	virtual std::shared_ptr<FactoryMethod> creatFactoryMethod() = 0;
	virtual ~FactoryMethodFactoryInterface() = default;
};

class AddFactory : public FactoryMethodFactoryInterface {
public:
	std::shared_ptr<FactoryMethod> creatFactoryMethod() override;
};

class SubFactory : public FactoryMethodFactoryInterface {
public:
	std::shared_ptr<FactoryMethod> creatFactoryMethod() override;
};

#endif //DEV_SRC_DESIGNMODE_FACTORYPATTERN_SRC_FACTORYMETHOD_H_
