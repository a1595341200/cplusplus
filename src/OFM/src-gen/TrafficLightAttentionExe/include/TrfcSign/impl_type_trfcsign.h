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
/**        \file  TrafficLightAttentionExe/include/TrfcSign/impl_type_trfcsign.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCSIGN_IMPL_TYPE_TRFCSIGN_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCSIGN_IMPL_TYPE_TRFCSIGN_H_

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
#include "Confidence/impl_type_confidence.h"
#include "HeightTrfcSign/impl_type_heighttrfcsign.h"
#include "LatPosTrfcSign/impl_type_latpostrfcsign.h"
#include "LatPosVariance/impl_type_latposvariance.h"
#include "LongPosTrfcSign/impl_type_longpostrfcsign.h"
#include "LongPosVariance/impl_type_longposvariance.h"
#include "MainType/impl_type_maintype.h"
#include "Shape/impl_type_shape.h"
#include "SuppSignType1/impl_type_suppsigntype1.h"
#include "SuppSignType2/impl_type_suppsigntype2.h"
#include "VertPos/impl_type_vertpos.h"
#include "VertPosVariance/impl_type_vertposvariance.h"
#include "WidthTrfcSign/impl_type_widthtrfcsign.h"

namespace TrfcSign {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type TrfcSign.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcSign
 */
struct TrfcSign {
  using _Confidence_ref_type = Confidence::Confidence;
  using _CamChks_ref_type = CamChks::CamChks;
  using _CamCntr_ref_type = CamCntr::CamCntr;
  using _CamObjId_ref_type = CamObjId::CamObjId;
  using _LatPosTrfcSign_ref_type = LatPosTrfcSign::LatPosTrfcSign;
  using _LatPosVariance_ref_type = LatPosVariance::LatPosVariance;
  using _LongPosTrfcSign_ref_type = LongPosTrfcSign::LongPosTrfcSign;
  using _LongPosVariance_ref_type = LongPosVariance::LongPosVariance;
  using _SuppSignType1_ref_type = SuppSignType1::SuppSignType1;
  using _SuppSignType2_ref_type = SuppSignType2::SuppSignType2;
  using _MainType_ref_type = MainType::MainType;
  using _Shape_ref_type = Shape::Shape;
  using _WidthTrfcSign_ref_type = WidthTrfcSign::WidthTrfcSign;
  using _HeightTrfcSign_ref_type = HeightTrfcSign::HeightTrfcSign;
  using _CamTimeStamp_ref_type = CamTimeStamp::CamTimeStamp;
  using _VertPos_ref_type = VertPos::VertPos;
  using _VertPosVariance_ref_type = VertPosVariance::VertPosVariance;

  _Confidence_ref_type Confidence_ref;
  _CamChks_ref_type CamChks_ref;
  _CamCntr_ref_type CamCntr_ref;
  _CamObjId_ref_type CamObjId_ref;
  _LatPosTrfcSign_ref_type LatPosTrfcSign_ref;
  _LatPosVariance_ref_type LatPosVariance_ref;
  _LongPosTrfcSign_ref_type LongPosTrfcSign_ref;
  _LongPosVariance_ref_type LongPosVariance_ref;
  _SuppSignType1_ref_type SuppSignType1_ref;
  _SuppSignType2_ref_type SuppSignType2_ref;
  _MainType_ref_type MainType_ref;
  _Shape_ref_type Shape_ref;
  _WidthTrfcSign_ref_type WidthTrfcSign_ref;
  _HeightTrfcSign_ref_type HeightTrfcSign_ref;
  _CamTimeStamp_ref_type CamTimeStamp_ref;
  _VertPos_ref_type VertPos_ref;
  _VertPosVariance_ref_type VertPosVariance_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another TrfcSign instance.
 */
inline bool operator==(TrfcSign const& l,
                       TrfcSign const& r) noexcept {
  return (&l == &r) || ((l.Confidence_ref == r.Confidence_ref)
                         && (l.CamChks_ref == r.CamChks_ref)
                         && (l.CamCntr_ref == r.CamCntr_ref)
                         && (l.CamObjId_ref == r.CamObjId_ref)
                         && (l.LatPosTrfcSign_ref == r.LatPosTrfcSign_ref)
                         && (l.LatPosVariance_ref == r.LatPosVariance_ref)
                         && (l.LongPosTrfcSign_ref == r.LongPosTrfcSign_ref)
                         && (l.LongPosVariance_ref == r.LongPosVariance_ref)
                         && (l.SuppSignType1_ref == r.SuppSignType1_ref)
                         && (l.SuppSignType2_ref == r.SuppSignType2_ref)
                         && (l.MainType_ref == r.MainType_ref)
                         && (l.Shape_ref == r.Shape_ref)
                         && (l.WidthTrfcSign_ref == r.WidthTrfcSign_ref)
                         && (l.HeightTrfcSign_ref == r.HeightTrfcSign_ref)
                         && (l.CamTimeStamp_ref == r.CamTimeStamp_ref)
                         && (l.VertPos_ref == r.VertPos_ref)
                         && (l.VertPosVariance_ref == r.VertPosVariance_ref)
  );
}

/*!
 * \brief Compare for inequality with another TrfcSign instance.
 */
inline bool operator!=(TrfcSign const& l,
                       TrfcSign const& r) noexcept {
  return !(l == r);
}

}  // namespace TrfcSign

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCSIGN_IMPL_TYPE_TRFCSIGN_H_
