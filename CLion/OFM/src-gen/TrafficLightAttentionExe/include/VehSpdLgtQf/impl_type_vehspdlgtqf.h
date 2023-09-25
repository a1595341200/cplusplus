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
/**        \file  TrafficLightAttentionExe/include/VehSpdLgtQf/impl_type_vehspdlgtqf.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_VEHSPDLGTQF_IMPL_TYPE_VEHSPDLGTQF_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_VEHSPDLGTQF_IMPL_TYPE_VEHSPDLGTQF_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace VehSpdLgtQf {

/*!
 * \brief Type VehSpdLgtQf.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/VehSpdLgtQf
 */
enum class VehSpdLgtQf : uint8_t {
  GenQf1Vcc_UndefindDataAccur = 0,
  GenQf1Vcc_TmpUndefdData = 1,
  GenQf1Vcc_DataAccurNotWithinSpcn = 2,
  GenQf1Vcc_AccurData = 3
};

}  // namespace VehSpdLgtQf

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_VEHSPDLGTQF_IMPL_TYPE_VEHSPDLGTQF_H_
