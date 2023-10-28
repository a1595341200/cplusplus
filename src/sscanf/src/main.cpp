#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
	std::string s("1:2:3:4");
	int a[4]{0};
	sscanf(s.c_str(), "%d:%d:%d:%d", &a[0], &a[1], &a[2], &a[3]);
	for (int i : a) {
		std::cout << i << std::endl;
	}
	return 0;
}
