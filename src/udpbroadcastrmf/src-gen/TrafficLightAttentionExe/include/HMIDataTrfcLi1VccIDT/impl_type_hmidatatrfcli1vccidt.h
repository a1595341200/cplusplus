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
/**        \file  TrafficLightAttentionExe/include/HMIDataTrfcLi1VccIDT/impl_type_hmidatatrfcli1vccidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_HMIDATATRFCLI1VCCIDT_IMPL_TYPE_HMIDATATRFCLI1VCCIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_HMIDATATRFCLI1VCCIDT_IMPL_TYPE_HMIDATATRFCLI1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "ColorSts1IDT/impl_type_colorsts1idt.h"
#include "FctSts2VccIDT/impl_type_fctsts2vccidt.h"
#include "OnOff1IDT/impl_type_onoff1idt.h"
#include "TrfcLiChgIDT/impl_type_trfclichgidt.h"
#include "TrfcLiInfo1IDT/impl_type_trfcliinfo1idt.h"
#include "TrfcliInfoLeft1IDT/impl_type_trfcliinfoleft1idt.h"
#include "TrfcliInfoRight1IDT/impl_type_trfcliinforight1idt.h"

namespace HMIDataTrfcLi1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type HMIDataTrfcLi1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/HMIDataTrfcLi1VccIDT
 */
struct HMIDataTrfcLi1VccIDT {
  using TrfcliInfo_generated_type = TrfcLiInfo1IDT::TrfcLiInfo1IDT;
  using UturnLight_generated_type = ColorSts1IDT::ColorSts1IDT;
  using TrfcliInfoLeft_generated_type = TrfcliInfoLeft1IDT::TrfcliInfoLeft1IDT;
  using TrfcliInfoRight_generated_type = TrfcliInfoRight1IDT::TrfcliInfoRight1IDT;
  using TrfcLiWarnTypSts_generated_type = OnOff1IDT::OnOff1IDT;
  using TrfcLiSts_generated_type = FctSts2VccIDT::FctSts2VccIDT;
  using TrfcLiChg_generated_type = TrfcLiChgIDT::TrfcLiChgIDT;

  TrfcliInfo_generated_type TrfcliInfo;
  UturnLight_generated_type UturnLight;
  TrfcliInfoLeft_generated_type TrfcliInfoLeft;
  TrfcliInfoRight_generated_type TrfcliInfoRight;
  TrfcLiWarnTypSts_generated_type TrfcLiWarnTypSts;
  TrfcLiSts_generated_type TrfcLiSts;
  TrfcLiChg_generated_type TrfcLiChg;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another HMIDataTrfcLi1VccIDT instance.
 */
inline bool operator==(HMIDataTrfcLi1VccIDT const& l,
                       HMIDataTrfcLi1VccIDT const& r) noexcept {
  return (&l == &r) || ((l.TrfcliInfo == r.TrfcliInfo)
                         && (l.UturnLight == r.UturnLight)
                         && (l.TrfcliInfoLeft == r.TrfcliInfoLeft)
                         && (l.TrfcliInfoRight == r.TrfcliInfoRight)
                         && (l.TrfcLiWarnTypSts == r.TrfcLiWarnTypSts)
                         && (l.TrfcLiSts == r.TrfcLiSts)
                         && (l.TrfcLiChg == r.TrfcLiChg)
  );
}

/*!
 * \brief Compare for inequality with another HMIDataTrfcLi1VccIDT instance.
 */
inline bool operator!=(HMIDataTrfcLi1VccIDT const& l,
                       HMIDataTrfcLi1VccIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace HMIDataTrfcLi1VccIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_HMIDATATRFCLI1VCCIDT_IMPL_TYPE_HMIDATATRFCLI1VCCIDT_H_
