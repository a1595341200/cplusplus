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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_protocol/internal/datatype_deserialization/FrntCamInfoIDT/deserializer_FrntCamInfoIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'FrntCamInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/FrntCamInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FRNTCAMINFOIDT_DESERIALIZER_FRNTCAMINFOIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FRNTCAMINFOIDT_DESERIALIZER_FRNTCAMINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FrntCamInfoIDT/impl_type_frntcaminfoidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FrntCamSts1VccIDT/deserializer_FrntCamSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/StaticObjIDT/deserializer_StaticObjIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace FrntCamInfoIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/FrntCamInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/FrntCamInfoIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::FrntCamInfoIDT::FrntCamInfoIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'StaticObjs' of type /CppImplementationDataTypes/Array_StaticObjIDT_20
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of array length field (/CppImplementationDataTypes/Array_StaticObjIDT_20)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)
        // Config of struct length field (/CppImplementationDataTypes/StaticObjIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)

          >(reader, data.StaticObjs);


  // Deserialize struct member 'FrntCamSts1Vcc' of type /CppImplementationDataTypes/FrntCamSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/FrntCamSts1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.FrntCamSts1Vcc);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/FrntCamInfoIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::FrntCamInfoIDT::FrntCamInfoIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'StaticObjs' of type /CppImplementationDataTypes/Array_StaticObjIDT_20
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_StaticObjIDT_20)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)
                                // Config of struct length field (/CppImplementationDataTypes/StaticObjIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/StaticObjIDT)

                               >(deserialization::SizeToken<::Array_StaticObjIDT_20::Array_StaticObjIDT_20>{})  + 
  
  // Accumulate the static size of struct member 'FrntCamSts1Vcc' of type /CppImplementationDataTypes/FrntCamSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/FrntCamSts1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::FrntCamSts1VccIDT::FrntCamSts1VccIDT>{}) 
  };
  return static_size;
}

}  // namespace FrntCamInfoIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FRNTCAMINFOIDT_DESERIALIZER_FRNTCAMINFOIDT_H_

