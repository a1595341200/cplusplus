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
/**        \file  Soc2LidarExe/include/VehModMngtGlbSafe1CarModSts1/impl_type_vehmodmngtglbsafe1carmodsts1.h
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

#ifndef SOC2LIDAREXE_INCLUDE_VEHMODMNGTGLBSAFE1CARMODSTS1_IMPL_TYPE_VEHMODMNGTGLBSAFE1CARMODSTS1_H_
#define SOC2LIDAREXE_INCLUDE_VEHMODMNGTGLBSAFE1CARMODSTS1_IMPL_TYPE_VEHMODMNGTGLBSAFE1CARMODSTS1_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace VehModMngtGlbSafe1CarModSts1 {

/*!
 * \brief Type VehModMngtGlbSafe1CarModSts1.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehModMngtGlbSafe1CarModSts1
 */
enum class VehModMngtGlbSafe1CarModSts1 : uint8_t {
  CarModSts11_CarModNorm = 0,
  CarModSts11_CarModTrnsp = 1,
  CarModSts11_CarModFcy = 2,
  CarModSts11_CarModCrash = 3,
  CarModSts11_CarModDyno = 5
};

}  // namespace VehModMngtGlbSafe1CarModSts1

#endif  // SOC2LIDAREXE_INCLUDE_VEHMODMNGTGLBSAFE1CARMODSTS1_IMPL_TYPE_VEHMODMNGTGLBSAFE1CARMODSTS1_H_
