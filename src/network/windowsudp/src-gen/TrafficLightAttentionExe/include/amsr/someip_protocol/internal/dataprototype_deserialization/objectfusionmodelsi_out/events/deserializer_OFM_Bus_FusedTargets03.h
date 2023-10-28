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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_protocol/internal/dataprototype_deserialization/objectfusionmodelsi_out/events/deserializer_OFM_Bus_FusedTargets03.h
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_FusedTargets03
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_OBJECTFUSIONMODELSI_OUT_EVENTS_deserializer_OFM_Bus_FusedTargets03_h_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_OBJECTFUSIONMODELSI_OUT_EVENTS_deserializer_OFM_Bus_FusedTargets03_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "Array_ObjGroup2VccIDT_8/impl_type_array_objgroup2vccidt_8.h"
#include "someip-protocol/internal/deserialization/reader.h"
#include "someip-protocol/internal/deserialization/types.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace objectfusionmodelsi_out {
namespace events {

/*!
 * \brief Deserializer for service event /JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_FusedTargets03
 *        of service interface /JICA/Service/Interface/ObjectFusionModelSI_Out.
 * \details Top-Level data type: /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
 *          Effective transformation properties of the DataPrototype:
 *          - ByteOrder:                    MOST-SIGNIFICANT-BYTE-FIRST (big-endian)
 *          - sizeOfArrayLengthField:       0
 *          - sizeOfVectorLengthField:      4
 *          - sizeOfMapLengthField:         4
 *          - sizeOfStringLengthField:      4
 *          - sizeOfStructLengthField:      0
 *          - sizeOfUnionLengthField:       4
 *          - sizeOfUnionTypeSelectorField: 4
 *          - isBomActive:                  true
 *          - isNullTerminationActive:      true
 *          - isDynamicLengthFieldSize:     false
 */
class DeserializerOFM_Bus_FusedTargets03 {
 public:
  /*!
   * \brief Deserialize the data prototype service event /JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_FusedTargets03.
   *
   * \param[in,out] reader Reference to the byte stream reader.
   * \param[out]    data Reference to data object of top-level data type
   *                /CppImplementationDataTypes/Array_ObjGroup2VccIDT_8
   *                in which the deserialized value will be written.
   *
   * \pre           -
   * \context       Reactor|App
   * \threadsafe    FALSE
   * \reentrant     TRUE for different reader objects.
   * \return        True if the deserialization is successful, false otherwise.
   * \synchronous   TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  // VECTOR NC AutosarC++17_10-M3.2.4: MD_SOMEIPPROTOCOL_AutosarC++17_10-M3.2.4_false_positive
  static deserialization::Result Deserialize(deserialization::Reader &reader, ::Array_ObjGroup2VccIDT_8::Array_ObjGroup2VccIDT_8 &data) noexcept;
};

}  // namespace events
}  // namespace objectfusionmodelsi_out
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_DESERIALIZATION_OBJECTFUSIONMODELSI_OUT_EVENTS_deserializer_OFM_Bus_FusedTargets03_h_

