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

OperationContext::OperationContext(char o) {
	switch (o) {
		case '+':
			mOperation = std::make_unique<OperationAdd>();
			break;
		case '-':
			mOperation = std::make_unique<OperationSub>();
			break;
		default:
			throw std::runtime_error("not match");
	}
}

double OperationContext::getResult(double numberA, double numberB) {
	mOperation->setNumberA(numberA);
	mOperation->setNumberB(numberB);
	return mOperation->getResult();
}