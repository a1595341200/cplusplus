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
/**        \file  ObjectFusionModelExe/include/amsr/someip_binding_xf/internal/tosoca_siderdrfusedtargetssi/TOSOCA_SideRdrFusedTargetsSI_payload_deserializer_factory.h
 *        \brief  SOME/IP payload deserialization factory for service 'TOSOCA_SideRdrFusedTargetsSI'
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

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PAYLOAD_DESERIALIZER_FACTORY_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PAYLOAD_DESERIALIZER_FACTORY_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "amsr/someip_binding_xf/internal/ser_deser/deserializer_interface.h"
#include "amsr/someip_binding_xf/internal/tosoca_siderdrfusedtargetssi/TOSOCA_SideRdrFusedTargetsSI_proxy_someip_event_design.h"

namespace amsr {
namespace someip_binding_xf {
namespace internal {

namespace gen_tosoca_siderdrfusedtargetssi {

namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets1 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets1' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'OSM2_TOSOCA_SideRdrFusedTargets1'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'OSM2_TOSOCA_SideRdrFusedTargets1'
   *
   * \param[out] Deserializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets1
}  // namespace proxy
}  // namespace events

namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets2 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets2' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'OSM2_TOSOCA_SideRdrFusedTargets2'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'OSM2_TOSOCA_SideRdrFusedTargets2'
   *
   * \param[out] Deserializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets2
}  // namespace proxy
}  // namespace events

namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets3 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets3' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'OSM2_TOSOCA_SideRdrFusedTargets3'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'OSM2_TOSOCA_SideRdrFusedTargets3'
   *
   * \param[out] Deserializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets3
}  // namespace proxy
}  // namespace events

namespace events {
namespace proxy {
namespace OSM2_TOSOCA_SideRdrFusedTargets4 {

// ---- Event 'OSM2_TOSOCA_SideRdrFusedTargets4' -------------------------------------------

/*!
 * \brief Factory class to construct proxy deserializer for Event 'OSM2_TOSOCA_SideRdrFusedTargets4'.
 * \vprivate
 */
class DeserializerFactory {
 public:

  /*!
   * \brief Constructs deserializer wrapper for for Event 'OSM2_TOSOCA_SideRdrFusedTargets4'
   *
   * \param[out] Deserializer wrapper instance.
   * \context ANY
   * \pre -
   * \threadsafe FALSE
   * \reentrant FALSE
   * \synchronous TRUE
   * \vprivate
   */
  static std::unique_ptr<::amsr::someip_binding_xf::internal::ser_deser::DeserializerInterface<EventDesignInfo::SampleType>> Create();

};

}  // namespace OSM2_TOSOCA_SideRdrFusedTargets4
}  // namespace proxy
}  // namespace events


}  // namespace gen_tosoca_siderdrfusedtargetssi

}  // namespace internal
}  // namespace someip_binding_xf
}  // namespace amsr

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_BINDING_XF_INTERNAL_TOSOCA_SIDERDRFUSEDTARGETSSI_TOSOCA_SIDERDRFUSEDTARGETSSI_PAYLOAD_DESERIALIZER_FACTORY_H_

