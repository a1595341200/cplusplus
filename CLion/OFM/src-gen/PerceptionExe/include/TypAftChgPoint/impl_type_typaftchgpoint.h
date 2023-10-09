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
/**        \file  PerceptionExe/include/TypAftChgPoint/impl_type_typaftchgpoint.h
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

#ifndef PERCEPTIONEXE_INCLUDE_TYPAFTCHGPOINT_IMPL_TYPE_TYPAFTCHGPOINT_H_
#define PERCEPTIONEXE_INCLUDE_TYPAFTCHGPOINT_IMPL_TYPE_TYPAFTCHGPOINT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TypAftChgPoint {

/*!
 * \brief Type TypAftChgPoint.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TypAftChgPoint
 */
enum class TypAftChgPoint : uint8_t {
  CamLineType_None = 0,
  CamLineType_Solid = 1,
  CamLineType_Dashed = 2,
  CamLineType_DoubleSolid = 3,
  CamLineType_DoubleDashed = 4,
  CamLineType_SolidDashed = 5,
  CamLineType_DashedSolid = 6,
  CamLineType_Fishbone = 7
};

}  // namespace TypAftChgPoint

#endif  // PERCEPTIONEXE_INCLUDE_TYPAFTCHGPOINT_IMPL_TYPE_TYPAFTCHGPOINT_H_