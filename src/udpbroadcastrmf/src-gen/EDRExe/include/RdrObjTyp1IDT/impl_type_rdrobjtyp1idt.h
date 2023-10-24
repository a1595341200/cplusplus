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
/**        \file  EDRExe/include/RdrObjTyp1IDT/impl_type_rdrobjtyp1idt.h
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

#ifndef EDREXE_INCLUDE_RDROBJTYP1IDT_IMPL_TYPE_RDROBJTYP1IDT_H_
#define EDREXE_INCLUDE_RDROBJTYP1IDT_IMPL_TYPE_RDROBJTYP1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RdrObjTyp1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type RdrObjTyp1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RdrObjTyp1IDT
 */
enum class RdrObjTyp1IDT : uint8_t {
  RdrObjTyp1_Ukwn = 0,
  RdrObjTyp1_Car = 1,
  RdrObjTyp1_MotorCycle = 2,
  RdrObjTyp1_Truck = 3,
  RdrObjTyp1_Ped = 4,
  RdrObjTyp1_ObstdVert1 = 5,
  RdrObjTyp1_ObstdVert2 = 6,
  RdrObjTyp1_Anim = 7,
  RdrObjTyp1_ObjGen = 8,
  RdrObjTyp1_Bicycle = 9,
  RdrObjTyp1_VehofUkwnClass = 10,
  RdrObjTyp1_Reserved = 11
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace RdrObjTyp1IDT

#endif  // EDREXE_INCLUDE_RDROBJTYP1IDT_IMPL_TYPE_RDROBJTYP1IDT_H_
