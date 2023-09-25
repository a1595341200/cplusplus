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
/**        \file  TrafficLightAttentionExe/include/FrontFourDRadarSts1Vcc/impl_type_frontfourdradarsts1vcc.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_FRONTFOURDRADARSTS1VCC_IMPL_TYPE_FRONTFOURDRADARSTS1VCC_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_FRONTFOURDRADARSTS1VCC_IMPL_TYPE_FRONTFOURDRADARSTS1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "RdrNrDetn/impl_type_rdrstsrdrnrdetn.h"
#include "RdrStsBlkd0bin/impl_type_rdrstsblkd0bin.h"
#include "RdrStsBlkdConf/impl_type_rdrstsblkdconf.h"
#include "RdrStsChks/impl_type_rdrstschks.h"
#include "RdrStsCntr/impl_type_rdrstscntr.h"
#include "RdrStsDstbc/impl_type_rdrstsdstbc.h"
#include "RdrStsEna/impl_type_rdrstsena.h"
#include "RdrStsFaulty/impl_type_rdrstsfaulty.h"
#include "RdrStsIfVersMajor/impl_type_rdrstsifversmajor.h"
#include "RdrStsIfVersMinor/impl_type_rdrstsifversminor.h"
#include "RdrStsLatency/impl_type_rdrstslatency.h"
#include "RdrStsMisAlign/impl_type_rdrstsmisalign.h"
#include "RdrStsMissCom/impl_type_rdrstsmisscom.h"
#include "RdrStsRdrNrObj/impl_type_rdrstsrdrnrobj.h"
#include "RdrStsSftyFlt/impl_type_rdrstssftyflt.h"
#include "RdrStsTiStampH/impl_type_rdrststistamph.h"
#include "RdrStsTiStampL/impl_type_rdrststistampl.h"
#include "RdrStsTiStampStsGlbTiBas/impl_type_rdrststistampstsglbtibas.h"
#include "RdrStsTiStampStsSyncToGatewy/impl_type_rdrststistampstssynctogatewy.h"
#include "RdrStsTiStampStsTiLeap/impl_type_rdrststistampststileap.h"
#include "RdrStsTiStampStsTiOut/impl_type_rdrststistampststiout.h"
#include "RdrStsWhlSpdCmpFac/impl_type_rdrstswhlspdcmpfac.h"

namespace FrontFourDRadarSts1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FrontFourDRadarSts1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FrontFourDRadarSts1Vcc
 */
struct FrontFourDRadarSts1Vcc {
  using _RdrStsRdrNrDetn_ref_type = RdrNrDetn::RdrStsRdrNrDetn;
  using _RdrStsRdrNrObj_ref_type = RdrStsRdrNrObj::RdrStsRdrNrObj;
  using _RdrStsBlkd0bin_ref_type = RdrStsBlkd0bin::RdrStsBlkd0bin;
  using _RdrStsBlkdConf_ref_type = RdrStsBlkdConf::RdrStsBlkdConf;
  using _RdrStsChks_ref_type = RdrStsChks::RdrStsChks;
  using _RdrStsCntr_ref_type = RdrStsCntr::RdrStsCntr;
  using _RdrStsDstbc_ref_type = RdrStsDstbc::RdrStsDstbc;
  using _RdrStsEna_ref_type = RdrStsEna::RdrStsEna;
  using _RdrStsFaulty_ref_type = RdrStsFaulty::RdrStsFaulty;
  using _RdrStsIfVersMajor_ref_type = RdrStsIfVersMajor::RdrStsIfVersMajor;
  using _RdrStsIfVersMinor_ref_type = RdrStsIfVersMinor::RdrStsIfVersMinor;
  using _RdrStsLatency_ref_type = RdrStsLatency::RdrStsLatency;
  using _RdrStsMisAlign_ref_type = RdrStsMisAlign::RdrStsMisAlign;
  using _RdrStsMissCom_ref_type = RdrStsMissCom::RdrStsMissCom;
  using _RdrStsSftyFlt_ref_type = RdrStsSftyFlt::RdrStsSftyFlt;
  using _RdrStsTiStampH_ref_type = RdrStsTiStampH::RdrStsTiStampH;
  using _RdrStsTiStampL_ref_type = RdrStsTiStampL::RdrStsTiStampL;
  using _RdrStsTiStampStsGlbTiBas_ref_type = RdrStsTiStampStsGlbTiBas::RdrStsTiStampStsGlbTiBas;
  using _RdrStsTiStampStsSyncToGatewy_ref_type = RdrStsTiStampStsSyncToGatewy::RdrStsTiStampStsSyncToGatewy;
  using _RdrStsTiStampStsTiLeap_ref_type = RdrStsTiStampStsTiLeap::RdrStsTiStampStsTiLeap;
  using _RdrStsTiStampStsTiOut_ref_type = RdrStsTiStampStsTiOut::RdrStsTiStampStsTiOut;
  using _RdrStsWhlSpdCmpFac_ref_type = RdrStsWhlSpdCmpFac::RdrStsWhlSpdCmpFac;

