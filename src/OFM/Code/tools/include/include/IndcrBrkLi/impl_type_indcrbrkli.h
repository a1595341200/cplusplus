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
/**        \file  ObjectFusionModelExe/include/IndcrBrkLi/impl_type_indcrbrkli.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_INDCRBRKLI_IMPL_TYPE_INDCRBRKLI_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_INDCRBRKLI_IMPL_TYPE_INDCRBRKLI_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace IndcrBrkLi {

/*!
 * \brief Type IndcrBrkLi.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/IndcrBrkLi
 */
enum class IndcrBrkLi : uint8_t {
  LiSts1Vcc_Ukwn = 0,
  LiSts1Vcc_Off = 1,
  LiSts1Vcc_On = 2
};

}  // namespace IndcrBrkLi

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_INDCRBRKLI_IMPL_TYPE_INDCRBRKLI_H_
