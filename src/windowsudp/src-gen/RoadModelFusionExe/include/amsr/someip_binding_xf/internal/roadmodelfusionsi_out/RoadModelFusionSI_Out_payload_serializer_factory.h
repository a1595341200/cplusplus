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
/**        \file  RoadModelFusionExe/include/amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_payload_serializer_factory.h
 *        \brief  SOME/IP payload serialization factory for service 'RoadModelFusionSI_Out'
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/roadmodelfusionsi_out/RoadModelFusionSI_Out_skeleton_someip_event_design.h"
#include "amsr/someip_binding_xf/internal/ser_deser/serializer_interface.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_roadmodelfusionsi_out {

namespace events {
namespace skeleton {
namespace RMF_Bus_RMFInfo {

// ---- Event 'RMF_Bus_RMFInfo' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'RMF_Bus_RMFInfo'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'RMF_Bus_RMFInfo'
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

}  // namespace RMF_Bus_RMFInfo
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace RMF_Bus_MapInfo {

// ---- Event 'RMF_Bus_MapInfo' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'RMF_Bus_MapInfo'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'RMF_Bus_MapInfo'
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

}  // namespace RMF_Bus_MapInfo
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace RMF_Bus_VectorMapInfo {

// ---- Event 'RMF_Bus_VectorMapInfo' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'RMF_Bus_VectorMapInfo'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'RMF_Bus_VectorMapInfo'
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

}  // namespace RMF_Bus_VectorMapInfo
}  // namespace skeleton
}  // namespace events

namespace events {
namespace skeleton {
namespace RMF_Bus_Position {

// ---- Event 'RMF_Bus_Position' -------------------------------------------

/*!
 * \brief Factory class to construct skeleton serializer for Event 'RMF_Bus_Position'.
 * \vprivate
 */
class SerializerFactory {
 public:

  /*!
   * \brief Constructs serializer wrapper for for Event 'RMF_Bus_Position'
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

}  // namespace RMF_Bus_Position
}  // namespace skeleton
}  // namespace events


}  // namespace gen_roadmodelfusionsi_out

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_ROADMODELFUSIONSI_OUT_ROADMODELFUSIONSI_OUT_PAYLOAD_SERIALIZER_FACTORY_H_

