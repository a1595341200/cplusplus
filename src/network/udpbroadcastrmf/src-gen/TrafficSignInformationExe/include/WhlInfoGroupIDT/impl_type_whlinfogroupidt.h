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
/**        \file  TrafficSignInformationExe/include/WhlInfoGroupIDT/impl_type_whlinfogroupidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_WHLINFOGROUPIDT_IMPL_TYPE_WHLINFOGROUPIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_WHLINFOGROUPIDT_IMPL_TYPE_WHLINFOGROUPIDT_H_

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
#include "WhlRotlDirStd1VccIDT/impl_type_whlrotldirstd1vccidt.h"
#include "float32IDT/impl_type_float32idt.h"

namespace WhlInfoGroupIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type WhlInfoGroupIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/WhlInfoGroupIDT
 */
struct WhlInfoGroupIDT {
  using WhlSpdCircumlFrntLe_generated_type = float32IDT::float32IDT;
  using WhlSpdCircumlFrntLeQf_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using WhlSpdCircumlFrntRi_generated_type = float32IDT::float32IDT;
  using WhlSpdCircumlFrntRiQf_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using WhlSpdCircumlReLe_generated_type = float32IDT::float32IDT;
  using WhlSpdCircumlReLeQf_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using WhlSpdCircumlReRi_generated_type = float32IDT::float32IDT;
  using WhlSpdCircumlReRiQf_generated_type = GenQf1VccIDT::GenQf1VccIDT;
  using WhlDirRotlFrntLe_generated_type = WhlRotlDirStd1VccIDT::WhlRotlDirStd1VccIDT;
  using WhlDirRotlFrntRi_generated_type = WhlRotlDirStd1VccIDT::WhlRotlDirStd1VccIDT;
  using WhlDirRotlReLe_generated_type = WhlRotlDirStd1VccIDT::WhlRotlDirStd1VccIDT;
  using WhlDirRotlReRi_generated_type = WhlRotlDirStd1VccIDT::WhlRotlDirStd1VccIDT;

  WhlSpdCircumlFrntLe_generated_type WhlSpdCircumlFrntLe;
  WhlSpdCircumlFrntLeQf_generated_type WhlSpdCircumlFrntLeQf;
  WhlSpdCircumlFrntRi_generated_type WhlSpdCircumlFrntRi;
  WhlSpdCircumlFrntRiQf_generated_type WhlSpdCircumlFrntRiQf;
  WhlSpdCircumlReLe_generated_type WhlSpdCircumlReLe;
  WhlSpdCircumlReLeQf_generated_type WhlSpdCircumlReLeQf;
  WhlSpdCircumlReRi_generated_type WhlSpdCircumlReRi;
  WhlSpdCircumlReRiQf_generated_type WhlSpdCircumlReRiQf;
  WhlDirRotlFrntLe_generated_type WhlDirRotlFrntLe;
  WhlDirRotlFrntRi_generated_type WhlDirRotlFrntRi;
  WhlDirRotlReLe_generated_type WhlDirRotlReLe;
  WhlDirRotlReRi_generated_type WhlDirRotlReRi;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another WhlInfoGroupIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(WhlInfoGroupIDT const& l,
                       WhlInfoGroupIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || (compare_float(l.WhlSpdCircumlFrntLe, r.WhlSpdCircumlFrntLe)
                         && (l.WhlSpdCircumlFrntLeQf == r.WhlSpdCircumlFrntLeQf)
                         && compare_float(l.WhlSpdCircumlFrntRi, r.WhlSpdCircumlFrntRi)
                         && (l.WhlSpdCircumlFrntRiQf == r.WhlSpdCircumlFrntRiQf)
                         && compare_float(l.WhlSpdCircumlReLe, r.WhlSpdCircumlReLe)
                         && (l.WhlSpdCircumlReLeQf == r.WhlSpdCircumlReLeQf)
                         && compare_float(l.WhlSpdCircumlReRi, r.WhlSpdCircumlReRi)
                         && (l.WhlSpdCircumlReRiQf == r.WhlSpdCircumlReRiQf)
                         && (l.WhlDirRotlFrntLe == r.WhlDirRotlFrntLe)
                         && (l.WhlDirRotlFrntRi == r.WhlDirRotlFrntRi)
                         && (l.WhlDirRotlReLe == r.WhlDirRotlReLe)
                         && (l.WhlDirRotlReRi == r.WhlDirRotlReRi)
  );
}

/*!
 * \brief   Compare for inequality with another WhlInfoGroupIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(WhlInfoGroupIDT const& l,
                       WhlInfoGroupIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace WhlInfoGroupIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_WHLINFOGROUPIDT_IMPL_TYPE_WHLINFOGROUPIDT_H_
