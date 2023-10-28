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
/**        \file  EDRExe/include/AsyObjType1VccIDT/impl_type_asyobjtype1vccidt.h
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

#ifndef EDREXE_INCLUDE_ASYOBJTYPE1VCCIDT_IMPL_TYPE_ASYOBJTYPE1VCCIDT_H_
#define EDREXE_INCLUDE_ASYOBJTYPE1VCCIDT_IMPL_TYPE_ASYOBJTYPE1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace AsyObjType1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type AsyObjType1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/AsyObjType1VccIDT
 */
enum class AsyObjType1VccIDT : uint8_t {
  AsyObjType1Vcc_Car = 0,
  AsyObjType1Vcc_Pedestrian = 1,
  AsyObjType1Vcc_Cyclist = 2,
  AsyObjType1Vcc_Motorbike = 3,
  AsyObjType1Vcc_Bus = 4,
  AsyObjType1Vcc_Truck = 5,
  AsyObjType1Vcc_Tree = 6,
  AsyObjType1Vcc_Wall = 7,
  AsyObjType1Vcc_Animal = 8,
  AsyObjType1Vcc_Unknown = 9
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace AsyObjType1VccIDT

#endif  // EDREXE_INCLUDE_ASYOBJTYPE1VCCIDT_IMPL_TYPE_ASYOBJTYPE1VCCIDT_H_
