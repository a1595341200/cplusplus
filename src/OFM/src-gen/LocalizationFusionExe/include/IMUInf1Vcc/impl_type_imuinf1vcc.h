/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *  Copyright (c) 2023 by Vector Informatik GmbH. All rights reserved.
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -----------------------------------------------------------------------------------------------------------------*/
/**        \file  LocalizationFusionExe/include/IMUInf1Vcc/impl_type_imuinf1vcc.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_IMUINF1VCC_IMPL_TYPE_IMUINF1VCC_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_IMUINF1VCC_IMPL_TYPE_IMUINF1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "IMUAccX/impl_type_imuaccx.h"
#include "IMUAccY/impl_type_imuaccy.h"
#include "IMUAccZ/impl_type_imuaccz.h"
#include "IMUCalStatus/impl_type_imucalstatus.h"
#include "IMUGyroX/impl_type_imugyrox.h"
#include "IMUGyroY/impl_type_imugyroy.h"
#include "IMUGyroZ/impl_type_imugyroz.h"
#include "IMULbtcX/impl_type_imulbtcx.h"
#include "IMULbtcY/impl_type_imulbtcy.h"
#include "IMULbtcZ/impl_type_imulbtcz.h"
#include "IMULtgX/impl_type_imultgx.h"
#include "IMULtgY/impl_type_imultgy.h"
#include "IMUTemp/impl_type_imutemp.h"
#include "IMUTimestampHi/impl_type_imutimestamphi.h"
#include "IMUTimestampLo/impl_type_imutimestamplo.h"
#include "IMUatttbPitch/impl_type_imuatttbpitch.h"
#include "IMUatttbRoll/impl_type_imuatttbroll.h"
#include "IMUatttbYaw/impl_type_imuatttbyaw.h"
#include "IMUinfChks/impl_type_imuinfchks.h"
#include "IMUinfCntr/impl_type_imuinfcntr.h"
#include "IMUinfReserve/impl_type_imuinfreserve.h"
#include "INSAx/impl_type_insax.h"
#include "INSAy/impl_type_insay.h"
#include "INSAz/impl_type_insaz.h"
#include "INSGx/impl_type_insgx.h"
#include "INSGy/impl_type_insgy.h"
#include "INSGz/impl_type_insgz.h"
#include "ImuStatus/impl_type_imustatus.h"

namespace IMUInf1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type IMUInf1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/IMUInf1Vcc
 */
struct IMUInf1Vcc {
  using _IMUinfChks_ref_type = IMUinfChks::IMUinfChks;
  using _IMUinfCntr_ref_type = IMUinfCntr::IMUinfCntr;
  using _IMUAccX_ref_type = IMUAccX::IMUAccX;
  using _IMUAccY_ref_type = IMUAccY::IMUAccY;
  using _IMUAccZ_ref_type = IMUAccZ::IMUAccZ;
  using _IMUCalStatus_ref_type = IMUCalStatus::IMUCalStatus;
  using _IMUGyroX_ref_type = IMUGyroX::IMUGyroX;
  using _IMUGyroY_ref_type = IMUGyroY::IMUGyroY;
  using _IMUGyroZ_ref_type = IMUGyroZ::IMUGyroZ;
  using _IMULbtcX_ref_type = IMULbtcX::IMULbtcX;
  using _IMULbtcY_ref_type = IMULbtcY::IMULbtcY;
  using _IMULbtcZ_ref_type = IMULbtcZ::IMULbtcZ;
  using _IMULtgX_ref_type = IMULtgX::IMULtgX;
  using _IMULtgY_ref_type = IMULtgY::IMULtgY;
  using _IMUTemp_ref_type = IMUTemp::IMUTemp;
  using _IMUTimestampHi_ref_type = IMUTimestampHi::IMUTimestampHi;
  using _IMUTimestampLo_ref_type = IMUTimestampLo::IMUTimestampLo;
  using _IMUatttbPitch_ref_type = IMUatttbPitch::IMUatttbPitch;
  using _IMUatttbRoll_ref_type = IMUatttbRoll::IMUatttbRoll;
  using _IMUatttbYaw_ref_type = IMUatttbYaw::IMUatttbYaw;
  using _INSAx_ref_type = INSAx::INSAx;
  using _INSAy_ref_type = INSAy::INSAy;
  using _INSAz_ref_type = INSAz::INSAz;
  using _INSGx_ref_type = INSGx::INSGx;
  using _INSGy_ref_type = INSGy::INSGy;
  using _INSGz_ref_type = INSGz::INSGz;
  using _ImuStatus_ref_type = ImuStatus::ImuStatus;
  using _IMUinfReserve_ref_type = IMUinfReserve::IMUinfReserve;

