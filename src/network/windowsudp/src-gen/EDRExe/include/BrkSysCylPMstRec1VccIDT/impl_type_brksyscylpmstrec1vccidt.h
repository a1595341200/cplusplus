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
/**        \file  EDRExe/include/BrkSysCylPMstRec1VccIDT/impl_type_brksyscylpmstrec1vccidt.h
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

#ifndef EDREXE_INCLUDE_BRKSYSCYLPMSTREC1VCCIDT_IMPL_TYPE_BRKSYSCYLPMSTREC1VCCIDT_H_
#define EDREXE_INCLUDE_BRKSYSCYLPMSTREC1VCCIDT_IMPL_TYPE_BRKSYSCYLPMSTREC1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cmath>
#include <cstdint>
#include <limits>
#include <map>
#include <string>
#include <vector>
#include "GenQf1VccIDT/impl_type_genqf1vccidt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace BrkSysCylPMstRec1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type BrkSysCylPMstRec1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/BrkSysCylPMstRec1VccIDT
 */
struct BrkSysCylPMstRec1VccIDT {
  using Act_generated_type = float32IDT::float32IDT;
  using ActQf_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using Tar_generated_type = float32IDT::float32IDT;
  using Virt_generated_type = float32IDT::float32IDT;
  using VirtQf_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using BrkSysCylPMstRecChks_generated_type = uint8IDT::uint8IDT;
  using BrkSysCylPMstRecCntr_generated_type = uint8IDT::uint8IDT;

  Act_generated_type Act;
  ActQf_generated_type ActQf;
  Tar_generated_type Tar;
  Virt_generated_type Virt;
  VirtQf_generated_type VirtQf;
  BrkSysCylPMstRecChks_generated_type BrkSysCylPMstRecChks;
  BrkSysCylPMstRecCntr_generated_type BrkSysCylPMstRecCntr;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another BrkSysCylPMstRec1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(BrkSysCylPMstRec1VccIDT const& l,
                       BrkSysCylPMstRec1VccIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.Act, r.Act)
                         && (l.ActQf == r.ActQf)
                         && compare_float(l.Tar, r.Tar)
                         && compare_float(l.Virt, r.Virt)
                         && (l.VirtQf == r.VirtQf)
                         && (l.BrkSysCylPMstRecChks == r.BrkSysCylPMstRecChks)
                         && (l.BrkSysCylPMstRecCntr == r.BrkSysCylPMstRecCntr)
  );
}

/*!
 * \brief   Compare for inequality with another BrkSysCylPMstRec1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(BrkSysCylPMstRec1VccIDT const& l,
                       BrkSysCylPMstRec1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace BrkSysCylPMstRec1VccIDT

#endif  // EDREXE_INCLUDE_BRKSYSCYLPMSTREC1VCCIDT_IMPL_TYPE_BRKSYSCYLPMSTREC1VCCIDT_H_
