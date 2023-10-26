
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
/**        \file  ObjectFusionModelExe/include/perceptionsi_out/PerceptionSI_Out_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'PerceptionSI_Out'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_TYPES_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/handle_type.h"
#include "perceptionsi_out/PerceptionSI_Out_datatypes.h"
#include "perceptionsi_out/perceptionsi_out_common.h"

namespace perceptionsi_out {
namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'PerceptionSI_Out'.
 * \trace SPEC-4980259
 */
class PerceptionSI_OutHandleType final : public ::amsr::socal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

}  // namespace internal
}  //  namespace perceptionsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_TYPES_H_

