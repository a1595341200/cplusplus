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
/**        \file  EHRExe/include/GeofenceType/impl_type_geofencetype.h
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

#ifndef EHREXE_INCLUDE_GEOFENCETYPE_IMPL_TYPE_GEOFENCETYPE_H_
#define EHREXE_INCLUDE_GEOFENCETYPE_IMPL_TYPE_GEOFENCETYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace GeofenceType {

/*!
 * \brief Type GeofenceType.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GeofenceType
 */
enum class GeofenceType : uint8_t {
  GeofenceType_Invalid = 0,
  GeofenceType_GeofenceType_UnplannedArea = 2,
  GeofenceType_Tunnel = 3,
  GeofenceType_Tollgate = 4,
  GeofenceType_Construction = 6,
  GeofenceType_TrafficLight = 7,
  GeofenceType_NoGuardrail = 8,
  GeofenceType_Highway_End = 9,
  GeofenceType_LinkCurvatureIsOverrun = 11,
  GeofenceType_LinkSlopeIsOverrun = 12,
  GeofenceType_LaneConnectedToRamporJct = 14,
  GeofenceType_LaneFormingorEnding = 15,
  GeofenceType_LaneWidthIsTooWideOrTooNarrow = 16,
  GeofenceType_LaneCurvatureIsOverrun = 17,
  GeofenceType_LaneMarkingIsBrokenOrMissing = 18,
  GeofenceType_Y_intersection = 20,
  GeofenceType_IC = 21,
  GeofenceType_ServiceArea = 22
};

}  // namespace GeofenceType

#endif  // EHREXE_INCLUDE_GEOFENCETYPE_IMPL_TYPE_GEOFENCETYPE_H_
