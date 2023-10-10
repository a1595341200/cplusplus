
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
/**        \file  ObjectFusionModelExe/include/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_types.h
 *        \brief  Input and output structures for methods, fields and application errors of service 'PerceptionSI_VisnObjOut'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_TYPES_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_TYPES_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/handle_type.h"
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_common.h"

namespace perceptionsi_visnobjout {

namespace internal {

/*!
 * \brief Proxy HandleType for the Service 'PerceptionSI_VisnObjOut'.
 * \trace SPEC-4980259
 */
class PerceptionSI_VisnObjOutHandleType final : public ::amsr::socal::internal::HandleType {
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

}  //  namespace perceptionsi_visnobjout

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_TYPES_H_

