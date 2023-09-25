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
/**        \file  PerceptionSideExe/include/WhlDirRotlFrntRi/impl_type_whldirrotlfrntri.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_WHLDIRROTLFRNTRI_IMPL_TYPE_WHLDIRROTLFRNTRI_H_
#define PERCEPTIONSIDEEXE_INCLUDE_WHLDIRROTLFRNTRI_IMPL_TYPE_WHLDIRROTLFRNTRI_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace WhlDirRotlFrntRi {

/*!
 * \brief Type WhlDirRotlFrntRi.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/WhlDirRotlFrntRi
 */
enum class WhlDirRotlFrntRi : uint8_t {
  WhlRotlDirStd1Vcc_Undefd = 0,
  WhlRotlDirStd1Vcc_StandStill = 1,
  WhlRotlDirStd1Vcc_Fwd = 2,
  WhlRotlDirStd1Vcc_Backw = 3
};

}  // namespace WhlDirRotlFrntRi

#endif  // PERCEPTIONSIDEEXE_INCLUDE_WHLDIRROTLFRNTRI_IMPL_TYPE_WHLDIRROTLFRNTRI_H_
