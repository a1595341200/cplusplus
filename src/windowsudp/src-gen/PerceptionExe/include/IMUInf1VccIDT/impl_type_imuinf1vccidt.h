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
/**        \file  PerceptionExe/include/IMUInf1VccIDT/impl_type_imuinf1vccidt.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_IMUINF1VCCIDT_IMPL_TYPE_IMUINF1VCCIDT_H_
#define PERCEPTIONEXE_INCLUDE_IMUINF1VCCIDT_IMPL_TYPE_IMUINF1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cmath>
#include <cstdint>
#include <limits>
#include <map>
#include <string>
#include <vector>
#include "ImuCalSts1IDT/impl_type_imucalsts1idt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace IMUInf1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type IMUInf1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/IMUInf1VccIDT
 */
struct IMUInf1VccIDT {
  using IMUinfChks_generated_type = uint8IDT::uint8IDT;
  using IMUinfCntr_generated_type = uint8IDT::uint8IDT;
  using IMUAccX_generated_type = float32IDT::float32IDT;
  using IMUAccY_generated_type = float32IDT::float32IDT;
  using IMUAccZ_generated_type = float32IDT::float32IDT;
  using IMUCalStatus_generated_type = ImuCalSts1IDT::ImuCalSts1IDT;
  using IMUGyroX_generated_type = float32IDT::float32IDT;
  using IMUGyroY_generated_type = float32IDT::float32IDT;
  using IMUGyroZ_generated_type = float32IDT::float32IDT;
  using IMULbtcX_generated_type = float32IDT::float32IDT;
  using IMULbtcY_generated_type = float32IDT::float32IDT;
  using IMULbtcZ_generated_type = float32IDT::float32IDT;
  using IMULtgX_generated_type = float32IDT::float32IDT;
  using IMULtgY_generated_type = float32IDT::float32IDT;
  using IMULtgZ_generated_type = float32IDT::float32IDT;
  using IMUTemp_generated_type = float32IDT::float32IDT;
  using IMUTimestampHi_generated_type = uint32IDT::uint32IDT;
  using IMUTimestampLo_generated_type = uint32IDT::uint32IDT;
  using IMUatttbPitch_generated_type = float32IDT::float32IDT;
  using IMUatttbRoll_generated_type = float32IDT::float32IDT;
  using IMUatttbYaw_generated_type = float32IDT::float32IDT;
  using INSAx_generated_type = float32IDT::float32IDT;
  using INSAy_generated_type = float32IDT::float32IDT;
  using INSAz_generated_type = float32IDT::float32IDT;
  using INSGx_generated_type = float32IDT::float32IDT;
  using INSGy_generated_type = float32IDT::float32IDT;
  using INSGz_generated_type = float32IDT::float32IDT;
  using ImuStatus_generated_type = ImuCalSts1IDT::ImuCalSts1IDT;
  using IMUinfReserve_generated_type = uint8IDT::uint8IDT;

  IMUinfChks_generated_type IMUinfChks;
  IMUinfCntr_generated_type IMUinfCntr;
  IMUAccX_generated_type IMUAccX;
  IMUAccY_generated_type IMUAccY;
  IMUAccZ_generated_type IMUAccZ;
  IMUCalStatus_generated_type IMUCalStatus;
  IMUGyroX_generated_type IMUGyroX;
  IMUGyroY_generated_type IMUGyroY;
  IMUGyroZ_generated_type IMUGyroZ;
  IMULbtcX_generated_type IMULbtcX;
  IMULbtcY_generated_type IMULbtcY;
  IMULbtcZ_generated_type IMULbtcZ;
  IMULtgX_generated_type IMULtgX;
  IMULtgY_generated_type IMULtgY;
  IMULtgZ_generated_type IMULtgZ;
  IMUTemp_generated_type IMUTemp;
  IMUTimestampHi_generated_type IMUTimestampHi;
  IMUTimestampLo_generated_type IMUTimestampLo;
  IMUatttbPitch_generated_type IMUatttbPitch;
  IMUatttbRoll_generated_type IMUatttbRoll;
  IMUatttbYaw_generated_type IMUatttbYaw;
  INSAx_generated_type INSAx;
  INSAy_generated_type INSAy;
  INSAz_generated_type INSAz;
  INSGx_generated_type INSGx;
  INSGy_generated_type INSGy;
  INSGz_generated_type INSGz;
  ImuStatus_generated_type ImuStatus;
  IMUinfReserve_generated_type IMUinfReserve;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another IMUInf1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(IMUInf1VccIDT const& l,
                       IMUInf1VccIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.IMUinfChks == r.IMUinfChks)
                         && (l.IMUinfCntr == r.IMUinfCntr)
                         && compare_float(l.IMUAccX, r.IMUAccX)
                         && compare_float(l.IMUAccY, r.IMUAccY)
                         && compare_float(l.IMUAccZ, r.IMUAccZ)
                         && (l.IMUCalStatus == r.IMUCalStatus)
                         && compare_float(l.IMUGyroX, r.IMUGyroX)
                         && compare_float(l.IMUGyroY, r.IMUGyroY)
                         && compare_float(l.IMUGyroZ, r.IMUGyroZ)
                         && compare_float(l.IMULbtcX, r.IMULbtcX)
                         && compare_float(l.IMULbtcY, r.IMULbtcY)
                         && compare_float(l.IMULbtcZ, r.IMULbtcZ)
                         && compare_float(l.IMULtgX, r.IMULtgX)
                         && compare_float(l.IMULtgY, r.IMULtgY)
                         && compare_float(l.IMULtgZ, r.IMULtgZ)
                         && compare_float(l.IMUTemp, r.IMUTemp)
                         && (l.IMUTimestampHi == r.IMUTimestampHi)
                         && (l.IMUTimestampLo == r.IMUTimestampLo)
                         && compare_float(l.IMUatttbPitch, r.IMUatttbPitch)
                         && compare_float(l.IMUatttbRoll, r.IMUatttbRoll)
                         && compare_float(l.IMUatttbYaw, r.IMUatttbYaw)
                         && compare_float(l.INSAx, r.INSAx)
                         && compare_float(l.INSAy, r.INSAy)
                         && compare_float(l.INSAz, r.INSAz)
                         && compare_float(l.INSGx, r.INSGx)
                         && compare_float(l.INSGy, r.INSGy)
                         && compare_float(l.INSGz, r.INSGz)
                         && (l.ImuStatus == r.ImuStatus)
                         && (l.IMUinfReserve == r.IMUinfReserve)
  );
}

/*!
 * \brief   Compare for inequality with another IMUInf1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(IMUInf1VccIDT const& l,
                       IMUInf1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace IMUInf1VccIDT

#endif  // PERCEPTIONEXE_INCLUDE_IMUINF1VCCIDT_IMPL_TYPE_IMUINF1VCCIDT_H_
