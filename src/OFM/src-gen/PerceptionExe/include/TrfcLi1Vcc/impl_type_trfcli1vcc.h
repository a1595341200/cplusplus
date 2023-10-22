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
/**        \file  PerceptionExe/include/TrfcLi1Vcc/impl_type_trfcli1vcc.h
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

#ifndef PERCEPTIONEXE_INCLUDE_TRFCLI1VCC_IMPL_TYPE_TRFCLI1VCC_H_
#define PERCEPTIONEXE_INCLUDE_TRFCLI1VCC_IMPL_TYPE_TRFCLI1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CamChks/impl_type_camchks.h"
#include "CamCntr/impl_type_camcntr.h"
#include "CamObjId/impl_type_camobjid.h"
#include "CamTimeStamp/impl_type_camtimestamp.h"
#include "ColorTL/impl_type_colortl.h"
#include "Confidence/impl_type_confidence.h"
#include "LaneAssignmentTL/impl_type_laneassignmenttl.h"
#include "LatPosTL/impl_type_latpostl.h"
#include "LongPosTL/impl_type_longpostl.h"
#include "TypeTL/impl_type_typetl.h"
#include "VertPosTL/impl_type_vertpostl.h"

namespace TrfcLi1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TrfcLi1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcLi1Vcc
 */
struct TrfcLi1Vcc {
  using _Confidence_ref_type = Confidence::Confidence;
  using _CamObjId_ref_type = CamObjId::CamObjId;
  using _LaneAssignmentTL_ref_type = LaneAssignmentTL::LaneAssignmentTL;
  using _LatPosTL_ref_type = LatPosTL::LatPosTL;
  using _LongPosTL_ref_type = LongPosTL::LongPosTL;
  using _VertPosTL_ref_type = VertPosTL::VertPosTL;
  using _ColorTL_ref_type = ColorTL::ColorTL;
  using _CamTimeStamp_ref_type = CamTimeStamp::CamTimeStamp;
  using _CamChks_ref_type = CamChks::CamChks;
  using _CamCntr_ref_type = CamCntr::CamCntr;
  using _TypeTL_ref_type = TypeTL::TypeTL;

  _Confidence_ref_type Confidence_ref;
  _CamObjId_ref_type CamObjId_ref;
  _LaneAssignmentTL_ref_type LaneAssignmentTL_ref;
  _LatPosTL_ref_type LatPosTL_ref;
  _LongPosTL_ref_type LongPosTL_ref;
  _VertPosTL_ref_type VertPosTL_ref;
  _ColorTL_ref_type ColorTL_ref;
  _CamTimeStamp_ref_type CamTimeStamp_ref;
  _CamChks_ref_type CamChks_ref;
  _CamCntr_ref_type CamCntr_ref;
  _TypeTL_ref_type TypeTL_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TrfcLi1Vcc instance.
 */
inline bool operator==(TrfcLi1Vcc const& l,
                       TrfcLi1Vcc const& r) noexcept {
  return (&l == &r) || ((l.Confidence_ref == r.Confidence_ref)
                         && (l.CamObjId_ref == r.CamObjId_ref)
                         && (l.LaneAssignmentTL_ref == r.LaneAssignmentTL_ref)
                         && (l.LatPosTL_ref == r.LatPosTL_ref)
                         && (l.LongPosTL_ref == r.LongPosTL_ref)
                         && (l.VertPosTL_ref == r.VertPosTL_ref)
                         && (l.ColorTL_ref == r.ColorTL_ref)
                         && (l.CamTimeStamp_ref == r.CamTimeStamp_ref)
                         && (l.CamChks_ref == r.CamChks_ref)
                         && (l.CamCntr_ref == r.CamCntr_ref)
                         && (l.TypeTL_ref == r.TypeTL_ref)
  );
}

/*!
 * \brief Compare for inequality with another TrfcLi1Vcc instance.
 */
inline bool operator!=(TrfcLi1Vcc const& l,
                       TrfcLi1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace TrfcLi1Vcc

#endif  // PERCEPTIONEXE_INCLUDE_TRFCLI1VCC_IMPL_TYPE_TRFCLI1VCC_H_
