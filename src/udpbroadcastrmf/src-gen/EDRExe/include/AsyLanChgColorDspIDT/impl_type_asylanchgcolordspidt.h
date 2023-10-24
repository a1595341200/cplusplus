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
/**        \file  EDRExe/include/AsyLanChgColorDspIDT/impl_type_asylanchgcolordspidt.h
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

#ifndef EDREXE_INCLUDE_ASYLANCHGCOLORDSPIDT_IMPL_TYPE_ASYLANCHGCOLORDSPIDT_H_
#define EDREXE_INCLUDE_ASYLANCHGCOLORDSPIDT_IMPL_TYPE_ASYLANCHGCOLORDSPIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AsyLanChgColorDspIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AsyLanChgColorDspIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyLanChgColorDspIDT
 */
enum class AsyLanChgColorDspIDT : uint8_t {
  AsyLanChgColorDsp_Nodisplay = 0,
  AsyLanChgColorDsp_Grey = 1,
  AsyLanChgColorDsp_Blue = 2,
  AsyLanChgColorDsp_Blue1 = 3,
  AsyLanChgColorDsp_Reserve1 = 4,
  AsyLanChgColorDsp_Reserve2 = 5,
  AsyLanChgColorDsp_Reserve3 = 6
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AsyLanChgColorDspIDT

#endif  // EDREXE_INCLUDE_ASYLANCHGCOLORDSPIDT_IMPL_TYPE_ASYLANCHGCOLORDSPIDT_H_
