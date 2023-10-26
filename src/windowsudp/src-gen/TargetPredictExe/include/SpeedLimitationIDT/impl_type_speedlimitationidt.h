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
/**        \file  TargetPredictExe/include/SpeedLimitationIDT/impl_type_speedlimitationidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_SPEEDLIMITATIONIDT_IMPL_TYPE_SPEEDLIMITATIONIDT_H_
#define TARGETPREDICTEXE_INCLUDE_SPEEDLIMITATIONIDT_IMPL_TYPE_SPEEDLIMITATIONIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "uint8IDT/impl_type_uint8idt.h"

namespace SpeedLimitationIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type SpeedLimitationIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SpeedLimitationIDT
 */
struct SpeedLimitationIDT {
  using SpeedMin_generated_type = uint8IDT::uint8IDT;
  using SpeedMax_generated_type = uint8IDT::uint8IDT;

  SpeedMin_generated_type SpeedMin;
  SpeedMax_generated_type SpeedMax;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another SpeedLimitationIDT instance.
 */
inline bool operator==(SpeedLimitationIDT const& l,
                       SpeedLimitationIDT const& r) noexcept {
  return (&l == &r) || ((l.SpeedMin == r.SpeedMin)
                         && (l.SpeedMax == r.SpeedMax)
  );
}

/*!
 * \brief Compare for inequality with another SpeedLimitationIDT instance.
 */
inline bool operator!=(SpeedLimitationIDT const& l,
                       SpeedLimitationIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SpeedLimitationIDT

#endif  // TARGETPREDICTEXE_INCLUDE_SPEEDLIMITATIONIDT_IMPL_TYPE_SPEEDLIMITATIONIDT_H_
