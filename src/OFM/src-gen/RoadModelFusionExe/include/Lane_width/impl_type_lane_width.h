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
/**        \file  RoadModelFusionExe/include/Lane_width/impl_type_lane_width.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LANE_WIDTH_IMPL_TYPE_LANE_WIDTH_H_
#define ROADMODELFUSIONEXE_INCLUDE_LANE_WIDTH_IMPL_TYPE_LANE_WIDTH_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Lane_width_Max/impl_type_lane_width_max.h"
#include "Lane_width_Min/impl_type_lane_width_min.h"

namespace Lane_width {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type Lane_width.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Lane_width
 */
struct Lane_width {
  using _Lane_width_Max_ref_type = Lane_width_Max::Lane_width_Max;
  using _Lane_width_Min_ref_type = Lane_width_Min::Lane_width_Min;

  _Lane_width_Max_ref_type Lane_width_Max_ref;
  _Lane_width_Min_ref_type Lane_width_Min_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another Lane_width instance.
 */
inline bool operator==(Lane_width const& l,
                       Lane_width const& r) noexcept {
  return (&l == &r) || ((l.Lane_width_Max_ref == r.Lane_width_Max_ref)
                         && (l.Lane_width_Min_ref == r.Lane_width_Min_ref)
  );
}

/*!
 * \brief Compare for inequality with another Lane_width instance.
 */
inline bool operator!=(Lane_width const& l,
                       Lane_width const& r) noexcept {
  return !(l == r);
}

}  // namespace Lane_width

#endif  // ROADMODELFUSIONEXE_INCLUDE_LANE_WIDTH_IMPL_TYPE_LANE_WIDTH_H_
