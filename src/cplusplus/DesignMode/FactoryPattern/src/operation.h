//
// Created by 谢瑶 on 2023/3/2.
//

#ifndef DEV_SRC_DESIGNMODE_FACTORYPATTERN_SRC_OPERATION_H_
#define DEV_SRC_DESIGNMODE_FACTORYPATTERN_SRC_OPERATION_H_

#include <memory>
#include <stdexcept>

class operation {
public:
	void setNumberA(double val);
	void setNumberB(double val);
	virtual double getResult() = 0;
protected:
	double numberA{};
	double numberB{};
};

class OperationAdd : public operation {
	double getResult() override;
};

class OperationSub : public operation {
	double getResult() override;
};

class OperationFactory {
public:
	static std::shared_ptr<operation> creatOperation(char o);
};

#endif //DEV_SRC_DESIGNMODE_FACTORYPATTERN_SRC_OPERATION_H_
