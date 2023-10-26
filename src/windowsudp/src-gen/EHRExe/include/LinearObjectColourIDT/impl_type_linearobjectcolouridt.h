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
/**        \file  EHRExe/include/LinearObjectColourIDT/impl_type_linearobjectcolouridt.h
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

#ifndef EHREXE_INCLUDE_LINEAROBJECTCOLOURIDT_IMPL_TYPE_LINEAROBJECTCOLOURIDT_H_
#define EHREXE_INCLUDE_LINEAROBJECTCOLOURIDT_IMPL_TYPE_LINEAROBJECTCOLOURIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LinearObjectColourIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LinearObjectColourIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinearObjectColourIDT
 */
enum class LinearObjectColourIDT : uint8_t {
  LinearObjectColour_None = 0,
  LinearObjectColour_Other = 1,
  LinearObjectColour_White = 2,
  LinearObjectColour_Yellow = 3,
  LinearObjectColour_Orange = 4,
  LinearObjectColour_Red = 5,
  LinearObjectColour_Blue = 6
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LinearObjectColourIDT

#endif  // EHREXE_INCLUDE_LINEAROBJECTCOLOURIDT_IMPL_TYPE_LINEAROBJECTCOLOURIDT_H_
