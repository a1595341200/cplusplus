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
/**        \file  TrafficLightAttentionExe/include/WhlDirRotlFrntLe/impl_type_whldirrotlfrntle.h
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_WHLDIRROTLFRNTLE_IMPL_TYPE_WHLDIRROTLFRNTLE_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_WHLDIRROTLFRNTLE_IMPL_TYPE_WHLDIRROTLFRNTLE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace WhlDirRotlFrntLe {

/*!
 * \brief Type WhlDirRotlFrntLe.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/WhlDirRotlFrntLe
 */
enum class WhlDirRotlFrntLe : uint8_t {
  WhlRotlDirStd1Vcc_Undefd = 0,
  WhlRotlDirStd1Vcc_StandStill = 1,
  WhlRotlDirStd1Vcc_Fwd = 2,
  WhlRotlDirStd1Vcc_Backw = 3
};

}  // namespace WhlDirRotlFrntLe

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_WHLDIRROTLFRNTLE_IMPL_TYPE_WHLDIRROTLFRNTLE_H_
