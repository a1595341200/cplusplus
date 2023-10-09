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
/**        \file  Soc2LidarExe/include/VehModMngtGlbSafe1UsgModSts/impl_type_vehmodmngtglbsafe1usgmodsts.h
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

#ifndef SOC2LIDAREXE_INCLUDE_VEHMODMNGTGLBSAFE1USGMODSTS_IMPL_TYPE_VEHMODMNGTGLBSAFE1USGMODSTS_H_
#define SOC2LIDAREXE_INCLUDE_VEHMODMNGTGLBSAFE1USGMODSTS_IMPL_TYPE_VEHMODMNGTGLBSAFE1USGMODSTS_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace VehModMngtGlbSafe1UsgModSts {

/*!
 * \brief Type VehModMngtGlbSafe1UsgModSts.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehModMngtGlbSafe1UsgModSts
 */
enum class VehModMngtGlbSafe1UsgModSts : uint8_t {
  UsgModSts1Vcc_UsgModAbdnd = 0,
  UsgModSts1Vcc_UsgModInActv = 1,
  UsgModSts1Vcc_UsgModCnvinc = 2,
  UsgModSts1Vcc_UsgModActv = 11,
  UsgModSts1Vcc_UsgModDrvg = 13
};

}  // namespace VehModMngtGlbSafe1UsgModSts

#endif  // SOC2LIDAREXE_INCLUDE_VEHMODMNGTGLBSAFE1USGMODSTS_IMPL_TYPE_VEHMODMNGTGLBSAFE1USGMODSTS_H_