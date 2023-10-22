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
/**        \file  Soc2LidarExe/include/amsr/someip_protocol/internal/datatype_deserialization/EgoMotion/deserializer_EgoMotion.h
 *        \brief  SOME/IP protocol deserializer implementation for datatype 'EgoMotion'
 *
 *      \details  /CppImplementationDataTypes/EgoMotion
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef SOC2LIDAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_EGOMOTION_DESERIALIZER_EGOMOTION_H_
#define SOC2LIDAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_EGOMOTION_DESERIALIZER_EGOMOTION_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "EgoMotion/impl_type_egomotion.h"
#include "someip-protocol/internal/deserialization/deser_wrapper.h"

namespace EgoMotion {

// VECTOR NC Metric-HIS.PATH: MD_SOMEIPPROTOCOL_Metric-HIS.PATH
/*!
 * \brief Deserializer for datatype /CppImplementationDataTypes/EgoMotion.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for deserialization.
 *
 * \param[in,out] reader Reference to byte stream reader.
 * \param[out]    data Reference to the data object of type /CppImplementationDataTypes/EgoMotion
 *                in which the deserialized value will be written.
 * \return        True if the deserialization is successful, false otherwise.
 * \pre           The static size provided by SomeIpProtocolGetStaticSize has been verified.
 * \context       Reactor|App
 * \threadsafe    FALSE
 * \reentrant     TRUE for different reader objects.
 * \synchronous   TRUE
 */
template <typename TpPack>
amsr::someip_protocol::internal::deserialization::Result SomeIpProtocolDeserialize(amsr::someip_protocol::internal::deserialization::Reader& reader, ::EgoMotion::EgoMotion &data) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;
  // Deserialize non-TLV struct
  deserialization::Result result{false};
  // Deserialize struct member 'SpeedEgoMotionData_ref' of type /CppImplementationDataTypes/float
  result = deserialization::SomeIpProtocolDeserialize<
          TpPack,
          // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

          >(reader, data.SpeedEgoMotionData_ref);


  // Deserialize struct member 'SpeedQfEgoMotionData_ref' of type /CppImplementationDataTypes/SpeedQfEgoMotionData
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/SpeedQfEgoMotionData)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.SpeedQfEgoMotionData_ref);
  }

  // Deserialize struct member 'VLatEgoMotionData_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VLatEgoMotionData_ref);
  }

  // Deserialize struct member 'VLatQfEgoMotionData_ref' of type /CppImplementationDataTypes/VLatQfEgoMotionData
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/VLatQfEgoMotionData)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VLatQfEgoMotionData_ref);
  }

  // Deserialize struct member 'VLgtEgoMotionData_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VLgtEgoMotionData_ref);
  }

  // Deserialize struct member 'VLgtQfEgoMotionData_ref' of type /CppImplementationDataTypes/VLgtQfEgoMotionData
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/VLgtQfEgoMotionData)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.VLgtQfEgoMotionData_ref);
  }

  // Deserialize struct member 'ALgtEgoMotionData_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ALgtEgoMotionData_ref);
  }

  // Deserialize struct member 'ALgtQfEgoMotionData_ref' of type /CppImplementationDataTypes/ALgtQfEgoMotionData
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ALgtQfEgoMotionData)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ALgtQfEgoMotionData_ref);
  }

  // Deserialize struct member 'ALatEgoMotionData_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ALatEgoMotionData_ref);
  }

  // Deserialize struct member 'ALatQfEgoMotionData_ref' of type /CppImplementationDataTypes/ALatQfEgoMotionData
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/ALatQfEgoMotionData)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ALatQfEgoMotionData_ref);
  }

  // Deserialize struct member 'YawRateEgoMotionData_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.YawRateEgoMotionData_ref);
  }

  // Deserialize struct member 'PosnLgtDeltaEgoMotionData_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PosnLgtDeltaEgoMotionData_ref);
  }

  // Deserialize struct member 'PosnLatDeltaEgoMotionData_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.PosnLatDeltaEgoMotionData_ref);
  }

  // Deserialize struct member 'AgDirDeltaEgoMotionData_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AgDirDeltaEgoMotionData_ref);
  }

  // Deserialize struct member 'AVertEgoMotionData_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AVertEgoMotionData_ref);
  }

  // Deserialize struct member 'AVertQfEgoMotionData_ref' of type /CppImplementationDataTypes/AVertQfEgoMotionData
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/AVertQfEgoMotionData)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.AVertQfEgoMotionData_ref);
  }

  // Deserialize struct member 'RollRateEgoMotionData_ref' of type /CppImplementationDataTypes/float
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RollRateEgoMotionData_ref);
  }

  // Deserialize struct member 'RollRateQfEgoMotionData_ref' of type /CppImplementationDataTypes/RollRateQfEgoMotionData
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/RollRateQfEgoMotionData)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.RollRateQfEgoMotionData_ref);
  }

  // Deserialize struct member 'YawRateQfEgoMotionData_ref' of type /CppImplementationDataTypes/YawRateQfEgoMotionData
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/YawRateQfEgoMotionData)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.YawRateQfEgoMotionData_ref);
  }

  // Deserialize struct member 'ChksEgoMotionData_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.ChksEgoMotionData_ref);
  }

  // Deserialize struct member 'CntrEgoMotionData_ref' of type /CppImplementationDataTypes/uint8_t
  // VECTOR NL AutosarC++17_10-M0.1.2: MD_SOMEIPPROTOCOL_AutosarC++17_10-M0.1.2_dead_branch
  if (result) {
    result = deserialization::SomeIpProtocolDeserialize<
        TpPack,
        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
        typename deserialization::Tp<TpPack>::ByteOrder

        >(reader, data.CntrEgoMotionData_ref);
  }

  return result;
}

