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
/**        \file  ObjectFusionModelExe/include/PVTposType/impl_type_pvtpostype.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_PVTPOSTYPE_IMPL_TYPE_PVTPOSTYPE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_PVTPOSTYPE_IMPL_TYPE_PVTPOSTYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace PVTposType {

/*!
 * \brief Type PVTposType.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/PVTposType
 */
enum class PVTposType : uint8_t {
  PVTposType1_RealTiKinematicPos = 0,
  PVTposType1_RtkFloat = 1,
  PVTposType1_Ongoing = 2,
  PVTposType1_InvalidPPS = 3,
  PVTposType1_NotValid = 4,
  PVTposType1_SinglePointPositioning = 5,
  PVTposType1_DifferentialPositioning = 6
};

}  // namespace PVTposType

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_PVTPOSTYPE_IMPL_TYPE_PVTPOSTYPE_H_
