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
/**        \file  EHRExe/include/GeofenceTypeIDT/impl_type_geofencetypeidt.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#ifndef EHREXE_INCLUDE_GEOFENCETYPEIDT_IMPL_TYPE_GEOFENCETYPEIDT_H_
#define EHREXE_INCLUDE_GEOFENCETYPEIDT_IMPL_TYPE_GEOFENCETYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace GeofenceTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type GeofenceTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GeofenceTypeIDT
 */
enum class GeofenceTypeIDT : uint8_t {
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
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace GeofenceTypeIDT

#endif  // EHREXE_INCLUDE_GEOFENCETYPEIDT_IMPL_TYPE_GEOFENCETYPEIDT_H_
