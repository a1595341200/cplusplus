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
/**        \file  EDRExe/include/AsyLineLeTyp1VccIDT/impl_type_asylineletyp1vccidt.h
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

#ifndef EDREXE_INCLUDE_ASYLINELETYP1VCCIDT_IMPL_TYPE_ASYLINELETYP1VCCIDT_H_
#define EDREXE_INCLUDE_ASYLINELETYP1VCCIDT_IMPL_TYPE_ASYLINELETYP1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AsyLineLeTyp1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AsyLineLeTyp1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyLineLeTyp1VccIDT
 */
enum class AsyLineLeTyp1VccIDT : uint8_t {
  AsyLineLeTyp1Vcc_NoDisplay = 0,
  AsyLineLeTyp1Vcc_SolidLine = 1,
  AsyLineLeTyp1Vcc_DashLine = 2
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AsyLineLeTyp1VccIDT

#endif  // EDREXE_INCLUDE_ASYLINELETYP1VCCIDT_IMPL_TYPE_ASYLINELETYP1VCCIDT_H_
