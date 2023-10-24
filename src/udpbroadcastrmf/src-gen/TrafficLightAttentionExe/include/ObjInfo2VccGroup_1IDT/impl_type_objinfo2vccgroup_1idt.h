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
/**        \file  TrafficLightAttentionExe/include/ObjInfo2VccGroup_1IDT/impl_type_objinfo2vccgroup_1idt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJINFO2VCCGROUP_1IDT_IMPL_TYPE_OBJINFO2VCCGROUP_1IDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJINFO2VCCGROUP_1IDT_IMPL_TYPE_OBJINFO2VCCGROUP_1IDT_H_

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
#include "IndcrTurn1VccIDT/impl_type_indcrturn1vccidt.h"
#include "LiSts1VccIDT/impl_type_lists1vccidt.h"
#include "ObjClassn3VccIDT/impl_type_objclassn3vccidt.h"
#include "ObjMtnPat1VccIDT/impl_type_objmtnpat1vccidt.h"
#include "ObjMtnPatHist1VccIDT/impl_type_objmtnpathist1vccidt.h"
#include "singleIDT/impl_type_singleidt.h"

namespace ObjInfo2VccGroup_1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ObjInfo2VccGroup_1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT
 */
struct ObjInfo2VccGroup_1IDT {
  using Typ_generated_type = ObjClassn3VccIDT::ObjClassn3VccIDT;
  using Width_generated_type = singleIDT::singleIDT;
  using Length_generated_type = singleIDT::singleIDT;
  using Hei_generated_type = singleIDT::singleIDT;
  using IndcrTurn_generated_type = IndcrTurn1VccIDT::IndcrTurn1VccIDT;
  using IndcrBrkLi_generated_type = LiSts1VccIDT::LiSts1VccIDT;
  using IndcrHzrdLi_generated_type = LiSts1VccIDT::LiSts1VccIDT;
  using MtnPat_generated_type = ObjMtnPat1VccIDT::ObjMtnPat1VccIDT;
  using MtnPatHist_generated_type = ObjMtnPatHist1VccIDT::ObjMtnPatHist1VccIDT;
  using DstLatFromMidOfLaneSelf_generated_type = singleIDT::singleIDT;

  Typ_generated_type Typ;
  Width_generated_type Width;
  Length_generated_type Length;
  Hei_generated_type Hei;
  IndcrTurn_generated_type IndcrTurn;
  IndcrBrkLi_generated_type IndcrBrkLi;
  IndcrHzrdLi_generated_type IndcrHzrdLi;
  MtnPat_generated_type MtnPat;
  MtnPatHist_generated_type MtnPatHist;
  DstLatFromMidOfLaneSelf_generated_type DstLatFromMidOfLaneSelf;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another ObjInfo2VccGroup_1IDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(ObjInfo2VccGroup_1IDT const& l,
                       ObjInfo2VccGroup_1IDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.Typ == r.Typ)
                         && compare_float(l.Width, r.Width)
                         && compare_float(l.Length, r.Length)
                         && compare_float(l.Hei, r.Hei)
                         && (l.IndcrTurn == r.IndcrTurn)
                         && (l.IndcrBrkLi == r.IndcrBrkLi)
                         && (l.IndcrHzrdLi == r.IndcrHzrdLi)
                         && (l.MtnPat == r.MtnPat)
                         && (l.MtnPatHist == r.MtnPatHist)
                         && compare_float(l.DstLatFromMidOfLaneSelf, r.DstLatFromMidOfLaneSelf)
  );
}

/*!
 * \brief   Compare for inequality with another ObjInfo2VccGroup_1IDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(ObjInfo2VccGroup_1IDT const& l,
                       ObjInfo2VccGroup_1IDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjInfo2VccGroup_1IDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJINFO2VCCGROUP_1IDT_IMPL_TYPE_OBJINFO2VCCGROUP_1IDT_H_
