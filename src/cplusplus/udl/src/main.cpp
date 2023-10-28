#include <iostream>
using namespace std;

void operator ""_r(const char *str, size_t len) {
	std::cout << str << std::endl;
}

int main(int argc, char const *argv[]) {
	"test"_r;
	return 0;
}
