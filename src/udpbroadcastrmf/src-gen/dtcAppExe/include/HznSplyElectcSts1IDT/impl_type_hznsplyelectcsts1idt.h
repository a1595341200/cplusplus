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
/**        \file  dtcAppExe/include/HznSplyElectcSts1IDT/impl_type_hznsplyelectcsts1idt.h
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

#ifndef DTCAPPEXE_INCLUDE_HZNSPLYELECTCSTS1IDT_IMPL_TYPE_HZNSPLYELECTCSTS1IDT_H_
#define DTCAPPEXE_INCLUDE_HZNSPLYELECTCSTS1IDT_IMPL_TYPE_HZNSPLYELECTCSTS1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace HznSplyElectcSts1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type HznSplyElectcSts1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/HznSplyElectcSts1IDT
 */
enum class HznSplyElectcSts1IDT : uint8_t {
  HznSplyElectcSts1Vcc_Ukwn = 0,
  HznSplyElectcSts1Vcc_NoSpprt = 1,
  HznSplyElectcSts1Vcc_Failr = 2,
  HznSplyElectcSts1Vcc_Spprt = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace HznSplyElectcSts1IDT

#endif  // DTCAPPEXE_INCLUDE_HZNSPLYELECTCSTS1IDT_IMPL_TYPE_HZNSPLYELECTCSTS1IDT_H_
