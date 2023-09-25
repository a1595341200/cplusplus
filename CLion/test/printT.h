//
// Created by 谢瑶 on 2023/5/8.
//

#ifndef TEST__PRINTT_H_
#define TEST__PRINTT_H_
#include <iostream>
#include <vector>
#include <tuple>

void printT() {

}

template<typename T>
std::ostream &operator<<(std::ostream &ostream, const std::vector<T> &a) {
	for (int v : a) {
		ostream << v << " ";
	}
	ostream << std::endl;
	return ostream;
}

template<typename T>
std::ostream &operator<<(std::ostream &ostream, const std::vector<std::vector<T>> &a) {
	for (auto &a1 : a) {
		for (int v : a1) {
			std::cout << v << " ";
		}
		std::cout << std::endl;
	}
	return ostream;
}

template<typename T, typename ... Args>
void printT(const T &t, Args &&... args) {
	std::cout << t << std::endl;
	printT(args ...);
}

template<int ID, int MAX, typename ... Args>
struct PrintTuple {
public:
	static void print(std::ostream &stream, const std::tuple<Args...> &t) {
		stream << std::get<ID>(t) << (ID + 1 == MAX ? "" : ",");
		PrintTuple<ID + 1, MAX, Args ...>::print(stream, t);
	}
};


// 函数模板不允许偏特化
template<int MAX, typename ... Args>
struct PrintTuple<MAX, MAX, Args...> {
public:
	static void print(std::ostream &stream, const std::tuple<Args...> &t) {
	}
};

template<typename... Args>
std::ostream &operator<<(std::ostream &ostream, const std::tuple<Args...> &t) {
	ostream << "[";
	PrintTuple<0, sizeof...(Args), Args...>::print(ostream, t);
	ostream << "]";
return ostream;
}

#endif //TEST__PRINTT_H_
