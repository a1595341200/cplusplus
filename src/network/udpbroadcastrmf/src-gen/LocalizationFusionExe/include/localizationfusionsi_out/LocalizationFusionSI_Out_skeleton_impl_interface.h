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
/**        \file  LocalizationFusionExe/include/localizationfusionsi_out/LocalizationFusionSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'LocalizationFusionSI_Out'.
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

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "localizationfusionsi_out/localizationfusionsi_out_common.h"

namespace localizationfusionsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'LocalizationFusionSI_Out'
 */
class LocalizationFusionSI_OutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  LocalizationFusionSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~LocalizationFusionSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  LocalizationFusionSI_OutSkeletonImplInterface(LocalizationFusionSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  LocalizationFusionSI_OutSkeletonImplInterface &operator=(LocalizationFusionSI_OutSkeletonImplInterface &&) & noexcept = default;

  LocalizationFusionSI_OutSkeletonImplInterface(LocalizationFusionSI_OutSkeletonImplInterface const &) = delete;

  LocalizationFusionSI_OutSkeletonImplInterface &operator=(LocalizationFusionSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'LFM_Bus_MapErrorSts'.
   * \details Event sample type: ::MapErrorStsIDT::MapErrorStsIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::MapErrorStsIDT::MapErrorStsIDT>* GetEventManagerLFM_Bus_MapErrorSts() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace localizationfusionsi_out

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_LOCALIZATIONFUSIONSI_OUT_LOCALIZATIONFUSIONSI_OUT_SKELETON_IMPL_INTERFACE_H_

