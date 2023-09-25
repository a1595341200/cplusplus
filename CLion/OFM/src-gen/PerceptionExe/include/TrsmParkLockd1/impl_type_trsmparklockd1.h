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
/**        \file  PerceptionExe/include/TrsmParkLockd1/impl_type_trsmparklockd1.h
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

#ifndef PERCEPTIONEXE_INCLUDE_TRSMPARKLOCKD1_IMPL_TYPE_TRSMPARKLOCKD1_H_
#define PERCEPTIONEXE_INCLUDE_TRSMPARKLOCKD1_IMPL_TYPE_TRSMPARKLOCKD1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrsmParkLockd1 {

/*!
 * \brief Type TrsmParkLockd1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrsmParkLockd1
 */
enum class TrsmParkLockd1 : uint8_t {
  TrsmParkLock1Vcc_ParkNotEngd = 0,
  TrsmParkLock1Vcc_ParkEngd = 1,
  TrsmParkLock1Vcc_NotInUse = 2,
  TrsmParkLock1Vcc_Undefd = 3
};

}  // namespace TrsmParkLockd1

#endif  // PERCEPTIONEXE_INCLUDE_TRSMPARKLOCKD1_IMPL_TYPE_TRSMPARKLOCKD1_H_
