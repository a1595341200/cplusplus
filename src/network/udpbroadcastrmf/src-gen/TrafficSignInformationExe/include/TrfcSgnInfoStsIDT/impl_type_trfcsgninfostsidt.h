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
/**        \file  TrafficSignInformationExe/include/TrfcSgnInfoStsIDT/impl_type_trfcsgninfostsidt.h
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

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCSGNINFOSTSIDT_IMPL_TYPE_TRFCSGNINFOSTSIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCSGNINFOSTSIDT_IMPL_TYPE_TRFCSGNINFOSTSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace TrfcSgnInfoStsIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
/*!
 * \brief Type TrfcSgnInfoStsIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/TrfcSgnInfoStsIDT
 */
enum class TrfcSgnInfoStsIDT : uint8_t {
  TrfcSgnInfoSts_TSIUnknown = 0,
  TrfcSgnInfoSts_TSIOff = 1,
  TrfcSgnInfoSts_TSIOn_fusion = 2,
  TrfcSgnInfoSts_TSIOn_visiononlymode = 3,
  TrfcSgnInfoSts_TSIOn_navigationonlymode = 4,
  TrfcSgnInfoSts_TSIUnavailable = 5,
  TrfcSgnInfoSts_TSIServicerequired = 6,
  TrfcSgnInfoSts_Reserved = 7
};
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace TrfcSgnInfoStsIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_TRFCSGNINFOSTSIDT_IMPL_TYPE_TRFCSGNINFOSTSIDT_H_
