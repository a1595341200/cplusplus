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
/**        \file  RoadModelFusionExe/include/RightOfWay/impl_type_rightofway.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_RIGHTOFWAY_IMPL_TYPE_RIGHTOFWAY_H_
#define ROADMODELFUSIONEXE_INCLUDE_RIGHTOFWAY_IMPL_TYPE_RIGHTOFWAY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RightOfWay {

/*!
 * \brief Type RightOfWay.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RightOfWay
 */
enum class RightOfWay : uint8_t {
  RightOfWay_Unknown = 0,
  RightOfWay_MustYield = 1,
  RightOfWay_HasRightOfWay = 2
};

}  // namespace RightOfWay

#endif  // ROADMODELFUSIONEXE_INCLUDE_RIGHTOFWAY_IMPL_TYPE_RIGHTOFWAY_H_
