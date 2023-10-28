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
/**        \file  TargetPredictExe/include/amsr/someip_protocol/internal/datatype_deserialization/LocSensorInfo1VCCIDT/deserializer_LocSensorInfo1VCCIDT.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'LocSensorInfo1VCCIDT'
 *
 *      \details  /CppImplementationDataTypes/LocSensorInfo1VCCIDT
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LOCSENSORINFO1VCCIDT_DESERIALIZER_LOCSENSORINFO1VCCIDT_H_
#define TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LOCSENSORINFO1VCCIDT_DESERIALIZER_LOCSENSORINFO1VCCIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LocSensorInfo1VCCIDT/impl_type_locsensorinfo1vccidt.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/GNSSinf1OutIDT/deserializer_GNSSinf1OutIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/GNSSinf2VccIDT/deserializer_GNSSinf2VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/IMUInf1VccIDT/deserializer_IMUInf1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/INSinf1OutIDT/deserializer_INSinf1OutIDT.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LOCSts1VccIDT/deserializer_LOCSts1VccIDT.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace LocSensorInfo1VCCIDT {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/LocSensorInfo1VCCIDT.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/LocSensorInfo1VCCIDT
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::LocSensorInfo1VCCIDT::LocSensorInfo1VCCIDT &data) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'GNSSinf1Out' of type /CppImplementationDataTypes/GNSSinf1OutIDT
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/GNSSinf1OutIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.GNSSinf1Out);


  // Deserialize struct member 'GNSSinf2Vcc' of type /CppImplementationDataTypes/GNSSinf2VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/GNSSinf2VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.GNSSinf2Vcc);
  }

  // Deserialize struct member 'IMUInf1Vcc' of type /CppImplementationDataTypes/IMUInf1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/IMUInf1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.IMUInf1Vcc);
  }

  // Deserialize struct member 'INSinf1Out' of type /CppImplementationDataTypes/INSinf1OutIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/INSinf1OutIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.INSinf1Out);
  }

  // Deserialize struct member 'LOCSts1Vcc' of type /CppImplementationDataTypes/LOCSts1VccIDT
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/LOCSts1VccIDT)
        internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.LOCSts1Vcc);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/LocSensorInfo1VCCIDT.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::LocSensorInfo1VCCIDT::LocSensorInfo1VCCIDT>) noexcept {
  // Namespace alias for static deserialization code
  namespace internal = amsr::someip_protocol::internal;
  namespace deserialization = internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'GNSSinf1Out' of type /CppImplementationDataTypes/GNSSinf1OutIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/GNSSinf1OutIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::GNSSinf1OutIDT::GNSSinf1OutIDT>{})  + 
  
  // Accumulate the static size of struct member 'GNSSinf2Vcc' of type /CppImplementationDataTypes/GNSSinf2VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/GNSSinf2VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::GNSSinf2VccIDT::GNSSinf2VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'IMUInf1Vcc' of type /CppImplementationDataTypes/IMUInf1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/IMUInf1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::IMUInf1VccIDT::IMUInf1VccIDT>{})  + 
  
  // Accumulate the static size of struct member 'INSinf1Out' of type /CppImplementationDataTypes/INSinf1OutIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/INSinf1OutIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::INSinf1OutIDT::INSinf1OutIDT>{})  + 
  
  // Accumulate the static size of struct member 'LOCSts1Vcc' of type /CppImplementationDataTypes/LOCSts1VccIDT
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LOCSts1VccIDT)
                                internal::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LOCSts1VccIDT::LOCSts1VccIDT>{}) 
  };
  return static_size;
}

}  // namespace LocSensorInfo1VCCIDT

#endif  // TARGETPREDICTEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LOCSENSORINFO1VCCIDT_DESERIALIZER_LOCSENSORINFO1VCCIDT_H_

