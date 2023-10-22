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
/**        \file  PerceptionExe/include/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'PerceptionSI_VisnObjOut'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_IMPL_INTERFACE_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "perceptionsi_visnobjout/perceptionsi_visnobjout_common.h"

namespace perceptionsi_visnobjout {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'PerceptionSI_VisnObjOut'
 */
class PerceptionSI_VisnObjOutSkeletonImplInterface {
 public:
  /*!
   * \brief Use default destructor
   */
  virtual ~PerceptionSI_VisnObjOutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_VisnObj'.
   * \details Event sample type: ::VisObjs::VisObjs.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::VisObjs::VisObjs>* GetEventManagerFrntCam_Bus_VisnObj() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsi_visnobjout

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_IMPL_INTERFACE_H_

