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
/**        \file  PerceptionExe/include/perceptionsi_visnobjout/PerceptionSI_VisnObjOut_skeleton_backend_interface.h
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

#ifndef PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_BACKEND_INTERFACE_H_
#define PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "perceptionsi_visnobjout/PerceptionSI_VisnObjOut_datatypes.h"

namespace perceptionsi_visnobjout {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'PerceptionSI_VisnObjOut'.
 * \remark generated
 */
class PerceptionSI_VisnObjOutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  PerceptionSI_VisnObjOutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~PerceptionSI_VisnObjOutSkeletonBackendInterface() noexcept = default;

  PerceptionSI_VisnObjOutSkeletonBackendInterface(PerceptionSI_VisnObjOutSkeletonBackendInterface const &) = delete;

  PerceptionSI_VisnObjOutSkeletonBackendInterface(PerceptionSI_VisnObjOutSkeletonBackendInterface &&) = delete;

  PerceptionSI_VisnObjOutSkeletonBackendInterface &operator=(PerceptionSI_VisnObjOutSkeletonBackendInterface const &) & = delete;

  PerceptionSI_VisnObjOutSkeletonBackendInterface &operator=(PerceptionSI_VisnObjOutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace perceptionsi_visnobjout

#endif  // PERCEPTIONEXE_INCLUDE_PERCEPTIONSI_VISNOBJOUT_PERCEPTIONSI_VISNOBJOUT_SKELETON_BACKEND_INTERFACE_H_

