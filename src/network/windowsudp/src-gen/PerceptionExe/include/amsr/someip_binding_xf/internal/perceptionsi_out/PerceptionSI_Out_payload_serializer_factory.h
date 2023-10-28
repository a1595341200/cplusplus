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
/**        \file  PerceptionExe/include/amsr/someip_binding_xf/internal/perceptionsi_out/PerceptionSI_Out_payload_serializer_factory.h
 *        \brief  SOME/IP payload serialization factory for service 'PerceptionSI_Out'
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

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/perceptionsi_out/PerceptionSI_Out_skeleton_someip_event_design.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_interface.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_perceptionsi_out {

namespace events {
namespace skeleton {
namespace Perception_Bus_LaneInfo {

// ---- Event 'Perception_Bus_LaneInfo' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'Perception_Bus_LaneInfo'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'Perception_Bus_LaneInfo'
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

}  // namespace Perception_Bus_LaneInfo
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace Perception_Bus_FrntCamInfo {

// ---- Event 'Perception_Bus_FrntCamInfo' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'Perception_Bus_FrntCamInfo'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'Perception_Bus_FrntCamInfo'
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

}  // namespace Perception_Bus_FrntCamInfo
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace FrntCam_Bus_TrafficInfo {

// ---- Event 'FrntCam_Bus_TrafficInfo' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'FrntCam_Bus_TrafficInfo'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'FrntCam_Bus_TrafficInfo'
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

}  // namespace FrntCam_Bus_TrafficInfo
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace FrntCam_Bus_TrfcLi {

// ---- Event 'FrntCam_Bus_TrfcLi' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'FrntCam_Bus_TrfcLi'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'FrntCam_Bus_TrfcLi'
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

}  // namespace FrntCam_Bus_TrfcLi
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace FrntCam_Bus_LineSignGroup {

// ---- Event 'FrntCam_Bus_LineSignGroup' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'FrntCam_Bus_LineSignGroup'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'FrntCam_Bus_LineSignGroup'
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

}  // namespace FrntCam_Bus_LineSignGroup
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace FrntCam_Bus_ExtInfo {

// ---- Event 'FrntCam_Bus_ExtInfo' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'FrntCam_Bus_ExtInfo'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'FrntCam_Bus_ExtInfo'
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

}  // namespace FrntCam_Bus_ExtInfo
}  // namespace skeleton
}  // namespace events


}  // namespace gen_perceptionsi_out

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_PERCEPTIONSI_OUT_PERCEPTIONSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

