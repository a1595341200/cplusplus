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
/**        \file  TrafficLightAttentionExe/include/DateTi30_2IDT/impl_type_dateti30_2idt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_DATETI30_2IDT_IMPL_TYPE_DATETI30_2IDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_DATETI30_2IDT_IMPL_TYPE_DATETI30_2IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "NoYes1VccIDT/impl_type_noyes1vccidt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace DateTi30_2IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type DateTi30_2IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DateTi30_2IDT
 */
struct DateTi30_2IDT {
  using Yr1_generated_type = uint8IDT::uint8IDT;
  using Mth1_generated_type = uint8IDT::uint8IDT;
  using Day_generated_type = uint8IDT::uint8IDT;
  using Hr1_generated_type = uint8IDT::uint8IDT;
  using Mins1_generated_type = uint8IDT::uint8IDT;
  using Sec1_generated_type = uint8IDT::uint8IDT;
  using DataValid_generated_type = NoYes1VccIDT::NoYes1VccIDT;

  Yr1_generated_type Yr1;
  Mth1_generated_type Mth1;
  Day_generated_type Day;
  Hr1_generated_type Hr1;
  Mins1_generated_type Mins1;
  Sec1_generated_type Sec1;
  DataValid_generated_type DataValid;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another DateTi30_2IDT instance.
 */
inline bool operator==(DateTi30_2IDT const& l,
                       DateTi30_2IDT const& r) noexcept {
  return (&l == &r) || ((l.Yr1 == r.Yr1)
                         && (l.Mth1 == r.Mth1)
                         && (l.Day == r.Day)
                         && (l.Hr1 == r.Hr1)
                         && (l.Mins1 == r.Mins1)
                         && (l.Sec1 == r.Sec1)
                         && (l.DataValid == r.DataValid)
  );
}

/*!
 * \brief Compare for inequality with another DateTi30_2IDT instance.
 */
inline bool operator!=(DateTi30_2IDT const& l,
                       DateTi30_2IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DateTi30_2IDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_DATETI30_2IDT_IMPL_TYPE_DATETI30_2IDT_H_
