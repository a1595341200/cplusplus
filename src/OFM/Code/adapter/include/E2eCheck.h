//
// Created by 谢瑶 on 2023/5/9.
//

#ifndef WORK_SOC0_QNX_SOC_APP_DETECTIONFUSION_CODE_ADAPTER_INCLUDE_E2E_H_
#define WORK_SOC0_QNX_SOC_APP_DETECTIONFUSION_CODE_ADAPTER_INCLUDE_E2E_H_
#include <type_traits>
#include "ObjEstimn2VccGroup/impl_type_objestimn2vccgroup.h"
#include "JkObjFusn_EgoMotionType.h"
#include "EgoMotion/impl_type_egomotion.h"
#include <chrono>
#include "UpdateFlag/impl_type_updateflag.h"

#define CRC_INITIAL_VALUE32         (uint32)(0xFFFFFFFFuL)
#define CRC_INITIAL_VALUE8          (0xFFu)

namespace E2eCheck {
class FusedTargetsE2eCheck {
public:
	template<typename FusedTargets>
	void FusedTargetsE2e(FusedTargets &fusedTargets) {
		if (mCntr > 15) {
			mCntr = 0;
		}
		for (auto &it : fusedTargets) {
			it.ObjEstimn2VccGroup_ref.ObjEstimnChks_ref = CRC_INITIAL_VALUE32;
			it.ObjEstimn2VccGroup_ref.ObjEstimnCntr_ref = mCntr++;
//			auto res = Crc_CalculateCRC32((uint8 *) &(it.ObjEstimn2VccGroup_ref),
//										  sizeof(ObjEstimn2VccGroup::ObjEstimn2VccGroup),
//										  0,
//										  true);
			it.ObjEstimn2VccGroup_ref.ObjEstimnChks_ref = 1;
		}
	}

private:
	uint8 mCntr{0};
};

// DX11-45376 DX11-45380
class EgoMotionE2eCheck {
public:
	void E2eCheck(const EgoMotion::EgoMotion &egomotion);

	bool isVaild{true};
private:
	bool cntrCheck(const EgoMotion::EgoMotion &egomotion) const;

	bool crcCheck(const EgoMotion::EgoMotion &egomotion);

	uint8 mCntr{0};
	std::chrono::system_clock::time_point mLatest{std::chrono::system_clock::now()};
};

// DX11-45636
// TODO 150ms逻辑完善
class TimeStampCheck {
public:
	bool isUpdate(const uint32_t& timeStamp);
private:
	uint32_t mTimeStamp{0};
};

// DX11-45656
class FourDRadarObjStsUpdateFlagCheck {
public:
	bool isUpdate(const UpdateFlag::UpdateFlag& upDateFlag);
private:
	std::chrono::system_clock::time_point mLatest{std::chrono::system_clock::now()};
	bool isSensorError{false};
};

};

#endif //WORK_SOC0_QNX_SOC_APP_DETECTIONFUSION_CODE_ADAPTER_INCLUDE_E2E_H_
