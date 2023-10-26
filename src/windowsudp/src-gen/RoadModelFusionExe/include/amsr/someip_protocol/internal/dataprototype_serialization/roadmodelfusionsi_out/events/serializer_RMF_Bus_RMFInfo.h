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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/dataprototype_serialization/roadmodelfusionsi_out/events/serializer_RMF_Bus_RMFInfo.h
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

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_ROADMODELFUSIONSI_OUT_EVENTS_serializer_RMF_Bus_RMFInfo_h_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_ROADMODELFUSIONSI_OUT_EVENTS_serializer_RMF_Bus_RMFInfo_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "RMFInfoIDT/impl_type_rmfinfoidt.h"
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
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace roadmodelfusionsi_out {
namespace events {

/*!
 * \brief Serializer for service event /JICA/Service/Interface/RoadModelFusionSI_Out/RMF_Bus_RMFInfo
 *        of service interface /JICA/Service/Interface/RoadModelFusionSI_Out.
 * \details Top-Level data type: /CppImplementationDataTypes/RMFInfoIDT
 *          Effective transformation properties of the DataPrototype:
 *          - ByteOrder:                    MOST-SIGNIFICANT-BYTE-FIRST (big-endian)
 *          - sizeOfArrayLengthField:       4
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
class SerializerRMF_Bus_RMFInfo {
 public:
  /*!
   * \brief Returns the required buffer size for the data prototype service event /JICA/Service/Interface/RoadModelFusionSI_Out/RMF_Bus_RMFInfo.
   *
   * \param[in]   data Reference to data object of top-level data type /CppImplementationDataTypes/RMFInfoIDT.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  constexpr static std::size_t GetRequiredBufferSize(::RMFInfoIDT::RMFInfoIDT const &data) noexcept {
    return serialization::GetRequiredBufferSize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/RMFInfoIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(data);
  }

  /*!
   * \brief Returns the maximum buffer size for the data prototype service event /JICA/Service/Interface/RoadModelFusionSI_Out/RMF_Bus_RMFInfo.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  constexpr static amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
    return serialization::GetMaximumBufferSize<
      ::RMFInfoIDT::RMFInfoIDT,
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/RMFInfoIDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >();
  }


  /*!
   * \brief Serialize the data prototype service event /JICA/Service/Interface/RoadModelFusionSI_Out/RMF_Bus_RMFInfo.
   *
   * \param[in,out] writer Reference to the byte stream writer.
   * \param[in]     data Reference to data object of top-level data type /CppImplementationDataTypes/RMFInfoIDT
   *                , whose value will be serialized into the writer.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  // VECTOR NC AutosarC++17_10-M3.2.4: MD_SOMEIPPROTOCOL_AutosarC++17_10-M3.2.4_false_positive
  static void Serialize(serialization::Writer &writer, ::RMFInfoIDT::RMFInfoIDT const &data) noexcept;

 private:
  /*!
   * \brief Transformation properties of the data prototype.
   */
  using TpPackDataPrototype = internal::TpPack<
      BigEndian,
      internal::SizeOfArrayLengthField<4>,
      internal::SizeOfVectorLengthField<4>,
      internal::SizeOfMapLengthField<4>,
      internal::SizeOfStringLengthField<4>,
      internal::SizeOfStructLengthField<0>,
      internal::SizeOfUnionLengthField<4>,
      internal::SizeOfUnionTypeSelectorField<4>,
      internal::StringBomActive,
      internal::StringNullTerminationActive,
      serialization::DynamicLengthFieldSizeInactive>;

};

}  // namespace events
}  // namespace roadmodelfusionsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_ROADMODELFUSIONSI_OUT_EVENTS_serializer_RMF_Bus_RMFInfo_h_

