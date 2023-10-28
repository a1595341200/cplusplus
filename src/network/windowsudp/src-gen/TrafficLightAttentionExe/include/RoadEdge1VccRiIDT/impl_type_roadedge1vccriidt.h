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
/**        \file  TrafficLightAttentionExe/include/RoadEdge1VccRiIDT/impl_type_roadedge1vccriidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_ROADEDGE1VCCRIIDT_IMPL_TYPE_ROADEDGE1VCCRIIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_ROADEDGE1VCCRIIDT_IMPL_TYPE_ROADEDGE1VCCRIIDT_H_

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
#include "Bool1VccIDT/impl_type_bool1vccidt.h"
#include "IsTransveribleIDT/impl_type_istransveribleidt.h"
#include "TrackStsREIDT/impl_type_trackstsreidt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace RoadEdge1VccRiIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RoadEdge1VccRiIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RoadEdge1VccRiIDT
 */
struct RoadEdge1VccRiIDT {
  using CamChks_generated_type = uint8IDT::uint8IDT;
  using CamCntr_generated_type = uint8IDT::uint8IDT;
  using C0_generated_type = float32IDT::float32IDT;
  using C1_generated_type = float32IDT::float32IDT;
  using C2_generated_type = float32IDT::float32IDT;
  using C0Variance_generated_type = float32IDT::float32IDT;
  using C1Variance_generated_type = float32IDT::float32IDT;
  using C2Variance_generated_type = float32IDT::float32IDT;
  using C3_generated_type = float32IDT::float32IDT;
  using C3Variance_generated_type = float32IDT::float32IDT;
  using CamObjId_generated_type = uint8IDT::uint8IDT;
  using LongDistanceToStart_generated_type = float32IDT::float32IDT;
  using LongDistanceToEnd_generated_type = float32IDT::float32IDT;
  using MdlQly_generated_type = float32IDT::float32IDT;
  using MeasQly_generated_type = float32IDT::float32IDT;
  using CamTimeStamp_generated_type = uint32IDT::uint32IDT;
  using TrackStsRE_generated_type = TrackStsREIDT::TrackStsREIDT;
  using Valid_generated_type = Bool1VccIDT::Bool1VccIDT;
  using ISPTimeStamp_generated_type = uint32IDT::uint32IDT;
  using IsTransverible_generated_type = IsTransveribleIDT::IsTransveribleIDT;

  CamChks_generated_type CamChks;
  CamCntr_generated_type CamCntr;
  C0_generated_type C0;
  C1_generated_type C1;
  C2_generated_type C2;
  C0Variance_generated_type C0Variance;
  C1Variance_generated_type C1Variance;
  C2Variance_generated_type C2Variance;
  C3_generated_type C3;
  C3Variance_generated_type C3Variance;
  CamObjId_generated_type CamObjId;
  LongDistanceToStart_generated_type LongDistanceToStart;
  LongDistanceToEnd_generated_type LongDistanceToEnd;
  MdlQly_generated_type MdlQly;
  MeasQly_generated_type MeasQly;
  CamTimeStamp_generated_type CamTimeStamp;
  TrackStsRE_generated_type TrackStsRE;
  Valid_generated_type Valid;
  ISPTimeStamp_generated_type ISPTimeStamp;
  IsTransverible_generated_type IsTransverible;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another RoadEdge1VccRiIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(RoadEdge1VccRiIDT const& l,
                       RoadEdge1VccRiIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.CamChks == r.CamChks)
                         && (l.CamCntr == r.CamCntr)
                         && compare_float(l.C0, r.C0)
                         && compare_float(l.C1, r.C1)
                         && compare_float(l.C2, r.C2)
                         && compare_float(l.C0Variance, r.C0Variance)
                         && compare_float(l.C1Variance, r.C1Variance)
                         && compare_float(l.C2Variance, r.C2Variance)
                         && compare_float(l.C3, r.C3)
                         && compare_float(l.C3Variance, r.C3Variance)
                         && (l.CamObjId == r.CamObjId)
                         && compare_float(l.LongDistanceToStart, r.LongDistanceToStart)
                         && compare_float(l.LongDistanceToEnd, r.LongDistanceToEnd)
                         && compare_float(l.MdlQly, r.MdlQly)
                         && compare_float(l.MeasQly, r.MeasQly)
                         && (l.CamTimeStamp == r.CamTimeStamp)
                         && (l.TrackStsRE == r.TrackStsRE)
                         && (l.Valid == r.Valid)
                         && (l.ISPTimeStamp == r.ISPTimeStamp)
                         && (l.IsTransverible == r.IsTransverible)
  );
}

/*!
 * \brief   Compare for inequality with another RoadEdge1VccRiIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(RoadEdge1VccRiIDT const& l,
                       RoadEdge1VccRiIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RoadEdge1VccRiIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_ROADEDGE1VCCRIIDT_IMPL_TYPE_ROADEDGE1VCCRIIDT_H_
