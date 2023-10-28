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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_deserialization/PathTrafficSignsIDT/deserializer_PathTrafficSignsIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'PathTrafficSignsIDT'
 *
 *      \details  /CppImplementationDataTypes/PathTrafficSignsIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_PATHTRAFFICSIGNSIDT_DESERIALIZER_PATHTRAFFICSIGNSIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_PATHTRAFFICSIGNSIDT_DESERIALIZER_PATHTRAFFICSIGNSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "PathTrafficSignsIDT/impl_type_pathtrafficsignsidt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace PathTrafficSignsIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/PathTrafficSignsIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/PathTrafficSignsIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::PathTrafficSignsIDT::PathTrafficSignsIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'InstanceId' of type /CppImplementationDataTypes/uint32_t
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.InstanceId);


  // Deserialize struct member 'PathId' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PathId);
  }

  // Deserialize struct member 'LaneNumber' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LaneNumber);
  }

  // Deserialize struct member 'PathOffset' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PathOffset);
  }

  // Deserialize struct member 'EndOffset' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.EndOffset);
  }

  // Deserialize struct member 'TrafficSignType' of type /CppImplementationDataTypes/TrafficSignTypeIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrafficSignTypeIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TrafficSignType);
  }

  // Deserialize struct member 'TrafficSignShape' of type /CppImplementationDataTypes/TrafficSignShapeIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/TrafficSignShapeIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.TrafficSignShape);
  }

  // Deserialize struct member 'Latitude' of type /CppImplementationDataTypes/int32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Latitude);
  }

  // Deserialize struct member 'Longitude' of type /CppImplementationDataTypes/int32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Longitude);
  }

  // Deserialize struct member 'Altitude' of type /CppImplementationDataTypes/int32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Altitude);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/PathTrafficSignsIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 * \return Returns the static size of the struct in bytes.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::PathTrafficSignsIDT::PathTrafficSignsIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'InstanceId' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'PathId' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'LaneNumber' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'PathOffset' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'EndOffset' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'TrafficSignType' of type /CppImplementationDataTypes/TrafficSignTypeIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TrafficSignTypeIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TrafficSignTypeIDT::TrafficSignTypeIDT>{})  + 
  
  // Accumulate the static size of struct member 'TrafficSignShape' of type /CppImplementationDataTypes/TrafficSignShapeIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/TrafficSignShapeIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::TrafficSignShapeIDT::TrafficSignShapeIDT>{})  + 
  
  // Accumulate the static size of struct member 'Latitude' of type /CppImplementationDataTypes/int32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::sint32IDT::sint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'Longitude' of type /CppImplementationDataTypes/int32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::sint32IDT::sint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'Altitude' of type /CppImplementationDataTypes/int32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/int32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::sint32IDT::sint32IDT>{}) 
  };
  return static_size;
}

}  // namespace PathTrafficSignsIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_PATHTRAFFICSIGNSIDT_DESERIALIZER_PATHTRAFFICSIGNSIDT_H_

