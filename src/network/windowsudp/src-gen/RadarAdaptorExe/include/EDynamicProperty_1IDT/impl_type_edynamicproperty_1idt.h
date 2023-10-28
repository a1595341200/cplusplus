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
/**        \file  RadarAdaptorExe/include/EDynamicProperty_1IDT/impl_type_edynamicproperty_1idt.h
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

#ifndef RADARADAPTOREXE_INCLUDE_EDYNAMICPROPERTY_1IDT_IMPL_TYPE_EDYNAMICPROPERTY_1IDT_H_
#define RADARADAPTOREXE_INCLUDE_EDYNAMICPROPERTY_1IDT_IMPL_TYPE_EDYNAMICPROPERTY_1IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace EDynamicProperty_1IDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type EDynamicProperty_1IDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/EDynamicProperty_1IDT
 */
enum class EDynamicProperty_1IDT : uint8_t {
  EDynamicProperty_Moving = 0,
  EDynamicProperty_Stationary = 1,
  EDynamicProperty_Oncoming = 2,
  EDynamicProperty_CrossingLeftToRight = 3,
  EDynamicProperty_CrossingRightToLeft = 4,
  EDynamicProperty_Unknown = 5,
  EDynamicProperty_Stopped = 6,
  EDynamicProperty_Reserved1 = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace EDynamicProperty_1IDT

#endif  // RADARADAPTOREXE_INCLUDE_EDYNAMICPROPERTY_1IDT_IMPL_TYPE_EDYNAMICPROPERTY_1IDT_H_
