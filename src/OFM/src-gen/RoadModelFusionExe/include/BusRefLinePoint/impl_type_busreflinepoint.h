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
/**        \file  RoadModelFusionExe/include/BusRefLinePoint/impl_type_busreflinepoint.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_BUSREFLINEPOINT_IMPL_TYPE_BUSREFLINEPOINT_H_
#define ROADMODELFUSIONEXE_INCLUDE_BUSREFLINEPOINT_IMPL_TYPE_BUSREFLINEPOINT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Lat_coord/impl_type_lat_coord.h"
#include "Lon_coord/impl_type_lon_coord.h"

namespace BusRefLinePoint {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type BusRefLinePoint.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/BusRefLinePoint
 */
struct BusRefLinePoint {
  using _Lon_coord_ref_type = Lon_coord::Lon_coord;
  using _Lat_coord_ref_type = Lat_coord::Lat_coord;

  _Lon_coord_ref_type Lon_coord_ref;
  _Lat_coord_ref_type Lat_coord_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another BusRefLinePoint instance.
 */
inline bool operator==(BusRefLinePoint const& l,
                       BusRefLinePoint const& r) noexcept {
  return (&l == &r) || ((l.Lon_coord_ref == r.Lon_coord_ref)
                         && (l.Lat_coord_ref == r.Lat_coord_ref)
  );
}

/*!
 * \brief Compare for inequality with another BusRefLinePoint instance.
 */
inline bool operator!=(BusRefLinePoint const& l,
                       BusRefLinePoint const& r) noexcept {
  return !(l == r);
}

}  // namespace BusRefLinePoint

#endif  // ROADMODELFUSIONEXE_INCLUDE_BUSREFLINEPOINT_IMPL_TYPE_BUSREFLINEPOINT_H_
