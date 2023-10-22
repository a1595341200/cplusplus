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
/**        \file  PerceptionExe/include/GearLvr/impl_type_gearlvr.h
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

#ifndef PERCEPTIONEXE_INCLUDE_GEARLVR_IMPL_TYPE_GEARLVR_H_
#define PERCEPTIONEXE_INCLUDE_GEARLVR_IMPL_TYPE_GEARLVR_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace GearLvr {

/*!
 * \brief Type GearLvr.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GearLvr
 */
enum class GearLvr : uint8_t {
  GearLvr_ParkIndcn = 0,
  GearLvr_RvsIndcn = 1,
  GearLvr_NeutIndcn = 2,
  GearLvr_DrvIndcn = 3,
  GearLvr_ManModeIndcn = 4,
  GearLvr_Resd1 = 5,
  GearLvr_Resd2 = 6,
  GearLvr_Undefd = 7
};

}  // namespace GearLvr

#endif  // PERCEPTIONEXE_INCLUDE_GEARLVR_IMPL_TYPE_GEARLVR_H_
