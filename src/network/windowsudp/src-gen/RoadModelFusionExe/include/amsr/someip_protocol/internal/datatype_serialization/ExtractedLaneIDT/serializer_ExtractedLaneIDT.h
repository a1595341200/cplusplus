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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_serialization/ExtractedLaneIDT/serializer_ExtractedLaneIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'ExtractedLaneIDT'
 *
 *      \details  /CppImplementationDataTypes/ExtractedLaneIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_EXTRACTEDLANEIDT_SERIALIZER_EXTRACTEDLANEIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_EXTRACTEDLANEIDT_SERIALIZER_EXTRACTEDLANEIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ExtractedLaneIDT/impl_type_extractedlaneidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/CenterLineIDT/serializer_CenterLineIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/ConstructionIDT/serializer_ConstructionIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/Lane_widthIDT/serializer_Lane_widthIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RoadChangeIDT/serializer_RoadChangeIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/SpeedLimitationIDT/serializer_SpeedLimitationIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace ExtractedLaneIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/ExtractedLaneIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ExtractedLaneIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::ExtractedLaneIDT::ExtractedLaneIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'ExLaneNumber' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ExLaneNumber);
    // Serialize struct member 'LaneIndex' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LaneIndex);
    // Serialize struct member 'EgoLaneIndex' of type /CppImplementationDataTypes/uint8_t
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.EgoLaneIndex);
    // Serialize struct member 'CenterLine' of type /CppImplementationDataTypes/CenterLineIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/CenterLineIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.CenterLine);
    // Serialize struct member 'Lane_width' of type /CppImplementationDataTypes/Lane_widthIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Lane_widthIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.Lane_width);
    // Serialize struct member 'RoadChange' of type /CppImplementationDataTypes/RoadChangeIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RoadChangeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.RoadChange);
    // Serialize struct member 'Construction' of type /CppImplementationDataTypes/ConstructionIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ConstructionIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.Construction);
    // Serialize struct member 'SpeedLimitation' of type /CppImplementationDataTypes/SpeedLimitationIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/SpeedLimitationIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.SpeedLimitation);
    // Serialize struct member 'Lane_type' of type /CppImplementationDataTypes/Lane_typeIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Lane_typeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Lane_type);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/ExtractedLaneIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ExtractedLaneIDT.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::ExtractedLaneIDT::ExtractedLaneIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'ExLaneNumber' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ExLaneNumber);
  // Accumulate the static size of struct member 'LaneIndex' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LaneIndex);
  // Accumulate the static size of struct member 'EgoLaneIndex' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.EgoLaneIndex);
  // Accumulate the static size of struct member 'CenterLine' of type /CppImplementationDataTypes/CenterLineIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/CenterLineIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.CenterLine);
  // Accumulate the static size of struct member 'Lane_width' of type /CppImplementationDataTypes/Lane_widthIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Lane_widthIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.Lane_width);
  // Accumulate the static size of struct member 'RoadChange' of type /CppImplementationDataTypes/RoadChangeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RoadChangeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.RoadChange);
  // Accumulate the static size of struct member 'Construction' of type /CppImplementationDataTypes/ConstructionIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ConstructionIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.Construction);
  // Accumulate the static size of struct member 'SpeedLimitation' of type /CppImplementationDataTypes/SpeedLimitationIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/SpeedLimitationIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.SpeedLimitation);
  // Accumulate the static size of struct member 'Lane_type' of type /CppImplementationDataTypes/Lane_typeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Lane_typeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Lane_type);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/ExtractedLaneIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false

 * \tparam The desired type.
 * \tparam TpPack Transformation properties to be used for serialization.
 * \return Returns the maximum buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 */
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::ExtractedLaneIDT::ExtractedLaneIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'ExLaneNumber' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.ExLaneNumber),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'LaneIndex' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LaneIndex),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'EgoLaneIndex' of type /CppImplementationDataTypes/uint8_t
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.EgoLaneIndex),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();
  // Accumulate the static size of struct member 'CenterLine' of type /CppImplementationDataTypes/CenterLineIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.CenterLine),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/CenterLineIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'Lane_width' of type /CppImplementationDataTypes/Lane_widthIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Lane_width),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/Lane_widthIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'RoadChange' of type /CppImplementationDataTypes/RoadChangeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.RoadChange),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RoadChangeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'Construction' of type /CppImplementationDataTypes/ConstructionIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Construction),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/ConstructionIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'SpeedLimitation' of type /CppImplementationDataTypes/SpeedLimitationIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.SpeedLimitation),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/SpeedLimitationIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'Lane_type' of type /CppImplementationDataTypes/Lane_typeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.Lane_type),
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Lane_typeIDT)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/ExtractedLaneIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/ExtractedLaneIDT.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 * \spec
 *   requires true;
 * \endspec
 */
template <typename TpPack>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::ExtractedLaneIDT::ExtractedLaneIDT const&) noexcept {
  return GetMaximumBufferSize<::ExtractedLaneIDT::ExtractedLaneIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/ExtractedLaneIDT is of static size.
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
 * \spec
 *   requires true;
 * \endspec
 */
template <typename TpPack>
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::ExtractedLaneIDT::ExtractedLaneIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'ExLaneNumber' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'LaneIndex' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'EgoLaneIndex' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::uint8IDT::uint8IDT>{})  && 
  
  // Check static size status of struct member 'CenterLine' of type /CppImplementationDataTypes/CenterLineIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/CenterLineIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::CenterLineIDT::CenterLineIDT>{})  && 
  
  // Check static size status of struct member 'Lane_width' of type /CppImplementationDataTypes/Lane_widthIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/Lane_widthIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::Lane_widthIDT::Lane_widthIDT>{})  && 
  
  // Check static size status of struct member 'RoadChange' of type /CppImplementationDataTypes/RoadChangeIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/RoadChangeIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::RoadChangeIDT::RoadChangeIDT>{})  && 
  
  // Check static size status of struct member 'Construction' of type /CppImplementationDataTypes/ConstructionIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/ConstructionIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::ConstructionIDT::ConstructionIDT>{})  && 
  
  // Check static size status of struct member 'SpeedLimitation' of type /CppImplementationDataTypes/SpeedLimitationIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/SpeedLimitationIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::SpeedLimitationIDT::SpeedLimitationIDT>{})  && 
  
  // Check static size status of struct member 'Lane_type' of type /CppImplementationDataTypes/Lane_typeIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Lane_typeIDT)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Lane_typeIDT::Lane_typeIDT>{}) 
  };
    return is_static_size;
}

}  // namespace ExtractedLaneIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_EXTRACTEDLANEIDT_SERIALIZER_EXTRACTEDLANEIDT_H_

