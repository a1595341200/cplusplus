
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
/**        \file  dtcAppExe/include/dtc/dtc_Provide_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'dtc_Provide'
 *
 *      \details  Definition of common input-/output structs used for simplified argument / marshalling handling. For all elements like methods, events fields structs with the related in-/output arguments are generated.
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
 *********************************************************************************************************************/

#ifndef DTCAPPEXE_INCLUDE_DTC_DTC_PROVIDE_TYPES_H_
#define DTCAPPEXE_INCLUDE_DTC_DTC_PROVIDE_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/handle_type.h"
#include "dtc/dtc_provide_common.h"

namespace dtc {

namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'dtc_Provide'.
 * \trace SPEC-4980259
 */
class dtc_ProvideHandleType final : public ::amsr::socal::internal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

namespace methods {

/*!
 * \brief A class for service method 'Report' used for type definitions.
 */
class Report final {
 public:
  /*!
   * \brief Struct representing all output arguments of the service method.
   */
  struct Output {
    /*!
     * \brief Reference of output argument 'out_arg' (/AUTOSAR/StdTypes/int32_t)
     */
    std::int32_t out_arg;
  };

  /*!
   * \brief Struct representing all input arguments of the service method.
   */
  struct Input {
    /*!
     * \brief Reference of input argument 'in_arg' (/AUTOSAR/diag/DtcStruct)
     */
    ::dtc::DtcStruct in_arg;
  };
};

}  // namespace methods

namespace fields {

}  // namespace fields
}  // namespace internal

}  //  namespace dtc

#endif  // DTCAPPEXE_INCLUDE_DTC_DTC_PROVIDE_TYPES_H_

