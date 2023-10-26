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
/**        \file  PerceptionSideExe/include/IndcrTypExt1VccIDT/impl_type_indcrtypext1vccidt.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_INDCRTYPEXT1VCCIDT_IMPL_TYPE_INDCRTYPEXT1VCCIDT_H_
#define PERCEPTIONSIDEEXE_INCLUDE_INDCRTYPEXT1VCCIDT_IMPL_TYPE_INDCRTYPEXT1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace IndcrTypExt1VccIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type IndcrTypExt1VccIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/IndcrTypExt1VccIDT
 */
enum class IndcrTypExt1VccIDT : uint8_t {
  IndcrTypExt1Vcc_Off = 0,
  IndcrTypExt1Vcc_Le = 1,
  IndcrTypExt1Vcc_Ri = 2
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace IndcrTypExt1VccIDT

#endif  // PERCEPTIONSIDEEXE_INCLUDE_INDCRTYPEXT1VCCIDT_IMPL_TYPE_INDCRTYPEXT1VCCIDT_H_
