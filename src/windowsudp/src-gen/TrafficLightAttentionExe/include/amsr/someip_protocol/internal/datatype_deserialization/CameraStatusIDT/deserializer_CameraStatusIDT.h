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
/**        \file  TrafficLightAttentionExe/include/amsr/someip_protocol/internal/datatype_deserialization/CameraStatusIDT/deserializer_CameraStatusIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'CameraStatusIDT'
 *
 *      \details  /CppImplementationDataTypes/CameraStatusIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_CAMERASTATUSIDT_DESERIALIZER_CAMERASTATUSIDT_H_
#define TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_CAMERASTATUSIDT_DESERIALIZER_CAMERASTATUSIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "CameraStatusIDT/impl_type_camerastatusidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FLCamSts1VccIDT/deserializer_FLCamSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/FRCamSts1VccIDT/deserializer_FRCamSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RLCamSts1VccIDT/deserializer_RLCamSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/RRCamSts1VccIDT/deserializer_RRCamSts1VccIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace CameraStatusIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/CameraStatusIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/CameraStatusIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::CameraStatusIDT::CameraStatusIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'FLCamSts1Vcc' of type /CppImplementationDataTypes/FLCamSts1VccIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/FLCamSts1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.FLCamSts1Vcc);


  // Deserialize struct member 'FRCamSts1Vcc' of type /CppImplementationDataTypes/FRCamSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/FRCamSts1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.FRCamSts1Vcc);
  }

  // Deserialize struct member 'RLCamSts1Vcc' of type /CppImplementationDataTypes/RLCamSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/RLCamSts1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.RLCamSts1Vcc);
  }

  // Deserialize struct member 'RRCamSts1Vcc' of type /CppImplementationDataTypes/RRCamSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/RRCamSts1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.RRCamSts1Vcc);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/CameraStatusIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::CameraStatusIDT::CameraStatusIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'FLCamSts1Vcc' of type /CppImplementationDataTypes/FLCamSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/FLCamSts1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::FLCamSts1VccIDT::FLCamSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'FRCamSts1Vcc' of type /CppImplementationDataTypes/FRCamSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/FRCamSts1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::FRCamSts1VccIDT::FRCamSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'RLCamSts1Vcc' of type /CppImplementationDataTypes/RLCamSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/RLCamSts1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::RLCamSts1VccIDT::RLCamSts1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'RRCamSts1Vcc' of type /CppImplementationDataTypes/RRCamSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/RRCamSts1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::RRCamSts1VccIDT::RRCamSts1VccIDT>{}) 
  };
  return static_size;
}

}  // namespace CameraStatusIDT

#endif  // TRAFFICLIGHTATTENTIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_CAMERASTATUSIDT_DESERIALIZER_CAMERASTATUSIDT_H_

