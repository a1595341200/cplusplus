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
/**        \file  EDRExe/include/amsr/someip_protocol/internal/datatype_deserialization/LppPathSelectEDRIDT/deserializer_LppPathSelectEDRIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'LppPathSelectEDRIDT'
 *
 *      \details  /CppImplementationDataTypes/LppPathSelectEDRIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LPPPATHSELECTEDRIDT_DESERIALIZER_LPPPATHSELECTEDRIDT_H_
#define EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LPPPATHSELECTEDRIDT_DESERIALIZER_LPPPATHSELECTEDRIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LppPathSelectEDRIDT/impl_type_lpppathselectedridt.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace LppPathSelectEDRIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/LppPathSelectEDRIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/LppPathSelectEDRIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::LppPathSelectEDRIDT::LppPathSelectEDRIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'LocalPathPosXs' of type /CppImplementationDataTypes/Array_float32IDT_30
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_30)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder
        
        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

          >(reader, data.LocalPathPosXs);


  // Deserialize struct member 'LocalPathPosYs' of type /CppImplementationDataTypes/Array_float32IDT_30
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_30)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder
        
        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

        >(reader, data.LocalPathPosYs);
  }

  // Deserialize struct member 'LocalPathSpds' of type /CppImplementationDataTypes/Array_float32IDT_30
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_30)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder
        
        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

        >(reader, data.LocalPathSpds);
  }

  // Deserialize struct member 'LocalPathNum' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LocalPathNum);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/LppPathSelectEDRIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::LppPathSelectEDRIDT::LppPathSelectEDRIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'LocalPathPosXs' of type /CppImplementationDataTypes/Array_float32IDT_30
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_30)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder
                                
                                // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

                               >(deserialization::SizeToken<::Array_float32IDT_30::Array_float32IDT_30>{})  + 
  
  // Accumulate the static size of struct member 'LocalPathPosYs' of type /CppImplementationDataTypes/Array_float32IDT_30
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_30)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder
                                
                                // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

                               >(deserialization::SizeToken<::Array_float32IDT_30::Array_float32IDT_30>{})  + 
  
  // Accumulate the static size of struct member 'LocalPathSpds' of type /CppImplementationDataTypes/Array_float32IDT_30
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_float32IDT_30)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeValue, /CppImplementationDataTypes/float)
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder
                                
                                // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/float)

                               >(deserialization::SizeToken<::Array_float32IDT_30::Array_float32IDT_30>{})  + 
  
  // Accumulate the static size of struct member 'LocalPathNum' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{}) 
  };
  return static_size;
}

}  // namespace LppPathSelectEDRIDT

#endif  // EDREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LPPPATHSELECTEDRIDT_DESERIALIZER_LPPPATHSELECTEDRIDT_H_

