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
/**        \file  PerceptionExe/include/ADModCtrlInhbn1VccIDT/impl_type_admodctrlinhbn1vccidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_ADMODCTRLINHBN1VCCIDT_IMPL_TYPE_ADMODCTRLINHBN1VCCIDT_H_
#define PERCEPTIONEXE_INCLUDE_ADMODCTRLINHBN1VCCIDT_IMPL_TYPE_ADMODCTRLINHBN1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ADModCtrlInhbn1IDT/impl_type_admodctrlinhbn1idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace ADModCtrlInhbn1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ADModCtrlInhbn1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ADModCtrlInhbn1VccIDT
 */
struct ADModCtrlInhbn1VccIDT {
  using ADModCtrlInhbn_generated_type = ADModCtrlInhbn1IDT::ADModCtrlInhbn1IDT;
  using Chks_generated_type = uint8IDT::uint8IDT;
  using Cntr_generated_type = uint8IDT::uint8IDT;

  ADModCtrlInhbn_generated_type ADModCtrlInhbn;
  Chks_generated_type Chks;
  Cntr_generated_type Cntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ADModCtrlInhbn1VccIDT instance.
 */
inline bool operator==(ADModCtrlInhbn1VccIDT const& l,
                       ADModCtrlInhbn1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.ADModCtrlInhbn == r.ADModCtrlInhbn)
                         && (l.Chks == r.Chks)
                         && (l.Cntr == r.Cntr)
  );
}

/*!
 * \brief Compare for inequality with another ADModCtrlInhbn1VccIDT instance.
 */
inline bool operator!=(ADModCtrlInhbn1VccIDT const& l,
                       ADModCtrlInhbn1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ADModCtrlInhbn1VccIDT

#endif  // PERCEPTIONEXE_INCLUDE_ADMODCTRLINHBN1VCCIDT_IMPL_TYPE_ADMODCTRLINHBN1VCCIDT_H_
