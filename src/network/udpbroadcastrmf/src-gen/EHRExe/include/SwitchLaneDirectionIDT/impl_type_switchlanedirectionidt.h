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
/**        \file  EHRExe/include/SwitchLaneDirectionIDT/impl_type_switchlanedirectionidt.h
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

#ifndef EHREXE_INCLUDE_SWITCHLANEDIRECTIONIDT_IMPL_TYPE_SWITCHLANEDIRECTIONIDT_H_
#define EHREXE_INCLUDE_SWITCHLANEDIRECTIONIDT_IMPL_TYPE_SWITCHLANEDIRECTIONIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SwitchLaneDirectionIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type SwitchLaneDirectionIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/SwitchLaneDirectionIDT
 */
enum class SwitchLaneDirectionIDT : uint8_t {
  SwitchLaneDir_NoSwitch = 0,
  SwitchLaneDir_ToLeft = 1,
  SwitchLaneDir_ToRight = 2,
  SwitchLaneDir_Invalid = 3
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace SwitchLaneDirectionIDT

#endif  // EHREXE_INCLUDE_SWITCHLANEDIRECTIONIDT_IMPL_TYPE_SWITCHLANEDIRECTIONIDT_H_
