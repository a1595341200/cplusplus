
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
/**        \file  TrafficLightAttentionExe/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'ObjectFusionModelSI_Out'
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

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_TYPES_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/handle_type.h"
#include "objectfusionmodelsi_out/objectfusionmodelsi_out_common.h"

namespace objectfusionmodelsi_out {

namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'ObjectFusionModelSI_Out'.
 * \trace SPEC-4980259
 */
class ObjectFusionModelSI_OutHandleType final : public ::amsr::socal::internal::HandleType {
  public:
  /*!
   * \brief Inherit constructor.
   */
  using HandleType::HandleType;
};

namespace methods {

}  // namespace methods

namespace fields {

}  // namespace fields
}  // namespace internal

}  //  namespace objectfusionmodelsi_out

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_TYPES_H_

