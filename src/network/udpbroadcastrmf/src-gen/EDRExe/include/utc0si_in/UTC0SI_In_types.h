
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
/**        \file  EDRExe/include/utc0si_in/UTC0SI_In_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'UTC0SI_In'
 *
 *      \details  Definition of common input-/output structs used for simplified argument / marshalling handling. For all elements like methods, events fields structs with the related in-/output arguments are generated.
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
 *********************************************************************************************************************/

#ifndef EDREXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_TYPES_H_
#define EDREXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/handle_type.h"
#include "utc0si_in/UTC0SI_In_datatypes.h"
#include "utc0si_in/utc0si_in_common.h"

namespace utc0si_in {
namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'UTC0SI_In'.
 * \trace SPEC-4980259
 */
class UTC0SI_InHandleType final : public ::amsr::socal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

}  // namespace internal
}  //  namespace utc0si_in

#endif  // EDREXE_INCLUDE_UTC0SI_IN_UTC0SI_IN_TYPES_H_

