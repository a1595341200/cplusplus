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
/**        \file  PerceptionRearExe/include/amsr/someip_binding_xf/internal/perceptionrearsi_out/PerceptionRearSI_Out_payload_serializer_factory.h
 *        \brief  SOME/IP payload serialization factory for service 'PerceptionRearSI_Out'
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipbinding
 *         Commit ID: 34a78d6264927917d6838a378b15b039fd1cad4a
 *********************************************************************************************************************/

#ifndef PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_
#define PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/perceptionrearsi_out/PerceptionRearSI_Out_skeleton_someip_event_design.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_interface.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_perceptionrearsi_out {

namespace events {
namespace skeleton {
namespace PerceptionRear_Bus_LaneInfo {

// ---- Event 'PerceptionRear_Bus_LaneInfo' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'PerceptionRear_Bus_LaneInfo'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'PerceptionRear_Bus_LaneInfo'
   *
   * \param[out] Serializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace PerceptionRear_Bus_LaneInfo
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace PerceptionRear_Bus_CameraStatus {

// ---- Event 'PerceptionRear_Bus_CameraStatus' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'PerceptionRear_Bus_CameraStatus'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'PerceptionRear_Bus_CameraStatus'
   *
   * \param[out] Serializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace PerceptionRear_Bus_CameraStatus
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace PerceptionRear_Bus_VisnObj {

// ---- Event 'PerceptionRear_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'PerceptionRear_Bus_VisnObj'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'PerceptionRear_Bus_VisnObj'
   *
   * \param[out] Serializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::SerializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace PerceptionRear_Bus_VisnObj
}  // namespace skeleton
}  // namespace events


}  // namespace gen_perceptionrearsi_out

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // PERCEPTIONREAREXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONREARSI_OUT_PERCEPTIONREARSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

