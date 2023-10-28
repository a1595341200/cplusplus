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
/**        \file  LocalizationFusionExe/include/LsrObjTypeIDT/impl_type_lsrobjtypeidt.h
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_LSROBJTYPEIDT_IMPL_TYPE_LSROBJTYPEIDT_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_LSROBJTYPEIDT_IMPL_TYPE_LSROBJTYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LsrObjTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LsrObjTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LsrObjTypeIDT
 */
enum class LsrObjTypeIDT : uint8_t {
  LsrObjType_Unknown = 0,
  LsrObjType_Streetlight = 1,
  LsrObjType_Car = 2,
  LsrObjType_Truck = 3,
  LsrObjType_Two_wheeler = 4,
  LsrObjType_Bus = 5
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LsrObjTypeIDT

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_LSROBJTYPEIDT_IMPL_TYPE_LSROBJTYPEIDT_H_
