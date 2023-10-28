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
/**        \file  PerceptionExe/include/amsr/someip_protocol/internal/datatype_serialization/PerceptionLaneInfoIDT/serializer_PerceptionLaneInfoIDT.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'PerceptionLaneInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/PerceptionLaneInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_PERCEPTIONLANEINFOIDT_SERIALIZER_PERCEPTIONLANEINFOIDT_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_PERCEPTIONLANEINFOIDT_SERIALIZER_PERCEPTIONLANEINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "PerceptionLaneInfoIDT/impl_type_perceptionlaneinfoidt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneEventCam1IDT/serializer_LaneEventCam1IDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneEventGroupCam1VccIDT/serializer_LaneEventGroupCam1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1LeIDT/serializer_LaneMkrCam1LeIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1RiIDT/serializer_LaneMkrCam1RiIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1SecClsLeIDT/serializer_LaneMkrCam1SecClsLeIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrCam1SecClsRiIDT/serializer_LaneMkrCam1SecClsRiIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/LaneMkrTempCam1VccIDT/serializer_LaneMkrTempCam1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RoadEdge1VccLeIDT/serializer_RoadEdge1VccLeIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/RoadEdge1VccRiIDT/serializer_RoadEdge1VccRiIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace PerceptionLaneInfoIDT {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/PerceptionLaneInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/PerceptionLaneInfoIDT to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'LaneMkrCam1Le' of type /CppImplementationDataTypes/LaneMkrCam1LeIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1LeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.LaneMkrCam1Le);
    // Serialize struct member 'LaneMkrCam1Ri' of type /CppImplementationDataTypes/LaneMkrCam1RiIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1RiIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.LaneMkrCam1Ri);
    // Serialize struct member 'LaneMkrCam1SecClsLe' of type /CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.LaneMkrCam1SecClsLe);
    // Serialize struct member 'LaneMkrCam1SecClsRi' of type /CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.LaneMkrCam1SecClsRi);
    // Serialize struct member 'RoadEdge1VccLe' of type /CppImplementationDataTypes/RoadEdge1VccLeIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccLeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.RoadEdge1VccLe);
    // Serialize struct member 'RoadEdge1VccRi' of type /CppImplementationDataTypes/RoadEdge1VccRiIDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccRiIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.RoadEdge1VccRi);
    // Serialize struct member 'LaneEventCam1' of type /CppImplementationDataTypes/LaneEventCam1IDT
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneEventCam1IDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(writer, data.LaneEventCam1);
    // Serialize struct member 'LaneEventGroupCam1Vccs' of type /CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
                        // Config of struct length field (/CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)

                        >(writer, data.LaneEventGroupCam1Vccs);
    // Serialize struct member 'LaneMkrTempCam1Vccs' of type /CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2
     // VCA_SOMEIPPROTOCOL_GEN_SERIALIZE
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)

                        >(writer, data.LaneMkrTempCam1Vccs);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/PerceptionLaneInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/PerceptionLaneInfoIDT.
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
constexpr std::size_t GetRequiredBufferSize(::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT const &data) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'LaneMkrCam1Le' of type /CppImplementationDataTypes/LaneMkrCam1LeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1LeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.LaneMkrCam1Le);
  // Accumulate the static size of struct member 'LaneMkrCam1Ri' of type /CppImplementationDataTypes/LaneMkrCam1RiIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1RiIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.LaneMkrCam1Ri);
  // Accumulate the static size of struct member 'LaneMkrCam1SecClsLe' of type /CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.LaneMkrCam1SecClsLe);
  // Accumulate the static size of struct member 'LaneMkrCam1SecClsRi' of type /CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.LaneMkrCam1SecClsRi);
  // Accumulate the static size of struct member 'RoadEdge1VccLe' of type /CppImplementationDataTypes/RoadEdge1VccLeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccLeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.RoadEdge1VccLe);
  // Accumulate the static size of struct member 'RoadEdge1VccRi' of type /CppImplementationDataTypes/RoadEdge1VccRiIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccRiIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.RoadEdge1VccRi);
  // Accumulate the static size of struct member 'LaneEventCam1' of type /CppImplementationDataTypes/LaneEventCam1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneEventCam1IDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >(data.LaneEventCam1);
  // Accumulate the static size of struct member 'LaneEventGroupCam1Vccs' of type /CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
                        // Config of struct length field (/CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)

                        >(data.LaneEventGroupCam1Vccs);
  // Accumulate the static size of struct member 'LaneMkrTempCam1Vccs' of type /CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)

                        >(data.LaneMkrTempCam1Vccs);

  return required_buffer_size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/PerceptionLaneInfoIDT.
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
template <typename T, typename TpPack, std::enable_if_t<std::is_same<T, ::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT>::value, bool> = true>
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
  namespace internal = amsr::someip_protocol::internal;
  // Namespace alias for static serialization code
  namespace serialization = internal::serialization;
  serialization::InfSizeT size{0u};

  // Accumulate the static size of struct member 'LaneMkrCam1Le' of type /CppImplementationDataTypes/LaneMkrCam1LeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LaneMkrCam1Le),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1LeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'LaneMkrCam1Ri' of type /CppImplementationDataTypes/LaneMkrCam1RiIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LaneMkrCam1Ri),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1RiIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'LaneMkrCam1SecClsLe' of type /CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LaneMkrCam1SecClsLe),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'LaneMkrCam1SecClsRi' of type /CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LaneMkrCam1SecClsRi),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'RoadEdge1VccLe' of type /CppImplementationDataTypes/RoadEdge1VccLeIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.RoadEdge1VccLe),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccLeIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'RoadEdge1VccRi' of type /CppImplementationDataTypes/RoadEdge1VccRiIDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.RoadEdge1VccRi),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccRiIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'LaneEventCam1' of type /CppImplementationDataTypes/LaneEventCam1IDT
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LaneEventCam1),
                        TpPack,
                        // Config of struct length field (/CppImplementationDataTypes/LaneEventCam1IDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                        >();
  // Accumulate the static size of struct member 'LaneEventGroupCam1Vccs' of type /CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LaneEventGroupCam1Vccs),
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
                        // Config of struct length field (/CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)

                        >();
  // Accumulate the static size of struct member 'LaneMkrTempCam1Vccs' of type /CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2
   // VCA_SOMEIPPROTOCOL_GEN_BUFFERSIZE
    size +=serialization::GetMaximumBufferSize<
                        decltype(T{}.LaneMkrTempCam1Vccs),
                        TpPack,
                        // Config of array length field (/CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
                        // Config of struct length field (/CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
                        internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                        
                        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)

                        >();

  return size;
}

/*!
 * \brief Calculates the maximum buffer size for datatype /CppImplementationDataTypes/PerceptionLaneInfoIDT. For ADL.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/PerceptionLaneInfoIDT.
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
constexpr amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize(::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT const&) noexcept {
  return GetMaximumBufferSize<::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT, TpPack>();
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/PerceptionLaneInfoIDT is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::PerceptionLaneInfoIDT::PerceptionLaneInfoIDT>) noexcept {
  // Namespace alias for static serialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace serialization = internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'LaneMkrCam1Le' of type /CppImplementationDataTypes/LaneMkrCam1LeIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1LeIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::LaneMkrCam1LeIDT::LaneMkrCam1LeIDT>{})  && 
  
  // Check static size status of struct member 'LaneMkrCam1Ri' of type /CppImplementationDataTypes/LaneMkrCam1RiIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1RiIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::LaneMkrCam1RiIDT::LaneMkrCam1RiIDT>{})  && 
  
  // Check static size status of struct member 'LaneMkrCam1SecClsLe' of type /CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsLeIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::LaneMkrCam1SecClsLeIDT::LaneMkrCam1SecClsLeIDT>{})  && 
  
  // Check static size status of struct member 'LaneMkrCam1SecClsRi' of type /CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/LaneMkrCam1SecClsRiIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::LaneMkrCam1SecClsRiIDT::LaneMkrCam1SecClsRiIDT>{})  && 
  
  // Check static size status of struct member 'RoadEdge1VccLe' of type /CppImplementationDataTypes/RoadEdge1VccLeIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccLeIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::RoadEdge1VccLeIDT::RoadEdge1VccLeIDT>{})  && 
  
  // Check static size status of struct member 'RoadEdge1VccRi' of type /CppImplementationDataTypes/RoadEdge1VccRiIDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/RoadEdge1VccRiIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::RoadEdge1VccRiIDT::RoadEdge1VccRiIDT>{})  && 
  
  // Check static size status of struct member 'LaneEventCam1' of type /CppImplementationDataTypes/LaneEventCam1IDT
  serialization::IsStaticSize<
                      TpPack,
                      // Config of struct length field (/CppImplementationDataTypes/LaneEventCam1IDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>

                      >(serialization::SizeToken<::LaneEventCam1IDT::LaneEventCam1IDT>{})  && 
  
  // Check static size status of struct member 'LaneEventGroupCam1Vccs' of type /CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/Array_LaneEventGroupCam1VccIDT_5)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
                      // Config of struct length field (/CppImplementationDataTypes/LaneEventGroupCam1VccIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneEventGroupCam1VccIDT)

                      >(serialization::SizeToken<::Array_LaneEventGroupCam1VccIDT_5::Array_LaneEventGroupCam1VccIDT_5>{})  && 
  
  // Check static size status of struct member 'LaneMkrTempCam1Vccs' of type /CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2
  serialization::IsStaticSize<
                      TpPack,
                      // Config of array length field (/CppImplementationDataTypes/Array_LaneMkrTempCam1VccIDT_2)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfArrayLengthField, typename serialization::Tp<TpPack>::ByteOrder>,
                      // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
                      // Config of struct length field (/CppImplementationDataTypes/LaneMkrTempCam1VccIDT)
                      internal::LengthSize<serialization::Tp<TpPack>::kSizeOfStructLengthField, typename serialization::Tp<TpPack>::ByteOrder>
                      
                      // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LaneMkrTempCam1VccIDT)

                      >(serialization::SizeToken<::Array_LaneMkrTempCam1VccIDT_2::Array_LaneMkrTempCam1VccIDT_2>{}) 
  };
    return is_static_size;
}

}  // namespace PerceptionLaneInfoIDT

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_PERCEPTIONLANEINFOIDT_SERIALIZER_PERCEPTIONLANEINFOIDT_H_

