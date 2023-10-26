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
 *         Commit ID: 876c9d7506d269a4ba294a46ad3c3ba9b81940a0
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
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  PerceptionSI_VisnObjOutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~PerceptionSI_VisnObjOutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  PerceptionSI_VisnObjOutSkeletonImplInterface(PerceptionSI_VisnObjOutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  PerceptionSI_VisnObjOutSkeletonImplInterface &operator=(PerceptionSI_VisnObjOutSkeletonImplInterface &&) & noexcept = default;

  PerceptionSI_VisnObjOutSkeletonImplInterface(PerceptionSI_VisnObjOutSkeletonImplInterface const &) = delete;

  PerceptionSI_VisnObjOutSkeletonImplInterface &operator=(PerceptionSI_VisnObjOutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_VisnObj'.
   * \details Event sample type: ::Array_FrntCamVisObjIDT_25::Array_FrntCamVisObjIDT_25.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_FrntCamVisObjIDT_25::Array_FrntCamVisObjIDT_25>* GetEventManagerFrntCam_Bus_VisnObj() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'FrntCam_Bus_UnfilteredObj'.
   * \details Event sample type: ::Array_UnfilteredObjIDT_30::Array_UnfilteredObjIDT_30.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_UnfilteredObjIDT_30::Array_UnfilteredObjIDT_30>* GetEventManagerFrntCam_Bus_UnfilteredObj() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsi_visnobjout

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_IMPL_INTERFACE_H_

