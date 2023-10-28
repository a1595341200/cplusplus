#include <fstream>
#include <iostream>
#include <iterator>
#include <regex>
#include <string>
#include <sstream>

int main() {
	auto filename = "/etc/resolv.conf";
	std::ifstream in(filename, std::ios::in);
	if (!in.is_open()) {
		std::cout << "failed to open " << filename << '\n';
	}
	std::smatch ret;
	std::ostringstream res;
	res << in.rdbuf();
	std::regex r("(\\d*\\.\\d*\\.\\d*\\.\\d*)");
	std::string data(res.str());
	// std::string data = "nameserver 127.0.0.53";
	auto words_begin = std::sregex_iterator(data.begin(), data.end(), r);
	auto words_end = std::sregex_iterator();

	for (std::sregex_iterator i = words_begin; i != words_end; ++i) {
		std::smatch match = *i;
		std::string match_str = match.str();
		std::cout << match_str << '\n';
	}

	return 0;
}