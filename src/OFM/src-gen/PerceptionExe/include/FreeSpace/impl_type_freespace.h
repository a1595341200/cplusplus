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
/**        \file  PerceptionExe/include/FreeSpace/impl_type_freespace.h
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

#ifndef PERCEPTIONEXE_INCLUDE_FREESPACE_IMPL_TYPE_FREESPACE_H_
#define PERCEPTIONEXE_INCLUDE_FREESPACE_IMPL_TYPE_FREESPACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "BorderDst/impl_type_borderdst.h"
#include "BorderType/impl_type_bordertype.h"
#include "CamChks/impl_type_camchks.h"
#include "CamCntr/impl_type_camcntr.h"
#include "CamTimeStamp/impl_type_camtimestamp.h"
#include "Confidence/impl_type_confidence.h"
#include "HeightFreeSpace/impl_type_heightfreespace.h"
#include "IsVerified/impl_type_isverified.h"

namespace FreeSpace {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type FreeSpace.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FreeSpace
 */
struct FreeSpace {
  using _BorderDst_ref_type = BorderDst::BorderDst;
  using _BorderType_ref_type = BorderType::BorderType;
  using _Confidence_ref_type = Confidence::Confidence;
  using _HeightFreeSpace_ref_type = HeightFreeSpace::HeightFreeSpace;
  using _CamTimeStamp_ref_type = CamTimeStamp::CamTimeStamp;
  using _CamChks_ref_type = CamChks::CamChks;
  using _CamCntr_ref_type = CamCntr::CamCntr;
  using _IsVerified_ref_type = IsVerified::IsVerified;

  _BorderDst_ref_type BorderDst_ref;
  _BorderType_ref_type BorderType_ref;
  _Confidence_ref_type Confidence_ref;
  _HeightFreeSpace_ref_type HeightFreeSpace_ref;
  _CamTimeStamp_ref_type CamTimeStamp_ref;
  _CamChks_ref_type CamChks_ref;
  _CamCntr_ref_type CamCntr_ref;
  _IsVerified_ref_type IsVerified_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another FreeSpace instance.
 */
inline bool operator==(FreeSpace const& l,
                       FreeSpace const& r) noexcept {
  return (&l == &r) || ((l.BorderDst_ref == r.BorderDst_ref)
                         && (l.BorderType_ref == r.BorderType_ref)
                         && (l.Confidence_ref == r.Confidence_ref)
                         && (l.HeightFreeSpace_ref == r.HeightFreeSpace_ref)
                         && (l.CamTimeStamp_ref == r.CamTimeStamp_ref)
                         && (l.CamChks_ref == r.CamChks_ref)
                         && (l.CamCntr_ref == r.CamCntr_ref)
                         && (l.IsVerified_ref == r.IsVerified_ref)
  );
}

/*!
 * \brief Compare for inequality with another FreeSpace instance.
 */
inline bool operator!=(FreeSpace const& l,
                       FreeSpace const& r) noexcept {
  return !(l == r);
}

}  // namespace FreeSpace

#endif  // PERCEPTIONEXE_INCLUDE_FREESPACE_IMPL_TYPE_FREESPACE_H_
