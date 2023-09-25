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
/**        \file  RoadModelFusionExe/include/LinearObjectColour/impl_type_linearobjectcolour.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LINEAROBJECTCOLOUR_IMPL_TYPE_LINEAROBJECTCOLOUR_H_
#define ROADMODELFUSIONEXE_INCLUDE_LINEAROBJECTCOLOUR_IMPL_TYPE_LINEAROBJECTCOLOUR_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LinearObjectColour {

/*!
 * \brief Type LinearObjectColour.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinearObjectColour
 */
enum class LinearObjectColour : uint8_t {
  LinearObjectColour_None = 0,
  LinearObjectColour_Other = 1,
  LinearObjectColour_White = 2,
  LinearObjectColour_Yellow = 3,
  LinearObjectColour_Orange = 4,
  LinearObjectColour_Red = 5,
  LinearObjectColour_Blue = 6
};

}  // namespace LinearObjectColour

#endif  // ROADMODELFUSIONEXE_INCLUDE_LINEAROBJECTCOLOUR_IMPL_TYPE_LINEAROBJECTCOLOUR_H_
