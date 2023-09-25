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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_serialization/ExtractedLane/serializer_ExtractedLane.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'ExtractedLane'
 *
 *      \details  /CppImplementationDataTypes/ExtractedLane
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_EXTRACTEDLANE_SERIALIZER_EXTRACTEDLANE_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_EXTRACTEDLANE_SERIALIZER_EXTRACTEDLANE_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ExtractedLane/impl_type_extractedlane.h"
#include "amsr/someip_protocol/internal/datatype_serialization/CenterLine/serializer_CenterLine.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Construction/serializer_Construction.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Lane_width/serializer_Lane_width.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RoadChange/serializer_RoadChange.h"
#include "amsr/someip_protocol/internal/datatype_serialization/SpeedLimitation/serializer_SpeedLimitation.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace ExtractedLane {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/ExtractedLane.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ExtractedLane to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::ExtractedLane::ExtractedLane const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'ExLaneNumber_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ExLaneNumber_ref);
    // Serialize struct member 'LaneIndex_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LaneIndex_ref);
    // Serialize struct member 'EgoLaneIndex_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.EgoLaneIndex_ref);
    // Serialize struct member 'CenterLine_ref' of type /CppImplementationDataTypes/CenterLine
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/CenterLine)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.CenterLine_ref);
    // Serialize struct member 'Lane_width_ref' of type /CppImplementationDataTypes/Lane_width
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Lane_width)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.Lane_width_ref);
    // Serialize struct member 'RoadChange_ref' of type /CppImplementationDataTypes/RoadChange
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RoadChange)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.RoadChange_ref);
    // Serialize struct member 'Construction_ref' of type /CppImplementationDataTypes/Construction
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Construction)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.Construction_ref);
    // Serialize struct member 'SpeedLimitation_ref' of type /CppImplementationDataTypes/SpeedLimitation
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/SpeedLimitation)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.SpeedLimitation_ref);
    // Serialize struct member 'Lane_type_ref' of type /CppImplementationDataTypes/Lane_type
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Lane_type)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Lane_type_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/ExtractedLane.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ExtractedLane.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::ExtractedLane::ExtractedLane const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'ExLaneNumber_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ExLaneNumber_ref);
  // Accumulate the static size of struct member 'LaneIndex_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LaneIndex_ref);
  // Accumulate the static size of struct member 'EgoLaneIndex_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.EgoLaneIndex_ref);
  // Accumulate the static size of struct member 'CenterLine_ref' of type /CppImplementationDataTypes/CenterLine
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/CenterLine)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.CenterLine_ref);
  // Accumulate the static size of struct member 'Lane_width_ref' of type /CppImplementationDataTypes/Lane_width
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Lane_width)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.Lane_width_ref);
  // Accumulate the static size of struct member 'RoadChange_ref' of type /CppImplementationDataTypes/RoadChange
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RoadChange)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.RoadChange_ref);
  // Accumulate the static size of struct member 'Construction_ref' of type /CppImplementationDataTypes/Construction
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Construction)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.Construction_ref);
  // Accumulate the static size of struct member 'SpeedLimitation_ref' of type /CppImplementationDataTypes/SpeedLimitation
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/SpeedLimitation)
                        serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.SpeedLimitation_ref);
  // Accumulate the static size of struct member 'Lane_type_ref' of type /CppImplementationDataTypes/Lane_type
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Lane_type)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Lane_type_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/ExtractedLane is of static size.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \return True if datatype has static size, false otherwise.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::ExtractedLane::ExtractedLane>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'ExLaneNumber_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ExLaneNumber::ExLaneNumber>{})  && 
  
  // Check static size status of struct member 'LaneIndex_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LaneIndex::LaneIndex>{})  && 
  
  // Check static size status of struct member 'EgoLaneIndex_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::EgoLaneIndex::EgoLaneIndex>{})  && 
  
  // Check static size status of struct member 'CenterLine_ref' of type /CppImplementationDataTypes/CenterLine
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/CenterLine)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::CenterLine::CenterLine>{})  && 
  
  // Check static size status of struct member 'Lane_width_ref' of type /CppImplementationDataTypes/Lane_width
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/Lane_width)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::Lane_width::Lane_width>{})  && 
  
  // Check static size status of struct member 'RoadChange_ref' of type /CppImplementationDataTypes/RoadChange
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/RoadChange)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::RoadChange::RoadChange>{})  && 
  
  // Check static size status of struct member 'Construction_ref' of type /CppImplementationDataTypes/Construction
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/Construction)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::Construction::Construction>{})  && 
  
  // Check static size status of struct member 'SpeedLimitation_ref' of type /CppImplementationDataTypes/SpeedLimitation
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/SpeedLimitation)
                      serialization::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::SpeedLimitation::SpeedLimitation>{})  && 
  
  // Check static size status of struct member 'Lane_type_ref' of type /CppImplementationDataTypes/Lane_type
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Lane_type)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Lane_type::Lane_type>{}) 
  };
    return is_static_size;
}

}  // namespace ExtractedLane

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_EXTRACTEDLANE_SERIALIZER_EXTRACTEDLANE_H_

