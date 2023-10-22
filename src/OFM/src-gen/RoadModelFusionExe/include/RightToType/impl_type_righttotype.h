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
/**        \file  RoadModelFusionExe/include/RightToType/impl_type_righttotype.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_RIGHTTOTYPE_IMPL_TYPE_RIGHTTOTYPE_H_
#define ROADMODELFUSIONEXE_INCLUDE_RIGHTTOTYPE_IMPL_TYPE_RIGHTTOTYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RightToType {

/*!
 * \brief Type RightToType.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RightToType
 */
enum class RightToType : uint8_t {
  LineType_Unknown = 0,
  LineType_None = 1,
  LineType_SolidLine = 2,
  LineType_DashedLine = 3,
  LineType_DoubleSolidLine = 4,
  LineType_DoubleDashedLine = 5,
  LineType_LeftSolidRightDashed = 6,
  LineType_RightSolidLeftDashed = 7,
  LineType_Virtual = 8
};

}  // namespace RightToType

#endif  // ROADMODELFUSIONEXE_INCLUDE_RIGHTTOTYPE_IMPL_TYPE_RIGHTTOTYPE_H_
