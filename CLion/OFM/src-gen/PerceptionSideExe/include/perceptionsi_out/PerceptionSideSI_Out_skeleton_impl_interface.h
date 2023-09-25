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
/**        \file  PerceptionSideExe/include/perceptionsi_out/PerceptionSideSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'PerceptionSideSI_Out'.
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IMPL_INTERFACE_H_
#define PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "perceptionsi_out/perceptionsidesi_out_common.h"

namespace perceptionsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'PerceptionSideSI_Out'
 */
class PerceptionSideSI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Use default destructor
   */
  virtual ~PerceptionSideSI_OutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'FLCam_Bus_VisnObj'.
   * \details Event sample type: ::VisObjs::VisObjs.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::VisObjs::VisObjs>* GetEventManagerFLCam_Bus_VisnObj() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FRCam_Bus_VisnObj'.
   * \details Event sample type: ::VisObjs::VisObjs.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::VisObjs::VisObjs>* GetEventManagerFRCam_Bus_VisnObj() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RLCam_Bus_VisnObj'.
   * \details Event sample type: ::VisObjs::VisObjs.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::VisObjs::VisObjs>* GetEventManagerRLCam_Bus_VisnObj() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RRCam_Bus_VisnObj'.
   * \details Event sample type: ::VisObjs::VisObjs.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::VisObjs::VisObjs>* GetEventManagerRRCam_Bus_VisnObj() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FLCam_Bus_CamSts'.
   * \details Event sample type: ::CamSts1Vcc::CamSts1Vcc.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::CamSts1Vcc::CamSts1Vcc>* GetEventManagerFLCam_Bus_CamSts() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FRCam_Bus_CamSts'.
   * \details Event sample type: ::CamSts1Vcc::CamSts1Vcc.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::CamSts1Vcc::CamSts1Vcc>* GetEventManagerFRCam_Bus_CamSts() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RLCam_Bus_CamSts'.
   * \details Event sample type: ::CamSts1Vcc::CamSts1Vcc.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::CamSts1Vcc::CamSts1Vcc>* GetEventManagerRLCam_Bus_CamSts() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RRCam_Bus_CamSts'.
   * \details Event sample type: ::CamSts1Vcc::CamSts1Vcc.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::CamSts1Vcc::CamSts1Vcc>* GetEventManagerRRCam_Bus_CamSts() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsi_out

#endif  // PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IMPL_INTERFACE_H_

