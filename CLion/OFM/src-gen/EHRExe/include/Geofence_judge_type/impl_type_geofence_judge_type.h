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
/**        \file  EHRExe/include/Geofence_judge_type/impl_type_geofence_judge_type.h
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

#ifndef EHREXE_INCLUDE_GEOFENCE_JUDGE_TYPE_IMPL_TYPE_GEOFENCE_JUDGE_TYPE_H_
#define EHREXE_INCLUDE_GEOFENCE_JUDGE_TYPE_IMPL_TYPE_GEOFENCE_JUDGE_TYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace Geofence_judge_type {

/*!
 * \brief Type Geofence_judge_type.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Geofence_judge_type
 */
enum class Geofence_judge_type : uint8_t {
  Geofencetype_Invalid = 0,
  Geofencetype_Unconfirmed = 1,
  Geofencetype_UnplannedArea = 2,
  Geofencetype_Tunnel = 3,
  Geofencetype_Tollgate = 4,
  Geofencetype_Construction = 6,
  Geofencetype_TrafficLight = 7,
  Geofencetype_Highway_end = 9
};

}  // namespace Geofence_judge_type

#endif  // EHREXE_INCLUDE_GEOFENCE_JUDGE_TYPE_IMPL_TYPE_GEOFENCE_JUDGE_TYPE_H_
