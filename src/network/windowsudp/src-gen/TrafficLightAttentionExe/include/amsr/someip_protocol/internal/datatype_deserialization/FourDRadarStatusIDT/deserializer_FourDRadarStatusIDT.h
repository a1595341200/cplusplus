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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_protocol/internal/datatype_deserialization/FourDRadarStatusIDT/deserializer_FourDRadarStatusIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'FourDRadarStatusIDT'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarStatusIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARSTATUSIDT_DESERIALIZER_FOURDRADARSTATUSIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARSTATUSIDT_DESERIALIZER_FOURDRADARSTATUSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarStatusIDT/impl_type_fourdradarstatusidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FourDRadarECUStsIDT/deserializer_FourDRadarECUStsIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FrontFourDRadarSts2VccIDT/deserializer_FrontFourDRadarSts2VccIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace FourDRadarStatusIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/FourDRadarStatusIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/FourDRadarStatusIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::FourDRadarStatusIDT::FourDRadarStatusIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'FourDRadarECUSts' of type /CppImplementationDataTypes/FourDRadarECUStsIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUStsIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.FourDRadarECUSts);


  // Deserialize struct member 'FrontFourDRadarSts2Vcc' of type /CppImplementationDataTypes/FrontFourDRadarSts2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts2VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.FrontFourDRadarSts2Vcc);
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

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/FourDRadarStatusIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::FourDRadarStatusIDT::FourDRadarStatusIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'FourDRadarECUSts' of type /CppImplementationDataTypes/FourDRadarECUStsIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/FourDRadarECUStsIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::FourDRadarECUStsIDT::FourDRadarECUStsIDT>{})  + 
  
  // Accumulate the static size of struct member 'FrontFourDRadarSts2Vcc' of type /CppImplementationDataTypes/FrontFourDRadarSts2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/FrontFourDRadarSts2VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::FrontFourDRadarSts2VccIDT::FrontFourDRadarSts2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FrntRdrObjE2Efail' of type /CppImplementationDataTypes/Bool1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Bool1VccIDT::Bool1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FrntRdrObjTO' of type /CppImplementationDataTypes/Bool1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Bool1VccIDT)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Bool1VccIDT::Bool1VccIDT>{}) 
  };
  return static_size;
}

}  // namespace FourDRadarStatusIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FOURDRADARSTATUSIDT_DESERIALIZER_FOURDRADARSTATUSIDT_H_

