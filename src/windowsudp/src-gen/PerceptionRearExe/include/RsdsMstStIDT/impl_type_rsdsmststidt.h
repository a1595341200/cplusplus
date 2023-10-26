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
/**        \file  PerceptionRearExe/include/RsdsMstStIDT/impl_type_rsdsmststidt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_RSDSMSTSTIDT_IMPL_TYPE_RSDSMSTSTIDT_H_
#define PERCEPTIONREAREXE_INCLUDE_RSDSMSTSTIDT_IMPL_TYPE_RSDSMSTSTIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RsdsMstStIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type RsdsMstStIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RsdsMstStIDT
 */
enum class RsdsMstStIDT : uint8_t {
  RsdsMstSt_Cfg = 0,
  RsdsMstSt_StrtUp = 1,
  RsdsMstSt_Runng = 2,
  RsdsMstSt_Blkd = 3,
  RsdsMstSt_Faulty = 4,
  RsdsMstSt_Shutdown = 5,
  RsdsMstSt_Hot = 6,
  RsdsMstSt_Cal = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RsdsMstStIDT

#endif  // PERCEPTIONREAREXE_INCLUDE_RSDSMSTSTIDT_IMPL_TYPE_RSDSMSTSTIDT_H_
