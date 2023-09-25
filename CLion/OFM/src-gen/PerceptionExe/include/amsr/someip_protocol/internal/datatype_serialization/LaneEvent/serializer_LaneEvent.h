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
/**        \file  PerceptionExe/include/amsr/someip_protocol/internal/datatype_serialization/LaneEvent/serializer_LaneEvent.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'LaneEvent'
 *
 *      \details  /CppImplementationDataTypes/LaneEvent
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LANEEVENT_SERIALIZER_LANEEVENT_H_
#define PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LANEEVENT_SERIALIZER_LANEEVENT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LaneEvent/impl_type_laneevent.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace LaneEvent {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/LaneEvent.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/LaneEvent to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::LaneEvent::LaneEvent const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'NumberOfLanes_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.NumberOfLanes_ref);
    // Serialize struct member 'AssignedLaneNumber_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.AssignedLaneNumber_ref);
    // Serialize struct member 'LaneChange_ref' of type /CppImplementationDataTypes/LaneChange
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChange)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LaneChange_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/LaneEvent.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/LaneEvent.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::LaneEvent::LaneEvent const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'NumberOfLanes_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.NumberOfLanes_ref);
  // Accumulate the static size of struct member 'AssignedLaneNumber_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.AssignedLaneNumber_ref);
  // Accumulate the static size of struct member 'LaneChange_ref' of type /CppImplementationDataTypes/LaneChange
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChange)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LaneChange_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/LaneEvent is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::LaneEvent::LaneEvent>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'NumberOfLanes_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::NumberOfLanes::NumberOfLanes>{})  && 
  
  // Check static size status of struct member 'AssignedLaneNumber_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::AssignedLaneNumber::AssignedLaneNumber>{})  && 
  
  // Check static size status of struct member 'LaneChange_ref' of type /CppImplementationDataTypes/LaneChange
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/LaneChange)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LaneChange::LaneChange>{}) 
  };
    return is_static_size;
}

}  // namespace LaneEvent

#endif  // PERCEPTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_LANEEVENT_SERIALIZER_LANEEVENT_H_

