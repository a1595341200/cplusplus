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
/**        \file  ObjectFusionModelExe/include/objectfusionmodelsi_out/ObjectFusionModelSI_Out_skeleton_backend_interface.h
 *        \brief  Skeleton implementation interface of service 'ObjectFusionModelSI_Out'.
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_BACKEND_INTERFACE_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_BACKEND_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "objectfusionmodelsi_out/ObjectFusionModelSI_Out_datatypes.h"

namespace objectfusionmodelsi_out {
namespace internal {

/*!
 * \brief Skeleton backend interface for the Service 'ObjectFusionModelSI_Out'.
 * \remark generated
 */
class ObjectFusionModelSI_OutSkeletonBackendInterface {
 public:

  /*!
   * \brief Define default constructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  ObjectFusionModelSI_OutSkeletonBackendInterface() noexcept = default;

  /*!
   * \brief Define default destructor.
   * \pre -
   * \context     App
   * \synchronus  TRUE
   */
  virtual ~ObjectFusionModelSI_OutSkeletonBackendInterface() noexcept = default;

  ObjectFusionModelSI_OutSkeletonBackendInterface(ObjectFusionModelSI_OutSkeletonBackendInterface const &) = delete;

  ObjectFusionModelSI_OutSkeletonBackendInterface(ObjectFusionModelSI_OutSkeletonBackendInterface &&) = delete;

  ObjectFusionModelSI_OutSkeletonBackendInterface &operator=(ObjectFusionModelSI_OutSkeletonBackendInterface const &) & = delete;

  ObjectFusionModelSI_OutSkeletonBackendInterface &operator=(ObjectFusionModelSI_OutSkeletonBackendInterface &&) & = delete;

  // ---- Methods --------------------------------------------------------------------------------------------------
  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace objectfusionmodelsi_out

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_OBJECTFUSIONMODELSI_OUT_OBJECTFUSIONMODELSI_OUT_SKELETON_BACKEND_INTERFACE_H_

