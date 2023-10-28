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
/**        \file  PerceptionExe/include/perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'PerceptionSI_FreeSpaceOut'.
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

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_SKELETON_IMPL_INTERFACE_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "perceptionsi_freespaceout/perceptionsi_freespaceout_common.h"

namespace perceptionsi_freespaceout {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'PerceptionSI_FreeSpaceOut'
 */
class PerceptionSI_FreeSpaceOutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  PerceptionSI_FreeSpaceOutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~PerceptionSI_FreeSpaceOutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  PerceptionSI_FreeSpaceOutSkeletonImplInterface(PerceptionSI_FreeSpaceOutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  PerceptionSI_FreeSpaceOutSkeletonImplInterface &operator=(PerceptionSI_FreeSpaceOutSkeletonImplInterface &&) & noexcept = default;

  PerceptionSI_FreeSpaceOutSkeletonImplInterface(PerceptionSI_FreeSpaceOutSkeletonImplInterface const &) = delete;

  PerceptionSI_FreeSpaceOutSkeletonImplInterface &operator=(PerceptionSI_FreeSpaceOutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'FusedCam_Bus_FreeSpace'.
   * \details Event sample type: ::Array_FreeSpaceIDT_135::Array_FreeSpaceIDT_135.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::Array_FreeSpaceIDT_135::Array_FreeSpaceIDT_135>* GetEventManagerFusedCam_Bus_FreeSpace() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsi_freespaceout

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_SKELETON_IMPL_INTERFACE_H_

