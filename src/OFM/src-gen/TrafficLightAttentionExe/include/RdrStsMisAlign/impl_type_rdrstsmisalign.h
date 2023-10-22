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
/**        \file  TrafficLightAttentionExe/include/RdrStsMisAlign/impl_type_rdrstsmisalign.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_RDRSTSMISALIGN_IMPL_TYPE_RDRSTSMISALIGN_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_RDRSTSMISALIGN_IMPL_TYPE_RDRSTSMISALIGN_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace RdrStsMisAlign {

/*!
 * \brief Type RdrStsMisAlign.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/RdrStsMisAlign
 */
enum class RdrStsMisAlign : uint8_t {
  MisAlign1Vcc_CalibrationNotStart = 0,
  MisAlign1Vcc_SuccessfullyCalibratedInFactoryOrAftersales = 1,
  MisAlign1Vcc_SuccessfullyAutoCalibrated = 2,
  MisAlign1Vcc_StaticCalibrationFail = 3,
  MisAlign1Vcc_CanNotBeCalibratedStaticallyCauseOtherReason = 4,
  MisAlign1Vcc_CauseMisalignDegIsLarThanThresholdOrOtherReason = 5,
  MisAlign1Vcc_DynamicCalibrationFailInFactoryOrAftersales = 6,
  MisAlign1Vcc_CanNotBeCalibratedDynamicallyCauseOtherReason = 7
};

}  // namespace RdrStsMisAlign

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_RDRSTSMISALIGN_IMPL_TYPE_RDRSTSMISALIGN_H_
