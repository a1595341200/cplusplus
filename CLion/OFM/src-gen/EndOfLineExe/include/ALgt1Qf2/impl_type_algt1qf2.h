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
/**        \file  EndOfLineExe/include/ALgt1Qf2/impl_type_algt1qf2.h
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

#ifndef ENDOFLINEEXE_INCLUDE_ALGT1QF2_IMPL_TYPE_ALGT1QF2_H_
#define ENDOFLINEEXE_INCLUDE_ALGT1QF2_IMPL_TYPE_ALGT1QF2_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace ALgt1Qf2 {

/*!
 * \brief Type ALgt1Qf2.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/ALgt1Qf2
 */
enum class ALgt1Qf2 : uint8_t {
  GenQf1Vcc_UndefindDataAccur = 0,
  GenQf1Vcc_TmpUndefdData = 1,
  GenQf1Vcc_DataAccurNotWithinSpcn = 2,
  GenQf1Vcc_AccurData = 3
};

}  // namespace ALgt1Qf2

#endif  // ENDOFLINEEXE_INCLUDE_ALGT1QF2_IMPL_TYPE_ALGT1QF2_H_