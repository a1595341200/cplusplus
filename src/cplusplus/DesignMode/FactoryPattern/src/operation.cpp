//
// Created by 谢瑶 on 2023/3/2.
//

#include "operation.h"

void operation::setNumberA(double val) {
	numberA = val;
}

void operation::setNumberB(double val) {
	numberB = val;
}

double OperationAdd::getResult() {
	return numberA + numberB;
}

double OperationSub::getResult() {
	return numberA - numberB;
}

std::shared_ptr<operation> OperationFactory::creatOperation(char o) {
	std::shared_ptr<operation> res = nullptr;
	switch (o) {
		case '+':
			res = std::make_shared<OperationAdd>();
			break;
		case '-':
			res = std::make_shared<OperationSub>();
			break;
		default:
			throw std::runtime_error("not match");
	}
	return res;
}