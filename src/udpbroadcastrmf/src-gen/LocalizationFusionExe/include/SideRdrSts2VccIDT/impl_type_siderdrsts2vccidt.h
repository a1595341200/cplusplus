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
/**        \file  LocalizationFusionExe/include/SideRdrSts2VccIDT/impl_type_siderdrsts2vccidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_SIDERDRSTS2VCCIDT_IMPL_TYPE_SIDERDRSTS2VCCIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_SIDERDRSTS2VCCIDT_IMPL_TYPE_SIDERDRSTS2VCCIDT_H_

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
#include "MisAlign1VccIDT/impl_type_misalign1vccidt.h"
#include "SftyFlt1VccIDT/impl_type_sftyflt1vccidt.h"
#include "YesNo2VccIDT/impl_type_yesno2vccidt.h"
#include "singleIDT/impl_type_singleidt.h"
#include "uint16IDT/impl_type_uint16idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace SideRdrSts2VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type SideRdrSts2VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SideRdrSts2VccIDT
 */
struct SideRdrSts2VccIDT {
  using RdrStsFaulty_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsEna_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsMisAlign_generated_type = MisAlign1VccIDT::MisAlign1VccIDT;
  using RdrStsWhlSpdCmpFac_generated_type = singleIDT::singleIDT;
  using RdrStsChks_generated_type = uint8IDT::uint8IDT;
  using RdrStsCntr_generated_type = uint8IDT::uint8IDT;
  using RdrStsBlkdConf_generated_type = uint8IDT::uint8IDT;
  using RdrStsTiStamp_generated_type = uint32IDT::uint32IDT;
  using RdrNrDetn_generated_type = uint8IDT::uint8IDT;
  using RdrNrObj_generated_type = uint8IDT::uint8IDT;
  using RdrStsBlkd0bin_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsDstbc_generated_type = uint8IDT::uint8IDT;
  using RdrStsIfVersMajor_generated_type = uint8IDT::uint8IDT;
  using RdrStsIfVersMinor_generated_type = uint8IDT::uint8IDT;
  using RdrStsMissCom_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsTiStampStsGlbTiBas_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsTiStampStsSyncToGatewy_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsTiStampStsTiLeap_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsTiStampStsTiOut_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsLatency_generated_type = uint16IDT::uint16IDT;
  using RdrStsSftyFlt_generated_type = SftyFlt1VccIDT::SftyFlt1VccIDT;

  RdrStsFaulty_generated_type RdrStsFaulty;
  RdrStsEna_generated_type RdrStsEna;
  RdrStsMisAlign_generated_type RdrStsMisAlign;
  RdrStsWhlSpdCmpFac_generated_type RdrStsWhlSpdCmpFac;
  RdrStsChks_generated_type RdrStsChks;
  RdrStsCntr_generated_type RdrStsCntr;
  RdrStsBlkdConf_generated_type RdrStsBlkdConf;
  RdrStsTiStamp_generated_type RdrStsTiStamp;
  RdrNrDetn_generated_type RdrNrDetn;
  RdrNrObj_generated_type RdrNrObj;
  RdrStsBlkd0bin_generated_type RdrStsBlkd0bin;
  RdrStsDstbc_generated_type RdrStsDstbc;
  RdrStsIfVersMajor_generated_type RdrStsIfVersMajor;
  RdrStsIfVersMinor_generated_type RdrStsIfVersMinor;
  RdrStsMissCom_generated_type RdrStsMissCom;
  RdrStsTiStampStsGlbTiBas_generated_type RdrStsTiStampStsGlbTiBas;
  RdrStsTiStampStsSyncToGatewy_generated_type RdrStsTiStampStsSyncToGatewy;
  RdrStsTiStampStsTiLeap_generated_type RdrStsTiStampStsTiLeap;
  RdrStsTiStampStsTiOut_generated_type RdrStsTiStampStsTiOut;
  RdrStsLatency_generated_type RdrStsLatency;
  RdrStsSftyFlt_generated_type RdrStsSftyFlt;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another SideRdrSts2VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(SideRdrSts2VccIDT const& l,
                       SideRdrSts2VccIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.RdrStsFaulty == r.RdrStsFaulty)
                         && (l.RdrStsEna == r.RdrStsEna)
                         && (l.RdrStsMisAlign == r.RdrStsMisAlign)
                         && compare_float(l.RdrStsWhlSpdCmpFac, r.RdrStsWhlSpdCmpFac)
                         && (l.RdrStsChks == r.RdrStsChks)
                         && (l.RdrStsCntr == r.RdrStsCntr)
                         && (l.RdrStsBlkdConf == r.RdrStsBlkdConf)
                         && (l.RdrStsTiStamp == r.RdrStsTiStamp)
                         && (l.RdrNrDetn == r.RdrNrDetn)
                         && (l.RdrNrObj == r.RdrNrObj)
                         && (l.RdrStsBlkd0bin == r.RdrStsBlkd0bin)
                         && (l.RdrStsDstbc == r.RdrStsDstbc)
                         && (l.RdrStsIfVersMajor == r.RdrStsIfVersMajor)
                         && (l.RdrStsIfVersMinor == r.RdrStsIfVersMinor)
                         && (l.RdrStsMissCom == r.RdrStsMissCom)
                         && (l.RdrStsTiStampStsGlbTiBas == r.RdrStsTiStampStsGlbTiBas)
                         && (l.RdrStsTiStampStsSyncToGatewy == r.RdrStsTiStampStsSyncToGatewy)
                         && (l.RdrStsTiStampStsTiLeap == r.RdrStsTiStampStsTiLeap)
                         && (l.RdrStsTiStampStsTiOut == r.RdrStsTiStampStsTiOut)
                         && (l.RdrStsLatency == r.RdrStsLatency)
                         && (l.RdrStsSftyFlt == r.RdrStsSftyFlt)
  );
}

/*!
 * \brief   Compare for inequality with another SideRdrSts2VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(SideRdrSts2VccIDT const& l,
                       SideRdrSts2VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SideRdrSts2VccIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_SIDERDRSTS2VCCIDT_IMPL_TYPE_SIDERDRSTS2VCCIDT_H_
