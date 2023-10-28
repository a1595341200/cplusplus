
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
/**        \file  RtkExe/include/rtk_r/Rtk_Receive_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'Rtk_Receive'
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

#ifndef RTKEXE_INCLUDE_RTK_R_RTK_RECEIVE_TYPES_H_
#define RTKEXE_INCLUDE_RTK_R_RTK_RECEIVE_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/handle_type.h"
#include "rtk_r/Rtk_Receive_datatypes.h"
#include "rtk_r/rtk_receive_common.h"

namespace rtk_r {
namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'Rtk_Receive'.
 * \trace SPEC-4980259
 */
class Rtk_ReceiveHandleType final : public ::amsr::socal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

}  // namespace internal
}  //  namespace rtk_r

#endif  // RTKEXE_INCLUDE_RTK_R_RTK_RECEIVE_TYPES_H_

