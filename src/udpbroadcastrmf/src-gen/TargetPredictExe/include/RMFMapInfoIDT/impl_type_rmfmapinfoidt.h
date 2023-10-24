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
/**        \file  TargetPredictExe/include/RMFMapInfoIDT/impl_type_rmfmapinfoidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_RMFMAPINFOIDT_IMPL_TYPE_RMFMAPINFOIDT_H_
#define TARGETPREDICTEXE_INCLUDE_RMFMAPINFOIDT_IMPL_TYPE_RMFMAPINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "MapOddIDT/impl_type_mapoddidt.h"
#include "NavIsSetIDT/impl_type_navissetidt.h"
#include "NavIsYawIDT/impl_type_navisyawidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace RMFMapInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RMFMapInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RMFMapInfoIDT
 */
struct RMFMapInfoIDT {
  using MapOdd_generated_type = MapOddIDT::MapOddIDT;
  using NavIsSet_generated_type = NavIsSetIDT::NavIsSetIDT;
  using NavIsYaw_generated_type = NavIsYawIDT::NavIsYawIDT;
  using LocErrorSts_generated_type = uint8IDT::uint8IDT;

  MapOdd_generated_type MapOdd;
  NavIsSet_generated_type NavIsSet;
  NavIsYaw_generated_type NavIsYaw;
  LocErrorSts_generated_type LocErrorSts;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RMFMapInfoIDT instance.
 */
inline bool operator==(RMFMapInfoIDT const& l,
                       RMFMapInfoIDT const& r) noexcept {
  return (&l == &r) || ((l.MapOdd == r.MapOdd)
                         && (l.NavIsSet == r.NavIsSet)
                         && (l.NavIsYaw == r.NavIsYaw)
                         && (l.LocErrorSts == r.LocErrorSts)
  );
}

/*!
 * \brief Compare for inequality with another RMFMapInfoIDT instance.
 */
inline bool operator!=(RMFMapInfoIDT const& l,
                       RMFMapInfoIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RMFMapInfoIDT

#endif  // TARGETPREDICTEXE_INCLUDE_RMFMAPINFOIDT_IMPL_TYPE_RMFMAPINFOIDT_H_
