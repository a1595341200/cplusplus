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
/**        \file  EHRExe/include/MatchingStatus/impl_type_matchingstatus.h
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

#ifndef EHREXE_INCLUDE_MATCHINGSTATUS_IMPL_TYPE_MATCHINGSTATUS_H_
#define EHREXE_INCLUDE_MATCHINGSTATUS_IMPL_TYPE_MATCHINGSTATUS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace MatchingStatus {

/*!
 * \brief Type MatchingStatus.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/MatchingStatus
 */
enum class MatchingStatus : uint8_t {
  LatestAssociationTable = 1,
  SD_MAPArrivesAtTheDestination = 2,
  HD_MAPArrivesAtTheDestination = 3,
  LocalNoAssociatedTable = 4,
  AssociatedTableNotAvailable = 5,
  Reserved0 = 6,
  Reserved1 = 7,
  Other = 8
};

}  // namespace MatchingStatus

#endif  // EHREXE_INCLUDE_MATCHINGSTATUS_IMPL_TYPE_MATCHINGSTATUS_H_
