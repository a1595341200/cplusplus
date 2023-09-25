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
/**        \file  RoadModelFusionExe/include/StartPnt/impl_type_startpnt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_STARTPNT_IMPL_TYPE_STARTPNT_H_
#define ROADMODELFUSIONEXE_INCLUDE_STARTPNT_IMPL_TYPE_STARTPNT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "StartPntLat_coord/impl_type_startpntlat_coord.h"
#include "StartPntLon_coord/impl_type_startpntlon_coord.h"

namespace StartPnt {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type StartPnt.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/StartPnt
 */
struct StartPnt {
  using _StartPntLon_coord_ref_type = StartPntLon_coord::StartPntLon_coord;
  using _StartPntLat_coord_ref_type = StartPntLat_coord::StartPntLat_coord;

  _StartPntLon_coord_ref_type StartPntLon_coord_ref;
  _StartPntLat_coord_ref_type StartPntLat_coord_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another StartPnt instance.
 */
inline bool operator==(StartPnt const& l,
                       StartPnt const& r) noexcept {
  return (&l == &r) || ((l.StartPntLon_coord_ref == r.StartPntLon_coord_ref)
                         && (l.StartPntLat_coord_ref == r.StartPntLat_coord_ref)
  );
}

/*!
 * \brief Compare for inequality with another StartPnt instance.
 */
inline bool operator!=(StartPnt const& l,
                       StartPnt const& r) noexcept {
  return !(l == r);
}

}  // namespace StartPnt

#endif  // ROADMODELFUSIONEXE_INCLUDE_STARTPNT_IMPL_TYPE_STARTPNT_H_
