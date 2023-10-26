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
/**        \file  PerceptionSideExe/include/amsr/someip_binding_xf/internal/perceptionsidesi_out/PerceptionSideSI_Out_payload_serializer_factory.h
 *        \brief  SOME/IP payload serialization factory for service 'PerceptionSideSI_Out'
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

#ifndef PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_
#define PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/perceptionsidesi_out/PerceptionSideSI_Out_skeleton_someip_event_design.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_interface.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_perceptionsidesi_out {

namespace events {
namespace skeleton {
namespace FRCam_Bus_VisnObj {

// ---- Event 'FRCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'FRCam_Bus_VisnObj'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'FRCam_Bus_VisnObj'
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

}  // namespace FRCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace FLCam_Bus_VisnObj {

// ---- Event 'FLCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'FLCam_Bus_VisnObj'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'FLCam_Bus_VisnObj'
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

}  // namespace FLCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace RLCam_Bus_VisnObj {

// ---- Event 'RLCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'RLCam_Bus_VisnObj'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'RLCam_Bus_VisnObj'
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

}  // namespace RLCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace RRCam_Bus_VisnObj {

// ---- Event 'RRCam_Bus_VisnObj' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'RRCam_Bus_VisnObj'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'RRCam_Bus_VisnObj'
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

}  // namespace RRCam_Bus_VisnObj
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace PerceptionSide_Bus_CameraStatus {

// ---- Event 'PerceptionSide_Bus_CameraStatus' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'PerceptionSide_Bus_CameraStatus'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'PerceptionSide_Bus_CameraStatus'
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

}  // namespace PerceptionSide_Bus_CameraStatus
}  // namespace skeleton
}  // namespace events


}  // namespace gen_perceptionsidesi_out

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // PERCEPTIONSIDEEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSIDESI_OUT_PERCEPTIONSIDESI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

