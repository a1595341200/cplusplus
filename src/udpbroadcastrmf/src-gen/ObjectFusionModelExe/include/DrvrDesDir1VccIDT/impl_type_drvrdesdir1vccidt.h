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
/**        \file  ObjectFusionModelExe/include/DrvrDesDir1VccIDT/impl_type_drvrdesdir1vccidt.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_DRVRDESDIR1VCCIDT_IMPL_TYPE_DRVRDESDIR1VCCIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_DRVRDESDIR1VCCIDT_IMPL_TYPE_DRVRDESDIR1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace DrvrDesDir1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type DrvrDesDir1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/DrvrDesDir1VccIDT
 */
enum class DrvrDesDir1VccIDT : uint8_t {
  DrvrDesDir1Vcc_Undefd = 0,
  DrvrDesDir1Vcc_Fwd = 1,
  DrvrDesDir1Vcc_Rvs = 2,
  DrvrDesDir1Vcc_Neut = 3,
  DrvrDesDir1Vcc_Resd0 = 4,
  DrvrDesDir1Vcc_Resd1 = 5,
  DrvrDesDir1Vcc_Resd2 = 6,
  DrvrDesDir1Vcc_Resd3 = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace DrvrDesDir1VccIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_DRVRDESDIR1VCCIDT_IMPL_TYPE_DRVRDESDIR1VCCIDT_H_
