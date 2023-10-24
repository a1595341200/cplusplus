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
/**        \file  EHRExe/include/MatchingStatusIDT/impl_type_matchingstatusidt.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#ifndef EHREXE_INCLUDE_MATCHINGSTATUSIDT_IMPL_TYPE_MATCHINGSTATUSIDT_H_
#define EHREXE_INCLUDE_MATCHINGSTATUSIDT_IMPL_TYPE_MATCHINGSTATUSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace MatchingStatusIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type MatchingStatusIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/MatchingStatusIDT
 */
enum class MatchingStatusIDT : uint8_t {
  MatchingStatus_NotReceived = 0,
  MatchingStatus_LatestAssociationTable = 1,
  MatchingStatus_SD_MAPArrivesAtTheDestination = 2,
  MatchingStatus_HD_MAPArrivesAtTheDestination = 3,
  MatchingStatus_LocalNoAssociatedTable = 4,
  MatchingStatus_AssociatedTableNotAvailable = 5,
  MatchingStatus_Reserved0 = 6,
  MatchingStatus_Reserved1 = 7,
  MatchingStatus_Other = 8
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace MatchingStatusIDT

#endif  // EHREXE_INCLUDE_MATCHINGSTATUSIDT_IMPL_TYPE_MATCHINGSTATUSIDT_H_
