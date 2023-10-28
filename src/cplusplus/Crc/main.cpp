#include <iostream>
#include "Crc.h"
#include <chrono>

struct T {
	int a;
	uint32 chks{1};
	uint32 cntr;
};

int main() {
	T t;
	t.chks = (uint32)(0xFFFFFFFFuL);
	auto res = Crc_CalculateCRC32((uint8*)&t,sizeof(T),0, true);
	std::cout<< res <<std::endl;
	t.chks = res;
	auto temp = t.chks;
	t.chks = (uint32)(0xFFFFFFFFuL);
	res = Crc_CalculateCRC32((uint8*)&t,sizeof(T),0, true);
	std::cout<< res << "  ==  " << temp << std::endl;
	return 0;
}
