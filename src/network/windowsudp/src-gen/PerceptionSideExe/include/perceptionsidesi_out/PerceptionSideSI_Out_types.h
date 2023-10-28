
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
/**        \file  PerceptionSideExe/include/perceptionsidesi_out/PerceptionSideSI_Out_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'PerceptionSideSI_Out'
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_TYPES_H_
#define PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/handle_type.h"
#include "perceptionsidesi_out/PerceptionSideSI_Out_datatypes.h"
#include "perceptionsidesi_out/perceptionsidesi_out_common.h"

namespace perceptionsidesi_out {
namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'PerceptionSideSI_Out'.
 * \trace SPEC-4980259
 */
class PerceptionSideSI_OutHandleType final : public ::amsr::socal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

}  // namespace internal
}  //  namespace perceptionsidesi_out

#endif  // PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_TYPES_H_

