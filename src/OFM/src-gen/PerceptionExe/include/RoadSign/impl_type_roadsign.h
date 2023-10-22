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
/**        \file  PerceptionExe/include/RoadSign/impl_type_roadsign.h
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

#ifndef PERCEPTIONEXE_INCLUDE_ROADSIGN_IMPL_TYPE_ROADSIGN_H_
#define PERCEPTIONEXE_INCLUDE_ROADSIGN_IMPL_TYPE_ROADSIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "CamObjId/impl_type_camobjid.h"
#include "CamTimeStamp/impl_type_camtimestamp.h"
#include "Confidence/impl_type_confidence.h"
#include "LaneRoadSign/impl_type_laneroadsign.h"
#include "LatPosRoadSign/impl_type_latposroadsign.h"
#include "LongPosRoadSign/impl_type_longposroadsign.h"
#include "TypeRoadSign/impl_type_typeroadsign.h"

namespace RoadSign {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type RoadSign.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RoadSign
 */
struct RoadSign {
  using _Confidence_ref_type = Confidence::Confidence;
  using _CamObjId_ref_type = CamObjId::CamObjId;
  using _LaneRoadSign_ref_type = LaneRoadSign::LaneRoadSign;
  using _LatPosRoadSign_ref_type = LatPosRoadSign::LatPosRoadSign;
  using _LongPosRoadSign_ref_type = LongPosRoadSign::LongPosRoadSign;
  using _CamTimeStamp_ref_type = CamTimeStamp::CamTimeStamp;
  using _TypeRoadSign_ref_type = TypeRoadSign::TypeRoadSign;

  _Confidence_ref_type Confidence_ref;
  _CamObjId_ref_type CamObjId_ref;
  _LaneRoadSign_ref_type LaneRoadSign_ref;
  _LatPosRoadSign_ref_type LatPosRoadSign_ref;
  _LongPosRoadSign_ref_type LongPosRoadSign_ref;
  _CamTimeStamp_ref_type CamTimeStamp_ref;
  _TypeRoadSign_ref_type TypeRoadSign_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another RoadSign instance.
 */
inline bool operator==(RoadSign const& l,
                       RoadSign const& r) noexcept {
  return (&l == &r) || ((l.Confidence_ref == r.Confidence_ref)
                         && (l.CamObjId_ref == r.CamObjId_ref)
                         && (l.LaneRoadSign_ref == r.LaneRoadSign_ref)
                         && (l.LatPosRoadSign_ref == r.LatPosRoadSign_ref)
                         && (l.LongPosRoadSign_ref == r.LongPosRoadSign_ref)
                         && (l.CamTimeStamp_ref == r.CamTimeStamp_ref)
                         && (l.TypeRoadSign_ref == r.TypeRoadSign_ref)
  );
}

/*!
 * \brief Compare for inequality with another RoadSign instance.
 */
inline bool operator!=(RoadSign const& l,
                       RoadSign const& r) noexcept {
  return !(l == r);
}

}  // namespace RoadSign

#endif  // PERCEPTIONEXE_INCLUDE_ROADSIGN_IMPL_TYPE_ROADSIGN_H_
