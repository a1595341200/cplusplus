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
/**        \file  TrafficLightAttentionExe/include/Relbl3VccIDT/impl_type_relbl3vccidt.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_RELBL3VCCIDT_IMPL_TYPE_RELBL3VCCIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_RELBL3VCCIDT_IMPL_TYPE_RELBL3VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace Relbl3VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type Relbl3VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/Relbl3VccIDT
 */
enum class Relbl3VccIDT : uint8_t {
  Relbl3Vcc_NotRelbl = 0,
  Relbl3Vcc_SoonNotRelbl = 1,
  Relbl3Vcc_LowRelbl = 2,
  Relbl3Vcc_HigherRelbl = 3,
  Relbl3Vcc_HighestRelbl = 4
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace Relbl3VccIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_RELBL3VCCIDT_IMPL_TYPE_RELBL3VCCIDT_H_
