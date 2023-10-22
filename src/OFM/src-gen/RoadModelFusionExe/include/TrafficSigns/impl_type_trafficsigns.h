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
/**        \file  RoadModelFusionExe/include/TrafficSigns/impl_type_trafficsigns.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_TRAFFICSIGNS_IMPL_TYPE_TRAFFICSIGNS_H_
#define ROADMODELFUSIONEXE_INCLUDE_TRAFFICSIGNS_IMPL_TYPE_TRAFFICSIGNS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "PathTrafficSigns/impl_type_pathtrafficsigns.h"

namespace TrafficSigns {

/*!
 * \brief Type TrafficSigns.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrafficSigns
 */
using TrafficSigns = std::vector<
  PathTrafficSigns::PathTrafficSigns
>;

}  // namespace TrafficSigns

#endif  // ROADMODELFUSIONEXE_INCLUDE_TRAFFICSIGNS_IMPL_TYPE_TRAFFICSIGNS_H_
