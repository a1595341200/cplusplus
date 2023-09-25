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
/**        \file  PerceptionExe/include/CamObjType/impl_type_camobjtype.h
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

#ifndef PERCEPTIONEXE_INCLUDE_CAMOBJTYPE_IMPL_TYPE_CAMOBJTYPE_H_
#define PERCEPTIONEXE_INCLUDE_CAMOBJTYPE_IMPL_TYPE_CAMOBJTYPE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CamObjType {

/*!
 * \brief Type CamObjType.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CamObjType
 */
enum class CamObjType : uint8_t {
  CamObjTyp1_Unknown = 0,
  CamObjTyp1_Car = 1,
  CamObjTyp1_Truck = 2,
  CamObjTyp1_Bus = 3,
  CamObjTyp1_Motorcycle = 4,
  CamObjTyp1_E_Scooter = 5,
  CamObjTyp1_Cyclist = 6,
  CamObjTyp1_Pedestrian = 7,
  CamObjTyp1_Animal = 8
};

}  // namespace CamObjType

#endif  // PERCEPTIONEXE_INCLUDE_CAMOBJTYPE_IMPL_TYPE_CAMOBJTYPE_H_
