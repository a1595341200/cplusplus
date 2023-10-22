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
/**        \file  PerceptionExe/include/StaticObj/impl_type_staticobj.h
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

#ifndef PERCEPTIONEXE_INCLUDE_STATICOBJ_IMPL_TYPE_STATICOBJ_H_
#define PERCEPTIONEXE_INCLUDE_STATICOBJ_IMPL_TYPE_STATICOBJ_H_

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
#include "DetectionConfidence/impl_type_detectionconfidence.h"
#include "DetectionHistory/impl_type_detectionhistory.h"
#include "HeightStaticObj/impl_type_heightstaticobj.h"
#include "IsVerified/impl_type_isverified.h"
#include "LatPosStaticObj/impl_type_latposstaticobj.h"
#include "LongPosStaticObj/impl_type_longposstaticobj.h"
#include "StdDevLatPos/impl_type_stddevlatpos.h"
#include "StdDevLongPos/impl_type_stddevlongpos.h"
#include "TrackStatus/impl_type_trackstatus.h"
#include "TypeStaticObj/impl_type_typestaticobj.h"
#include "VertPosStaticObj/impl_type_vertposstaticobj.h"
#include "WidthStaticObj/impl_type_widthstaticobj.h"

namespace StaticObj {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type StaticObj.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/StaticObj
 */
struct StaticObj {
  using _CamChks_ref_type = CamChks::CamChks;
  using _CamObjId_ref_type = CamObjId::CamObjId;
  using _CamCntr_ref_type = CamCntr::CamCntr;
  using _DetectionConfidence_ref_type = DetectionConfidence::DetectionConfidence;
  using _DetectionHistory_ref_type = DetectionHistory::DetectionHistory;
  using _HeightStaticObj_ref_type = HeightStaticObj::HeightStaticObj;
  using _LatPosStaticObj_ref_type = LatPosStaticObj::LatPosStaticObj;
  using _LongPosStaticObj_ref_type = LongPosStaticObj::LongPosStaticObj;
  using _TypeStaticObj_ref_type = TypeStaticObj::TypeStaticObj;
  using _StdDevLatPos_ref_type = StdDevLatPos::StdDevLatPos;
  using _StdDevLongPos_ref_type = StdDevLongPos::StdDevLongPos;
  using _CamTimeStamp_ref_type = CamTimeStamp::CamTimeStamp;
  using _TrackStatus_ref_type = TrackStatus::TrackStatus;
  using _VertPosStaticObj_ref_type = VertPosStaticObj::VertPosStaticObj;
  using _IsVerified_ref_type = IsVerified::IsVerified;
  using _WidthStaticObj_ref_type = WidthStaticObj::WidthStaticObj;

  _CamChks_ref_type CamChks_ref;
  _CamObjId_ref_type CamObjId_ref;
  _CamCntr_ref_type CamCntr_ref;
  _DetectionConfidence_ref_type DetectionConfidence_ref;
  _DetectionHistory_ref_type DetectionHistory_ref;
  _HeightStaticObj_ref_type HeightStaticObj_ref;
  _LatPosStaticObj_ref_type LatPosStaticObj_ref;
  _LongPosStaticObj_ref_type LongPosStaticObj_ref;
  _TypeStaticObj_ref_type TypeStaticObj_ref;
  _StdDevLatPos_ref_type StdDevLatPos_ref;
  _StdDevLongPos_ref_type StdDevLongPos_ref;
  _CamTimeStamp_ref_type CamTimeStamp_ref;
  _TrackStatus_ref_type TrackStatus_ref;
  _VertPosStaticObj_ref_type VertPosStaticObj_ref;
  _IsVerified_ref_type IsVerified_ref;
  _WidthStaticObj_ref_type WidthStaticObj_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another StaticObj instance.
 */
inline bool operator==(StaticObj const& l,
                       StaticObj const& r) noexcept {
  return (&l == &r) || ((l.CamChks_ref == r.CamChks_ref)
                         && (l.CamObjId_ref == r.CamObjId_ref)
                         && (l.CamCntr_ref == r.CamCntr_ref)
                         && (l.DetectionConfidence_ref == r.DetectionConfidence_ref)
                         && (l.DetectionHistory_ref == r.DetectionHistory_ref)
                         && (l.HeightStaticObj_ref == r.HeightStaticObj_ref)
                         && (l.LatPosStaticObj_ref == r.LatPosStaticObj_ref)
                         && (l.LongPosStaticObj_ref == r.LongPosStaticObj_ref)
                         && (l.TypeStaticObj_ref == r.TypeStaticObj_ref)
                         && (l.StdDevLatPos_ref == r.StdDevLatPos_ref)
                         && (l.StdDevLongPos_ref == r.StdDevLongPos_ref)
                         && (l.CamTimeStamp_ref == r.CamTimeStamp_ref)
                         && (l.TrackStatus_ref == r.TrackStatus_ref)
                         && (l.VertPosStaticObj_ref == r.VertPosStaticObj_ref)
                         && (l.IsVerified_ref == r.IsVerified_ref)
                         && (l.WidthStaticObj_ref == r.WidthStaticObj_ref)
  );
}

/*!
 * \brief Compare for inequality with another StaticObj instance.
 */
inline bool operator!=(StaticObj const& l,
                       StaticObj const& r) noexcept {
  return !(l == r);
}

}  // namespace StaticObj

#endif  // PERCEPTIONEXE_INCLUDE_STATICOBJ_IMPL_TYPE_STATICOBJ_H_
