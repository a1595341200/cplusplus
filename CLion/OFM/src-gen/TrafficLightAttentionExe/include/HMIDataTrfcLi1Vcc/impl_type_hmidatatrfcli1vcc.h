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
/**        \file  TrafficLightAttentionExe/include/HMIDataTrfcLi1Vcc/impl_type_hmidatatrfcli1vcc.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_HMIDATATRFCLI1VCC_IMPL_TYPE_HMIDATATRFCLI1VCC_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_HMIDATATRFCLI1VCC_IMPL_TYPE_HMIDATATRFCLI1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "TrfcLiAttentionEna/impl_type_trfcliinfoleft.h"
#include "TrfcLiSts/impl_type_trfclists.h"
#include "TrfcLiWarnTypSts/impl_type_trfcliwarntypsts.h"
#include "TrfcliInfo/impl_type_trfcliinfo.h"
#include "TrfcliInfoRight/impl_type_trfcliinforight.h"
#include "UturnLight/impl_type_uturnlight.h"

namespace HMIDataTrfcLi1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type HMIDataTrfcLi1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/HMIDataTrfcLi1Vcc
 */
struct HMIDataTrfcLi1Vcc {
  using _TrfcliInfo_ref_type = TrfcliInfo::TrfcliInfo;
  using _UturnLight_ref_type = UturnLight::UturnLight;
  using _TrfcliInfoLeft_ref_type = TrfcLiAttentionEna::TrfcliInfoLeft;
  using _TrfcliInfoRight_ref_type = TrfcliInfoRight::TrfcliInfoRight;
  using _TrfcLiWarnTypSts_ref_type = TrfcLiWarnTypSts::TrfcLiWarnTypSts;
  using _TrfcLiSts_ref_type = TrfcLiSts::TrfcLiSts;

  _TrfcliInfo_ref_type TrfcliInfo_ref;
  _UturnLight_ref_type UturnLight_ref;
  _TrfcliInfoLeft_ref_type TrfcliInfoLeft_ref;
  _TrfcliInfoRight_ref_type TrfcliInfoRight_ref;
  _TrfcLiWarnTypSts_ref_type TrfcLiWarnTypSts_ref;
  _TrfcLiSts_ref_type TrfcLiSts_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another HMIDataTrfcLi1Vcc instance.
 */
inline bool operator==(HMIDataTrfcLi1Vcc const& l,
                       HMIDataTrfcLi1Vcc const& r) noexcept {
  return (&l == &r) || ((l.TrfcliInfo_ref == r.TrfcliInfo_ref)
                         && (l.UturnLight_ref == r.UturnLight_ref)
                         && (l.TrfcliInfoLeft_ref == r.TrfcliInfoLeft_ref)
                         && (l.TrfcliInfoRight_ref == r.TrfcliInfoRight_ref)
                         && (l.TrfcLiWarnTypSts_ref == r.TrfcLiWarnTypSts_ref)
                         && (l.TrfcLiSts_ref == r.TrfcLiSts_ref)
  );
}

/*!
 * \brief Compare for inequality with another HMIDataTrfcLi1Vcc instance.
 */
inline bool operator!=(HMIDataTrfcLi1Vcc const& l,
                       HMIDataTrfcLi1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace HMIDataTrfcLi1Vcc

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_HMIDATATRFCLI1VCC_IMPL_TYPE_HMIDATATRFCLI1VCC_H_
