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
/**        \file  TrafficSignInformationExe/include/LineSignGroupIDT/impl_type_linesigngroupidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_LINESIGNGROUPIDT_IMPL_TYPE_LINESIGNGROUPIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_LINESIGNGROUPIDT_IMPL_TYPE_LINESIGNGROUPIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_RoadSignIDT_10/impl_type_array_roadsignidt_10.h"
#include "CrosswalkIDT/impl_type_crosswalkidt.h"
#include "StopLineIDT/impl_type_stoplineidt.h"

namespace LineSignGroupIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LineSignGroupIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LineSignGroupIDT
 */
struct LineSignGroupIDT {
  using StopLine_generated_type = StopLineIDT::StopLineIDT;
  using Crosswalk_generated_type = CrosswalkIDT::CrosswalkIDT;
  using RoadSigns_generated_type = Array_RoadSignIDT_10::Array_RoadSignIDT_10;

  StopLine_generated_type StopLine;
  Crosswalk_generated_type Crosswalk;
  RoadSigns_generated_type RoadSigns;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LineSignGroupIDT instance.
 */
inline bool operator==(LineSignGroupIDT const& l,
                       LineSignGroupIDT const& r) noexcept {
  return (&l == &r) || ((l.StopLine == r.StopLine)
                         && (l.Crosswalk == r.Crosswalk)
                         && (l.RoadSigns == r.RoadSigns)
  );
}

/*!
 * \brief Compare for inequality with another LineSignGroupIDT instance.
 */
inline bool operator!=(LineSignGroupIDT const& l,
                       LineSignGroupIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LineSignGroupIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_LINESIGNGROUPIDT_IMPL_TYPE_LINESIGNGROUPIDT_H_
