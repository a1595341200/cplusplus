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
/**        \file  Soc2LidarExe/include/AccrPedlPsdSts/impl_type_accrpedlpsdsts.h
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

#ifndef SOC2LIDAREXE_INCLUDE_ACCRPEDLPSDSTS_IMPL_TYPE_ACCRPEDLPSDSTS_H_
#define SOC2LIDAREXE_INCLUDE_ACCRPEDLPSDSTS_IMPL_TYPE_ACCRPEDLPSDSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AccrPedlPsdSts {

/*!
 * \brief Type AccrPedlPsdSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AccrPedlPsdSts
 */
enum class AccrPedlPsdSts : uint8_t {
  NoYes1Vcc_No = 0,
  NoYes1Vcc_Yes = 1
};

}  // namespace AccrPedlPsdSts

#endif  // SOC2LIDAREXE_INCLUDE_ACCRPEDLPSDSTS_IMPL_TYPE_ACCRPEDLPSDSTS_H_
