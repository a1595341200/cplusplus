#include <iostream>
using namespace std;

void showVtableContent(char *className, void *pObj, int index) {
	unsigned long *pAddr = nullptr;
	pAddr = reinterpret_cast<unsigned long *>(pObj);
	pAddr = (unsigned long *) *pAddr;     //获取虚函数表指针
	cout << className << "'s vtable[" << index << "]:0x" << (void *) pAddr[index] << endl;
}

class Base {
public:
	virtual void p() { cout << "p" << endl; }
};

class A : public Base {
public:
	void p() override {

	}
};

int main(int argc, char const *argv[]) {
	Base *b = new Base();
	Base *b1 = new Base();
	A *a = new A();
	showVtableContent("Base", b, 0);
	showVtableContent("Base", b1, 0);
	showVtableContent("Base", b, 1);
	showVtableContent("Base", b1, 1);
	return 0;
}
