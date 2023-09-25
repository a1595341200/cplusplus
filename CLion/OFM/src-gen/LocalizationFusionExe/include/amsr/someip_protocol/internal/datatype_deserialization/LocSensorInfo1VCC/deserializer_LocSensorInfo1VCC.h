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
/**        \file  LocalizationFusionExe/include/amsr/someip_protocol/internal/datatype_deserialization/LocSensorInfo1VCC/deserializer_LocSensorInfo1VCC.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'LocSensorInfo1VCC'
 *
 *      \details  /CppImplementationDataTypes/LocSensorInfo1VCC
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LOCSENSORINFO1VCC_DESERIALIZER_LOCSENSORINFO1VCC_H_
#define LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LOCSENSORINFO1VCC_DESERIALIZER_LOCSENSORINFO1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "LocSensorInfo1VCC/impl_type_locsensorinfo1vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/GNSSinf1Vcc/deserializer_GNSSinf1Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/GNSSinf2Vcc/deserializer_GNSSinf2Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/IMUInf1Vcc/deserializer_IMUInf1Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/INSinf1Vcc/deserializer_INSinf1Vcc.h"
#include "amsr/someip_protocol/internal/datatype_deserialization/LOCSts1Vcc/deserializer_LOCSts1Vcc.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace LocSensorInfo1VCC {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/LocSensorInfo1VCC.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/LocSensorInfo1VCC
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::LocSensorInfo1VCC::LocSensorInfo1VCC &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'GNSSinf1Vcc_ref' of type /CppImplementationDataTypes/GNSSinf1Vcc
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Config of struct length field (/CppImplementationDataTypes/GNSSinf1Vcc)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

          >(reader, data.GNSSinf1Vcc_ref);


  // Deserialize struct member 'GNSSinf2Vcc_ref' of type /CppImplementationDataTypes/GNSSinf2Vcc
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/GNSSinf2Vcc)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.GNSSinf2Vcc_ref);
  }

  // Deserialize struct member 'IMUInf1Vcc_ref' of type /CppImplementationDataTypes/IMUInf1Vcc
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/IMUInf1Vcc)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.IMUInf1Vcc_ref);
  }

  // Deserialize struct member 'INSinf1Vcc_ref' of type /CppImplementationDataTypes/INSinf1Vcc
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/INSinf1Vcc)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.INSinf1Vcc_ref);
  }

  // Deserialize struct member 'LOCSts1Vcc_ref' of type /CppImplementationDataTypes/LOCSts1Vcc
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Config of struct length field (/CppImplementationDataTypes/LOCSts1Vcc)
        deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

        >(reader, data.LOCSts1Vcc_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/LocSensorInfo1VCC.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::LocSensorInfo1VCC::LocSensorInfo1VCC>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'GNSSinf1Vcc_ref' of type /CppImplementationDataTypes/GNSSinf1Vcc
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/GNSSinf1Vcc)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::GNSSinf1Vcc::GNSSinf1Vcc>{})  + 
  
  // Accumulate the static size of struct member 'GNSSinf2Vcc_ref' of type /CppImplementationDataTypes/GNSSinf2Vcc
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/GNSSinf2Vcc)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::GNSSinf2Vcc::GNSSinf2Vcc>{})  + 
  
  // Accumulate the static size of struct member 'IMUInf1Vcc_ref' of type /CppImplementationDataTypes/IMUInf1Vcc
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/IMUInf1Vcc)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::IMUInf1Vcc::IMUInf1Vcc>{})  + 
  
  // Accumulate the static size of struct member 'INSinf1Vcc_ref' of type /CppImplementationDataTypes/INSinf1Vcc
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/INSinf1Vcc)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::INSinf1Vcc::INSinf1Vcc>{})  + 
  
  // Accumulate the static size of struct member 'LOCSts1Vcc_ref' of type /CppImplementationDataTypes/LOCSts1Vcc
   SomeIpProtocolGetStaticSize<TpPack,
                                // Config of struct length field (/CppImplementationDataTypes/LOCSts1Vcc)
                                deserialization::LengthSize<deserialization::Tp<TpPack>::kSizeOfStructLengthField, typename deserialization::Tp<TpPack>::ByteOrder>

                               >(deserialization::SizeToken<::LOCSts1Vcc::LOCSts1Vcc>{}) 
  };
  return static_size;
}

}  // namespace LocSensorInfo1VCC

#endif  // LOCALIZATIONFUSIONEXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_LOCSENSORINFO1VCC_DESERIALIZER_LOCSENSORINFO1VCC_H_

