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
/**        \file  RoadModelFusionExe/include/amsr/someip_protocol/internal/datatype_deserialization/LinearObjectIDT/deserializer_LinearObjectIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'LinearObjectIDT'
 *
 *      \details  /CppImplementationDataTypes/LinearObjectIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LINEAROBJECTIDT_DESERIALIZER_LINEAROBJECTIDT_H_
#define ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LINEAROBJECTIDT_DESERIALIZER_LINEAROBJECTIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LinearObjectIDT/impl_type_linearobjectidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/GeometryPointIDT/deserializer_GeometryPointIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace LinearObjectIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/LinearObjectIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/LinearObjectIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::LinearObjectIDT::LinearObjectIDT &data) noexcept {
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

  // Deserialize struct member 'IDLinearObject' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IDLinearObject);
  }

  // Deserialize struct member 'LinearObjectType' of type /CppImplementationDataTypes/LinearObjectTypeIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectTypeIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LinearObjectType);
  }

  // Deserialize struct member 'LinearObjectmarking' of type /CppImplementationDataTypes/LinearObjectmarkingIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectmarkingIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LinearObjectmarking);
  }

  // Deserialize struct member 'LinearObjectColour' of type /CppImplementationDataTypes/LinearObjectColourIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectColourIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LinearObjectColour);
  }

  // Deserialize struct member 'LinearObjectIsBold' of type /CppImplementationDataTypes/LinearObjectIsBoldIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectIsBoldIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LinearObjectIsBold);
  }

  // Deserialize struct member 'LinearObjectCurveType' of type /CppImplementationDataTypes/LinearObjectCurveTypeIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectCurveTypeIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LinearObjectCurveType);
  }

  // Deserialize struct member 'PointCount' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PointCount);
  }

  // Deserialize struct member 'GeometryPoints' of type /CppImplementationDataTypes/Array_GeometryPointIDT_Vector
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of vector length field and max. container size (/CppImplementationDataTypes/Array_GeometryPointIDT_Vector)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
        // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)
        // Config of struct length field (/CppImplementationDataTypes/GeometryPointIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)

        >(reader, data.GeometryPoints);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/LinearObjectIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::LinearObjectIDT::LinearObjectIDT>) noexcept {
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
  
  // Accumulate the static size of struct member 'IDLinearObject' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint32IDT::uint32IDT>{})  + 
  
  // Accumulate the static size of struct member 'LinearObjectType' of type /CppImplementationDataTypes/LinearObjectTypeIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectTypeIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LinearObjectTypeIDT::LinearObjectTypeIDT>{})  + 
  
  // Accumulate the static size of struct member 'LinearObjectmarking' of type /CppImplementationDataTypes/LinearObjectmarkingIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectmarkingIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LinearObjectmarkingIDT::LinearObjectmarkingIDT>{})  + 
  
  // Accumulate the static size of struct member 'LinearObjectColour' of type /CppImplementationDataTypes/LinearObjectColourIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectColourIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LinearObjectColourIDT::LinearObjectColourIDT>{})  + 
  
  // Accumulate the static size of struct member 'LinearObjectIsBold' of type /CppImplementationDataTypes/LinearObjectIsBoldIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectIsBoldIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LinearObjectIsBoldIDT::LinearObjectIsBoldIDT>{})  + 
  
  // Accumulate the static size of struct member 'LinearObjectCurveType' of type /CppImplementationDataTypes/LinearObjectCurveTypeIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/LinearObjectCurveTypeIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LinearObjectCurveTypeIDT::LinearObjectCurveTypeIDT>{})  + 
  
  // Accumulate the static size of struct member 'PointCount' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::uint8IDT::uint8IDT>{})  + 
  
  // Accumulate the static size of struct member 'GeometryPoints' of type /CppImplementationDataTypes/Array_GeometryPointIDT_Vector
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of vector length field and max. container size (/CppImplementationDataTypes/Array_GeometryPointIDT_Vector)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfVectorLengthField, typename deserialization::Tp<TpPack>::ByteOrder>, internal::ArraySizeInactive,
                                // Config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)
                                // Config of struct length field (/CppImplementationDataTypes/GeometryPointIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of vector value type (DataTypeStruct, /CppImplementationDataTypes/GeometryPointIDT)

                               >(deserialization::SizeToken<::Array_GeometryPointIDT_Vector::Array_GeometryPointIDT_Vector>{}) 
  };
  return static_size;
}

}  // namespace LinearObjectIDT

#endif  // ROADMODELFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LINEAROBJECTIDT_DESERIALIZER_LINEAROBJECTIDT_H_

