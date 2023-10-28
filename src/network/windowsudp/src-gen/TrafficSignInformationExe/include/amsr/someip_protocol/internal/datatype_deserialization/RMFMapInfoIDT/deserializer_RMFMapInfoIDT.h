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
/**        \file  TrafficSignInformationExe/include/amsr/someip_protocol/internal/datatype_deserialization/RMFMapInfoIDT/deserializer_RMFMapInfoIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'RMFMapInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/RMFMapInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_RMFMAPINFOIDT_DESERIALIZER_RMFMAPINFOIDT_H_
#define TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_RMFMAPINFOIDT_DESERIALIZER_RMFMAPINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "RMFMapInfoIDT/impl_type_rmfmapinfoidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/MapOddIDT/deserializer_MapOddIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace RMFMapInfoIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/RMFMapInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/RMFMapInfoIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::RMFMapInfoIDT::RMFMapInfoIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'MapOdd' of type /CppImplementationDataTypes/MapOddIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/MapOddIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.MapOdd);


  // Deserialize struct member 'NavIsSet' of type /CppImplementationDataTypes/NavIsSetIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/NavIsSetIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.NavIsSet);
  }

  // Deserialize struct member 'NavIsYaw' of type /CppImplementationDataTypes/NavIsYawIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/NavIsYawIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.NavIsYaw);
  }

  // Deserialize struct member 'LocErrorSts' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LocErrorSts);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/RMFMapInfoIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::RMFMapInfoIDT::RMFMapInfoIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'MapOdd' of type /CppImplementationDataTypes/MapOddIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/MapOddIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::MapOddIDT::MapOddIDT>{})  + 
  
  // Accumulate the static size of struct member 'NavIsSet' of type /CppImplementationDataTypes/NavIsSetIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NavIsSetIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NavIsSetIDT::NavIsSetIDT>{})  + 
  
  // Accumulate the static size of struct member 'NavIsYaw' of type /CppImplementationDataTypes/NavIsYawIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/NavIsYawIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::NavIsYawIDT::NavIsYawIDT>{})  + 
  
  // Accumulate the static size of struct member 'LocErrorSts' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{}) 
  };
  return static_size;
}

}  // namespace RMFMapInfoIDT

#endif  // TRAFFICSIGNINFORMATIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_RMFMAPINFOIDT_DESERIALIZER_RMFMAPINFOIDT_H_