/*!
 * \brief Calculates the static size for datatype /CppImplementationDataTypes/EgoMotion.
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
constexpr std::size_t SomeIpProtocolGetStaticSize(amsr::someip_protocol::internal::deserialization::SizeToken<::EgoMotion::EgoMotion>) noexcept {
  // Namespace alias for static deserialization code
  namespace deserialization = amsr::someip_protocol::internal::deserialization;

  // Sum of static size
 constexpr std::size_t static_size{
  // Accumulate the static size of struct member 'SpeedEgoMotionData_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SpeedEgoMotionData::SpeedEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'SpeedQfEgoMotionData_ref' of type /CppImplementationDataTypes/SpeedQfEgoMotionData
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/SpeedQfEgoMotionData)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::SpeedQfEgoMotionData::SpeedQfEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'VLatEgoMotionData_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VLatEgoMotionData::VLatEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'VLatQfEgoMotionData_ref' of type /CppImplementationDataTypes/VLatQfEgoMotionData
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/VLatQfEgoMotionData)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VLatQfEgoMotionData::VLatQfEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'VLgtEgoMotionData_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VLgtEgoMotionData::VLgtEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'VLgtQfEgoMotionData_ref' of type /CppImplementationDataTypes/VLgtQfEgoMotionData
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/VLgtQfEgoMotionData)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::VLgtQfEgoMotionData::VLgtQfEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'ALgtEgoMotionData_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ALgtEgoMotionData::ALgtEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'ALgtQfEgoMotionData_ref' of type /CppImplementationDataTypes/ALgtQfEgoMotionData
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ALgtQfEgoMotionData)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ALgtQfEgoMotionData::ALgtQfEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'ALatEgoMotionData_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ALatEgoMotionData::ALatEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'ALatQfEgoMotionData_ref' of type /CppImplementationDataTypes/ALatQfEgoMotionData
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/ALatQfEgoMotionData)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ALatQfEgoMotionData::ALatQfEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'YawRateEgoMotionData_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::YawRateEgoMotionData::YawRateEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'PosnLgtDeltaEgoMotionData_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::PosnLgtDeltaEgoMotionData::PosnLgtDeltaEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'PosnLatDeltaEgoMotionData_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::PosnLatDeltaEgoMotionData::PosnLatDeltaEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'AgDirDeltaEgoMotionData_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AgDirDeltaEgoMotionData::AgDirDeltaEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'AVertEgoMotionData_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AVertEgoMotionData::AVertEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'AVertQfEgoMotionData_ref' of type /CppImplementationDataTypes/AVertQfEgoMotionData
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/AVertQfEgoMotionData)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::AVertQfEgoMotionData::AVertQfEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'RollRateEgoMotionData_ref' of type /CppImplementationDataTypes/float
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RollRateEgoMotionData::RollRateEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'RollRateQfEgoMotionData_ref' of type /CppImplementationDataTypes/RollRateQfEgoMotionData
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/RollRateQfEgoMotionData)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::RollRateQfEgoMotionData::RollRateQfEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'YawRateQfEgoMotionData_ref' of type /CppImplementationDataTypes/YawRateQfEgoMotionData
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/YawRateQfEgoMotionData)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::YawRateQfEgoMotionData::YawRateQfEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'ChksEgoMotionData_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::ChksEgoMotionData::ChksEgoMotionData>{})  + 
  
  // Accumulate the static size of struct member 'CntrEgoMotionData_ref' of type /CppImplementationDataTypes/uint8_t
   SomeIpProtocolGetStaticSize<TpPack,
                                // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                                typename deserialization::Tp<TpPack>::ByteOrder

                               >(deserialization::SizeToken<::CntrEgoMotionData::CntrEgoMotionData>{}) 
  };
  return static_size;
}

}  // namespace EgoMotion

#endif  // SOC2LIDAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_DESERIALIZATION_EGOMOTION_DESERIALIZER_EGOMOTION_H_

