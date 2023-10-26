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
/**        \file  EDRExe/include/FricEstimnFromVehDyn1VccIDT/impl_type_fricestimnfromvehdyn1vccidt.h
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

#ifndef EDREXE_INCLUDE_FRICESTIMNFROMVEHDYN1VCCIDT_IMPL_TYPE_FRICESTIMNFROMVEHDYN1VCCIDT_H_
#define EDREXE_INCLUDE_FRICESTIMNFROMVEHDYN1VCCIDT_IMPL_TYPE_FRICESTIMNFROMVEHDYN1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Qly3VccIDT/impl_type_qly3vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace FricEstimnFromVehDyn1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FricEstimnFromVehDyn1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FricEstimnFromVehDyn1VccIDT
 */
struct FricEstimnFromVehDyn1VccIDT {
  using FricEstimnFromVehDyn_generated_type = uint8IDT::uint8IDT;
  using FricEstimnFromVehDynQly_generated_type = Qly3VccIDT::Qly3VccIDT;

  FricEstimnFromVehDyn_generated_type FricEstimnFromVehDyn;
  FricEstimnFromVehDynQly_generated_type FricEstimnFromVehDynQly;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FricEstimnFromVehDyn1VccIDT instance.
 */
inline bool operator==(FricEstimnFromVehDyn1VccIDT const& l,
                       FricEstimnFromVehDyn1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.FricEstimnFromVehDyn == r.FricEstimnFromVehDyn)
                         && (l.FricEstimnFromVehDynQly == r.FricEstimnFromVehDynQly)
  );
}

/*!
 * \brief Compare for inequality with another FricEstimnFromVehDyn1VccIDT instance.
 */
inline bool operator!=(FricEstimnFromVehDyn1VccIDT const& l,
                       FricEstimnFromVehDyn1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FricEstimnFromVehDyn1VccIDT

#endif  // EDREXE_INCLUDE_FRICESTIMNFROMVEHDYN1VCCIDT_IMPL_TYPE_FRICESTIMNFROMVEHDYN1VCCIDT_H_
