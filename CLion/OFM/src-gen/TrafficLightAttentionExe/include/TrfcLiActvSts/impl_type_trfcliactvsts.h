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
/**        \file  TrafficLightAttentionExe/include/TrfcLiActvSts/impl_type_trfcliactvsts.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIACTVSTS_IMPL_TYPE_TRFCLIACTVSTS_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIACTVSTS_IMPL_TYPE_TRFCLIACTVSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "TrfcLiActvStsIdPen/impl_type_trfcliactvstsidpen.h"
#include "TrfcLiActvStsOnOff1/impl_type_trfcliactvstsonoff1.h"

namespace TrfcLiActvSts {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TrfcLiActvSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcLiActvSts
 */
struct TrfcLiActvSts {
  using _TrfcLiActvStsOnOff1_ref_type = TrfcLiActvStsOnOff1::TrfcLiActvStsOnOff1;
  using _TrfcLiActvStsIdPen_ref_type = TrfcLiActvStsIdPen::TrfcLiActvStsIdPen;

  _TrfcLiActvStsOnOff1_ref_type TrfcLiActvStsOnOff1_ref;
  _TrfcLiActvStsIdPen_ref_type TrfcLiActvStsIdPen_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TrfcLiActvSts instance.
 */
inline bool operator==(TrfcLiActvSts const& l,
                       TrfcLiActvSts const& r) noexcept {
  return (&l == &r) || ((l.TrfcLiActvStsOnOff1_ref == r.TrfcLiActvStsOnOff1_ref)
                         && (l.TrfcLiActvStsIdPen_ref == r.TrfcLiActvStsIdPen_ref)
  );
}

/*!
 * \brief Compare for inequality with another TrfcLiActvSts instance.
 */
inline bool operator!=(TrfcLiActvSts const& l,
                       TrfcLiActvSts const& r) noexcept {
  return !(l == r);
}

}  // namespace TrfcLiActvSts

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLIACTVSTS_IMPL_TYPE_TRFCLIACTVSTS_H_
