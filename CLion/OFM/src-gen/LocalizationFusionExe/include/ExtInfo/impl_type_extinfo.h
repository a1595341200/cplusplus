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
/**        \file  LocalizationFusionExe/include/ExtInfo/impl_type_extinfo.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_EXTINFO_IMPL_TYPE_EXTINFO_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_EXTINFO_IMPL_TYPE_EXTINFO_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "SurfaceCondition/impl_type_surfacecondition.h"
#include "TimeOfDay/impl_type_timeofday.h"

namespace ExtInfo {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ExtInfo.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ExtInfo
 */
struct ExtInfo {
  using _SurfaceCondition_ref_type = SurfaceCondition::SurfaceCondition;
  using _TimeOfDay_ref_type = TimeOfDay::TimeOfDay;

  _SurfaceCondition_ref_type SurfaceCondition_ref;
  _TimeOfDay_ref_type TimeOfDay_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ExtInfo instance.
 */
inline bool operator==(ExtInfo const& l,
                       ExtInfo const& r) noexcept {
  return (&l == &r) || ((l.SurfaceCondition_ref == r.SurfaceCondition_ref)
                         && (l.TimeOfDay_ref == r.TimeOfDay_ref)
  );
}

/*!
 * \brief Compare for inequality with another ExtInfo instance.
 */
inline bool operator!=(ExtInfo const& l,
                       ExtInfo const& r) noexcept {
  return !(l == r);
}

}  // namespace ExtInfo

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_EXTINFO_IMPL_TYPE_EXTINFO_H_
