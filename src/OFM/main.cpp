#include <iostream>
#include "TargetFusion.h"

int main() {
	std::cout << "Hello, World!" << std::endl;
	DataReceiver r;
	DataSender s;
	TargetFusion t(r,s);
	t.TargetFusionInit();
	t.TargetFusionProcess();
	std::cout<< s.get_FusedTargets_1_11()[0].ObjPpty2Vcc_ref.Idn_ref <<std::endl;
	return 0;
}
