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
/**        \file  EDRExe/include/edrsi_out/EDRSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'EDRSI_Out'.
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

#ifndef EDREXE_INCLUDE_EDRSI_OUT_EDRSI_OUT_SKELETON_IMPL_INTERFACE_H_
#define EDREXE_INCLUDE_EDRSI_OUT_EDRSI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "edrsi_out/edrsi_out_common.h"

namespace edrsi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'EDRSI_Out'
 */
class EDRSI_OutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  EDRSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~EDRSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  EDRSI_OutSkeletonImplInterface(EDRSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  EDRSI_OutSkeletonImplInterface &operator=(EDRSI_OutSkeletonImplInterface &&) & noexcept = default;

  EDRSI_OutSkeletonImplInterface(EDRSI_OutSkeletonImplInterface const &) = delete;

  EDRSI_OutSkeletonImplInterface &operator=(EDRSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'EDR_Bus_EDRInfo'.
   * \details Event sample type: ::s_EDRInfo_tIDT::s_EDRInfo_tIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::s_EDRInfo_tIDT::s_EDRInfo_tIDT>* GetEventManagerEDR_Bus_EDRInfo() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace edrsi_out

#endif  // EDREXE_INCLUDE_EDRSI_OUT_EDRSI_OUT_SKELETON_IMPL_INTERFACE_H_

