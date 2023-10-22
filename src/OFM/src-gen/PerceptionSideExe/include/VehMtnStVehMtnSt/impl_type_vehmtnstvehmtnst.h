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
/**        \file  PerceptionSideExe/include/VehMtnStVehMtnSt/impl_type_vehmtnstvehmtnst.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_VEHMTNSTVEHMTNST_IMPL_TYPE_VEHMTNSTVEHMTNST_H_
#define PERCEPTIONSIDEEXE_INCLUDE_VEHMTNSTVEHMTNST_IMPL_TYPE_VEHMTNSTVEHMTNST_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace VehMtnStVehMtnSt {

/*!
 * \brief Type VehMtnStVehMtnSt.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehMtnStVehMtnSt
 */
enum class VehMtnStVehMtnSt : uint8_t {
  VehMtnStVehMtnSt_Ukwn = 0,
  VehMtnStVehMtnSt_StandStillVal1 = 1,
  VehMtnStVehMtnSt_StandStillVal2 = 2,
  VehMtnStVehMtnSt_StandStillVal3 = 3,
  VehMtnStVehMtnSt_RollgFwdVal1 = 4,
  VehMtnStVehMtnSt_RollgFwdVal2 = 5,
  VehMtnStVehMtnSt_RollgBackwVal1 = 6,
  VehMtnStVehMtnSt_RollgBackwVal2 = 7
};

}  // namespace VehMtnStVehMtnSt

#endif  // PERCEPTIONSIDEEXE_INCLUDE_VEHMTNSTVEHMTNST_IMPL_TYPE_VEHMTNSTVEHMTNST_H_
