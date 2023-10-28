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
/**        \file  TargetPredictExe/include/AsyALatSts1VccIDT/impl_type_asyalatsts1vccidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_ASYALATSTS1VCCIDT_IMPL_TYPE_ASYALATSTS1VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_ASYALATSTS1VCCIDT_IMPL_TYPE_ASYALATSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AsyALatSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AsyALatSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyALatSts1VccIDT
 */
enum class AsyALatSts1VccIDT : uint8_t {
  AsyALatSts1Vcc_Off = 0,
  AsyALatSts1Vcc_Standby = 1,
  AsyALatSts1Vcc_Active = 2,
  AsyALatSts1Vcc_Override = 3,
  AsyALatSts1Vcc_TemporaryError = 4,
  AsyALatSts1Vcc_PermanentError = 5,
  AsyALatSts1Vcc_NotEnableButNotError = 6
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AsyALatSts1VccIDT

#endif  // TARGETPREDICTEXE_INCLUDE_ASYALATSTS1VCCIDT_IMPL_TYPE_ASYALATSTS1VCCIDT_H_
