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
/**        \file  LocalizationFusionExe/include/VehBattU1Vcc/impl_type_vehbattu1vcc.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_VEHBATTU1VCC_IMPL_TYPE_VEHBATTU1VCC_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_VEHBATTU1VCC_IMPL_TYPE_VEHBATTU1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "SysU/impl_type_sysu.h"
#include "SysUQf/impl_type_sysuqf.h"

namespace VehBattU1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type VehBattU1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehBattU1Vcc
 */
struct VehBattU1Vcc {
  using _SysU_ref_type = SysU::SysU;
  using _SysUQf_ref_type = SysUQf::SysUQf;

  _SysU_ref_type SysU_ref;
  _SysUQf_ref_type SysUQf_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another VehBattU1Vcc instance.
 */
inline bool operator==(VehBattU1Vcc const& l,
                       VehBattU1Vcc const& r) noexcept {
  return (&l == &r) || ((l.SysU_ref == r.SysU_ref)
                         && (l.SysUQf_ref == r.SysUQf_ref)
  );
}

/*!
 * \brief Compare for inequality with another VehBattU1Vcc instance.
 */
inline bool operator!=(VehBattU1Vcc const& l,
                       VehBattU1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace VehBattU1Vcc

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_VEHBATTU1VCC_IMPL_TYPE_VEHBATTU1VCC_H_
