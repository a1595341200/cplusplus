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
/**        \file  ObjectFusionModelExe/include/amsr/someip_protocol/internal/datatype_deserialization/FrontFourDRadarSts1Vcc/deserializer_FrontFourDRadarSts1Vcc.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'FrontFourDRadarSts1Vcc'
 *
 *      \details  /CppImplementationDataTypes/FrontFourDRadarSts1Vcc
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FRONTFOURDRADARSTS1VCC_DESERIALIZER_FRONTFOURDRADARSTS1VCC_H_
#define OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FRONTFOURDRADARSTS1VCC_DESERIALIZER_FRONTFOURDRADARSTS1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FrontFourDRadarSts1Vcc/impl_type_frontfourdradarsts1vcc.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace FrontFourDRadarSts1Vcc {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/FrontFourDRadarSts1Vcc.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/FrontFourDRadarSts1Vcc
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'RdrStsRdrNrDetn_ref' of type /CppImplementationDataTypes/uint8_t
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.RdrStsRdrNrDetn_ref);


  // Deserialize struct member 'RdrStsRdrNrObj_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsRdrNrObj_ref);
  }

  // Deserialize struct member 'RdrStsBlkd0bin_ref' of type /CppImplementationDataTypes/RdrStsBlkd0bin
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsBlkd0bin)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsBlkd0bin_ref);
  }

  // Deserialize struct member 'RdrStsBlkdConf_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsBlkdConf_ref);
  }

  // Deserialize struct member 'RdrStsChks_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsChks_ref);
  }

  // Deserialize struct member 'RdrStsCntr_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsCntr_ref);
  }

  // Deserialize struct member 'RdrStsDstbc_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsDstbc_ref);
  }

  // Deserialize struct member 'RdrStsEna_ref' of type /CppImplementationDataTypes/RdrStsEna
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsEna)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsEna_ref);
  }

  // Deserialize struct member 'RdrStsFaulty_ref' of type /CppImplementationDataTypes/RdrStsFaulty
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsFaulty)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsFaulty_ref);
  }

  // Deserialize struct member 'RdrStsIfVersMajor_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsIfVersMajor_ref);
  }

  // Deserialize struct member 'RdrStsIfVersMinor_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsIfVersMinor_ref);
  }

  // Deserialize struct member 'RdrStsLatency_ref' of type /CppImplementationDataTypes/uint16_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsLatency_ref);
  }

  // Deserialize struct member 'RdrStsMisAlign_ref' of type /CppImplementationDataTypes/RdrStsMisAlign
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsMisAlign)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsMisAlign_ref);
  }

  // Deserialize struct member 'RdrStsMissCom_ref' of type /CppImplementationDataTypes/RdrStsMissCom
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsMissCom)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsMissCom_ref);
  }

  // Deserialize struct member 'RdrStsSftyFlt_ref' of type /CppImplementationDataTypes/RdrStsSftyFlt
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsSftyFlt)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsSftyFlt_ref);
  }

  // Deserialize struct member 'RdrStsTiStampH_ref' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsTiStampH_ref);
  }

  // Deserialize struct member 'RdrStsTiStampL_ref' of type /CppImplementationDataTypes/uint32_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsTiStampL_ref);
  }

  // Deserialize struct member 'RdrStsTiStampStsGlbTiBas_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsGlbTiBas
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsGlbTiBas)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsTiStampStsGlbTiBas_ref);
  }

  // Deserialize struct member 'RdrStsTiStampStsSyncToGatewy_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsSyncToGatewy
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsSyncToGatewy)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsTiStampStsSyncToGatewy_ref);
  }

  // Deserialize struct member 'RdrStsTiStampStsTiLeap_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsTiLeap
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsTiLeap)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsTiStampStsTiLeap_ref);
  }

  // Deserialize struct member 'RdrStsTiStampStsTiOut_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsTiOut
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsTiOut)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsTiStampStsTiOut_ref);
  }

  // Deserialize struct member 'RdrStsWhlSpdCmpFac_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RdrStsWhlSpdCmpFac_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/FrontFourDRadarSts1Vcc.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::FrontFourDRadarSts1Vcc::FrontFourDRadarSts1Vcc>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'RdrStsRdrNrDetn_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrNrDetn::RdrStsRdrNrDetn>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsRdrNrObj_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsRdrNrObj::RdrStsRdrNrObj>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsBlkd0bin_ref' of type /CppImplementationDataTypes/RdrStsBlkd0bin
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsBlkd0bin)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsBlkd0bin::RdrStsBlkd0bin>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsBlkdConf_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsBlkdConf::RdrStsBlkdConf>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsChks_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsChks::RdrStsChks>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsCntr_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsCntr::RdrStsCntr>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsDstbc_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsDstbc::RdrStsDstbc>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsEna_ref' of type /CppImplementationDataTypes/RdrStsEna
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsEna)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsEna::RdrStsEna>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsFaulty_ref' of type /CppImplementationDataTypes/RdrStsFaulty
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsFaulty)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsFaulty::RdrStsFaulty>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsIfVersMajor_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsIfVersMajor::RdrStsIfVersMajor>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsIfVersMinor_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsIfVersMinor::RdrStsIfVersMinor>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsLatency_ref' of type /CppImplementationDataTypes/uint16_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsLatency::RdrStsLatency>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsMisAlign_ref' of type /CppImplementationDataTypes/RdrStsMisAlign
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsMisAlign)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsMisAlign::RdrStsMisAlign>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsMissCom_ref' of type /CppImplementationDataTypes/RdrStsMissCom
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsMissCom)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsMissCom::RdrStsMissCom>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsSftyFlt_ref' of type /CppImplementationDataTypes/RdrStsSftyFlt
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsSftyFlt)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsSftyFlt::RdrStsSftyFlt>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsTiStampH_ref' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsTiStampH::RdrStsTiStampH>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsTiStampL_ref' of type /CppImplementationDataTypes/uint32_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsTiStampL::RdrStsTiStampL>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsTiStampStsGlbTiBas_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsGlbTiBas
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsGlbTiBas)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsTiStampStsGlbTiBas::RdrStsTiStampStsGlbTiBas>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsTiStampStsSyncToGatewy_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsSyncToGatewy
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsSyncToGatewy)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsTiStampStsSyncToGatewy::RdrStsTiStampStsSyncToGatewy>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsTiStampStsTiLeap_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsTiLeap
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsTiLeap)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsTiStampStsTiLeap::RdrStsTiStampStsTiLeap>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsTiStampStsTiOut_ref' of type /CppImplementationDataTypes/RdrStsTiStampStsTiOut
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RdrStsTiStampStsTiOut)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsTiStampStsTiOut::RdrStsTiStampStsTiOut>{})  + 
  
  // Accumulate the static size of struct member 'RdrStsWhlSpdCmpFac_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RdrStsWhlSpdCmpFac::RdrStsWhlSpdCmpFac>{}) 
  };
  return static_size;
}

}  // namespace FrontFourDRadarSts1Vcc

#endif  // OBJECTFUSIONMODELEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_FRONTFOURDRADARSTS1VCC_DESERIALIZER_FRONTFOURDRADARSTS1VCC_H_

