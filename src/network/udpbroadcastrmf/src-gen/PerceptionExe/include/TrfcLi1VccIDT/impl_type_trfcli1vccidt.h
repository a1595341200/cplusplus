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
/**        \file  PerceptionExe/include/TrfcLi1VccIDT/impl_type_trfcli1vccidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_TRFCLI1VCCIDT_IMPL_TYPE_TRFCLI1VCCIDT_H_
#define PERCEPTIONEXE_INCLUDE_TRFCLI1VCCIDT_IMPL_TYPE_TRFCLI1VCCIDT_H_

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
#include "TrfcLiColorIDT/impl_type_trfclicoloridt.h"
#include "TrfcLiLaneAssignmentIDT/impl_type_trfclilaneassignmentidt.h"
#include "TrfcLiTypIDT/impl_type_trfclitypidt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace TrfcLi1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TrfcLi1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcLi1VccIDT
 */
struct TrfcLi1VccIDT {
  using Confidence_generated_type = float32IDT::float32IDT;
  using CamObjId_generated_type = uint8IDT::uint8IDT;
  using LaneAssignmentTL_generated_type = TrfcLiLaneAssignmentIDT::TrfcLiLaneAssignmentIDT;
  using LatPosTL_generated_type = float32IDT::float32IDT;
  using LongPosTL_generated_type = float32IDT::float32IDT;
  using VertPosTL_generated_type = float32IDT::float32IDT;
  using ColorTL_generated_type = TrfcLiColorIDT::TrfcLiColorIDT;
  using CamTimeStamp_generated_type = uint32IDT::uint32IDT;
  using CamChks_generated_type = uint8IDT::uint8IDT;
  using CamCntr_generated_type = uint8IDT::uint8IDT;
  using TypeTL_generated_type = TrfcLiTypIDT::TrfcLiTypIDT;
  using ISPTimeStamp_generated_type = uint32IDT::uint32IDT;

  Confidence_generated_type Confidence;
  CamObjId_generated_type CamObjId;
  LaneAssignmentTL_generated_type LaneAssignmentTL;
  LatPosTL_generated_type LatPosTL;
  LongPosTL_generated_type LongPosTL;
  VertPosTL_generated_type VertPosTL;
  ColorTL_generated_type ColorTL;
  CamTimeStamp_generated_type CamTimeStamp;
  CamChks_generated_type CamChks;
  CamCntr_generated_type CamCntr;
  TypeTL_generated_type TypeTL;
  ISPTimeStamp_generated_type ISPTimeStamp;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another TrfcLi1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(TrfcLi1VccIDT const& l,
                       TrfcLi1VccIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.Confidence, r.Confidence)
                         && (l.CamObjId == r.CamObjId)
                         && (l.LaneAssignmentTL == r.LaneAssignmentTL)
                         && compare_float(l.LatPosTL, r.LatPosTL)
                         && compare_float(l.LongPosTL, r.LongPosTL)
                         && compare_float(l.VertPosTL, r.VertPosTL)
                         && (l.ColorTL == r.ColorTL)
                         && (l.CamTimeStamp == r.CamTimeStamp)
                         && (l.CamChks == r.CamChks)
                         && (l.CamCntr == r.CamCntr)
                         && (l.TypeTL == r.TypeTL)
                         && (l.ISPTimeStamp == r.ISPTimeStamp)
  );
}

/*!
 * \brief   Compare for inequality with another TrfcLi1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(TrfcLi1VccIDT const& l,
                       TrfcLi1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcLi1VccIDT

#endif  // PERCEPTIONEXE_INCLUDE_TRFCLI1VCCIDT_IMPL_TYPE_TRFCLI1VCCIDT_H_
