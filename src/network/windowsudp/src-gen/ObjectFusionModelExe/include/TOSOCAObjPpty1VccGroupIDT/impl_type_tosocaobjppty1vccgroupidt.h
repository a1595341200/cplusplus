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
/**        \file  ObjectFusionModelExe/include/TOSOCAObjPpty1VccGroupIDT/impl_type_tosocaobjppty1vccgroupidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_TOSOCAOBJPPTY1VCCGROUPIDT_IMPL_TYPE_TOSOCAOBJPPTY1VCCGROUPIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_TOSOCAOBJPPTY1VCCGROUPIDT_IMPL_TYPE_TOSOCAOBJPPTY1VCCGROUPIDT_H_

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
#include "Relbl4VccIDT/impl_type_relbl4vccidt.h"
#include "SnsrDataSts1VccIDT/impl_type_snsrdatasts1vccidt.h"
#include "singleIDT/impl_type_singleidt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace TOSOCAObjPpty1VccGroupIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TOSOCAObjPpty1VccGroupIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TOSOCAObjPpty1VccGroupIDT
 */
struct TOSOCAObjPpty1VccGroupIDT {
  using Idn_generated_type = uint8IDT::uint8IDT;
  using VisnId_generated_type = uint8IDT::uint8IDT;
  using Sts_generated_type = SnsrDataSts1VccIDT::SnsrDataSts1VccIDT;
  using CllsnMtgtnByBrkgPrimQly_generated_type = Relbl4VccIDT::Relbl4VccIDT;
  using PosnLgtStdDe_generated_type = singleIDT::singleIDT;
  using PosnLatStdDe_generated_type = singleIDT::singleIDT;
  using AgDirStdDe_generated_type = singleIDT::singleIDT;
  using SpdStdDe_generated_type = singleIDT::singleIDT;
  using AStdDe_generated_type = singleIDT::singleIDT;
  using FusnSrc_generated_type = uint8IDT::uint8IDT;
  using TimeStamp_generated_type = uint32IDT::uint32IDT;
  using Age_generated_type = uint32IDT::uint32IDT;
  using ExistConf_generated_type = singleIDT::singleIDT;
  using ClassConf_generated_type = singleIDT::singleIDT;

  Idn_generated_type Idn;
  VisnId_generated_type VisnId;
  Sts_generated_type Sts;
  CllsnMtgtnByBrkgPrimQly_generated_type CllsnMtgtnByBrkgPrimQly;
  PosnLgtStdDe_generated_type PosnLgtStdDe;
  PosnLatStdDe_generated_type PosnLatStdDe;
  AgDirStdDe_generated_type AgDirStdDe;
  SpdStdDe_generated_type SpdStdDe;
  AStdDe_generated_type AStdDe;
  FusnSrc_generated_type FusnSrc;
  TimeStamp_generated_type TimeStamp;
  Age_generated_type Age;
  ExistConf_generated_type ExistConf;
  ClassConf_generated_type ClassConf;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another TOSOCAObjPpty1VccGroupIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(TOSOCAObjPpty1VccGroupIDT const& l,
                       TOSOCAObjPpty1VccGroupIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.Idn == r.Idn)
                         && (l.VisnId == r.VisnId)
                         && (l.Sts == r.Sts)
                         && (l.CllsnMtgtnByBrkgPrimQly == r.CllsnMtgtnByBrkgPrimQly)
                         && compare_float(l.PosnLgtStdDe, r.PosnLgtStdDe)
                         && compare_float(l.PosnLatStdDe, r.PosnLatStdDe)
                         && compare_float(l.AgDirStdDe, r.AgDirStdDe)
                         && compare_float(l.SpdStdDe, r.SpdStdDe)
                         && compare_float(l.AStdDe, r.AStdDe)
                         && (l.FusnSrc == r.FusnSrc)
                         && (l.TimeStamp == r.TimeStamp)
                         && (l.Age == r.Age)
                         && compare_float(l.ExistConf, r.ExistConf)
                         && compare_float(l.ClassConf, r.ClassConf)
  );
}

/*!
 * \brief   Compare for inequality with another TOSOCAObjPpty1VccGroupIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(TOSOCAObjPpty1VccGroupIDT const& l,
                       TOSOCAObjPpty1VccGroupIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TOSOCAObjPpty1VccGroupIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_TOSOCAOBJPPTY1VCCGROUPIDT_IMPL_TYPE_TOSOCAOBJPPTY1VCCGROUPIDT_H_
