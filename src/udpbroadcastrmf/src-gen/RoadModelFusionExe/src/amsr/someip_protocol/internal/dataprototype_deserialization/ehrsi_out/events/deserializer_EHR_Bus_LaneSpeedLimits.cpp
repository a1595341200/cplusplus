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
/**        \file  RoadModelFusionExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LaneSpeedLimits.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/EHRSI_Out/EHR_Bus_LaneSpeedLimits
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/ehrsi_out/events/deserializer_EHR_Bus_LaneSpeedLimits.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LaneSpeedLimitIDT/deserializer_LaneSpeedLimitIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace ehrsi_out {
namespace events {

deserialization::Result DeserializerEHR_Bus_LaneSpeedLimits::Deserialize(deserialization::Reader &reader, ::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/EHRSI_Out/EHR_Bus_LaneSpeedLimits
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
        // Config of vector length field and max. container size (/CppImplementationDataTypes/Array_LaneSpeedLimitIDT_Vector)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>, internal::ArraySizeInactive,
      // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LaneSpeedLimitIDT)
      // Config of struct length field (/CppImplementationDataTypes/LaneSpeedLimitIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LaneSpeedLimitIDT)

      >(deserialization::SizeToken<::Array_LaneSpeedLimitIDT_Vector::Array_LaneSpeedLimitIDT_Vector>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of vector length field and max. container size (/CppImplementationDataTypes/Array_LaneSpeedLimitIDT_Vector)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>, internal::ArraySizeInactive,
      // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LaneSpeedLimitIDT)
      // Config of struct length field (/CppImplementationDataTypes/LaneSpeedLimitIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/LaneSpeedLimitIDT)

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace ehrsi_out
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

