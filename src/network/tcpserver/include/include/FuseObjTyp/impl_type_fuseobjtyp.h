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
/**        \file  ObjectFusionModelExe/include/FuseObjTyp/impl_type_fuseobjtyp.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_FUSEOBJTYP_IMPL_TYPE_FUSEOBJTYP_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_FUSEOBJTYP_IMPL_TYPE_FUSEOBJTYP_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace FuseObjTyp {

/*!
 * \brief Type FuseObjTyp.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/FuseObjTyp
 */
enum class FuseObjTyp : uint8_t {
  ObjClassn3Vcc_UkwnClass = 0,
  ObjClassn3Vcc_Car = 1,
  ObjClassn3Vcc_Motorcycle = 2,
  ObjClassn3Vcc_Truck = 3,
  ObjClassn3Vcc_Ped = 4,
  ObjClassn3Vcc_Tricycle = 5,
  ObjClassn3Vcc_Anim = 6,
  ObjClassn3Vcc_ObjGen = 7,
  ObjClassn3Vcc_Bicycle = 8,
  ObjClassn3Vcc_VehOfUkwnClass = 9
};

}  // namespace FuseObjTyp

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_FUSEOBJTYP_IMPL_TYPE_FUSEOBJTYP_H_
