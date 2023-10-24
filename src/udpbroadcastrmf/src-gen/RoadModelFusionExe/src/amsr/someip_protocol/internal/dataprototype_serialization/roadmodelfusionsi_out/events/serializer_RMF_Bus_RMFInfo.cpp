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
/**        \file  RoadModelFusionExe/src/amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_RMFInfo.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/RoadModelFusionSI_Out/RMF_Bus_RMFInfo
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

#include "amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_RMFInfo.h"
#include "amsr/someip_protocol/internal/datatype_serialization/BusRefLinePointIDT/serializer_BusRefLinePointIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/CenterLineIDT/serializer_CenterLineIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ConstructionIDT/serializer_ConstructionIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/EndPntIDT/serializer_EndPntIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ExtractedLaneIDT/serializer_ExtractedLaneIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ExtractedMapInfIDT/serializer_ExtractedMapInfIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Lane_widthIDT/serializer_Lane_widthIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Left_line_delimiterIDT/serializer_Left_line_delimiterIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RMFInfoIDT/serializer_RMFInfoIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RampIDT/serializer_RampIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RefLineSpeedInfIDT/serializer_RefLineSpeedInfIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RefPathGlobalIDT/serializer_RefPathGlobalIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Right_line_delimiterIDT/serializer_Right_line_delimiterIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RoadChangeIDT/serializer_RoadChangeIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/SpecialSituationIDT/serializer_SpecialSituationIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/SpeedLimitationIDT/serializer_SpeedLimitationIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/StartPntIDT/serializer_StartPntIDT.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace roadmodelfusionsi_out {
namespace events {

void SerializerRMF_Bus_RMFInfo::Serialize(serialization::Writer
&writer, ::RMFInfoIDT::RMFInfoIDT const &data) noexcept {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/RMFInfoIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(writer, data);
}

}  // namespace events
}  // namespace roadmodelfusionsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

