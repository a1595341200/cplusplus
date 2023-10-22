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
/**        \file  EndOfLineExe/include/ExtrLtgStsFrntFog/impl_type_extrltgstsfrntfog.h
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

#ifndef ENDOFLINEEXE_INCLUDE_EXTRLTGSTSFRNTFOG_IMPL_TYPE_EXTRLTGSTSFRNTFOG_H_
#define ENDOFLINEEXE_INCLUDE_EXTRLTGSTSFRNTFOG_IMPL_TYPE_EXTRLTGSTSFRNTFOG_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ExtrLtgStsFrntFog {

/*!
 * \brief Type ExtrLtgStsFrntFog.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ExtrLtgStsFrntFog
 */
enum class ExtrLtgStsFrntFog : uint8_t {
  DevSts41Vcc_Off = 0,
  DevSts41Vcc_On = 1,
  DevSts41Vcc_Err = 2,
  DevSts41Vcc_Resd = 3
};

}  // namespace ExtrLtgStsFrntFog

#endif  // ENDOFLINEEXE_INCLUDE_EXTRLTGSTSFRNTFOG_IMPL_TYPE_EXTRLTGSTSFRNTFOG_H_