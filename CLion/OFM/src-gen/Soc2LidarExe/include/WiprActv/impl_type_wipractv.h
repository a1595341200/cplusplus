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
/**        \file  Soc2LidarExe/include/WiprActv/impl_type_wipractv.h
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

#ifndef SOC2LIDAREXE_INCLUDE_WIPRACTV_IMPL_TYPE_WIPRACTV_H_
#define SOC2LIDAREXE_INCLUDE_WIPRACTV_IMPL_TYPE_WIPRACTV_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace WiprActv {

/*!
 * \brief Type WiprActv.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/WiprActv
 */
enum class WiprActv : uint8_t {
  OnOff1Vcc_Off = 0,
  OnOff1Vcc_On = 1
};

}  // namespace WiprActv

#endif  // SOC2LIDAREXE_INCLUDE_WIPRACTV_IMPL_TYPE_WIPRACTV_H_
