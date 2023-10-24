
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
/**        \file  LocalizationFusionExe/include/perceptionrearsi_out/PerceptionRearSI_Out_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'PerceptionRearSI_Out'
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_TYPES_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/handle_type.h"
#include "perceptionrearsi_out/PerceptionRearSI_Out_datatypes.h"
#include "perceptionrearsi_out/perceptionrearsi_out_common.h"

namespace perceptionrearsi_out {
namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'PerceptionRearSI_Out'.
 * \trace SPEC-4980259
 */
class PerceptionRearSI_OutHandleType final : public ::amsr::socal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

}  // namespace internal
}  //  namespace perceptionrearsi_out

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_TYPES_H_

