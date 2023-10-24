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
/**        \file  RoadModelFusionExe/include/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'RoadModelFusionSI_Out'.
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "roadmodelfusionsi_out/roadmodelfusionsi_out_common.h"

namespace roadmodelfusionsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'RoadModelFusionSI_Out'
 */
class RoadModelFusionSI_OutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  RoadModelFusionSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~RoadModelFusionSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  RoadModelFusionSI_OutSkeletonImplInterface(RoadModelFusionSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  RoadModelFusionSI_OutSkeletonImplInterface &operator=(RoadModelFusionSI_OutSkeletonImplInterface &&) & noexcept = default;

  RoadModelFusionSI_OutSkeletonImplInterface(RoadModelFusionSI_OutSkeletonImplInterface const &) = delete;

  RoadModelFusionSI_OutSkeletonImplInterface &operator=(RoadModelFusionSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_RMFInfo'.
   * \details Event sample type: ::RMFInfoIDT::RMFInfoIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::RMFInfoIDT::RMFInfoIDT>* GetEventManagerRMF_Bus_RMFInfo() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_MapInfo'.
   * \details Event sample type: ::RMFMapInfoIDT::RMFMapInfoIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::RMFMapInfoIDT::RMFMapInfoIDT>* GetEventManagerRMF_Bus_MapInfo() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_VectorMapInfo'.
   * \details Event sample type: ::VectorMapInfoIDT::VectorMapInfoIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::VectorMapInfoIDT::VectorMapInfoIDT>* GetEventManagerRMF_Bus_VectorMapInfo() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RMF_Bus_Position'.
   * \details Event sample type: ::PositionIDT::PositionIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::PositionIDT::PositionIDT>* GetEventManagerRMF_Bus_Position() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace roadmodelfusionsi_out

#endif  // ROADMODELFUSIONEXE_INCLUDE_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

