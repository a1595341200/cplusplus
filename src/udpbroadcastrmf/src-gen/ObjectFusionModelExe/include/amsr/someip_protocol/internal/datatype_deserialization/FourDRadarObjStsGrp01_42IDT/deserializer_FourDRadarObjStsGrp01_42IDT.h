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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/FourDRadarObjStsGrp01_42IDT/deserializer_FourDRadarObjStsGrp01_42IDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'FourDRadarObjStsGrp01_42IDT'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADAROBJSTSGRP01_42IDT_DESERIALIZER_FOURDRADAROBJSTSGRP01_42IDT_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADAROBJSTSGRP01_42IDT_DESERIALIZER_FOURDRADAROBJSTSGRP01_42IDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarObjStsGrp01_42IDT/impl_type_fourdradarobjstsgrp01_42idt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FourDRadarECUStsIDT/deserializer_FourDRadarECUStsIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FourDRadarObjStIDT/deserializer_FourDRadarObjStIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FrontFourDRadarSts1VccIDT/deserializer_FrontFourDRadarSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FrontFourDRadarVDYIDT/deserializer_FrontFourDRadarVDYIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/TFourDRadarDataValidIDT/deserializer_TFourDRadarDataValidIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace FourDRadarObjStsGrp01_42IDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'TFourDRadarDataValid01_42' of type /CppImplementationDataTypes/Array_TFourDRadarDataValidIDT_42
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of array length field (/CppImplementationDataTypes/Array_TFourDRadarDataValidIDT_42)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValidIDT)
        // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValidIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValidIDT)

          >(reader, data.TFourDRadarDataValid01_42);


  // Deserialize struct member 'FourDRadarObjSts01_42' of type /CppImplementationDataTypes/Array_FourDRadarObjStIDT_42
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/Array_FourDRadarObjStIDT_42)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjStIDT)
        // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjStIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
        
        // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjStIDT)

        >(reader, data.FourDRadarObjSts01_42);
  }

  // Deserialize struct member 'ErrorStatuse01_42' of type /CppImplementationDataTypes/Array_uint32IDT_42
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of array length field (/CppImplementationDataTypes/Array_uint32IDT_42)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
        // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder
        
        // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

        >(reader, data.ErrorStatuse01_42);
  }

  // Deserialize struct member 'FourDRadarECUSts' of type /CppImplementationDataTypes/FourDRadarECUStsIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUStsIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.FourDRadarECUSts);
  }

  // Deserialize struct member 'FrontFourDRadarSts1Vcc' of type /CppImplementationDataTypes/FrontFourDRadarSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.FrontFourDRadarSts1Vcc);
  }

  // Deserialize struct member 'FrntRdrObjE2Efail' of type /CppImplementationDataTypes/Bool1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FrntRdrObjE2Efail);
  }

  // Deserialize struct member 'FrntRdrObjTO' of type /CppImplementationDataTypes/Bool1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.FrntRdrObjTO);
  }

  // Deserialize struct member 'FrontFourDRadarVDY' of type /CppImplementationDataTypes/FrontFourDRadarVDYIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarVDYIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.FrontFourDRadarVDY);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'TFourDRadarDataValid01_42' of type /CppImplementationDataTypes/Array_TFourDRadarDataValidIDT_42
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_TFourDRadarDataValidIDT_42)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValidIDT)
                                // Config of struct length field (/CppImplementationDataTypes/TFourDRadarDataValidIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/TFourDRadarDataValidIDT)

                               >(deserialization::SizeToken<::Array_TFourDRadarDataValidIDT_42::Array_TFourDRadarDataValidIDT_42>{})  + 
  
  // Accumulate the static size of struct member 'FourDRadarObjSts01_42' of type /CppImplementationDataTypes/Array_FourDRadarObjStIDT_42
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_FourDRadarObjStIDT_42)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjStIDT)
                                // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjStIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>
                                
                                // End of config of array value type (DataTypeStruct, /CppImplementationDataTypes/FourDRadarObjStIDT)

                               >(deserialization::SizeToken<::Array_FourDRadarObjStIDT_42::Array_FourDRadarObjStIDT_42>{})  + 
  
  // Accumulate the static size of struct member 'ErrorStatuse01_42' of type /CppImplementationDataTypes/Array_uint32IDT_42
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of array length field (/CppImplementationDataTypes/Array_uint32IDT_42)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfArrayLengthField, typename deserialization::Tp<TpPack>::ByteOrder>,
                                // Config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder
                                
                                // End of config of array value type (DataTypeValue, /CppImplementationDataTypes/uint32_t)

                               >(deserialization::SizeToken<::Array_uint32IDT_42::Array_uint32IDT_42>{})  + 
  
  // Accumulate the static size of struct member 'FourDRadarECUSts' of type /CppImplementationDataTypes/FourDRadarECUStsIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUStsIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::FourDRadarECUStsIDT::FourDRadarECUStsIDT>{})  + 
  
  // Accumulate the static size of struct member 'FrontFourDRadarSts1Vcc' of type /CppImplementationDataTypes/FrontFourDRadarSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::FrontFourDRadarSts1VccIDT::FrontFourDRadarSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FrntRdrObjE2Efail' of type /CppImplementationDataTypes/Bool1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Bool1VccIDT::Bool1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FrntRdrObjTO' of type /CppImplementationDataTypes/Bool1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Bool1VccIDT::Bool1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FrontFourDRadarVDY' of type /CppImplementationDataTypes/FrontFourDRadarVDYIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarVDYIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::FrontFourDRadarVDYIDT::FrontFourDRadarVDYIDT>{}) 
  };
  return static_size;
}

}  // namespace FourDRadarObjStsGrp01_42IDT

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADAROBJSTSGRP01_42IDT_DESERIALIZER_FOURDRADAROBJSTSGRP01_42IDT_H_

