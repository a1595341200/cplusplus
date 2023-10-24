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
/**        \file  PerceptionExe/include/Vin1VccIDT/impl_type_vin1vccidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_VIN1VCCIDT_IMPL_TYPE_VIN1VCCIDT_H_
#define PERCEPTIONEXE_INCLUDE_VIN1VCCIDT_IMPL_TYPE_VIN1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "uint8IDT/impl_type_uint8idt.h"

namespace Vin1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Vin1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Vin1VccIDT
 */
struct Vin1VccIDT {
  using BlockNr_generated_type = uint8IDT::uint8IDT;
  using VINSignalPos1_generated_type = uint8IDT::uint8IDT;
  using VINSignalPos2_generated_type = uint8IDT::uint8IDT;
  using VINSignalPos3_generated_type = uint8IDT::uint8IDT;
  using VINSignalPos4_generated_type = uint8IDT::uint8IDT;
  using VINSignalPos5_generated_type = uint8IDT::uint8IDT;
  using VINSignalPos6_generated_type = uint8IDT::uint8IDT;
  using VINSignalPos7_generated_type = uint8IDT::uint8IDT;

  BlockNr_generated_type BlockNr;
  VINSignalPos1_generated_type VINSignalPos1;
  VINSignalPos2_generated_type VINSignalPos2;
  VINSignalPos3_generated_type VINSignalPos3;
  VINSignalPos4_generated_type VINSignalPos4;
  VINSignalPos5_generated_type VINSignalPos5;
  VINSignalPos6_generated_type VINSignalPos6;
  VINSignalPos7_generated_type VINSignalPos7;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another Vin1VccIDT instance.
 */
inline bool operator==(Vin1VccIDT const& l,
                       Vin1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.BlockNr == r.BlockNr)
                         && (l.VINSignalPos1 == r.VINSignalPos1)
                         && (l.VINSignalPos2 == r.VINSignalPos2)
                         && (l.VINSignalPos3 == r.VINSignalPos3)
                         && (l.VINSignalPos4 == r.VINSignalPos4)
                         && (l.VINSignalPos5 == r.VINSignalPos5)
                         && (l.VINSignalPos6 == r.VINSignalPos6)
                         && (l.VINSignalPos7 == r.VINSignalPos7)
  );
}

/*!
 * \brief Compare for inequality with another Vin1VccIDT instance.
 */
inline bool operator!=(Vin1VccIDT const& l,
                       Vin1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace Vin1VccIDT

#endif  // PERCEPTIONEXE_INCLUDE_VIN1VCCIDT_IMPL_TYPE_VIN1VCCIDT_H_
