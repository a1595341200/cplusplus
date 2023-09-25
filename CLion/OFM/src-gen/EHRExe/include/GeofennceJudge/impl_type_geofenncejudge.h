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
/**        \file  EHRExe/include/GeofennceJudge/impl_type_geofenncejudge.h
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

#ifndef EHREXE_INCLUDE_GEOFENNCEJUDGE_IMPL_TYPE_GEOFENNCEJUDGE_H_
#define EHREXE_INCLUDE_GEOFENNCEJUDGE_IMPL_TYPE_GEOFENNCEJUDGE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Geofence_judge_type/impl_type_geofence_judge_type.h"
#include "Geofennce_judge_status/impl_type_geofennce_judge_status.h"

namespace GeofennceJudge {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type GeofennceJudge.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GeofennceJudge
 */
struct GeofennceJudge {
  using _Geofennce_judge_status_ref_type = Geofennce_judge_status::Geofennce_judge_status;
  using _Geofence_judge_type_ref_type = Geofence_judge_type::Geofence_judge_type;

  _Geofennce_judge_status_ref_type Geofennce_judge_status_ref;
  _Geofence_judge_type_ref_type Geofence_judge_type_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another GeofennceJudge instance.
 */
inline bool operator==(GeofennceJudge const& l,
                       GeofennceJudge const& r) noexcept {
  return (&l == &r) || ((l.Geofennce_judge_status_ref == r.Geofennce_judge_status_ref)
                         && (l.Geofence_judge_type_ref == r.Geofence_judge_type_ref)
  );
}

/*!
 * \brief Compare for inequality with another GeofennceJudge instance.
 */
inline bool operator!=(GeofennceJudge const& l,
                       GeofennceJudge const& r) noexcept {
  return !(l == r);
}

}  // namespace GeofennceJudge

#endif  // EHREXE_INCLUDE_GEOFENNCEJUDGE_IMPL_TYPE_GEOFENNCEJUDGE_H_
