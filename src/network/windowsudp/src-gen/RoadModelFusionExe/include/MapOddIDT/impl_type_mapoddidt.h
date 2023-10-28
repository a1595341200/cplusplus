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
/**        \file  RoadModelFusionExe/include/MapOddIDT/impl_type_mapoddidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_MAPODDIDT_IMPL_TYPE_MAPODDIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_MAPODDIDT_IMPL_TYPE_MAPODDIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "InOdd1IDT/impl_type_inodd1idt.h"
#include "OutODDReasonIDT/impl_type_outoddreasonidt.h"
#include "uint32IDT/impl_type_uint32idt.h"

namespace MapOddIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type MapOddIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/MapOddIDT
 */
struct MapOddIDT {
  using InOdd_generated_type = InOdd1IDT::InOdd1IDT;
  using DistanceToOdd_generated_type = uint32IDT::uint32IDT;
  using Reason_generated_type = OutODDReasonIDT::OutODDReasonIDT;

  InOdd_generated_type InOdd;
  DistanceToOdd_generated_type DistanceToOdd;
  Reason_generated_type Reason;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another MapOddIDT instance.
 */
inline bool operator==(MapOddIDT const& l,
                       MapOddIDT const& r) noexcept {
  return (&l == &r) || ((l.InOdd == r.InOdd)
                         && (l.DistanceToOdd == r.DistanceToOdd)
                         && (l.Reason == r.Reason)
  );
}

/*!
 * \brief Compare for inequality with another MapOddIDT instance.
 */
inline bool operator!=(MapOddIDT const& l,
                       MapOddIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace MapOddIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_MAPODDIDT_IMPL_TYPE_MAPODDIDT_H_
