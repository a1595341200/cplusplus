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
/**        \file  PerceptionExe/include/perceptionsi_out/PerceptionSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'PerceptionSI_Out'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "perceptionsi_out/perceptionsi_out_common.h"

namespace perceptionsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'PerceptionSI_Out'
 */
class PerceptionSI_OutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  PerceptionSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~PerceptionSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  PerceptionSI_OutSkeletonImplInterface(PerceptionSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  PerceptionSI_OutSkeletonImplInterface &operator=(PerceptionSI_OutSkeletonImplInterface &&) & noexcept = default;

  PerceptionSI_OutSkeletonImplInterface(PerceptionSI_OutSkeletonImplInterface const &) = delete;

  PerceptionSI_OutSkeletonImplInterface &operator=(PerceptionSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'Perception_Bus_LaneInfo'.
   * \details Event sample type: ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT>* GetEventManagerPerception_Bus_LaneInfo() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'Perception_Bus_FrntCamInfo'.
   * \details Event sample type: ::FrntCamInfoIDT::FrntCamInfoIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::FrntCamInfoIDT::FrntCamInfoIDT>* GetEventManagerPerception_Bus_FrntCamInfo() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_TrafficInfo'.
   * \details Event sample type: ::TrafficInfoIDT::TrafficInfoIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::TrafficInfoIDT::TrafficInfoIDT>* GetEventManagerFrntCam_Bus_TrafficInfo() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_TrfcLi'.
   * \details Event sample type: ::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_TrfcLi1VccIDT_8::Array_TrfcLi1VccIDT_8>* GetEventManagerFrntCam_Bus_TrfcLi() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_LineSignGroup'.
   * \details Event sample type: ::LineSignGroupIDT::LineSignGroupIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::LineSignGroupIDT::LineSignGroupIDT>* GetEventManagerFrntCam_Bus_LineSignGroup() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_ExtInfo'.
   * \details Event sample type: ::ExtInfoIDT::ExtInfoIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::ExtInfoIDT::ExtInfoIDT>* GetEventManagerFrntCam_Bus_ExtInfo() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsi_out

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

