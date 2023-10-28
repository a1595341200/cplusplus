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
/**        \file  ObjectFusionModelExe/src/amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_siderdrfusedtargetssi/events/deserializer_OSM2_TOSOCA_SideRdrFusedTargets3.cpp
 *        \brief  SOME/IP protocol deserializer implementation for data prototype '/JICA/Service/Interface/TOSOCA_SideRdrFusedTargetsSI/OSM2_TOSOCA_SideRdrFusedTargets3
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
#include "amsr/someip_protocol/internal/dataprototype_deserialization/tosoca_siderdrfusedtargetssi/events/deserializer_OSM2_TOSOCA_SideRdrFusedTargets3.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TOSOCAObjEstimn1VccGroupIDT/deserializer_TOSOCAObjEstimn1VccGroupIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TOSOCAObjInfo1VccGroupIDT/deserializer_TOSOCAObjInfo1VccGroupIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TOSOCAObjPpty1VccGroupIDT/deserializer_TOSOCAObjPpty1VccGroupIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TOSOCATFMObjGroupIDT/deserializer_TOSOCATFMObjGroupIDT.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_deserializer {
namespace tosoca_siderdrfusedtargetssi {
namespace events {

deserialization::Result DeserializerOSM2_TOSOCA_SideRdrFusedTargets3::Deserialize(deserialization::Reader &reader, ::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8 &data) noexcept {
  // Transformation properties parameter pack for data prototype /JICA/Service/Interface/TOSOCA_SideRdrFusedTargetsSI/OSM2_TOSOCA_SideRdrFusedTargets3
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
        // Config of array length field (/CppImplementationDataTypes/Array_TOSOCATFMObjGroupIDT_8)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TOSOCATFMObjGroupIDT)
      // Config of struct length field (/CppImplementationDataTypes/TOSOCATFMObjGroupIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TOSOCATFMObjGroupIDT)

      >(deserialization::SizeToken<::Array_TOSOCATFMObjGroupIDT_8::Array_TOSOCATFMObjGroupIDT_8>{})};

  deserialization::Result result{reader.VerifySize(static_size)};
  if (result) {
    // Deserialize byte stream
    result = deserialization::SomeIpProtocolDeserialize<
      TpPackAlias,
      // Config of array length field (/CppImplementationDataTypes/Array_TOSOCATFMObjGroupIDT_8)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TOSOCATFMObjGroupIDT)
      // Config of struct length field (/CppImplementationDataTypes/TOSOCATFMObjGroupIDT)
      internal::LengthSize<deserialization::Tp<TpPackAlias>::kSizeOfStructLengthField, typename deserialization::Tp<TpPackAlias>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TOSOCATFMObjGroupIDT)

      >(reader, data);
  }

  return result;
}

}  // namespace events
}  // namespace tosoca_siderdrfusedtargetssi
}  // namespace dataprototype_deserializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

