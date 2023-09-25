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
/**        \file  PerceptionRearExe/include/CarModSts1/impl_type_carmodsts1.h
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

#ifndef PERCEPTIONREAREXE_INCLUDE_CARMODSTS1_IMPL_TYPE_CARMODSTS1_H_
#define PERCEPTIONREAREXE_INCLUDE_CARMODSTS1_IMPL_TYPE_CARMODSTS1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace CarModSts1 {

/*!
 * \brief Type CarModSts1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/CarModSts1
 */
enum class CarModSts1 : uint8_t {
  CarModSts11_CarModNorm = 0,
  CarModSts11_CarModTrnsp = 1,
  CarModSts11_CarModFcy = 2,
  CarModSts11_CarModCrash = 3,
  CarModSts11_CarModDyno = 5
};

}  // namespace CarModSts1

#endif  // PERCEPTIONREAREXE_INCLUDE_CARMODSTS1_IMPL_TYPE_CARMODSTS1_H_
