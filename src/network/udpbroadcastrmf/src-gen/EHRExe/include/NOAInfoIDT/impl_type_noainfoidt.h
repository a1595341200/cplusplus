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
/**        \file  EHRExe/include/NOAInfoIDT/impl_type_noainfoidt.h
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

#ifndef EHREXE_INCLUDE_NOAINFOIDT_IMPL_TYPE_NOAINFOIDT_H_
#define EHREXE_INCLUDE_NOAINFOIDT_IMPL_TYPE_NOAINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Array_PairOfIdIDT_Vector/impl_type_array_pairofididt_vector.h"
#include "MatchingStatusIDT/impl_type_matchingstatusidt.h"
#include "NavigationStatusIDT/impl_type_navigationstatusidt.h"
#include "SwitchLaneDirectionIDT/impl_type_switchlanedirectionidt.h"
#include "SwitchLaneReasonIDT/impl_type_switchlanereasonidt.h"
#include "uint16IDT/impl_type_uint16idt.h"
#include "uint32IDT/impl_type_uint32idt.h"

namespace NOAInfoIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type NOAInfoIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/NOAInfoIDT
 */
struct NOAInfoIDT {
  using NavigationStatus_generated_type = NavigationStatusIDT::NavigationStatusIDT;
  using MatchingStatus_generated_type = MatchingStatusIDT::MatchingStatusIDT;
  using RemainDistance_generated_type = uint32IDT::uint32IDT;
  using SwitchLaneDirection_generated_type = SwitchLaneDirectionIDT::SwitchLaneDirectionIDT;
  using SwitchLaneReason_generated_type = SwitchLaneReasonIDT::SwitchLaneReasonIDT;
  using SwitchLaneDistance_generated_type = uint16IDT::uint16IDT;
  using SwitchLaneEndDistance_generated_type = uint16IDT::uint16IDT;
  using Count_generated_type = uint16IDT::uint16IDT;
  using PairOfIds_generated_type = Array_PairOfIdIDT_Vector::Array_PairOfIdIDT_Vector;

  NavigationStatus_generated_type NavigationStatus;
  MatchingStatus_generated_type MatchingStatus;
  RemainDistance_generated_type RemainDistance;
  SwitchLaneDirection_generated_type SwitchLaneDirection;
  SwitchLaneReason_generated_type SwitchLaneReason;
  SwitchLaneDistance_generated_type SwitchLaneDistance;
  SwitchLaneEndDistance_generated_type SwitchLaneEndDistance;
  Count_generated_type Count;
  PairOfIds_generated_type PairOfIds;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another NOAInfoIDT instance.
 */
inline bool operator==(NOAInfoIDT const& l,
                       NOAInfoIDT const& r) noexcept {
  return (&l == &r) || ((l.NavigationStatus == r.NavigationStatus)
                         && (l.MatchingStatus == r.MatchingStatus)
                         && (l.RemainDistance == r.RemainDistance)
                         && (l.SwitchLaneDirection == r.SwitchLaneDirection)
                         && (l.SwitchLaneReason == r.SwitchLaneReason)
                         && (l.SwitchLaneDistance == r.SwitchLaneDistance)
                         && (l.SwitchLaneEndDistance == r.SwitchLaneEndDistance)
                         && (l.Count == r.Count)
                         && (l.PairOfIds == r.PairOfIds)
  );
}

/*!
 * \brief Compare for inequality with another NOAInfoIDT instance.
 */
inline bool operator!=(NOAInfoIDT const& l,
                       NOAInfoIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace NOAInfoIDT

#endif  // EHREXE_INCLUDE_NOAINFOIDT_IMPL_TYPE_NOAINFOIDT_H_
