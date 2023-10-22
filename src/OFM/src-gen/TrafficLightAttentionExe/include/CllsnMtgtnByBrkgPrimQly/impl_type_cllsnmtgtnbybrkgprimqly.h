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
/**        \file  TrafficLightAttentionExe/include/CllsnMtgtnByBrkgPrimQly/impl_type_cllsnmtgtnbybrkgprimqly.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_CLLSNMTGTNBYBRKGPRIMQLY_IMPL_TYPE_CLLSNMTGTNBYBRKGPRIMQLY_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_CLLSNMTGTNBYBRKGPRIMQLY_IMPL_TYPE_CLLSNMTGTNBYBRKGPRIMQLY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CllsnMtgtnByBrkgPrimQly {

/*!
 * \brief Type CllsnMtgtnByBrkgPrimQly.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CllsnMtgtnByBrkgPrimQly
 */
enum class CllsnMtgtnByBrkgPrimQly : uint8_t {
  Relbl4Vcc_NotRelbl = 0,
  Relbl4Vcc_CoastRelbl = 1,
  Relbl4Vcc_BrkSpprtRelbl = 2,
  Relbl4Vcc_BrkgRelbl = 3
};

}  // namespace CllsnMtgtnByBrkgPrimQly

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_CLLSNMTGTNBYBRKGPRIMQLY_IMPL_TYPE_CLLSNMTGTNBYBRKGPRIMQLY_H_
