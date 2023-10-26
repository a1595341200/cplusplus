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
/**        \file  TrafficLightAttentionExe/include/TrsmParkLockdIDT/impl_type_trsmparklockdidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRSMPARKLOCKDIDT_IMPL_TYPE_TRSMPARKLOCKDIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRSMPARKLOCKDIDT_IMPL_TYPE_TRSMPARKLOCKDIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "TrsmParkLock1VccIDT/impl_type_trsmparklock1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace TrsmParkLockdIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TrsmParkLockdIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrsmParkLockdIDT
 */
struct TrsmParkLockdIDT {
  using TrsmParkLockd1_generated_type = TrsmParkLock1VccIDT::TrsmParkLock1VccIDT;
  using TrsmParkLockdChks_generated_type = uint8IDT::uint8IDT;
  using TrsmParkLockdChksCntr_generated_type = uint8IDT::uint8IDT;

  TrsmParkLockd1_generated_type TrsmParkLockd1;
  TrsmParkLockdChks_generated_type TrsmParkLockdChks;
  TrsmParkLockdChksCntr_generated_type TrsmParkLockdChksCntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TrsmParkLockdIDT instance.
 */
inline bool operator==(TrsmParkLockdIDT const& l,
                       TrsmParkLockdIDT const& r) noexcept {
  return (&l == &r) || ((l.TrsmParkLockd1 == r.TrsmParkLockd1)
                         && (l.TrsmParkLockdChks == r.TrsmParkLockdChks)
                         && (l.TrsmParkLockdChksCntr == r.TrsmParkLockdChksCntr)
  );
}

/*!
 * \brief Compare for inequality with another TrsmParkLockdIDT instance.
 */
inline bool operator!=(TrsmParkLockdIDT const& l,
                       TrsmParkLockdIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrsmParkLockdIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRSMPARKLOCKDIDT_IMPL_TYPE_TRSMPARKLOCKDIDT_H_
