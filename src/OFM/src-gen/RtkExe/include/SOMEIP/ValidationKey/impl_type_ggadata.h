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
/**        \file  RtkExe/include/SOMEIP/ValidationKey/impl_type_ggadata.h
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

#ifndef RTKEXE_INCLUDE_SOMEIP_VALIDATIONKEY_IMPL_TYPE_GGADATA_H_
#define RTKEXE_INCLUDE_SOMEIP_VALIDATIONKEY_IMPL_TYPE_GGADATA_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace SOMEIP {
namespace ValidationKey {

/*!
 * \brief Type GgaData.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /AUTOSAR/RTK/GgaData
 */
using GgaData = std::array<
  std::uint8_t,
  64
>;

}  // namespace ValidationKey
}  // namespace SOMEIP

#endif  // RTKEXE_INCLUDE_SOMEIP_VALIDATIONKEY_IMPL_TYPE_GGADATA_H_
