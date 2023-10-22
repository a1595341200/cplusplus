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
/**        \file  TrafficLightAttentionExe/include/Sts/impl_type_sts.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_STS_IMPL_TYPE_STS_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_STS_IMPL_TYPE_STS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace Sts {

/*!
 * \brief Type Sts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Sts
 */
enum class Sts : uint8_t {
  SnsrDataSts1Vcc_Invld = 0,
  SnsrDataSts1Vcc_Fusn = 1,
  SnsrDataSts1Vcc_New = 2,
  SnsrDataSts1Vcc_PredNew = 3,
  SnsrDataSts1Vcc_UpdNew = 4,
  SnsrDataSts1Vcc_Upd = 5,
  SnsrDataSts1Vcc_Pred = 6
};

}  // namespace Sts

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_STS_IMPL_TYPE_STS_H_
