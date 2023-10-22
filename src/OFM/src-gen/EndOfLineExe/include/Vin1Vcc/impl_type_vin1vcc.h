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
/**        \file  EndOfLineExe/include/Vin1Vcc/impl_type_vin1vcc.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef ENDOFLINEEXE_INCLUDE_VIN1VCC_IMPL_TYPE_VIN1VCC_H_
#define ENDOFLINEEXE_INCLUDE_VIN1VCC_IMPL_TYPE_VIN1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "BlockNr/impl_type_blocknr.h"
#include "VINSignalPos1/impl_type_vinsignalpos1.h"
#include "VINSignalPos2/impl_type_vinsignalpos2.h"
#include "VINSignalPos3/impl_type_vinsignalpos3.h"
#include "VINSignalPos4/impl_type_vinsignalpos4.h"
#include "VINSignalPos5/impl_type_vinsignalpos5.h"
#include "VINSignalPos6/impl_type_vinsignalpos6.h"
#include "VINSignalPos7/impl_type_vinsignalpos7.h"

namespace Vin1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Vin1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Vin1Vcc
 */
struct Vin1Vcc {
  using _BlockNr_ref_type = BlockNr::BlockNr;
  using _VINSignalPos1_ref_type = VINSignalPos1::VINSignalPos1;
  using _VINSignalPos2_ref_type = VINSignalPos2::VINSignalPos2;
  using _VINSignalPos3_ref_type = VINSignalPos3::VINSignalPos3;
  using _VINSignalPos4_ref_type = VINSignalPos4::VINSignalPos4;
  using _VINSignalPos5_ref_type = VINSignalPos5::VINSignalPos5;
  using _VINSignalPos6_ref_type = VINSignalPos6::VINSignalPos6;
  using _VINSignalPos7_ref_type = VINSignalPos7::VINSignalPos7;

  _BlockNr_ref_type BlockNr_ref;
  _VINSignalPos1_ref_type VINSignalPos1_ref;
  _VINSignalPos2_ref_type VINSignalPos2_ref;
  _VINSignalPos3_ref_type VINSignalPos3_ref;
  _VINSignalPos4_ref_type VINSignalPos4_ref;
  _VINSignalPos5_ref_type VINSignalPos5_ref;
  _VINSignalPos6_ref_type VINSignalPos6_ref;
  _VINSignalPos7_ref_type VINSignalPos7_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another Vin1Vcc instance.
 */
inline bool operator==(Vin1Vcc const& l,
                       Vin1Vcc const& r) noexcept {
  return (&l == &r) || ((l.BlockNr_ref == r.BlockNr_ref)
                         && (l.VINSignalPos1_ref == r.VINSignalPos1_ref)
                         && (l.VINSignalPos2_ref == r.VINSignalPos2_ref)
                         && (l.VINSignalPos3_ref == r.VINSignalPos3_ref)
                         && (l.VINSignalPos4_ref == r.VINSignalPos4_ref)
                         && (l.VINSignalPos5_ref == r.VINSignalPos5_ref)
                         && (l.VINSignalPos6_ref == r.VINSignalPos6_ref)
                         && (l.VINSignalPos7_ref == r.VINSignalPos7_ref)
  );
}

/*!
 * \brief Compare for inequality with another Vin1Vcc instance.
 */
inline bool operator!=(Vin1Vcc const& l,
                       Vin1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace Vin1Vcc

#endif  // ENDOFLINEEXE_INCLUDE_VIN1VCC_IMPL_TYPE_VIN1VCC_H_
