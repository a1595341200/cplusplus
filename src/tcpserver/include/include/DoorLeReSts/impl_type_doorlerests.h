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
/**        \file  ObjectFusionModelExe/include/DoorLeReSts/impl_type_doorlerests.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_DOORLERESTS_IMPL_TYPE_DOORLERESTS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_DOORLERESTS_IMPL_TYPE_DOORLERESTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace DoorLeReSts {

/*!
 * \brief Type DoorLeReSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DoorLeReSts
 */
enum class DoorLeReSts : uint8_t {
  DoorSts2Vcc_Ukwn = 0,
  DoorSts2Vcc_Opend = 1,
  DoorSts2Vcc_Clsd = 2
};

}  // namespace DoorLeReSts

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_DOORLERESTS_IMPL_TYPE_DOORLERESTS_H_
