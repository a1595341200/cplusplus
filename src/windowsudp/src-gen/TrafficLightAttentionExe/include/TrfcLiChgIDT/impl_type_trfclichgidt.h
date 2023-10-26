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
/**        \file  TrafficLightAttentionExe/include/TrfcLiChgIDT/impl_type_trfclichgidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLICHGIDT_IMPL_TYPE_TRFCLICHGIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLICHGIDT_IMPL_TYPE_TRFCLICHGIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcLiChgIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrfcLiChgIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcLiChgIDT
 */
enum class TrfcLiChgIDT : uint8_t {
  TrfcLiChg_No_request = 0,
  TrfcLiChg_Change_to_Timetogo = 1,
  TrfcLiChg_Change_to_RedLight = 2,
  TrfcLiChg_Change_to_GreenLight = 3,
  TrfcLiChg_Reserved1 = 4,
  TrfcLiChg_Reserved2 = 5
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcLiChgIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_TRFCLICHGIDT_IMPL_TYPE_TRFCLICHGIDT_H_
