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
/**        \file  TargetPredictExe/src/amsr/someip_protocol/internal/dataprototype_serialization/targetpredictsi_out/events/serializer_TP_Bus_PredTargets1Vcc.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/TargetPredictSI_Out/TP_Bus_PredTargets1Vcc
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

#include "amsr/someip_protocol/internal/dataprototype_serialization/targetpredictsi_out/events/serializer_TP_Bus_PredTargets1Vcc.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ObjPredictIDT/serializer_ObjPredictIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ObjPredictTrajsIDT/serializer_ObjPredictTrajsIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ObjPredictTrajsPointIDT/serializer_ObjPredictTrajsPointIDT.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace targetpredictsi_out {
namespace events {

void SerializerTP_Bus_PredTargets1Vcc::Serialize(serialization::Writer
&writer, ::Array_ObjPredictIDT_8::Array_ObjPredictIDT_8 const &data) noexcept {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of array length field (/CppImplementationDataTypes/Array_ObjPredictIDT_8)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfArrayLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>,
      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/ObjPredictIDT)
      // Config of struct length field (/CppImplementationDataTypes/ObjPredictIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>
      
      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/ObjPredictIDT)

      >(writer, data);
}

}  // namespace events
}  // namespace targetpredictsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

