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
/**        \file  PerceptionExe/include/perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_skeleton_backend_interface.h
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

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_SKELETON_BACKEND_INTERFACE_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "perceptionsi_freespaceout/PerceptionSI_FreeSpaceOut_datatypes.h"

namespace perceptionsi_freespaceout {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'PerceptionSI_FreeSpaceOut'.
 * \remark generated
 */
class PerceptionSI_FreeSpaceOutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  PerceptionSI_FreeSpaceOutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~PerceptionSI_FreeSpaceOutSkeletonBackendInterface() noexcept = default;

  PerceptionSI_FreeSpaceOutSkeletonBackendInterface(PerceptionSI_FreeSpaceOutSkeletonBackendInterface const &) = delete;

  PerceptionSI_FreeSpaceOutSkeletonBackendInterface(PerceptionSI_FreeSpaceOutSkeletonBackendInterface &&) = delete;

  PerceptionSI_FreeSpaceOutSkeletonBackendInterface &operator=(PerceptionSI_FreeSpaceOutSkeletonBackendInterface const &) & = delete;

  PerceptionSI_FreeSpaceOutSkeletonBackendInterface &operator=(PerceptionSI_FreeSpaceOutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsi_freespaceout

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_FREESPACEOUT_PERCEPTIONSI_FREESPACEOUT_SKELETON_BACKEND_INTERFACE_H_

