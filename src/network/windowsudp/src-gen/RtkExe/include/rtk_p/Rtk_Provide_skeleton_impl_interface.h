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
/**        \file  RtkExe/include/rtk_p/Rtk_Provide_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'Rtk_Provide'.
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

#ifndef RTKEXE_INCLUDE_RTK_P_RTK_PROVIDE_SKELETON_IMPL_INTERFACE_H_
#define RTKEXE_INCLUDE_RTK_P_RTK_PROVIDE_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "rtk_p/rtk_provide_common.h"

namespace rtk_p {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'Rtk_Provide'
 */
class Rtk_ProvideSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  Rtk_ProvideSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~Rtk_ProvideSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  Rtk_ProvideSkeletonImplInterface(Rtk_ProvideSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  Rtk_ProvideSkeletonImplInterface &operator=(Rtk_ProvideSkeletonImplInterface &&) & noexcept = default;

  Rtk_ProvideSkeletonImplInterface(Rtk_ProvideSkeletonImplInterface const &) = delete;

  Rtk_ProvideSkeletonImplInterface &operator=(Rtk_ProvideSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'GgaData_provide'.
   * \details Event sample type: ::SOMEIP::ValidationKey::GgaData.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::SOMEIP::ValidationKey::GgaData>* GetEventManagerGgaData_provide() noexcept = 0;

  /*!
   * \brief Get the event manager object for the service event 'ErrorCode'.
   * \details Event sample type: ::SOMEIP::ValidationKey::RtkErrorCode.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::SOMEIP::ValidationKey::RtkErrorCode>* GetEventManagerErrorCode() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace rtk_p

#endif  // RTKEXE_INCLUDE_RTK_P_RTK_PROVIDE_SKELETON_IMPL_INTERFACE_H_

