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
/**        \file  EHRExe/include/LinearObjectmarkingIDT/impl_type_linearobjectmarkingidt.h
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

#ifndef EHREXE_INCLUDE_LINEAROBJECTMARKINGIDT_IMPL_TYPE_LINEAROBJECTMARKINGIDT_H_
#define EHREXE_INCLUDE_LINEAROBJECTMARKINGIDT_IMPL_TYPE_LINEAROBJECTMARKINGIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LinearObjectmarkingIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type LinearObjectmarkingIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinearObjectmarkingIDT
 */
enum class LinearObjectmarkingIDT : uint8_t {
  LinearObjectmarking_Unknown = 0,
  LinearObjectmarking_None = 1,
  LinearObjectmarking_SolidLine = 2,
  LinearObjectmarking_DashedLine = 3,
  LinearObjectmarking_DoubleSolidLine = 4,
  LinearObjectmarking_DoubleDashedLine = 5,
  LinearObjectmarking_LeftSolidRightDashed = 6,
  LinearObjectmarking_RightSolidLeftDashed = 7,
  LinearObjectmarking_Virtual = 8
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace LinearObjectmarkingIDT

#endif  // EHREXE_INCLUDE_LINEAROBJECTMARKINGIDT_IMPL_TYPE_LINEAROBJECTMARKINGIDT_H_
