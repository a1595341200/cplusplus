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
/**        \file  RoadModelFusionExe/include/ExtractedMapInf/impl_type_extractedmapinf.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDMAPINF_IMPL_TYPE_EXTRACTEDMAPINF_H_
#define ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDMAPINF_IMPL_TYPE_EXTRACTEDMAPINF_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Is_active/impl_type_is_active.h"
#include "Left_line_delimiter/impl_type_left_line_delimiter.h"
#include "Ramp/impl_type_ramp.h"
#include "Right_line_delimiter/impl_type_right_line_delimiter.h"
#include "Sequence_id/impl_type_sequence_id.h"
#include "SpecialSituation/impl_type_specialsituation.h"
#include "TimestampRMF/impl_type_timestamprmf.h"

namespace ExtractedMapInf {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type ExtractedMapInf.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ExtractedMapInf
 */
struct ExtractedMapInf {
  using _Is_active_ref_type = Is_active::Is_active;
  using _Sequence_id_ref_type = Sequence_id::Sequence_id;
  using _TimestampRMF_ref_type = TimestampRMF::TimestampRMF;
  using _Left_line_delimiter_ref_type = Left_line_delimiter::Left_line_delimiter;
  using _Right_line_delimiter_ref_type = Right_line_delimiter::Right_line_delimiter;
  using _SpecialSituation_ref_type = SpecialSituation::SpecialSituation;
  using _Ramp_ref_type = Ramp::Ramp;

  _Is_active_ref_type Is_active_ref;
  _Sequence_id_ref_type Sequence_id_ref;
  _TimestampRMF_ref_type TimestampRMF_ref;
  _Left_line_delimiter_ref_type Left_line_delimiter_ref;
  _Right_line_delimiter_ref_type Right_line_delimiter_ref;
  _SpecialSituation_ref_type SpecialSituation_ref;
  _Ramp_ref_type Ramp_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another ExtractedMapInf instance.
 */
inline bool operator==(ExtractedMapInf const& l,
                       ExtractedMapInf const& r) noexcept {
  return (&l == &r) || ((l.Is_active_ref == r.Is_active_ref)
                         && (l.Sequence_id_ref == r.Sequence_id_ref)
                         && (l.TimestampRMF_ref == r.TimestampRMF_ref)
                         && (l.Left_line_delimiter_ref == r.Left_line_delimiter_ref)
                         && (l.Right_line_delimiter_ref == r.Right_line_delimiter_ref)
                         && (l.SpecialSituation_ref == r.SpecialSituation_ref)
                         && (l.Ramp_ref == r.Ramp_ref)
  );
}

/*!
 * \brief Compare for inequality with another ExtractedMapInf instance.
 */
inline bool operator!=(ExtractedMapInf const& l,
                       ExtractedMapInf const& r) noexcept {
  return !(l == r);
}

}  // namespace ExtractedMapInf

#endif  // ROADMODELFUSIONEXE_INCLUDE_EXTRACTEDMAPINF_IMPL_TYPE_EXTRACTEDMAPINF_H_
