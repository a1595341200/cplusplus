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
/**        \file  PerceptionSideExe/include/IndcrTypExtReq/impl_type_indcrtypextreq.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_INDCRTYPEXTREQ_IMPL_TYPE_INDCRTYPEXTREQ_H_
#define PERCEPTIONSIDEEXE_INCLUDE_INDCRTYPEXTREQ_IMPL_TYPE_INDCRTYPEXTREQ_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>

namespace IndcrTypExtReq {

/*!
 * \brief Type IndcrTypExtReq.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/IndcrTypExtReq
 */
enum class IndcrTypExtReq : uint8_t {
  IndcrTypExt1Vcc_Off = 0,
  IndcrTypExt1Vcc_Le = 1,
  IndcrTypExt1Vcc_Ri = 2
};

}  // namespace IndcrTypExtReq

#endif  // PERCEPTIONSIDEEXE_INCLUDE_INDCRTYPEXTREQ_IMPL_TYPE_INDCRTYPEXTREQ_H_
