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
/**        \file  ObjectFusionModelExe/include/AsyIndcrDispSts1VccIDT/impl_type_asyindcrdispsts1vccidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_ASYINDCRDISPSTS1VCCIDT_IMPL_TYPE_ASYINDCRDISPSTS1VCCIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_ASYINDCRDISPSTS1VCCIDT_IMPL_TYPE_ASYINDCRDISPSTS1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AsyIndcrDispSts1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AsyIndcrDispSts1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyIndcrDispSts1VccIDT
 */
enum class AsyIndcrDispSts1VccIDT : uint8_t {
  AsyIndcrDispSts1Vcc_NoDisp = 0,
  AsyIndcrDispSts1Vcc_OffDisp = 1,
  AsyIndcrDispSts1Vcc_StandByDisp = 2,
  AsyIndcrDispSts1Vcc_ActiveDisp = 3,
  AsyIndcrDispSts1Vcc_OverrideDisp = 4,
  AsyIndcrDispSts1Vcc_FailureDisp = 5,
  AsyIndcrDispSts1Vcc_Passive = 6
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AsyIndcrDispSts1VccIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_ASYINDCRDISPSTS1VCCIDT_IMPL_TYPE_ASYINDCRDISPSTS1VCCIDT_H_
