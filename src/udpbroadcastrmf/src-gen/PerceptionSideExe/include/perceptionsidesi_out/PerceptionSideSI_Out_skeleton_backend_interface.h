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
/**        \file  PerceptionSideExe/include/perceptionsidesi_out/PerceptionSideSI_Out_skeleton_backend_interface.h
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "perceptionsidesi_out/PerceptionSideSI_Out_datatypes.h"

namespace perceptionsidesi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'PerceptionSideSI_Out'.
 * \remark generated
 */
class PerceptionSideSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  PerceptionSideSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~PerceptionSideSI_OutSkeletonBackendInterface() noexcept = default;

  PerceptionSideSI_OutSkeletonBackendInterface(PerceptionSideSI_OutSkeletonBackendInterface const &) = delete;

  PerceptionSideSI_OutSkeletonBackendInterface(PerceptionSideSI_OutSkeletonBackendInterface &&) = delete;

  PerceptionSideSI_OutSkeletonBackendInterface &operator=(PerceptionSideSI_OutSkeletonBackendInterface const &) & = delete;

  PerceptionSideSI_OutSkeletonBackendInterface &operator=(PerceptionSideSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsidesi_out

#endif  // PERCEPTIONSIDEEXE_INCLUDE_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_SKELETON_BACKEND_INTERFACE_H_

