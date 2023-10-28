//
// Created by 谢瑶 on 2023/3/4.
//

#ifndef DEV_SRC_DESIGNMODE_FACADE_SRC_FACADE_H_
#define DEV_SRC_DESIGNMODE_FACADE_SRC_FACADE_H_

class SystemA {
public:
	void methodOne();
};

class SystemB {
public:
	void methodTwo();
};

class SystemC {
public:
	void methodThree();
};

class SystemD {
public:
	void methodFour();
};

class Facade {
public:
	Facade();
	void methodA();
private:
	SystemA mA;
	SystemB mB;
	SystemC mC;
	SystemD mD;
};

#endif //DEV_SRC_DESIGNMODE_FACADE_SRC_FACADE_H_
