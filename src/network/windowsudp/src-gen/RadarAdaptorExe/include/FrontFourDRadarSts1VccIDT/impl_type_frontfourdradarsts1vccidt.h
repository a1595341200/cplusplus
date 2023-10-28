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
/**        \file  RadarAdaptorExe/include/FrontFourDRadarSts1VccIDT/impl_type_frontfourdradarsts1vccidt.h
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

#ifndef RADARADAPTOREXE_INCLUDE_FRONTFOURDRADARSTS1VCCIDT_IMPL_TYPE_FRONTFOURDRADARSTS1VCCIDT_H_
#define RADARADAPTOREXE_INCLUDE_FRONTFOURDRADARSTS1VCCIDT_IMPL_TYPE_FRONTFOURDRADARSTS1VCCIDT_H_

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
#include "float32IDT/impl_type_float32idt.h"
#include "uint16IDT/impl_type_uint16idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace FrontFourDRadarSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FrontFourDRadarSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FrontFourDRadarSts1VccIDT
 */
struct FrontFourDRadarSts1VccIDT {
  using RdrStsRdrNrDetn_generated_type = uint8IDT::uint8IDT;
  using RdrStsRdrNrObj_generated_type = uint8IDT::uint8IDT;
  using RdrStsBlkd0bin_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsBlkdConf_generated_type = uint8IDT::uint8IDT;
  using RdrStsChks_generated_type = uint8IDT::uint8IDT;
  using RdrStsCntr_generated_type = uint8IDT::uint8IDT;
  using RdrStsDstbc_generated_type = uint8IDT::uint8IDT;
  using RdrStsEna_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsFaulty_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsIfVersMajor_generated_type = uint8IDT::uint8IDT;
  using RdrStsIfVersMinor_generated_type = uint8IDT::uint8IDT;
  using RdrStsLatency_generated_type = uint16IDT::uint16IDT;
  using RdrStsMisAlign_generated_type = MisAlign1VccIDT::MisAlign1VccIDT;
  using RdrStsMissCom_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsSftyFlt_generated_type = SftyFlt1VccIDT::SftyFlt1VccIDT;
  using FourDRdrStsTiStampH_generated_type = float32IDT::float32IDT;
  using FourDRdrStsTiStampL_generated_type = float32IDT::float32IDT;
  using RdrStsTiStampStsGlbTiBas_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsTiStampStsSyncToGatewy_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsTiStampStsTiLeap_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsTiStampStsTiOut_generated_type = YesNo2VccIDT::YesNo2VccIDT;
  using RdrStsWhlSpdCmpFac_generated_type = float32IDT::float32IDT;

  RdrStsRdrNrDetn_generated_type RdrStsRdrNrDetn;
  RdrStsRdrNrObj_generated_type RdrStsRdrNrObj;
  RdrStsBlkd0bin_generated_type RdrStsBlkd0bin;
  RdrStsBlkdConf_generated_type RdrStsBlkdConf;
  RdrStsChks_generated_type RdrStsChks;
  RdrStsCntr_generated_type RdrStsCntr;
  RdrStsDstbc_generated_type RdrStsDstbc;
  RdrStsEna_generated_type RdrStsEna;
  RdrStsFaulty_generated_type RdrStsFaulty;
  RdrStsIfVersMajor_generated_type RdrStsIfVersMajor;
  RdrStsIfVersMinor_generated_type RdrStsIfVersMinor;
  RdrStsLatency_generated_type RdrStsLatency;
  RdrStsMisAlign_generated_type RdrStsMisAlign;
  RdrStsMissCom_generated_type RdrStsMissCom;
  RdrStsSftyFlt_generated_type RdrStsSftyFlt;
  FourDRdrStsTiStampH_generated_type FourDRdrStsTiStampH;
  FourDRdrStsTiStampL_generated_type FourDRdrStsTiStampL;
  RdrStsTiStampStsGlbTiBas_generated_type RdrStsTiStampStsGlbTiBas;
  RdrStsTiStampStsSyncToGatewy_generated_type RdrStsTiStampStsSyncToGatewy;
  RdrStsTiStampStsTiLeap_generated_type RdrStsTiStampStsTiLeap;
  RdrStsTiStampStsTiOut_generated_type RdrStsTiStampStsTiOut;
  RdrStsWhlSpdCmpFac_generated_type RdrStsWhlSpdCmpFac;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another FrontFourDRadarSts1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(FrontFourDRadarSts1VccIDT const& l,
                       FrontFourDRadarSts1VccIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.RdrStsRdrNrDetn == r.RdrStsRdrNrDetn)
                         && (l.RdrStsRdrNrObj == r.RdrStsRdrNrObj)
                         && (l.RdrStsBlkd0bin == r.RdrStsBlkd0bin)
                         && (l.RdrStsBlkdConf == r.RdrStsBlkdConf)
                         && (l.RdrStsChks == r.RdrStsChks)
                         && (l.RdrStsCntr == r.RdrStsCntr)
                         && (l.RdrStsDstbc == r.RdrStsDstbc)
                         && (l.RdrStsEna == r.RdrStsEna)
                         && (l.RdrStsFaulty == r.RdrStsFaulty)
                         && (l.RdrStsIfVersMajor == r.RdrStsIfVersMajor)
                         && (l.RdrStsIfVersMinor == r.RdrStsIfVersMinor)
                         && (l.RdrStsLatency == r.RdrStsLatency)
                         && (l.RdrStsMisAlign == r.RdrStsMisAlign)
                         && (l.RdrStsMissCom == r.RdrStsMissCom)
                         && (l.RdrStsSftyFlt == r.RdrStsSftyFlt)
                         && compare_float(l.FourDRdrStsTiStampH, r.FourDRdrStsTiStampH)
                         && compare_float(l.FourDRdrStsTiStampL, r.FourDRdrStsTiStampL)
                         && (l.RdrStsTiStampStsGlbTiBas == r.RdrStsTiStampStsGlbTiBas)
                         && (l.RdrStsTiStampStsSyncToGatewy == r.RdrStsTiStampStsSyncToGatewy)
                         && (l.RdrStsTiStampStsTiLeap == r.RdrStsTiStampStsTiLeap)
                         && (l.RdrStsTiStampStsTiOut == r.RdrStsTiStampStsTiOut)
                         && compare_float(l.RdrStsWhlSpdCmpFac, r.RdrStsWhlSpdCmpFac)
  );
}

/*!
 * \brief   Compare for inequality with another FrontFourDRadarSts1VccIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(FrontFourDRadarSts1VccIDT const& l,
                       FrontFourDRadarSts1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace FrontFourDRadarSts1VccIDT

#endif  // RADARADAPTOREXE_INCLUDE_FRONTFOURDRADARSTS1VCCIDT_IMPL_TYPE_FRONTFOURDRADARSTS1VCCIDT_H_
