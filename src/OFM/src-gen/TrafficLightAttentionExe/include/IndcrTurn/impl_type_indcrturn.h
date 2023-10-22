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
/**        \file  TrafficLightAttentionExe/include/IndcrTurn/impl_type_indcrturn.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_INDCRTURN_IMPL_TYPE_INDCRTURN_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_INDCRTURN_IMPL_TYPE_INDCRTURN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace IndcrTurn {

/*!
 * \brief Type IndcrTurn.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/IndcrTurn
 */
enum class IndcrTurn : uint8_t {
  IndcrTurn1Vcc_NoIndcn = 0,
  IndcrTurn1Vcc_Le = 1,
  IndcrTurn1Vcc_Ri = 2,
  IndcrTurn1Vcc_Ukwn = 3
};

}  // namespace IndcrTurn

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_INDCRTURN_IMPL_TYPE_INDCRTURN_H_
