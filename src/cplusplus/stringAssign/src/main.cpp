#include <iostream>

using namespace std;

enum Test : uint8_t {
	A,
	B
};

int main(int argc, char const *argv[]) {
	char buf[] = "hello world";
	std::string s;
	cout << sizeof(buf) - 1 << "\n";
	s.assign(buf, sizeof(buf) - 1);
	cout << s << endl;
	cout << sizeof(Test::A) << endl;
	return 0;
}
