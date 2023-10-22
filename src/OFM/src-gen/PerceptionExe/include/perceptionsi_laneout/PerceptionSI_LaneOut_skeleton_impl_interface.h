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
/**        \file  PerceptionExe/include/perceptionsi_laneout/PerceptionSI_LaneOut_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'PerceptionSI_LaneOut'.
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

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_IMPL_INTERFACE_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "perceptionsi_laneout/perceptionsi_laneout_common.h"

namespace perceptionsi_laneout {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'PerceptionSI_LaneOut'
 */
class PerceptionSI_LaneOutSkeletonImplInterface {
 public:
  /*!
   * \brief Use default destructor
   */
  virtual ~PerceptionSI_LaneOutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrLe'.
   * \details Event sample type: ::LaneMkrCam1Le::LaneMkrCam1Le.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LaneMkrCam1Le::LaneMkrCam1Le>* GetEventManagerFusedCam_Bus_LaneMkrLe() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrRi'.
   * \details Event sample type: ::LaneMkrCam1Ri::LaneMkrCam1Ri.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LaneMkrCam1Ri::LaneMkrCam1Ri>* GetEventManagerFusedCam_Bus_LaneMkrRi() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_RoadEdgeLe'.
   * \details Event sample type: ::RoadEdge1VccLe::RoadEdge1VccLe.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::RoadEdge1VccLe::RoadEdge1VccLe>* GetEventManagerFrntCam_Bus_RoadEdgeLe() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_RoadEdgeRi'.
   * \details Event sample type: ::RoadEdge1VccRi::RoadEdge1VccRi.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::RoadEdge1VccRi::RoadEdge1VccRi>* GetEventManagerFrntCam_Bus_RoadEdgeRi() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'Cam_Bus_LaneEvent'.
   * \details Event sample type: ::LaneEvent::LaneEvent.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LaneEvent::LaneEvent>* GetEventManagerCam_Bus_LaneEvent() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'Cam_Bus_LaneEventGroup'.
   * \details Event sample type: ::LaneEventGroups::LaneEventGroups.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LaneEventGroups::LaneEventGroups>* GetEventManagerCam_Bus_LaneEventGroup() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'Cam_Bus_LaneMkrTemp'.
   * \details Event sample type: ::LaneMkrTempCam1Vcc::LaneMkrTempCam1Vcc.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LaneMkrTempCam1Vcc::LaneMkrTempCam1Vcc>* GetEventManagerCam_Bus_LaneMkrTemp() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrSecClsLe'.
   * \details Event sample type: ::LaneMkrCam1SecClsLe::LaneMkrCam1SecClsLe.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LaneMkrCam1SecClsLe::LaneMkrCam1SecClsLe>* GetEventManagerFusedCam_Bus_LaneMkrSecClsLe() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_LaneMkrSecClsRi'.
   * \details Event sample type: ::LaneMkrCam1SecClsRi::LaneMkrCam1SecClsRi.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LaneMkrCam1SecClsRi::LaneMkrCam1SecClsRi>* GetEventManagerFusedCam_Bus_LaneMkrSecClsRi() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsi_laneout

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_LANEOUT_PERCEPTIONSI_LANEOUT_SKELETON_IMPL_INTERFACE_H_

