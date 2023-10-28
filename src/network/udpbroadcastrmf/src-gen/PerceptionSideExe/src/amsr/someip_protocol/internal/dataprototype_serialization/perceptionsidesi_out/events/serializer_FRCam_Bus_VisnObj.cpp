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
/**        \file  PerceptionSideExe/src/amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_FRCam_Bus_VisnObj.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/PerceptionSideSI_Out/FRCam_Bus_VisnObj
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
#include "someip-protocol/internal/serialization/ser_wrapper.h"

#include "amsr/someip_protocol/internal/dataprototype_serialization/perceptionsidesi_out/events/serializer_FRCam_Bus_VisnObj.h"
#include "amsr/someip_protocol/internal/datatype_serialization/VisObjIDT/serializer_VisObjIDT.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace perceptionsidesi_out {
namespace events {

void SerializerFRCam_Bus_VisnObj::Serialize(serialization::Writer
&writer, ::Array_VisObjIDT_20::Array_VisObjIDT_20 const &data) noexcept {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of array length field (/CppImplementationDataTypes/Array_VisObjIDT_20)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfArrayLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/VisObjIDT)
      // Config of struct length field (/CppImplementationDataTypes/VisObjIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/VisObjIDT)

      >(writer, data);
}

}  // namespace events
}  // namespace perceptionsidesi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

