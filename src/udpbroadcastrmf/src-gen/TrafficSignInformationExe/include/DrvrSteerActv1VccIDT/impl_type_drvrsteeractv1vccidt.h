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
/**        \file  TrafficSignInformationExe/include/DrvrSteerActv1VccIDT/impl_type_drvrsteeractv1vccidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_DRVRSTEERACTV1VCCIDT_IMPL_TYPE_DRVRSTEERACTV1VCCIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_DRVRSTEERACTV1VCCIDT_IMPL_TYPE_DRVRSTEERACTV1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "OnOff1VccIDT/impl_type_onoff1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace DrvrSteerActv1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type DrvrSteerActv1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DrvrSteerActv1VccIDT
 */
struct DrvrSteerActv1VccIDT {
  using DrvrSteerActv_generated_type = OnOff1VccIDT::OnOff1VccIDT;
  using Chks_generated_type = uint8IDT::uint8IDT;
  using Cntr_generated_type = uint8IDT::uint8IDT;

  DrvrSteerActv_generated_type DrvrSteerActv;
  Chks_generated_type Chks;
  Cntr_generated_type Cntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another DrvrSteerActv1VccIDT instance.
 */
inline bool operator==(DrvrSteerActv1VccIDT const& l,
                       DrvrSteerActv1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.DrvrSteerActv == r.DrvrSteerActv)
                         && (l.Chks == r.Chks)
                         && (l.Cntr == r.Cntr)
  );
}

/*!
 * \brief Compare for inequality with another DrvrSteerActv1VccIDT instance.
 */
inline bool operator!=(DrvrSteerActv1VccIDT const& l,
                       DrvrSteerActv1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DrvrSteerActv1VccIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_DRVRSTEERACTV1VCCIDT_IMPL_TYPE_DRVRSTEERACTV1VCCIDT_H_
