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
/**        \file  PerceptionRearExe/include/BrkPedlPsd/impl_type_brkpedlpsd.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_BRKPEDLPSD_IMPL_TYPE_BRKPEDLPSD_H_
#define PERCEPTIONREAREXE_INCLUDE_BRKPEDLPSD_IMPL_TYPE_BRKPEDLPSD_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace BrkPedlPsd {

/*!
 * \brief Type BrkPedlPsd.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/BrkPedlPsd
 */
enum class BrkPedlPsd : uint8_t {
  NoYes1Vcc_No = 0,
  NoYes1Vcc_Yes = 1
};

}  // namespace BrkPedlPsd

#endif  // PERCEPTIONREAREXE_INCLUDE_BRKPEDLPSD_IMPL_TYPE_BRKPEDLPSD_H_