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
/**        \file  RVDCExe/include/RampInfo1VccIDT/impl_type_rampinfo1vccidt.h
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

#ifndef RVDCEXE_INCLUDE_RAMPINFO1VCCIDT_IMPL_TYPE_RAMPINFO1VCCIDT_H_
#define RVDCEXE_INCLUDE_RAMPINFO1VCCIDT_IMPL_TYPE_RAMPINFO1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Boolean1VccIDT/impl_type_boolean1vccidt.h"
#include "uint16IDT/impl_type_uint16idt.h"

namespace RampInfo1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RampInfo1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RampInfo1VccIDT
 */
struct RampInfo1VccIDT {
  using DstToRamp_generated_type = uint16IDT::uint16IDT;
  using EnterRamp_generated_type = Boolean1VccIDT::Boolean1VccIDT;

  DstToRamp_generated_type DstToRamp;
  EnterRamp_generated_type EnterRamp;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RampInfo1VccIDT instance.
 */
inline bool operator==(RampInfo1VccIDT const& l,
                       RampInfo1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.DstToRamp == r.DstToRamp)
                         && (l.EnterRamp == r.EnterRamp)
  );
}

/*!
 * \brief Compare for inequality with another RampInfo1VccIDT instance.
 */
inline bool operator!=(RampInfo1VccIDT const& l,
                       RampInfo1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RampInfo1VccIDT

#endif  // RVDCEXE_INCLUDE_RAMPINFO1VCCIDT_IMPL_TYPE_RAMPINFO1VCCIDT_H_
