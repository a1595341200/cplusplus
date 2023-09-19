#include <iostream>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]) {
	std::istringstream str("true false");
	bool a, b;
	str >> std::boolalpha >> a >> b;
	std::cout << a << " " << b;
	return 0;
}
