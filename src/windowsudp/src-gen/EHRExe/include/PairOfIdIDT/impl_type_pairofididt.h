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
/**        \file  EHRExe/include/PairOfIdIDT/impl_type_pairofididt.h
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

#ifndef EHREXE_INCLUDE_PAIROFIDIDT_IMPL_TYPE_PAIROFIDIDT_H_
#define EHREXE_INCLUDE_PAIROFIDIDT_IMPL_TYPE_PAIROFIDIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace PairOfIdIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type PairOfIdIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PairOfIdIDT
 */
struct PairOfIdIDT {
  using PathId_generated_type = uint32IDT::uint32IDT;
  using InstanceId_generated_type = uint32IDT::uint32IDT;
  using LaneNumber_generated_type = uint8IDT::uint8IDT;
  using LinearObjectId_generated_type = uint32IDT::uint32IDT;

  PathId_generated_type PathId;
  InstanceId_generated_type InstanceId;
  LaneNumber_generated_type LaneNumber;
  LinearObjectId_generated_type LinearObjectId;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another PairOfIdIDT instance.
 */
inline bool operator==(PairOfIdIDT const& l,
                       PairOfIdIDT const& r) noexcept {
  return (&l == &r) || ((l.PathId == r.PathId)
                         && (l.InstanceId == r.InstanceId)
                         && (l.LaneNumber == r.LaneNumber)
                         && (l.LinearObjectId == r.LinearObjectId)
  );
}

/*!
 * \brief Compare for inequality with another PairOfIdIDT instance.
 */
inline bool operator!=(PairOfIdIDT const& l,
                       PairOfIdIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace PairOfIdIDT

#endif  // EHREXE_INCLUDE_PAIROFIDIDT_IMPL_TYPE_PAIROFIDIDT_H_
