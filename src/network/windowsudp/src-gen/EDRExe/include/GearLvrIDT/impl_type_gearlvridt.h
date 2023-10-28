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
/**        \file  EDRExe/include/GearLvrIDT/impl_type_gearlvridt.h
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

#ifndef EDREXE_INCLUDE_GEARLVRIDT_IMPL_TYPE_GEARLVRIDT_H_
#define EDREXE_INCLUDE_GEARLVRIDT_IMPL_TYPE_GEARLVRIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace GearLvrIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type GearLvrIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/GearLvrIDT
 */
enum class GearLvrIDT : uint8_t {
  GearLvr_ParkIndcn = 0,
  GearLvr_RvsIndcn = 1,
  GearLvr_NeutIndcn = 2,
  GearLvr_DrvIndcn = 3,
  GearLvr_ManModeIndcn = 4,
  GearLvr_Resd1 = 5,
  GearLvr_Resd2 = 6,
  GearLvr_Undefd = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace GearLvrIDT

#endif  // EDREXE_INCLUDE_GEARLVRIDT_IMPL_TYPE_GEARLVRIDT_H_
