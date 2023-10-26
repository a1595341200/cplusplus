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
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
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

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type GgaData.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /AUTOSAR/RTK/GgaData
 */
using GgaData = std::array<
  std::uint8_t,
  64
>;
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace ValidationKey
}  // namespace SOMEIP

#endif  // RTKEXE_INCLUDE_SOMEIP_VALIDATIONKEY_IMPL_TYPE_GGADATA_H_
