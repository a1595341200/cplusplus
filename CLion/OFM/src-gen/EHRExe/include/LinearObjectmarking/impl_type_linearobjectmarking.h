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
/**        \file  EHRExe/include/LinearObjectmarking/impl_type_linearobjectmarking.h
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

#ifndef EHREXE_INCLUDE_LINEAROBJECTMARKING_IMPL_TYPE_LINEAROBJECTMARKING_H_
#define EHREXE_INCLUDE_LINEAROBJECTMARKING_IMPL_TYPE_LINEAROBJECTMARKING_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace LinearObjectmarking {

/*!
 * \brief Type LinearObjectmarking.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LinearObjectmarking
 */
enum class LinearObjectmarking : uint8_t {
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

}  // namespace LinearObjectmarking

#endif  // EHREXE_INCLUDE_LINEAROBJECTMARKING_IMPL_TYPE_LINEAROBJECTMARKING_H_
