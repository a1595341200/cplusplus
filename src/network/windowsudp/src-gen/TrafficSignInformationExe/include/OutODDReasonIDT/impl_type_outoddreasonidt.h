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
/**        \file  TrafficSignInformationExe/include/OutODDReasonIDT/impl_type_outoddreasonidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_OUTODDREASONIDT_IMPL_TYPE_OUTODDREASONIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_OUTODDREASONIDT_IMPL_TYPE_OUTODDREASONIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace OutODDReasonIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type OutODDReasonIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/OutODDReasonIDT
 */
enum class OutODDReasonIDT : uint8_t {
  OutODDReason_Unknown = 0,
  OutODDReason_OutOfOdd = 1,
  OutODDReason_TollStation = 2,
  OutODDReason_Reserved1 = 3,
  OutODDReason_Reserved2 = 4,
  OutODDReason_Reserved3 = 5,
  OutODDReason_Reserved4 = 6,
  OutODDReason_Reserved5 = 7,
  OutODDReason_Reserved6 = 8,
  OutODDReason_Reserved7 = 9
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace OutODDReasonIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_OUTODDREASONIDT_IMPL_TYPE_OUTODDREASONIDT_H_
