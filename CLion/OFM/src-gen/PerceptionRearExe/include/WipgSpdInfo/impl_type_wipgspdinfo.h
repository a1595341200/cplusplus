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
/**        \file  PerceptionRearExe/include/WipgSpdInfo/impl_type_wipgspdinfo.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_WIPGSPDINFO_IMPL_TYPE_WIPGSPDINFO_H_
#define PERCEPTIONREAREXE_INCLUDE_WIPGSPDINFO_IMPL_TYPE_WIPGSPDINFO_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace WipgSpdInfo {

/*!
 * \brief Type WipgSpdInfo.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/WipgSpdInfo
 */
enum class WipgSpdInfo : uint8_t {
  WipgSpdInfo1Vcc_Off = 0,
  WipgSpdInfo1Vcc_IntlLo = 1,
  WipgSpdInfo1Vcc_IntlHi = 2,
  WipgSpdInfo1Vcc_WipgSpd4045 = 3,
  WipgSpdInfo1Vcc_WipgSpd4650 = 4,
  WipgSpdInfo1Vcc_WipgSpd5155 = 5,
  WipgSpdInfo1Vcc_WipgSpd5660 = 6,
  WipgSpdInfo1Vcc_WiprErr = 7
};

}  // namespace WipgSpdInfo

#endif  // PERCEPTIONREAREXE_INCLUDE_WIPGSPDINFO_IMPL_TYPE_WIPGSPDINFO_H_