  _IMUinfChks_ref_type IMUinfChks_ref;
  _IMUinfCntr_ref_type IMUinfCntr_ref;
  _IMUAccX_ref_type IMUAccX_ref;
  _IMUAccY_ref_type IMUAccY_ref;
  _IMUAccZ_ref_type IMUAccZ_ref;
  _IMUCalStatus_ref_type IMUCalStatus_ref;
  _IMUGyroX_ref_type IMUGyroX_ref;
  _IMUGyroY_ref_type IMUGyroY_ref;
  _IMUGyroZ_ref_type IMUGyroZ_ref;
  _IMULbtcX_ref_type IMULbtcX_ref;
  _IMULbtcY_ref_type IMULbtcY_ref;
  _IMULbtcZ_ref_type IMULbtcZ_ref;
  _IMULtgX_ref_type IMULtgX_ref;
  _IMULtgY_ref_type IMULtgY_ref;
  _IMUTemp_ref_type IMUTemp_ref;
  _IMUTimestampHi_ref_type IMUTimestampHi_ref;
  _IMUTimestampLo_ref_type IMUTimestampLo_ref;
  _IMUatttbPitch_ref_type IMUatttbPitch_ref;
  _IMUatttbRoll_ref_type IMUatttbRoll_ref;
  _IMUatttbYaw_ref_type IMUatttbYaw_ref;
  _INSAx_ref_type INSAx_ref;
  _INSAy_ref_type INSAy_ref;
  _INSAz_ref_type INSAz_ref;
  _INSGx_ref_type INSGx_ref;
  _INSGy_ref_type INSGy_ref;
  _INSGz_ref_type INSGz_ref;
  _ImuStatus_ref_type ImuStatus_ref;
  _IMUinfReserve_ref_type IMUinfReserve_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another IMUInf1Vcc instance.
 */
inline bool operator==(IMUInf1Vcc const& l,
                       IMUInf1Vcc const& r) noexcept {
  return (&l == &r) || ((l.IMUinfChks_ref == r.IMUinfChks_ref)
                         && (l.IMUinfCntr_ref == r.IMUinfCntr_ref)
                         && (l.IMUAccX_ref == r.IMUAccX_ref)
                         && (l.IMUAccY_ref == r.IMUAccY_ref)
                         && (l.IMUAccZ_ref == r.IMUAccZ_ref)
                         && (l.IMUCalStatus_ref == r.IMUCalStatus_ref)
                         && (l.IMUGyroX_ref == r.IMUGyroX_ref)
                         && (l.IMUGyroY_ref == r.IMUGyroY_ref)
                         && (l.IMUGyroZ_ref == r.IMUGyroZ_ref)
                         && (l.IMULbtcX_ref == r.IMULbtcX_ref)
                         && (l.IMULbtcY_ref == r.IMULbtcY_ref)
                         && (l.IMULbtcZ_ref == r.IMULbtcZ_ref)
                         && (l.IMULtgX_ref == r.IMULtgX_ref)
                         && (l.IMULtgY_ref == r.IMULtgY_ref)
                         && (l.IMUTemp_ref == r.IMUTemp_ref)
                         && (l.IMUTimestampHi_ref == r.IMUTimestampHi_ref)
                         && (l.IMUTimestampLo_ref == r.IMUTimestampLo_ref)
                         && (l.IMUatttbPitch_ref == r.IMUatttbPitch_ref)
                         && (l.IMUatttbRoll_ref == r.IMUatttbRoll_ref)
                         && (l.IMUatttbYaw_ref == r.IMUatttbYaw_ref)
                         && (l.INSAx_ref == r.INSAx_ref)
                         && (l.INSAy_ref == r.INSAy_ref)
                         && (l.INSAz_ref == r.INSAz_ref)
                         && (l.INSGx_ref == r.INSGx_ref)
                         && (l.INSGy_ref == r.INSGy_ref)
                         && (l.INSGz_ref == r.INSGz_ref)
                         && (l.ImuStatus_ref == r.ImuStatus_ref)
                         && (l.IMUinfReserve_ref == r.IMUinfReserve_ref)
  );
}

/*!
 * \brief Compare for inequality with another IMUInf1Vcc instance.
 */
inline bool operator!=(IMUInf1Vcc const& l,
                       IMUInf1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace IMUInf1Vcc

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_IMUINF1VCC_IMPL_TYPE_IMUINF1VCC_H_
