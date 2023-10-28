#include <iostream>
#include <optional>
#include <map>

std::optional<std::string> getString(bool f) {
	if (f) {
		return "d";
	} else {
		return std::nullopt;
	}
}

int main(int argc, char const *argv[]) {
	if (auto f = getString(false);f) {
		std::cout << f.value() << std::endl;
	}
	std::map<int, int> a;
	for (auto v : a) {
//        v.second();
	}

	return 0;
}
