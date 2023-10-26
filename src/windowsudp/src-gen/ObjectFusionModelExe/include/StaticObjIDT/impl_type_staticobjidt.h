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
/**        \file  ObjectFusionModelExe/include/StaticObjIDT/impl_type_staticobjidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_STATICOBJIDT_IMPL_TYPE_STATICOBJIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_STATICOBJIDT_IMPL_TYPE_STATICOBJIDT_H_

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
#include "StaticObjTypeIDT/impl_type_staticobjtypeidt.h"
#include "TrackStatusIDT/impl_type_trackstatusidt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace StaticObjIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type StaticObjIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/StaticObjIDT
 */
struct StaticObjIDT {
  using CamChks_generated_type = uint8IDT::uint8IDT;
  using CamObjId_generated_type = uint8IDT::uint8IDT;
  using CamCntr_generated_type = uint8IDT::uint8IDT;
  using DetectionConfidence_generated_type = float32IDT::float32IDT;
  using DetectionHistory_generated_type = uint8IDT::uint8IDT;
  using StaticObjHeight_generated_type = float32IDT::float32IDT;
  using StaticObjLatPos_generated_type = float32IDT::float32IDT;
  using StaticObjLongPos_generated_type = float32IDT::float32IDT;
  using StaticObjType_generated_type = StaticObjTypeIDT::StaticObjTypeIDT;
  using StdDevLatPos_generated_type = float32IDT::float32IDT;
  using StdDevLongPos_generated_type = float32IDT::float32IDT;
  using CamTimeStamp_generated_type = uint32IDT::uint32IDT;
  using TrackStatus_generated_type = TrackStatusIDT::TrackStatusIDT;
  using StaticObjVertPos_generated_type = float32IDT::float32IDT;
  using IsVerified_generated_type = Bool1VccIDT::Bool1VccIDT;
  using StaticObjWidth_generated_type = float32IDT::float32IDT;
  using ISPTimeStamp_generated_type = uint32IDT::uint32IDT;

  CamChks_generated_type CamChks;
  CamObjId_generated_type CamObjId;
  CamCntr_generated_type CamCntr;
  DetectionConfidence_generated_type DetectionConfidence;
  DetectionHistory_generated_type DetectionHistory;
  StaticObjHeight_generated_type StaticObjHeight;
  StaticObjLatPos_generated_type StaticObjLatPos;
  StaticObjLongPos_generated_type StaticObjLongPos;
  StaticObjType_generated_type StaticObjType;
  StdDevLatPos_generated_type StdDevLatPos;
  StdDevLongPos_generated_type StdDevLongPos;
  CamTimeStamp_generated_type CamTimeStamp;
  TrackStatus_generated_type TrackStatus;
  StaticObjVertPos_generated_type StaticObjVertPos;
  IsVerified_generated_type IsVerified;
  StaticObjWidth_generated_type StaticObjWidth;
  ISPTimeStamp_generated_type ISPTimeStamp;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another StaticObjIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(StaticObjIDT const& l,
                       StaticObjIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.CamChks == r.CamChks)
                         && (l.CamObjId == r.CamObjId)
                         && (l.CamCntr == r.CamCntr)
                         && compare_float(l.DetectionConfidence, r.DetectionConfidence)
                         && (l.DetectionHistory == r.DetectionHistory)
                         && compare_float(l.StaticObjHeight, r.StaticObjHeight)
                         && compare_float(l.StaticObjLatPos, r.StaticObjLatPos)
                         && compare_float(l.StaticObjLongPos, r.StaticObjLongPos)
                         && (l.StaticObjType == r.StaticObjType)
                         && compare_float(l.StdDevLatPos, r.StdDevLatPos)
                         && compare_float(l.StdDevLongPos, r.StdDevLongPos)
                         && (l.CamTimeStamp == r.CamTimeStamp)
                         && (l.TrackStatus == r.TrackStatus)
                         && compare_float(l.StaticObjVertPos, r.StaticObjVertPos)
                         && (l.IsVerified == r.IsVerified)
                         && compare_float(l.StaticObjWidth, r.StaticObjWidth)
                         && (l.ISPTimeStamp == r.ISPTimeStamp)
  );
}

/*!
 * \brief   Compare for inequality with another StaticObjIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(StaticObjIDT const& l,
                       StaticObjIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace StaticObjIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_STATICOBJIDT_IMPL_TYPE_STATICOBJIDT_H_