  _RdrStsRdrNrDetn_ref_type RdrStsRdrNrDetn_ref;
  _RdrStsRdrNrObj_ref_type RdrStsRdrNrObj_ref;
  _RdrStsBlkd0bin_ref_type RdrStsBlkd0bin_ref;
  _RdrStsBlkdConf_ref_type RdrStsBlkdConf_ref;
  _RdrStsChks_ref_type RdrStsChks_ref;
  _RdrStsCntr_ref_type RdrStsCntr_ref;
  _RdrStsDstbc_ref_type RdrStsDstbc_ref;
  _RdrStsEna_ref_type RdrStsEna_ref;
  _RdrStsFaulty_ref_type RdrStsFaulty_ref;
  _RdrStsIfVersMajor_ref_type RdrStsIfVersMajor_ref;
  _RdrStsIfVersMinor_ref_type RdrStsIfVersMinor_ref;
  _RdrStsLatency_ref_type RdrStsLatency_ref;
  _RdrStsMisAlign_ref_type RdrStsMisAlign_ref;
  _RdrStsMissCom_ref_type RdrStsMissCom_ref;
  _RdrStsSftyFlt_ref_type RdrStsSftyFlt_ref;
  _RdrStsTiStampH_ref_type RdrStsTiStampH_ref;
  _RdrStsTiStampL_ref_type RdrStsTiStampL_ref;
  _RdrStsTiStampStsGlbTiBas_ref_type RdrStsTiStampStsGlbTiBas_ref;
  _RdrStsTiStampStsSyncToGatewy_ref_type RdrStsTiStampStsSyncToGatewy_ref;
  _RdrStsTiStampStsTiLeap_ref_type RdrStsTiStampStsTiLeap_ref;
  _RdrStsTiStampStsTiOut_ref_type RdrStsTiStampStsTiOut_ref;
  _RdrStsWhlSpdCmpFac_ref_type RdrStsWhlSpdCmpFac_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FrontFourDRadarSts1Vcc instance.
 */
inline bool operator==(FrontFourDRadarSts1Vcc const& l,
                       FrontFourDRadarSts1Vcc const& r) noexcept {
  return (&l == &r) || ((l.RdrStsRdrNrDetn_ref == r.RdrStsRdrNrDetn_ref)
                         && (l.RdrStsRdrNrObj_ref == r.RdrStsRdrNrObj_ref)
                         && (l.RdrStsBlkd0bin_ref == r.RdrStsBlkd0bin_ref)
                         && (l.RdrStsBlkdConf_ref == r.RdrStsBlkdConf_ref)
                         && (l.RdrStsChks_ref == r.RdrStsChks_ref)
                         && (l.RdrStsCntr_ref == r.RdrStsCntr_ref)
                         && (l.RdrStsDstbc_ref == r.RdrStsDstbc_ref)
                         && (l.RdrStsEna_ref == r.RdrStsEna_ref)
                         && (l.RdrStsFaulty_ref == r.RdrStsFaulty_ref)
                         && (l.RdrStsIfVersMajor_ref == r.RdrStsIfVersMajor_ref)
                         && (l.RdrStsIfVersMinor_ref == r.RdrStsIfVersMinor_ref)
                         && (l.RdrStsLatency_ref == r.RdrStsLatency_ref)
                         && (l.RdrStsMisAlign_ref == r.RdrStsMisAlign_ref)
                         && (l.RdrStsMissCom_ref == r.RdrStsMissCom_ref)
                         && (l.RdrStsSftyFlt_ref == r.RdrStsSftyFlt_ref)
                         && (l.RdrStsTiStampH_ref == r.RdrStsTiStampH_ref)
                         && (l.RdrStsTiStampL_ref == r.RdrStsTiStampL_ref)
                         && (l.RdrStsTiStampStsGlbTiBas_ref == r.RdrStsTiStampStsGlbTiBas_ref)
                         && (l.RdrStsTiStampStsSyncToGatewy_ref == r.RdrStsTiStampStsSyncToGatewy_ref)
                         && (l.RdrStsTiStampStsTiLeap_ref == r.RdrStsTiStampStsTiLeap_ref)
                         && (l.RdrStsTiStampStsTiOut_ref == r.RdrStsTiStampStsTiOut_ref)
                         && (l.RdrStsWhlSpdCmpFac_ref == r.RdrStsWhlSpdCmpFac_ref)
  );
}

/*!
 * \brief Compare for inequality with another FrontFourDRadarSts1Vcc instance.
 */
inline bool operator!=(FrontFourDRadarSts1Vcc const& l,
                       FrontFourDRadarSts1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace FrontFourDRadarSts1Vcc

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_FRONTFOURDRADARSTS1VCC_IMPL_TYPE_FRONTFOURDRADARSTS1VCC_H_
