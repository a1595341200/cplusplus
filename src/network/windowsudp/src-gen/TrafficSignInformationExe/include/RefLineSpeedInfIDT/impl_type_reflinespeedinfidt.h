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
/**        \file  TrafficSignInformationExe/include/RefLineSpeedInfIDT/impl_type_reflinespeedinfidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_REFLINESPEEDINFIDT_IMPL_TYPE_REFLINESPEEDINFIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_REFLINESPEEDINFIDT_IMPL_TYPE_REFLINESPEEDINFIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "uint8IDT/impl_type_uint8idt.h"

namespace RefLineSpeedInfIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RefLineSpeedInfIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RefLineSpeedInfIDT
 */
struct RefLineSpeedInfIDT {
  using SpeedLimitationMin_generated_type = uint8IDT::uint8IDT;
  using SpeedLimitationMax_generated_type = uint8IDT::uint8IDT;
  using PntIdx_generated_type = uint8IDT::uint8IDT;

  SpeedLimitationMin_generated_type SpeedLimitationMin;
  SpeedLimitationMax_generated_type SpeedLimitationMax;
  PntIdx_generated_type PntIdx;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RefLineSpeedInfIDT instance.
 */
inline bool operator==(RefLineSpeedInfIDT const& l,
                       RefLineSpeedInfIDT const& r) noexcept {
  return (&l == &r) || ((l.SpeedLimitationMin == r.SpeedLimitationMin)
                         && (l.SpeedLimitationMax == r.SpeedLimitationMax)
                         && (l.PntIdx == r.PntIdx)
  );
}

/*!
 * \brief Compare for inequality with another RefLineSpeedInfIDT instance.
 */
inline bool operator!=(RefLineSpeedInfIDT const& l,
                       RefLineSpeedInfIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RefLineSpeedInfIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_REFLINESPEEDINFIDT_IMPL_TYPE_REFLINESPEEDINFIDT_H_
