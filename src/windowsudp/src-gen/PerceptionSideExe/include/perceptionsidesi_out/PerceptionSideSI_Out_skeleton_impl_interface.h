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
/**        \file  PerceptionSideExe/include/perceptionsidesi_out/PerceptionSideSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'PerceptionSideSI_Out'.
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IMPL_INTERFACE_H_
#define PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "perceptionsidesi_out/perceptionsidesi_out_common.h"

namespace perceptionsidesi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'PerceptionSideSI_Out'
 */
class PerceptionSideSI_OutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  PerceptionSideSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~PerceptionSideSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  PerceptionSideSI_OutSkeletonImplInterface(PerceptionSideSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  PerceptionSideSI_OutSkeletonImplInterface &operator=(PerceptionSideSI_OutSkeletonImplInterface &&) & noexcept = default;

  PerceptionSideSI_OutSkeletonImplInterface(PerceptionSideSI_OutSkeletonImplInterface const &) = delete;

  PerceptionSideSI_OutSkeletonImplInterface &operator=(PerceptionSideSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'FRCam_Bus_VisnObj'.
   * \details Event sample type: ::Array_VisObjIDT_20::Array_VisObjIDT_20.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_VisObjIDT_20::Array_VisObjIDT_20>* GetEventManagerFRCam_Bus_VisnObj() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FLCam_Bus_VisnObj'.
   * \details Event sample type: ::Array_VisObjIDT_20::Array_VisObjIDT_20.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_VisObjIDT_20::Array_VisObjIDT_20>* GetEventManagerFLCam_Bus_VisnObj() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RLCam_Bus_VisnObj'.
   * \details Event sample type: ::Array_VisObjIDT_20::Array_VisObjIDT_20.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_VisObjIDT_20::Array_VisObjIDT_20>* GetEventManagerRLCam_Bus_VisnObj() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'RRCam_Bus_VisnObj'.
   * \details Event sample type: ::Array_VisObjIDT_20::Array_VisObjIDT_20.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_VisObjIDT_20::Array_VisObjIDT_20>* GetEventManagerRRCam_Bus_VisnObj() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'PerceptionSide_Bus_CameraStatus'.
   * \details Event sample type: ::CameraStatusIDT::CameraStatusIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::CameraStatusIDT::CameraStatusIDT>* GetEventManagerPerceptionSide_Bus_CameraStatus() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsidesi_out

#endif  // PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_IMPL_INTERFACE_H_

