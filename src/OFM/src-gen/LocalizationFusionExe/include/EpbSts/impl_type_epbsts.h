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
/**        \file  LocalizationFusionExe/include/EpbSts/impl_type_epbsts.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_EPBSTS_IMPL_TYPE_EPBSTS_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_EPBSTS_IMPL_TYPE_EPBSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace EpbSts {

/*!
 * \brief Type EpbSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EpbSts
 */
enum class EpbSts : uint8_t {
  EpbSts1Vcc_Resd0 = 0,
  EpbSts1Vcc_Resd1 = 1,
  EpbSts1Vcc_Resd2 = 2,
  EpbSts1Vcc_AllAppld = 3,
  EpbSts1Vcc_Resd4 = 4,
  EpbSts1Vcc_AllInTran = 5,
  EpbSts1Vcc_BrkgDynByActr = 6,
  EpbSts1Vcc_Resd7 = 7,
  EpbSts1Vcc_Resd8 = 8,
  EpbSts1Vcc_ActrAllReld = 9,
  EpbSts1Vcc_BrkgDynDegraded = 10,
  EpbSts1Vcc_Resd11 = 11,
  EpbSts1Vcc_BrkgDyn = 12,
  EpbSts1Vcc_Resd13 = 13,
  EpbSts1Vcc_Resd14 = 14,
  EpbSts1Vcc_Err = 15
};

}  // namespace EpbSts

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_EPBSTS_IMPL_TYPE_EPBSTS_H_
