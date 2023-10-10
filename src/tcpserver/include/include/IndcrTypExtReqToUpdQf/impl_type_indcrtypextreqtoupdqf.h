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
/**        \file  ObjectFusionModelExe/include/IndcrTypExtReqToUpdQf/impl_type_indcrtypextreqtoupdqf.h
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_INDCRTYPEXTREQTOUPDQF_IMPL_TYPE_INDCRTYPEXTREQTOUPDQF_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_INDCRTYPEXTREQTOUPDQF_IMPL_TYPE_INDCRTYPEXTREQTOUPDQF_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace IndcrTypExtReqToUpdQf {

/*!
 * \brief Type IndcrTypExtReqToUpdQf.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/IndcrTypExtReqToUpdQf
 */
enum class IndcrTypExtReqToUpdQf : uint8_t {
  Qf1Vcc_DevOfDataUndefd = 0,
  Qf1Vcc_DataTmpUndefdAndEvlnInProgs = 1,
  Qf1Vcc_DevOfDataNotWithinRngAllwd = 2,
  Qf1Vcc_DataCalcdWithDevDefd = 3
};

}  // namespace IndcrTypExtReqToUpdQf

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_INDCRTYPEXTREQTOUPDQF_IMPL_TYPE_INDCRTYPEXTREQTOUPDQF_H_
