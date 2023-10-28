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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/TrafficInfoIDT/deserializer_TrafficInfoIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'TrafficInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/TrafficInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TRAFFICINFOIDT_DESERIALIZER_TRAFFICINFOIDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TRAFFICINFOIDT_DESERIALIZER_TRAFFICINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "TrafficInfoIDT/impl_type_trafficinfoidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LsrObjIDT/deserializer_LsrObjIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TrfcSignIDT/deserializer_TrfcSignIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace TrafficInfoIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/TrafficInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/TrafficInfoIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::TrafficInfoIDT::TrafficInfoIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'LsrObjs' of type /CppImplementationDataTypes/Array_LsrObjIDT_8
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of array length field (/CppImplementationDataTypes/Array_LsrObjIDT_8)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)
        // Config of struct length field (/CppImplementationDataTypes/LsrObjIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)

          >(reader, data.LsrObjs);


  // Deserialize struct member 'TrfcSigns' of type /CppImplementationDataTypes/Array_TrfcSignIDT_8
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/Array_TrfcSignIDT_8)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)
        // Config of struct length field (/CppImplementationDataTypes/TrfcSignIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)

        >(reader, data.TrfcSigns);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/TrafficInfoIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::TrafficInfoIDT::TrafficInfoIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'LsrObjs' of type /CppImplementationDataTypes/Array_LsrObjIDT_8
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_LsrObjIDT_8)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)
                                // Config of struct length field (/CppImplementationDataTypes/LsrObjIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/LsrObjIDT)

                               >(deserialization::SizeToken<::Array_LsrObjIDT_8::Array_LsrObjIDT_8>{})  + 
  
  // Accumulate the static size of struct member 'TrfcSigns' of type /CppImplementationDataTypes/Array_TrfcSignIDT_8
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_TrfcSignIDT_8)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)
                                // Config of struct length field (/CppImplementationDataTypes/TrfcSignIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TrfcSignIDT)

                               >(deserialization::SizeToken<::Array_TrfcSignIDT_8::Array_TrfcSignIDT_8>{}) 
  };
  return static_size;
}

}  // namespace TrafficInfoIDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_TRAFFICINFOIDT_DESERIALIZER_TRAFFICINFOIDT_H_

