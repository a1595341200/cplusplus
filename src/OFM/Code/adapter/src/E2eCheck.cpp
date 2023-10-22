//
// Created by 谢瑶 on 2023/5/9.
//

#include "E2eCheck.h"

namespace E2eCheck {
void EgoMotionE2eCheck::E2eCheck(const EgoMotion::EgoMotion &egomotion) {
	isVaild = cntrCheck(egomotion) && crcCheck(egomotion);
	mCntr = egomotion.CntrEgoMotionData_ref;
}

bool EgoMotionE2eCheck::cntrCheck(const EgoMotion::EgoMotion &egomotion) const {
	return (egomotion.CntrEgoMotionData_ref - mCntr) <= 3;
}

bool EgoMotionE2eCheck::crcCheck(const EgoMotion::EgoMotion &egomotion) {
	auto chks = egomotion.ChksEgoMotionData_ref;
	const_cast<EgoMotion::EgoMotion &>(egomotion).ChksEgoMotionData_ref = CRC_INITIAL_VALUE8;
//	auto res = Crc_CalculateCRC8((uint8 *) &egomotion,
//								 sizeof(EgoMotion::EgoMotion),
//								 0,
//								 true);
	std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
	auto timeout = std::chrono::duration_cast<std::chrono::milliseconds>(now - mLatest).count();

//	if (res == chks) {
//		mLatest = now;
//		return true;
//	} else {
//		return timeout <= 150;
//	}
}

bool TimeStampCheck::isUpdate(const uint32_t& data) {
	if (mTimeStamp == data) {
		return false;
	}
	mTimeStamp = data;
	return true;
}

bool FourDRadarObjStsUpdateFlagCheck::isUpdate(const UpdateFlag::UpdateFlag& upDateFlag) {
	auto now = std::chrono::system_clock::now();
	if (upDateFlag == UpdateFlag::UpdateFlag::Boolean_FALSE) {
		auto timeInterval = std::chrono::duration_cast<std::chrono::milliseconds>(now - mLatest).count();
		if(timeInterval > 150) {
			isSensorError = true;
		}
		return false;
	}
	mLatest = now;
	return true;
}
};