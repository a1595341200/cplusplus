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
/**        \file  LocalizationFusionExe/include/RoadEdge1VccLe/impl_type_roadedge1vccle.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_ROADEDGE1VCCLE_IMPL_TYPE_ROADEDGE1VCCLE_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_ROADEDGE1VCCLE_IMPL_TYPE_ROADEDGE1VCCLE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "C0/impl_type_c0.h"
#include "C0Variance/impl_type_c0variance.h"
#include "C1/impl_type_c1.h"
#include "C1/impl_type_c2.h"
#include "C1Variance/impl_type_c1variance.h"
#include "C2Variance/impl_type_c2variance.h"
#include "C3/impl_type_c3.h"
#include "C3Variance/impl_type_c3variance.h"
#include "CamChks/impl_type_camchks.h"
#include "CamCntr/impl_type_camcntr.h"
#include "CamObjId/impl_type_camobjid.h"
#include "CamTimeStamp/impl_type_camtimestamp.h"
#include "LongDistanceToEnd/impl_type_longdistancetoend.h"
#include "LongDistanceToStart/impl_type_longdistancetostart.h"
#include "MdlQly/impl_type_mdlqly.h"
#include "MeasQly/impl_type_measqly.h"
#include "TrackStsRE/impl_type_trackstsre.h"
#include "Valid/impl_type_valid.h"

namespace RoadEdge1VccLe {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RoadEdge1VccLe.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RoadEdge1VccLe
 */
struct RoadEdge1VccLe {
  using _CamChks_ref_type = CamChks::CamChks;
  using _CamCntr_ref_type = CamCntr::CamCntr;
  using _C0_ref_type = C0::C0;
  using _C1_ref_type = C1::C1;
  using _C2_ref_type = C1::C2;
  using _C0Variance_ref_type = C0Variance::C0Variance;
  using _C1Variance_ref_type = C1Variance::C1Variance;
  using _C2Variance_ref_type = C2Variance::C2Variance;
  using _C3_ref_type = C3::C3;
  using _C3Variance_ref_type = C3Variance::C3Variance;
  using _CamObjId_ref_type = CamObjId::CamObjId;
  using _LongDistanceToStart_ref_type = LongDistanceToStart::LongDistanceToStart;
  using _LongDistanceToEnd_ref_type = LongDistanceToEnd::LongDistanceToEnd;
  using _MdlQly_ref_type = MdlQly::MdlQly;
  using _MeasQly_ref_type = MeasQly::MeasQly;
  using _CamTimeStamp_ref_type = CamTimeStamp::CamTimeStamp;
  using _TrackStsRE_ref_type = TrackStsRE::TrackStsRE;
  using _Valid_ref_type = Valid::Valid;

  _CamChks_ref_type CamChks_ref;
  _CamCntr_ref_type CamCntr_ref;
  _C0_ref_type C0_ref;
  _C1_ref_type C1_ref;
  _C2_ref_type C2_ref;
  _C0Variance_ref_type C0Variance_ref;
  _C1Variance_ref_type C1Variance_ref;
  _C2Variance_ref_type C2Variance_ref;
  _C3_ref_type C3_ref;
  _C3Variance_ref_type C3Variance_ref;
  _CamObjId_ref_type CamObjId_ref;
  _LongDistanceToStart_ref_type LongDistanceToStart_ref;
  _LongDistanceToEnd_ref_type LongDistanceToEnd_ref;
  _MdlQly_ref_type MdlQly_ref;
  _MeasQly_ref_type MeasQly_ref;
  _CamTimeStamp_ref_type CamTimeStamp_ref;
  _TrackStsRE_ref_type TrackStsRE_ref;
  _Valid_ref_type Valid_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RoadEdge1VccLe instance.
 */
inline bool operator==(RoadEdge1VccLe const& l,
                       RoadEdge1VccLe const& r) noexcept {
  return (&l == &r) || ((l.CamChks_ref == r.CamChks_ref)
                         && (l.CamCntr_ref == r.CamCntr_ref)
                         && (l.C0_ref == r.C0_ref)
                         && (l.C1_ref == r.C1_ref)
                         && (l.C2_ref == r.C2_ref)
                         && (l.C0Variance_ref == r.C0Variance_ref)
                         && (l.C1Variance_ref == r.C1Variance_ref)
                         && (l.C2Variance_ref == r.C2Variance_ref)
                         && (l.C3_ref == r.C3_ref)
                         && (l.C3Variance_ref == r.C3Variance_ref)
                         && (l.CamObjId_ref == r.CamObjId_ref)
                         && (l.LongDistanceToStart_ref == r.LongDistanceToStart_ref)
                         && (l.LongDistanceToEnd_ref == r.LongDistanceToEnd_ref)
                         && (l.MdlQly_ref == r.MdlQly_ref)
                         && (l.MeasQly_ref == r.MeasQly_ref)
                         && (l.CamTimeStamp_ref == r.CamTimeStamp_ref)
                         && (l.TrackStsRE_ref == r.TrackStsRE_ref)
                         && (l.Valid_ref == r.Valid_ref)
  );
}

/*!
 * \brief Compare for inequality with another RoadEdge1VccLe instance.
 */
inline bool operator!=(RoadEdge1VccLe const& l,
                       RoadEdge1VccLe const& r) noexcept {
  return !(l == r);
}

}  // namespace RoadEdge1VccLe

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_ROADEDGE1VCCLE_IMPL_TYPE_ROADEDGE1VCCLE_H_
