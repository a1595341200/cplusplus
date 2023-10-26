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
/**        \file  LocalizationFusionExe/include/DrvrACCrsSetSpdReq1VccIDT/impl_type_drvraccrssetspdreq1vccidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_DRVRACCRSSETSPDREQ1VCCIDT_IMPL_TYPE_DRVRACCRSSETSPDREQ1VCCIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_DRVRACCRSSETSPDREQ1VCCIDT_IMPL_TYPE_DRVRACCRSSETSPDREQ1VCCIDT_H_

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
#include "DrvrCrsAModReq1VccIDT/impl_type_drvrcrsamodreq1vccidt.h"
#include "singleIDT/impl_type_singleidt.h"

namespace DrvrACCrsSetSpdReq1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type DrvrACCrsSetSpdReq1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DrvrACCrsSetSpdReq1VccIDT
 */
struct DrvrACCrsSetSpdReq1VccIDT {
  using DrvrACCrsCtrlSetInSpdReq_generated_type = singleIDT::singleIDT;
  using DrvrCrsSetSpdReq_generated_type = DrvrCrsAModReq1VccIDT::DrvrCrsAModReq1VccIDT;
  using SetSpdForCrsCtrlFctActive_generated_type = singleIDT::singleIDT;

  DrvrACCrsCtrlSetInSpdReq_generated_type DrvrACCrsCtrlSetInSpdReq;
  DrvrCrsSetSpdReq_generated_type DrvrCrsSetSpdReq;
  SetSpdForCrsCtrlFctActive_generated_type SetSpdForCrsCtrlFctActive;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another DrvrACCrsSetSpdReq1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(DrvrACCrsSetSpdReq1VccIDT const& l,
                       DrvrACCrsSetSpdReq1VccIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.DrvrACCrsCtrlSetInSpdReq, r.DrvrACCrsCtrlSetInSpdReq)
                         && (l.DrvrCrsSetSpdReq == r.DrvrCrsSetSpdReq)
                         && compare_float(l.SetSpdForCrsCtrlFctActive, r.SetSpdForCrsCtrlFctActive)
  );
}

/*!
 * \brief   Compare for inequality with another DrvrACCrsSetSpdReq1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(DrvrACCrsSetSpdReq1VccIDT const& l,
                       DrvrACCrsSetSpdReq1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DrvrACCrsSetSpdReq1VccIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_DRVRACCRSSETSPDREQ1VCCIDT_IMPL_TYPE_DRVRACCRSSETSPDREQ1VCCIDT_H_
