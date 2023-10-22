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
/**        \file  EHRExe/include/GeometryPoint/impl_type_geometrypoint.h
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

#ifndef EHREXE_INCLUDE_GEOMETRYPOINT_IMPL_TYPE_GEOMETRYPOINT_H_
#define EHREXE_INCLUDE_GEOMETRYPOINT_IMPL_TYPE_GEOMETRYPOINT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "Altitude/impl_type_altitude.h"
#include "Latitude/impl_type_latitude.h"
#include "Longitude/impl_type_longitude.h"

namespace GeometryPoint {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type GeometryPoint.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GeometryPoint
 */
struct GeometryPoint {
  using _Latitude_ref_type = Latitude::Latitude;
  using _Longitude_ref_type = Longitude::Longitude;
  using _Altitude_ref_type = Altitude::Altitude;

  _Latitude_ref_type Latitude_ref;
  _Longitude_ref_type Longitude_ref;
  _Altitude_ref_type Altitude_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another GeometryPoint instance.
 */
inline bool operator==(GeometryPoint const& l,
                       GeometryPoint const& r) noexcept {
  return (&l == &r) || ((l.Latitude_ref == r.Latitude_ref)
                         && (l.Longitude_ref == r.Longitude_ref)
                         && (l.Altitude_ref == r.Altitude_ref)
  );
}

/*!
 * \brief Compare for inequality with another GeometryPoint instance.
 */
inline bool operator!=(GeometryPoint const& l,
                       GeometryPoint const& r) noexcept {
  return !(l == r);
}

}  // namespace GeometryPoint

#endif  // EHREXE_INCLUDE_GEOMETRYPOINT_IMPL_TYPE_GEOMETRYPOINT_H_
