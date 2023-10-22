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
/**        \file  UTC0Exe/include/utc0si_out/UTC0SI_Out_skeleton_impl_interface.h
 *        \brief  Skeleton implementation interface of service 'UTC0SI_Out'.
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_socal
 *         Commit ID: 48d01869de8722335d03ff89fbd3fef3e2fe462b
 *********************************************************************************************************************/

#ifndef UTC0EXE_INCLUDE_UTC0SI_OUT_UTC0SI_OUT_SKELETON_IMPL_INTERFACE_H_
#define UTC0EXE_INCLUDE_UTC0SI_OUT_UTC0SI_OUT_SKELETON_IMPL_INTERFACE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/socal/internal/events/skeleton_event_manager_interface.h"
#include "utc0si_out/utc0si_out_common.h"

namespace utc0si_out {
namespace internal {

/*!
 * \brief Skeleton implementation interface of service 'UTC0SI_Out'
 */
class UTC0SI_OutSkeletonImplInterface {
 public:
  /*!
   * \brief Use default destructor
   */
  virtual ~UTC0SI_OutSkeletonImplInterface() noexcept = default;

  // ---- Events ---------------------------------------------------------------------------------------------------

  /*!
   * \brief Get the event manager object for the service event 'UTC0_Bus_VehTiAndData'.
   * \details Event sample type: ::DateTi30_2::DateTi30_2.
   * \return A binding-specific event management object/interface supporting event transmission.
   * \pre -
   * \context App
   */
  virtual ::amsr::socal::internal::events::SkeletonEventManagerInterface<::DateTi30_2::DateTi30_2>* GetEventManagerUTC0_Bus_VehTiAndData() noexcept = 0;

  // ---- Fields ---------------------------------------------------------------------------------------------------
};

} // namespace internal
}  // namespace utc0si_out

#endif  // UTC0EXE_INCLUDE_UTC0SI_OUT_UTC0SI_OUT_SKELETON_IMPL_INTERFACE_H_

