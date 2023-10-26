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
/**        \file  TargetPredictExe/include/amsr/someip_protocol/internal/datatype_deserialization/RMFInfoIDT/deserializer_RMFInfoIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'RMFInfoIDT'
 *
 *      \details  /CppImplementationDataTypes/RMFInfoIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_RMFINFOIDT_DESERIALIZER_RMFINFOIDT_H_
#define TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_RMFINFOIDT_DESERIALIZER_RMFINFOIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "RMFInfoIDT/impl_type_rmfinfoidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/BusRefLinePointIDT/deserializer_BusRefLinePointIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ExtractedLaneIDT/deserializer_ExtractedLaneIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/ExtractedMapInfIDT/deserializer_ExtractedMapInfIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RefLineSpeedInfIDT/deserializer_RefLineSpeedInfIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RefPathGlobalIDT/deserializer_RefPathGlobalIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace RMFInfoIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/RMFInfoIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/RMFInfoIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::RMFInfoIDT::RMFInfoIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'ExtractedMapInf' of type /CppImplementationDataTypes/ExtractedMapInfIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/ExtractedMapInfIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.ExtractedMapInf);


  // Deserialize struct member 'RefPathGlobals' of type /CppImplementationDataTypes/Array_RefPathGlobalIDT_6
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/Array_RefPathGlobalIDT_6)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)
        // Config of struct length field (/CppImplementationDataTypes/RefPathGlobalIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)

        >(reader, data.RefPathGlobals);
  }

  // Deserialize struct member 'ExtractedLanes' of type /CppImplementationDataTypes/Array_ExtractedLaneIDT_3
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/Array_ExtractedLaneIDT_3)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)
        // Config of struct length field (/CppImplementationDataTypes/ExtractedLaneIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)

        >(reader, data.ExtractedLanes);
  }

  // Deserialize struct member 'RefLineSpeedInf' of type /CppImplementationDataTypes/RefLineSpeedInfIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/RefLineSpeedInfIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.RefLineSpeedInf);
  }

  // Deserialize struct member 'BusRefLinePoints' of type /CppImplementationDataTypes/Array_BusRefLinePointIDT_71
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/Array_BusRefLinePointIDT_71)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)
        // Config of struct length field (/CppImplementationDataTypes/BusRefLinePointIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)

        >(reader, data.BusRefLinePoints);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/RMFInfoIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::RMFInfoIDT::RMFInfoIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'ExtractedMapInf' of type /CppImplementationDataTypes/ExtractedMapInfIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/ExtractedMapInfIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::ExtractedMapInfIDT::ExtractedMapInfIDT>{})  + 
  
  // Accumulate the static size of struct member 'RefPathGlobals' of type /CppImplementationDataTypes/Array_RefPathGlobalIDT_6
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_RefPathGlobalIDT_6)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)
                                // Config of struct length field (/CppImplementationDataTypes/RefPathGlobalIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/RefPathGlobalIDT)

                               >(deserialization::SizeToken<::Array_RefPathGlobalIDT_6::Array_RefPathGlobalIDT_6>{})  + 
  
  // Accumulate the static size of struct member 'ExtractedLanes' of type /CppImplementationDataTypes/Array_ExtractedLaneIDT_3
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_ExtractedLaneIDT_3)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)
                                // Config of struct length field (/CppImplementationDataTypes/ExtractedLaneIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/ExtractedLaneIDT)

                               >(deserialization::SizeToken<::Array_ExtractedLaneIDT_3::Array_ExtractedLaneIDT_3>{})  + 
  
  // Accumulate the static size of struct member 'RefLineSpeedInf' of type /CppImplementationDataTypes/RefLineSpeedInfIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/RefLineSpeedInfIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::RefLineSpeedInfIDT::RefLineSpeedInfIDT>{})  + 
  
  // Accumulate the static size of struct member 'BusRefLinePoints' of type /CppImplementationDataTypes/Array_BusRefLinePointIDT_71
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_BusRefLinePointIDT_71)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)
                                // Config of struct length field (/CppImplementationDataTypes/BusRefLinePointIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/BusRefLinePointIDT)

                               >(deserialization::SizeToken<::Array_BusRefLinePointIDT_71::Array_BusRefLinePointIDT_71>{}) 
  };
  return static_size;
}

}  // namespace RMFInfoIDT

#endif  // TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_RMFINFOIDT_DESERIALIZER_RMFINFOIDT_H_

