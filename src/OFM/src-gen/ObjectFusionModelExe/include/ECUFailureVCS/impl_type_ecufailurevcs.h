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
/**        \file  ObjectFusionModelExe/include/ECUFailureVCS/impl_type_ecufailurevcs.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_ECUFAILUREVCS_IMPL_TYPE_ECUFAILUREVCS_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_ECUFAILUREVCS_IMPL_TYPE_ECUFAILUREVCS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ECUFailureVCS {

/*!
 * \brief Type ECUFailureVCS.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ECUFailureVCS
 */
enum class ECUFailureVCS : uint8_t {
  FailrNoFailr1Vcc_NoFailr = 0,
  FailrNoFailr1Vcc_Failr = 1
};

}  // namespace ECUFailureVCS

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_ECUFAILUREVCS_IMPL_TYPE_ECUFAILUREVCS_H_
