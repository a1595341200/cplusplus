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
/**        \file  EDRExe/include/AsyObjForBigData1IDT/impl_type_asyobjforbigdata1idt.h
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

#ifndef EDREXE_INCLUDE_ASYOBJFORBIGDATA1IDT_IMPL_TYPE_ASYOBJFORBIGDATA1IDT_H_
#define EDREXE_INCLUDE_ASYOBJFORBIGDATA1IDT_IMPL_TYPE_ASYOBJFORBIGDATA1IDT_H_

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
#include "AsyObjType1VccIDT/impl_type_asyobjtype1vccidt.h"
#include "SnsrSrc1VccIDT/impl_type_snsrsrc1vccidt.h"
#include "float32IDT/impl_type_float32idt.h"

namespace AsyObjForBigData1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type AsyObjForBigData1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyObjForBigData1IDT
 */
struct AsyObjForBigData1IDT {
  using Type1Vcc_generated_type = AsyObjType1VccIDT::AsyObjType1VccIDT;
  using BigDataConfidence_generated_type = float32IDT::float32IDT;
  using TTC_generated_type = float32IDT::float32IDT;
  using RlvtLatDst_generated_type = float32IDT::float32IDT;
  using RlvtLgtDst_generated_type = float32IDT::float32IDT;
  using AbsLatSpd_generated_type = float32IDT::float32IDT;
  using SnsrSrcOfAbsLatSpd_generated_type = SnsrSrc1VccIDT::SnsrSrc1VccIDT;
  using AbsLgtSpd_generated_type = float32IDT::float32IDT;
  using SnsrSrcOfAbsLgtSpd_generated_type = SnsrSrc1VccIDT::SnsrSrc1VccIDT;

  Type1Vcc_generated_type Type1Vcc;
  BigDataConfidence_generated_type BigDataConfidence;
  TTC_generated_type TTC;
  RlvtLatDst_generated_type RlvtLatDst;
  RlvtLgtDst_generated_type RlvtLgtDst;
  AbsLatSpd_generated_type AbsLatSpd;
  SnsrSrcOfAbsLatSpd_generated_type SnsrSrcOfAbsLatSpd;
  AbsLgtSpd_generated_type AbsLgtSpd;
  SnsrSrcOfAbsLgtSpd_generated_type SnsrSrcOfAbsLgtSpd;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another AsyObjForBigData1IDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(AsyObjForBigData1IDT const& l,
                       AsyObjForBigData1IDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.Type1Vcc == r.Type1Vcc)
                         && compare_float(l.BigDataConfidence, r.BigDataConfidence)
                         && compare_float(l.TTC, r.TTC)
                         && compare_float(l.RlvtLatDst, r.RlvtLatDst)
                         && compare_float(l.RlvtLgtDst, r.RlvtLgtDst)
                         && compare_float(l.AbsLatSpd, r.AbsLatSpd)
                         && (l.SnsrSrcOfAbsLatSpd == r.SnsrSrcOfAbsLatSpd)
                         && compare_float(l.AbsLgtSpd, r.AbsLgtSpd)
                         && (l.SnsrSrcOfAbsLgtSpd == r.SnsrSrcOfAbsLgtSpd)
  );
}

/*!
 * \brief   Compare for inequality with another AsyObjForBigData1IDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(AsyObjForBigData1IDT const& l,
                       AsyObjForBigData1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AsyObjForBigData1IDT

#endif  // EDREXE_INCLUDE_ASYOBJFORBIGDATA1IDT_IMPL_TYPE_ASYOBJFORBIGDATA1IDT_H_
