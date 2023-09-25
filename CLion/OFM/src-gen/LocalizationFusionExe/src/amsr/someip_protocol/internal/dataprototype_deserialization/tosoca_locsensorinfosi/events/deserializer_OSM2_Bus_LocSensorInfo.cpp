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
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "someip-protocol/internal/deserialization/deser_wrapper.h"
#include "amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_locsensorinfosi/events/deserializer_OSM2_Bus_LocSensorInfo.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/GNSSinf1Vcc/deserializer_GNSSinf1Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/GNSSinf2Vcc/deserializer_GNSSinf2Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/IMUInf1Vcc/deserializer_IMUInf1Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/INSinf1Vcc/deserializer_INSinf1Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LOCSts1Vcc/deserializer_LOCSts1Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LocSensorInfo1VCC/deserializer_LocSensorInfo1VCC.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace tosoca_locsensorinfosi {
namespace events {

deserialization::Result DeserializerOSM2_Bus_LocSensorInfo::Deserialize(deserialization::Reader &reader, ::LocSensorInfo1VCC::LocSensorInfo1VCC &data) {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/ToSOCA_LocSensorInfoSI/OSM2_Bus_LocSensorInfo
    using TpPackAlias = deserialization::TpPack<
        BigEndian,
        deserialization::SizeOfArrayLengthField<0>, 
        deserialization::SizeOfVectorLengthField<4>,
        deserialization::SizeOfMapLengthField<4>,
        deserialization::SizeOfStringLengthField<4>,
        deserialization::SizeOfStructLengthField<0>,
        deserialization::SizeOfUnionLengthField<4>,
        deserialization::SizeOfUnionTypeSelectorField<4>,
        deserialization::StringBomActive,
        deserialization::StringNullTerminationActive>;


  // Verify static size
  constexpr std::size_t static_size{deserialization::SomeIpProtocolGetStaticSize<
      TpPackAlias,
        // Config of struct length field (/CppImplementationDataTypes/LocSensorInfo1VCC)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

      >(deserialization::SizeToken<::LocSensorInfo1VCC::LocSensorInfo1VCC>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of struct length field (/CppImplementationDataTypes/LocSensorInfo1VCC)
      deserialization::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>

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

