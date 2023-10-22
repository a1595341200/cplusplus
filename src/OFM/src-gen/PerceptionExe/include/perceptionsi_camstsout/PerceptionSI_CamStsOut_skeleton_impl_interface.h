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
/**        \file  PerceptionExe/include/perceptionsi_camstsout/PerceptionSI_CamStsOut_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'PerceptionSI_CamStsOut'.
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

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_SKELETON_IMPL_INTERFACE_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "perceptionsi_camstsout/perceptionsi_camstsout_common.h"

namespace perceptionsi_camstsout {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'PerceptionSI_CamStsOut'
 */
class PerceptionSI_CamStsOutSkeletonImplInterface {
 public:
  /*!
   * \brief Use default destructor
   */
  virtual ~PerceptionSI_CamStsOutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_CamSts'.
   * \details Event sample type: ::CamSts1Vcc::CamSts1Vcc.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::CamSts1Vcc::CamSts1Vcc>* GetEventManagerFrntCam_Bus_CamSts() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsi_camstsout

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_CAMSTSOUT_PERCEPTIONSI_CAMSTSOUT_SKELETON_IMPL_INTERFACE_H_

