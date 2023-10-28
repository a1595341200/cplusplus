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
/**        \file  ObjectFusionModelExe/src/amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_LaneInfo.cpp
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/ObjectFusionModelSI_Out/OFM_Bus_LaneInfo
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

#include "amsr/someip_protocol/internal/dataprototype_serialization/objectfusionmodelsi_out/events/serializer_OFM_Bus_LaneInfo.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneEventCam1IDT/serializer_LaneEventCam1IDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneEventGroupCam1VccIDT/serializer_LaneEventGroupCam1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1LeIDT/serializer_LaneMkrCam1LeIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1RiIDT/serializer_LaneMkrCam1RiIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1SecClsLeIDT/serializer_LaneMkrCam1SecClsLeIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1SecClsRiIDT/serializer_LaneMkrCam1SecClsRiIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrTempCam1VccIDT/serializer_LaneMkrTempCam1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/PerceptionLaneInfoIDT/serializer_PerceptionLaneInfoIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RoadEdge1VccLeIDT/serializer_RoadEdge1VccLeIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RoadEdge1VccRiIDT/serializer_RoadEdge1VccRiIDT.h"
#include "ara/log/logging.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace objectfusionmodelsi_out {
namespace events {

void SerializerOFM_Bus_LaneInfo::Serialize(serialization::Writer
&writer, ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT const &data) noexcept {
  // Serialize byte stream
  serialization::SomeIpProtocolSerialize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/PerceptionLaneInfoIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(writer, data);
}

}  // namespace events
}  // namespace objectfusionmodelsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

