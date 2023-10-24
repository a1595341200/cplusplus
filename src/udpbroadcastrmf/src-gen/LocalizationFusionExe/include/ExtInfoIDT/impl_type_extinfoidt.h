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
/**        \file  LocalizationFusionExe/include/ExtInfoIDT/impl_type_extinfoidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_EXTINFOIDT_IMPL_TYPE_EXTINFOIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_EXTINFOIDT_IMPL_TYPE_EXTINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "SurfaceConditionIDT/impl_type_surfaceconditionidt.h"
#include "TimeOfDayIDT/impl_type_timeofdayidt.h"

namespace ExtInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ExtInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ExtInfoIDT
 */
struct ExtInfoIDT {
  using SurfaceCondition_generated_type = SurfaceConditionIDT::SurfaceConditionIDT;
  using TimeOfDay_generated_type = TimeOfDayIDT::TimeOfDayIDT;

  SurfaceCondition_generated_type SurfaceCondition;
  TimeOfDay_generated_type TimeOfDay;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ExtInfoIDT instance.
 */
inline bool operator==(ExtInfoIDT const& l,
                       ExtInfoIDT const& r) noexcept {
  return (&l == &r) || ((l.SurfaceCondition == r.SurfaceCondition)
                         && (l.TimeOfDay == r.TimeOfDay)
  );
}

/*!
 * \brief Compare for inequality with another ExtInfoIDT instance.
 */
inline bool operator!=(ExtInfoIDT const& l,
                       ExtInfoIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ExtInfoIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_EXTINFOIDT_IMPL_TYPE_EXTINFOIDT_H_
