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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_deserialization/NOAInfoIDT/deserializer_NOAInfoIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'NOAInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/NOAInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_NOAINFOIDT_DESERIALIZER_NOAINFOIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_NOAINFOIDT_DESERIALIZER_NOAINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "NOAInfoIDT/impl_type_noainfoidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/PairOfIdIDT/deserializer_PairOfIdIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace NOAInfoIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/NOAInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/NOAInfoIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::NOAInfoIDT::NOAInfoIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'NavigationStatus' of type /CppImplementationDataTypes/NavigationStatusIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/NavigationStatusIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.NavigationStatus);


  // Deserialize struct member 'MatchingStatus' of type /CppImplementationDataTypes/MatchingStatusIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/MatchingStatusIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.MatchingStatus);
  }

  // Deserialize struct member 'RemainDistance' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RemainDistance);
  }

  // Deserialize struct member 'SwitchLaneDirection' of type /CppImplementationDataTypes/SwitchLaneDirectionIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneDirectionIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SwitchLaneDirection);
  }

  // Deserialize struct member 'SwitchLaneReason' of type /CppImplementationDataTypes/SwitchLaneReasonIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneReasonIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SwitchLaneReason);
  }

  // Deserialize struct member 'SwitchLaneDistance' of type /CppImplementationDataTypes/uint16_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SwitchLaneDistance);
  }

  // Deserialize struct member 'SwitchLaneEndDistance' of type /CppImplementationDataTypes/uint16_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SwitchLaneEndDistance);
  }

  // Deserialize struct member 'Count' of type /CppImplementationDataTypes/uint16_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Count);
  }

  // Deserialize struct member 'PairOfIds' of type /CppImplementationDataTypes/Array_PairOfIdIDT_Vector
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of vector length field and max. container size (/CppImplementationDataTypes/Array_PairOfIdIDT_Vector)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfIdIDT)
        // Config of struct length field (/CppImplementationDataTypes/PairOfIdIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfIdIDT)

        >(reader, data.PairOfIds);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/NOAInfoIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::NOAInfoIDT::NOAInfoIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'NavigationStatus' of type /CppImplementationDataTypes/NavigationStatusIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NavigationStatusIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NavigationStatusIDT::NavigationStatusIDT>{})  + 
  
  // Accumulate the static size of struct member 'MatchingStatus' of type /CppImplementationDataTypes/MatchingStatusIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/MatchingStatusIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::MatchingStatusIDT::MatchingStatusIDT>{})  + 
  
  // Accumulate the static size of struct member 'RemainDistance' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'SwitchLaneDirection' of type /CppImplementationDataTypes/SwitchLaneDirectionIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneDirectionIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SwitchLaneDirectionIDT::SwitchLaneDirectionIDT>{})  + 
  
  // Accumulate the static size of struct member 'SwitchLaneReason' of type /CppImplementationDataTypes/SwitchLaneReasonIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SwitchLaneReasonIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SwitchLaneReasonIDT::SwitchLaneReasonIDT>{})  + 
  
  // Accumulate the static size of struct member 'SwitchLaneDistance' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint16IDT::uint16IDT>{})  + 
  
  // Accumulate the static size of struct member 'SwitchLaneEndDistance' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint16IDT::uint16IDT>{})  + 
  
  // Accumulate the static size of struct member 'Count' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint16IDT::uint16IDT>{})  + 
  
  // Accumulate the static size of struct member 'PairOfIds' of type /CppImplementationDataTypes/Array_PairOfIdIDT_Vector
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of vector length field and max. container size (/CppImplementationDataTypes/Array_PairOfIdIDT_Vector)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                                // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfIdIDT)
                                // Config of struct length field (/CppImplementationDataTypes/PairOfIdIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/PairOfIdIDT)

                               >(deserialization::SizeToken<::Array_PairOfIdIDT_Vector::Array_PairOfIdIDT_Vector>{}) 
  };
  return static_size;
}

}  // namespace NOAInfoIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_NOAINFOIDT_DESERIALIZER_NOAINFOIDT_H_

