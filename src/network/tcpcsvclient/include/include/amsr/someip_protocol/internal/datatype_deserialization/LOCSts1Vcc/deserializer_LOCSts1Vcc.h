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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/LOCSts1Vcc/deserializer_LOCSts1Vcc.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'LOCSts1Vcc'
 *
 *      \details  /CppImplementationDataTypes/LOCSts1Vcc
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LOCSTS1VCC_DESERIALIZER_LOCSTS1VCC_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LOCSTS1VCC_DESERIALIZER_LOCSTS1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LOCSts1Vcc/impl_type_locsts1vcc.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace LOCSts1Vcc {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/LOCSts1Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/LOCSts1Vcc
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::LOCSts1Vcc::LOCSts1Vcc &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'LOCStsChks_ref' of type /CppImplementationDataTypes/uint8_t
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.LOCStsChks_ref);


  // Deserialize struct member 'LOCStsCntr_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.LOCStsCntr_ref);
  }

  // Deserialize struct member 'GNSSDatFr_ref' of type /CppImplementationDataTypes/GNSSDatFr
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/GNSSDatFr)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.GNSSDatFr_ref);
  }

  // Deserialize struct member 'GNSSDatLose_ref' of type /CppImplementationDataTypes/GNSSDatLose
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/GNSSDatLose)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.GNSSDatLose_ref);
  }

  // Deserialize struct member 'GNSSDatatt_ref' of type /CppImplementationDataTypes/GNSSDatatt
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/GNSSDatatt)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.GNSSDatatt_ref);
  }

  // Deserialize struct member 'GNSSTimestampLo_ref' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.GNSSTimestampLo_ref);
  }

  // Deserialize struct member 'GNSSTimestampHi_ref' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.GNSSTimestampHi_ref);
  }

  // Deserialize struct member 'IMUDatSts_ref' of type /CppImplementationDataTypes/IMUDatSts
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/IMUDatSts)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUDatSts_ref);
  }

  // Deserialize struct member 'IMUDatStsfr_ref' of type /CppImplementationDataTypes/IMUDatStsfr
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/IMUDatStsfr)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.IMUDatStsfr_ref);
  }

  // Deserialize struct member 'INSSysStatus_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.INSSysStatus_ref);
  }

  // Deserialize struct member 'Reserve1LOCSts_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Reserve1LOCSts_ref);
  }

  // Deserialize struct member 'Reserve2LOCSts_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Reserve2LOCSts_ref);
  }

  // Deserialize struct member 'VehicleDatatt_ref' of type /CppImplementationDataTypes/VehicleDatatt
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehicleDatatt)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehicleDatatt_ref);
  }

  // Deserialize struct member 'VehicleDatlose_ref' of type /CppImplementationDataTypes/VehicleDatlose
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehicleDatlose)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehicleDatlose_ref);
  }

  // Deserialize struct member 'VehicleSpedfr_ref' of type /CppImplementationDataTypes/VehicleSpedfr
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehicleSpedfr)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VehicleSpedfr_ref);
  }

  // Deserialize struct member 'Vehicleerr_ref' of type /CppImplementationDataTypes/Vehicleerr
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/Vehicleerr)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.Vehicleerr_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/LOCSts1Vcc.
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
 */
template <typename TpPack>
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::LOCSts1Vcc::LOCSts1Vcc>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'LOCStsChks_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LOCStsChks::LOCStsChks>{})  + 
  
  // Accumulate the static size of struct member 'LOCStsCntr_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::LOCStsCntr::LOCStsCntr>{})  + 
  
  // Accumulate the static size of struct member 'GNSSDatFr_ref' of type /CppImplementationDataTypes/GNSSDatFr
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/GNSSDatFr)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::GNSSDatFr::GNSSDatFr>{})  + 
  
  // Accumulate the static size of struct member 'GNSSDatLose_ref' of type /CppImplementationDataTypes/GNSSDatLose
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/GNSSDatLose)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::GNSSDatLose::GNSSDatLose>{})  + 
  
  // Accumulate the static size of struct member 'GNSSDatatt_ref' of type /CppImplementationDataTypes/GNSSDatatt
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/GNSSDatatt)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::GNSSDatatt::GNSSDatatt>{})  + 
  
  // Accumulate the static size of struct member 'GNSSTimestampLo_ref' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::GNSSTimestampLo::GNSSTimestampLo>{})  + 
  
  // Accumulate the static size of struct member 'GNSSTimestampHi_ref' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::GNSSTimestampHi::GNSSTimestampHi>{})  + 
  
  // Accumulate the static size of struct member 'IMUDatSts_ref' of type /CppImplementationDataTypes/IMUDatSts
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/IMUDatSts)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::IMUDatSts::IMUDatSts>{})  + 
  
  // Accumulate the static size of struct member 'IMUDatStsfr_ref' of type /CppImplementationDataTypes/IMUDatStsfr
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/IMUDatStsfr)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::IMUDatStsfr::IMUDatStsfr>{})  + 
  
  // Accumulate the static size of struct member 'INSSysStatus_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::INSSysStatus::INSSysStatus>{})  + 
  
  // Accumulate the static size of struct member 'Reserve1LOCSts_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Reserve1LOCSts::Reserve1LOCSts>{})  + 
  
  // Accumulate the static size of struct member 'Reserve2LOCSts_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Reserve2LOCSts::Reserve2LOCSts>{})  + 
  
  // Accumulate the static size of struct member 'VehicleDatatt_ref' of type /CppImplementationDataTypes/VehicleDatatt
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/VehicleDatatt)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VehicleDatatt::VehicleDatatt>{})  + 
  
  // Accumulate the static size of struct member 'VehicleDatlose_ref' of type /CppImplementationDataTypes/VehicleDatlose
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/VehicleDatlose)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VehicleDatlose::VehicleDatlose>{})  + 
  
  // Accumulate the static size of struct member 'VehicleSpedfr_ref' of type /CppImplementationDataTypes/VehicleSpedfr
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/VehicleSpedfr)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VehicleSpedfr::VehicleSpedfr>{})  + 
  
  // Accumulate the static size of struct member 'Vehicleerr_ref' of type /CppImplementationDataTypes/Vehicleerr
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/Vehicleerr)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::Vehicleerr::Vehicleerr>{}) 
  };
  return static_size;
}

}  // namespace LOCSts1Vcc

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LOCSTS1VCC_DESERIALIZER_LOCSTS1VCC_H_

