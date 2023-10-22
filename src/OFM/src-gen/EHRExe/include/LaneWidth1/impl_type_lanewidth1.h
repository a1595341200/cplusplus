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
/**        \file  EHRExe/include/LaneWidth1/impl_type_lanewidth1.h
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

#ifndef EHREXE_INCLUDE_LANEWIDTH1_IMPL_TYPE_LANEWIDTH1_H_
#define EHREXE_INCLUDE_LANEWIDTH1_IMPL_TYPE_LANEWIDTH1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Maxwidth/impl_type_maxwidth.h"
#include "Minwidth/impl_type_minwidth.h"

namespace LaneWidth1 {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneWidth1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneWidth1
 */
struct LaneWidth1 {
  using _Minwidth_ref_type = Minwidth::Minwidth;
  using _Maxwidth_ref_type = Maxwidth::Maxwidth;

  _Minwidth_ref_type Minwidth_ref;
  _Maxwidth_ref_type Maxwidth_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LaneWidth1 instance.
 */
inline bool operator==(LaneWidth1 const& l,
                       LaneWidth1 const& r) noexcept {
  return (&l == &r) || ((l.Minwidth_ref == r.Minwidth_ref)
                         && (l.Maxwidth_ref == r.Maxwidth_ref)
  );
}

/*!
 * \brief Compare for inequality with another LaneWidth1 instance.
 */
inline bool operator!=(LaneWidth1 const& l,
                       LaneWidth1 const& r) noexcept {
  return !(l == r);
}

}  // namespace LaneWidth1

#endif  // EHREXE_INCLUDE_LANEWIDTH1_IMPL_TYPE_LANEWIDTH1_H_
