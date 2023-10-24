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
/**        \file  LocalizationFusionExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_locsensorinfosi/events/deserializer_OSM2_Bus_LocSensorInfo.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/ToSOCA_LocSensorInfoSI/OSM2_Bus_LocSensorInfo
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

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "someip-protocol/internal/deserialization/deser_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_locsensorinfosi/events/deserializer_OSM2_Bus_LocSensorInfo.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/GNSSinf1OutIDT/deserializer_GNSSinf1OutIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/GNSSinf2VccIDT/deserializer_GNSSinf2VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/IMUInf1VccIDT/deserializer_IMUInf1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/INSinf1OutIDT/deserializer_INSinf1OutIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LOCSts1VccIDT/deserializer_LOCSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LocSensorInfo1VCCIDT/deserializer_LocSensorInfo1VCCIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace tosoca_locsensorinfosi {
namespace events {

deserialization::Result DeserializerOSM2_Bus_LocSensorInfo::Deserialize(deserialization::Reader &reader, ::LocSensorInfo1VCCIDT::LocSensorInfo1VCCIDT &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/ToSOCA_LocSensorInfoSI/OSM2_Bus_LocSensorInfo
    using TpPackAlias = internal::TpPack<
        BigEndian,
        internal::SizeOfArrayLengthField<0>, 
        internal::SizeOfVectorLengthField<4>,
        internal::SizeOfMapLengthField<4>,
        internal::SizeOfStringLengthField<4>,
        internal::SizeOfStructLengthField<0>,
        internal::SizeOfUnionLengthField<4>,
        internal::SizeOfUnionTypeSelectorField<4>,
        internal::StringBomActive,
        internal::StringNullTerminationActive>;


  // Verify static size
  constexpr std::size_t static_size{deserialization::SomeIpProtocolGetStaticSize<
      TpPackAlias,
        // Config of struct length field (/CppImplementationDataTypes/LocSensorInfo1VCCIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::LocSensorInfo1VCCIDT::LocSensorInfo1VCCIDT>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/LocSensorInfo1VCCIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace tosoca_locsensorinfosi
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

