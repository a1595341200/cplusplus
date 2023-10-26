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
/**        \file  PerceptionExe/include/IntvAndWarnModForLaneKeepAidSts1VccIDT/impl_type_intvandwarnmodforlanekeepaidsts1vccidt.h
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

#ifndef PERCEPTIONEXE_INCLUDE_INTVANDWARNMODFORLANEKEEPAIDSTS1VCCIDT_IMPL_TYPE_INTVANDWARNMODFORLANEKEEPAIDSTS1VCCIDT_H_
#define PERCEPTIONEXE_INCLUDE_INTVANDWARNMODFORLANEKEEPAIDSTS1VCCIDT_IMPL_TYPE_INTVANDWARNMODFORLANEKEEPAIDSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace IntvAndWarnModForLaneKeepAidSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type IntvAndWarnModForLaneKeepAidSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/IntvAndWarnModForLaneKeepAidSts1VccIDT
 */
enum class IntvAndWarnModForLaneKeepAidSts1VccIDT : uint8_t {
  IntvAndWarnModForLaneKeepAidSts1Vcc_Inactive = 0,
  IntvAndWarnModForLaneKeepAidSts1Vcc_InterventionAndWarning = 1,
  IntvAndWarnModForLaneKeepAidSts1Vcc_InterventionOnly = 2,
  IntvAndWarnModForLaneKeepAidSts1Vcc_WarningOnly = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace IntvAndWarnModForLaneKeepAidSts1VccIDT

#endif  // PERCEPTIONEXE_INCLUDE_INTVANDWARNMODFORLANEKEEPAIDSTS1VCCIDT_IMPL_TYPE_INTVANDWARNMODFORLANEKEEPAIDSTS1VCCIDT_H_
