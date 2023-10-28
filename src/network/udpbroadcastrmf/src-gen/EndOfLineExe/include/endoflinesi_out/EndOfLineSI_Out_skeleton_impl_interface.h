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
/**        \file  EndOfLineExe/include/endoflinesi_out/EndOfLineSI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'EndOfLineSI_Out'.
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

#ifndef ENDOFLINEEXE_INCLUDE_ENDOFLINESI_OUT_ENDOFLINESI_OUT_SKELETON_IMPL_INTERFACE_H_
#define ENDOFLINEEXE_INCLUDE_ENDOFLINESI_OUT_ENDOFLINESI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "endoflinesi_out/endoflinesi_out_common.h"

namespace endoflinesi_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'EndOfLineSI_Out'
 */
class EndOfLineSI_OutSkeletonImplInterface {
 public:
 /*!
   * \brief Creates a skeleton impl instance
   * \pre -
   * \context App
   */
  EndOfLineSI_OutSkeletonImplInterface() noexcept = default;

  /*!
   * \brief Use default destructor
   */
  virtual ~EndOfLineSI_OutSkeletonImplInterface() noexcept = default;

 protected:

  /*!
   * \brief Use default move constructor
   * \pre -
   * \context App
   */
  EndOfLineSI_OutSkeletonImplInterface(EndOfLineSI_OutSkeletonImplInterface &&) noexcept = default;

  /*!
   * \brief Use default move assignment
   * \pre -
   * \context App
   */
  EndOfLineSI_OutSkeletonImplInterface &operator=(EndOfLineSI_OutSkeletonImplInterface &&) & noexcept = default;

  EndOfLineSI_OutSkeletonImplInterface(EndOfLineSI_OutSkeletonImplInterface const &) = delete;

  EndOfLineSI_OutSkeletonImplInterface &operator=(EndOfLineSI_OutSkeletonImplInterface const &) & = delete;

 public:

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'EOL_Bus_CamCalibStatus'.
   * \details Event sample type: ::TCameraCalibInfoIDT::TCameraCalibInfoIDT.
              For each SkeletonEvent a distinct Skeleton Event Manager instance shall be created to ensure thread safety.
   * \return A binding-specific event management object/interface supporting event transmission (the returned pointer should not be a null pointer).
   * \pre -
   * \context    App
   * \threadsafe TRUE for different impl instances, FALSE otherwise.
   * \reentrant  TRUE for different impl instances, FALSE otherwise.
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::TCameraCalibInfoIDT::TCameraCalibInfoIDT>* GetEventManagerEOL_Bus_CamCalibStatus() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace endoflinesi_out

#endif  // ENDOFLINEEXE_INCLUDE_ENDOFLINESI_OUT_ENDOFLINESI_OUT_SKELETON_IMPL_INTERFACE_H_

