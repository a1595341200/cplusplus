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
/**        \file  TargetPredictExe/include/ObjClassn3VccIDT/impl_type_objclassn3vccidt.h
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

#ifndef TARGETPREDICTEXE_INCLUDE_OBJCLASSN3VCCIDT_IMPL_TYPE_OBJCLASSN3VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_OBJCLASSN3VCCIDT_IMPL_TYPE_OBJCLASSN3VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ObjClassn3VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type ObjClassn3VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ObjClassn3VccIDT
 */
enum class ObjClassn3VccIDT : uint8_t {
  ObjClassn3Vcc_UkwnClass = 0,
  ObjClassn3Vcc_Car = 1,
  ObjClassn3Vcc_Motorcycle = 2,
  ObjClassn3Vcc_Truck = 3,
  ObjClassn3Vcc_Ped = 4,
  ObjClassn3Vcc_Tricycle = 5,
  ObjClassn3Vcc_Anim = 7,
  ObjClassn3Vcc_ObjGen = 8,
  ObjClassn3Vcc_Bicycle = 9,
  ObjClassn3Vcc_VehOfUkwnClass = 10
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ObjClassn3VccIDT

#endif  // TARGETPREDICTEXE_INCLUDE_OBJCLASSN3VCCIDT_IMPL_TYPE_OBJCLASSN3VCCIDT_H_
