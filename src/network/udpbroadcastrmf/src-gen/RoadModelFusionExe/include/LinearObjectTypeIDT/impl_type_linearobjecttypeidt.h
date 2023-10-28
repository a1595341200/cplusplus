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
/**        \file  RoadModelFusionExe/include/LinearObjectTypeIDT/impl_type_linearobjecttypeidt.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_LINEAROBJECTTYPEIDT_IMPL_TYPE_LINEAROBJECTTYPEIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_LINEAROBJECTTYPEIDT_IMPL_TYPE_LINEAROBJECTTYPEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LinearObjectTypeIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LinearObjectTypeIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinearObjectTypeIDT
 */
enum class LinearObjectTypeIDT : uint8_t {
  LinearObjectType_Centerline = 0,
  LinearObjectType_LaneMarking = 1,
  LinearObjectType_Kerb = 2,
  LinearObjectType_Barrier = 3,
  LinearObjectType_Natural = 4,
  LinearObjectType_Virtual = 5,
  LinearObjectType_Ditch = 6,
  LinearObjectType_Other = 99
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LinearObjectTypeIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_LINEAROBJECTTYPEIDT_IMPL_TYPE_LINEAROBJECTTYPEIDT_H_
