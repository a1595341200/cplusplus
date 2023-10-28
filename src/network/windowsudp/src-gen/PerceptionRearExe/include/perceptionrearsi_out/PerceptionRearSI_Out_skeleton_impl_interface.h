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
/**        \file  PerceptionRearExe/include/perceptionrearsi_out/PerceptionRearSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'PerceptionRearSI_Out'.
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

#ifndef PERCEPTIONREAREXE_INCLUDE_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define PERCEPTIONREAREXE_INCLUDE_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "perceptionrearsi_out/perceptionrearsi_out_common.h"

namespace perceptionrearsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'PerceptionRearSI_Out'
 */
class PerceptionRearSI_OutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  PerceptionRearSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~PerceptionRearSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  PerceptionRearSI_OutSkeletonImplInterface(PerceptionRearSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  PerceptionRearSI_OutSkeletonImplInterface &operator=(PerceptionRearSI_OutSkeletonImplInterface &&) & noexcept = default;

  PerceptionRearSI_OutSkeletonImplInterface(PerceptionRearSI_OutSkeletonImplInterface const &) = delete;

  PerceptionRearSI_OutSkeletonImplInterface &operator=(PerceptionRearSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'PerceptionRear_Bus_LaneInfo'.
   * \details Event sample type: ::PerceptionRearLaneInfoIDT::PerceptionRearLaneInfoIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::PerceptionRearLaneInfoIDT::PerceptionRearLaneInfoIDT>* GetEventManagerPerceptionRear_Bus_LaneInfo() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'PerceptionRear_Bus_CameraStatus'.
   * \details Event sample type: ::RearCamSts1VccIDT::RearCamSts1VccIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::RearCamSts1VccIDT::RearCamSts1VccIDT>* GetEventManagerPerceptionRear_Bus_CameraStatus() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'PerceptionRear_Bus_VisnObj'.
   * \details Event sample type: ::Array_VisObjIDT_20::Array_VisObjIDT_20.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_VisObjIDT_20::Array_VisObjIDT_20>* GetEventManagerPerceptionRear_Bus_VisnObj() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionrearsi_out

#endif  // PERCEPTIONREAREXE_INCLUDE_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_SKELETON_IMPL_INTERFACE_H_

