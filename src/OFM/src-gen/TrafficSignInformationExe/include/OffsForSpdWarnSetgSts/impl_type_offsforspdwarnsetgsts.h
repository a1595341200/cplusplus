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
/**        \file  TrafficSignInformationExe/include/OffsForSpdWarnSetgSts/impl_type_offsforspdwarnsetgsts.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_OFFSFORSPDWARNSETGSTS_IMPL_TYPE_OFFSFORSPDWARNSETGSTS_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_OFFSFORSPDWARNSETGSTS_IMPL_TYPE_OFFSFORSPDWARNSETGSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace OffsForSpdWarnSetgSts {

/*!
 * \brief Type OffsForSpdWarnSetgSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/OffsForSpdWarnSetgSts
 */
enum class OffsForSpdWarnSetgSts : uint8_t {
  OffsForSpdWarnSetgSts1_Minus10 = 0,
  OffsForSpdWarnSetgSts1_Minus5 = 1,
  OffsForSpdWarnSetgSts1_Zero = 2,
  OffsForSpdWarnSetgSts1_Plus5 = 3,
  OffsForSpdWarnSetgSts1_Plus10 = 4,
  OffsForSpdWarnSetgSts1_reserved = 5
};

}  // namespace OffsForSpdWarnSetgSts

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_OFFSFORSPDWARNSETGSTS_IMPL_TYPE_OFFSFORSPDWARNSETGSTS_H_
