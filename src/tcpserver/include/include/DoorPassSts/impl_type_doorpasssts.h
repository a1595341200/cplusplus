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
/**        \file  ObjectFusionModelExe/include/DoorPassSts/impl_type_doorpasssts.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_DOORPASSSTS_IMPL_TYPE_DOORPASSSTS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_DOORPASSSTS_IMPL_TYPE_DOORPASSSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace DoorPassSts {

/*!
 * \brief Type DoorPassSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DoorPassSts
 */
enum class DoorPassSts : uint8_t {
  DoorSts2Vcc_Ukwn = 0,
  DoorSts2Vcc_Opend = 1,
  DoorSts2Vcc_Clsd = 2
};

}  // namespace DoorPassSts

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_DOORPASSSTS_IMPL_TYPE_DOORPASSSTS_H_
