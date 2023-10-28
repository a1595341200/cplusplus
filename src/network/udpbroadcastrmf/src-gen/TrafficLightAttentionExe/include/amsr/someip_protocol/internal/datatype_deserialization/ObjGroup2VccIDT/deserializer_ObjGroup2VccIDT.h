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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_protocol/internal/datatype_deserialization/ObjGroup2VccIDT/deserializer_ObjGroup2VccIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'ObjGroup2VccIDT'
 *
 *      \details  /CppImplementationDataTypes/ObjGroup2VccIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJGROUP2VCCIDT_DESERIALIZER_OBJGROUP2VCCIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJGROUP2VCCIDT_DESERIALIZER_OBJGROUP2VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "ObjGroup2VccIDT/impl_type_objgroup2vccidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ObjEstimn2VccGroup_1IDT/deserializer_ObjEstimn2VccGroup_1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ObjInfo2VccGroup_1IDT/deserializer_ObjInfo2VccGroup_1IDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ObjPpty2VccGroup_1IDT/deserializer_ObjPpty2VccGroup_1IDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace ObjGroup2VccIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/ObjGroup2VccIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/ObjGroup2VccIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::ObjGroup2VccIDT::ObjGroup2VccIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'ObjEstimn2Vcc' of type /CppImplementationDataTypes/ObjEstimn2VccGroup_1IDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/ObjEstimn2VccGroup_1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.ObjEstimn2Vcc);


  // Deserialize struct member 'ObjInfo2Vcc' of type /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/ObjInfo2VccGroup_1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.ObjInfo2Vcc);
  }

  // Deserialize struct member 'ObjPpty2Vcc' of type /CppImplementationDataTypes/ObjPpty2VccGroup_1IDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/ObjPpty2VccGroup_1IDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.ObjPpty2Vcc);
  }

  // Deserialize struct member 'Chks' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Chks);
  }

  // Deserialize struct member 'Cntr' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Cntr);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/ObjGroup2VccIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::ObjGroup2VccIDT::ObjGroup2VccIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'ObjEstimn2Vcc' of type /CppImplementationDataTypes/ObjEstimn2VccGroup_1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/ObjEstimn2VccGroup_1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::ObjEstimn2VccGroup_1IDT::ObjEstimn2VccGroup_1IDT>{})  + 
  
  // Accumulate the static size of struct member 'ObjInfo2Vcc' of type /CppImplementationDataTypes/ObjInfo2VccGroup_1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/ObjInfo2VccGroup_1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::ObjInfo2VccGroup_1IDT::ObjInfo2VccGroup_1IDT>{})  + 
  
  // Accumulate the static size of struct member 'ObjPpty2Vcc' of type /CppImplementationDataTypes/ObjPpty2VccGroup_1IDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/ObjPpty2VccGroup_1IDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::ObjPpty2VccGroup_1IDT::ObjPpty2VccGroup_1IDT>{})  + 
  
  // Accumulate the static size of struct member 'Chks' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'Cntr' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{}) 
  };
  return static_size;
}

}  // namespace ObjGroup2VccIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_OBJGROUP2VCCIDT_DESERIALIZER_OBJGROUP2VCCIDT_H_

