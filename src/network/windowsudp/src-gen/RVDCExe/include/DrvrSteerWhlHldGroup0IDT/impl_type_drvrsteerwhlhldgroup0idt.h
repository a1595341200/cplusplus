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
/**        \file  RVDCExe/include/DrvrSteerWhlHldGroup0IDT/impl_type_drvrsteerwhlhldgroup0idt.h
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

#ifndef RVDCEXE_INCLUDE_DRVRSTEERWHLHLDGROUP0IDT_IMPL_TYPE_DRVRSTEERWHLHLDGROUP0IDT_H_
#define RVDCEXE_INCLUDE_DRVRSTEERWHLHLDGROUP0IDT_IMPL_TYPE_DRVRSTEERWHLHLDGROUP0IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "OnOffDetd1VccIDT/impl_type_onoffdetd1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace DrvrSteerWhlHldGroup0IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type DrvrSteerWhlHldGroup0IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DrvrSteerWhlHldGroup0IDT
 */
struct DrvrSteerWhlHldGroup0IDT {
  using DrvrSteerWhlHld_generated_type = OnOffDetd1VccIDT::OnOffDetd1VccIDT;
  using DrvrSteerWhlHldQly_generated_type = uint8IDT::uint8IDT;

  DrvrSteerWhlHld_generated_type DrvrSteerWhlHld;
  DrvrSteerWhlHldQly_generated_type DrvrSteerWhlHldQly;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another DrvrSteerWhlHldGroup0IDT instance.
 */
inline bool operator==(DrvrSteerWhlHldGroup0IDT const& l,
                       DrvrSteerWhlHldGroup0IDT const& r) noexcept {
  return (&l == &r) || ((l.DrvrSteerWhlHld == r.DrvrSteerWhlHld)
                         && (l.DrvrSteerWhlHldQly == r.DrvrSteerWhlHldQly)
  );
}

/*!
 * \brief Compare for inequality with another DrvrSteerWhlHldGroup0IDT instance.
 */
inline bool operator!=(DrvrSteerWhlHldGroup0IDT const& l,
                       DrvrSteerWhlHldGroup0IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DrvrSteerWhlHldGroup0IDT

#endif  // RVDCEXE_INCLUDE_DRVRSTEERWHLHLDGROUP0IDT_IMPL_TYPE_DRVRSTEERWHLHLDGROUP0IDT_H_
