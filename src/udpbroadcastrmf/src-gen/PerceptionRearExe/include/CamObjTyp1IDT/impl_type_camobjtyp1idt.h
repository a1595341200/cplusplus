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
/**        \file  PerceptionRearExe/include/CamObjTyp1IDT/impl_type_camobjtyp1idt.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_CAMOBJTYP1IDT_IMPL_TYPE_CAMOBJTYP1IDT_H_
#define PERCEPTIONREAREXE_INCLUDE_CAMOBJTYP1IDT_IMPL_TYPE_CAMOBJTYP1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CamObjTyp1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type CamObjTyp1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CamObjTyp1IDT
 */
enum class CamObjTyp1IDT : uint8_t {
  CamObjTyp1_Unknown = 0,
  CamObjTyp1_Car = 1,
  CamObjTyp1_Truck = 2,
  CamObjTyp1_Bus = 3,
  CamObjTyp1_Motocyclist = 4,
  CamObjTyp1_Bicyclist = 5,
  CamObjTyp1_Tricycle_Without_Cyclist = 6,
  CamObjTyp1_Pedestrian = 7,
  CamObjTyp1_Motorcycle = 8,
  CamObjTyp1_Bicycle = 9,
  CamObjTyp1_Tricycle_With_Cyclist = 10
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace CamObjTyp1IDT

#endif  // PERCEPTIONREAREXE_INCLUDE_CAMOBJTYP1IDT_IMPL_TYPE_CAMOBJTYP1IDT_H_
