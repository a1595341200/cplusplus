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
/**        \file  Soc2LidarExe/include/amsr/someip_protocol/internal/datatype_serialization/VehicleInfo2Lidar/serializer_VehicleInfo2Lidar.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'VehicleInfo2Lidar'
 *
 *      \details  /CppImplementationDataTypes/VehicleInfo2Lidar
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef SOC2LIDAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_VEHICLEINFO2LIDAR_SERIALIZER_VEHICLEINFO2LIDAR_H_
#define SOC2LIDAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_VEHICLEINFO2LIDAR_SERIALIZER_VEHICLEINFO2LIDAR_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "VehicleInfo2Lidar/impl_type_vehicleinfo2lidar.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace VehicleInfo2Lidar {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/VehicleInfo2Lidar.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/VehicleInfo2Lidar to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::VehicleInfo2Lidar::VehicleInfo2Lidar const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'AmbTRawAmbTVal_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.AmbTRawAmbTVal_ref);
    // Serialize struct member 'RainfallAmntLidar_ref' of type /CppImplementationDataTypes/RainfallAmntLidar
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RainfallAmntLidar)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RainfallAmntLidar_ref);
    // Serialize struct member 'VehSpdLgtALidar_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VehSpdLgtALidar_ref);
    // Serialize struct member 'BkpOfDstTrvldLidar_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.BkpOfDstTrvldLidar_ref);
    // Serialize struct member 'VehModMngtGlbSafe1CarModSts1_ref' of type /CppImplementationDataTypes/VehModMngtGlbSafe1CarModSts1
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehModMngtGlbSafe1CarModSts1)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VehModMngtGlbSafe1CarModSts1_ref);
    // Serialize struct member 'VehModMngtGlbSafe1PwrLvlElecMai_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VehModMngtGlbSafe1PwrLvlElecMai_ref);
    // Serialize struct member 'VehModMngtGlbSafe1UsgModSts_ref' of type /CppImplementationDataTypes/VehModMngtGlbSafe1UsgModSts
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehModMngtGlbSafe1UsgModSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VehModMngtGlbSafe1UsgModSts_ref);
    // Serialize struct member 'VehTiAndDataDay_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VehTiAndDataDay_ref);
    // Serialize struct member 'VehTiAndDataHr1_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VehTiAndDataHr1_ref);
    // Serialize struct member 'VehTiAndDataMins1_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VehTiAndDataMins1_ref);
    // Serialize struct member 'VehTiAndDataMth1_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VehTiAndDataMth1_ref);
    // Serialize struct member 'VehTiAndDataSec1_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VehTiAndDataSec1_ref);
    // Serialize struct member 'VehTiAndDataYr1_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VehTiAndDataYr1_ref);
    // Serialize struct member 'VehBattUSysU_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VehBattUSysU_ref);
    // Serialize struct member 'CarTiGlb_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.CarTiGlb_ref);
    // Serialize struct member 'ROI_Switch_ref' of type /CppImplementationDataTypes/ROI_Switch
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ROI_Switch)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ROI_Switch_ref);
    // Serialize struct member 'DataLength_ref' of type /CppImplementationDataTypes/uint16_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DataLength_ref);
    // Serialize struct member 'DataID_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DataID_ref);
    // Serialize struct member 'Counter_ref' of type /CppImplementationDataTypes/uint16_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Counter_ref);
    // Serialize struct member 'Checksum_ref' of type /CppImplementationDataTypes/uint32_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Checksum_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/VehicleInfo2Lidar.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/VehicleInfo2Lidar.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::VehicleInfo2Lidar::VehicleInfo2Lidar const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'AmbTRawAmbTVal_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.AmbTRawAmbTVal_ref);
  // Accumulate the static size of struct member 'RainfallAmntLidar_ref' of type /CppImplementationDataTypes/RainfallAmntLidar
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/RainfallAmntLidar)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RainfallAmntLidar_ref);
  // Accumulate the static size of struct member 'VehSpdLgtALidar_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VehSpdLgtALidar_ref);
  // Accumulate the static size of struct member 'BkpOfDstTrvldLidar_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.BkpOfDstTrvldLidar_ref);
  // Accumulate the static size of struct member 'VehModMngtGlbSafe1CarModSts1_ref' of type /CppImplementationDataTypes/VehModMngtGlbSafe1CarModSts1
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehModMngtGlbSafe1CarModSts1)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VehModMngtGlbSafe1CarModSts1_ref);
  // Accumulate the static size of struct member 'VehModMngtGlbSafe1PwrLvlElecMai_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VehModMngtGlbSafe1PwrLvlElecMai_ref);
  // Accumulate the static size of struct member 'VehModMngtGlbSafe1UsgModSts_ref' of type /CppImplementationDataTypes/VehModMngtGlbSafe1UsgModSts
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/VehModMngtGlbSafe1UsgModSts)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VehModMngtGlbSafe1UsgModSts_ref);
  // Accumulate the static size of struct member 'VehTiAndDataDay_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VehTiAndDataDay_ref);
  // Accumulate the static size of struct member 'VehTiAndDataHr1_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VehTiAndDataHr1_ref);
  // Accumulate the static size of struct member 'VehTiAndDataMins1_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VehTiAndDataMins1_ref);
  // Accumulate the static size of struct member 'VehTiAndDataMth1_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VehTiAndDataMth1_ref);
  // Accumulate the static size of struct member 'VehTiAndDataSec1_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VehTiAndDataSec1_ref);
  // Accumulate the static size of struct member 'VehTiAndDataYr1_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VehTiAndDataYr1_ref);
  // Accumulate the static size of struct member 'VehBattUSysU_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VehBattUSysU_ref);
  // Accumulate the static size of struct member 'CarTiGlb_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.CarTiGlb_ref);
  // Accumulate the static size of struct member 'ROI_Switch_ref' of type /CppImplementationDataTypes/ROI_Switch
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ROI_Switch)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ROI_Switch_ref);
  // Accumulate the static size of struct member 'DataLength_ref' of type /CppImplementationDataTypes/uint16_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DataLength_ref);
  // Accumulate the static size of struct member 'DataID_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DataID_ref);
  // Accumulate the static size of struct member 'Counter_ref' of type /CppImplementationDataTypes/uint16_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Counter_ref);
  // Accumulate the static size of struct member 'Checksum_ref' of type /CppImplementationDataTypes/uint32_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Checksum_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/VehicleInfo2Lidar is of static size.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \return True if datatype has static size, false otherwise.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::VehicleInfo2Lidar::VehicleInfo2Lidar>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'AmbTRawAmbTVal_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::AmbTRawAmbTVal::AmbTRawAmbTVal>{})  && 
  
  // Check static size status of struct member 'RainfallAmntLidar_ref' of type /CppImplementationDataTypes/RainfallAmntLidar
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/RainfallAmntLidar)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RainfallAmnt::RainfallAmntLidar>{})  && 
  
  // Check static size status of struct member 'VehSpdLgtALidar_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VehSpdLgtALidar::VehSpdLgtALidar>{})  && 
  
  // Check static size status of struct member 'BkpOfDstTrvldLidar_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::BkpOfDstTrvldLidar::BkpOfDstTrvldLidar>{})  && 
  
  // Check static size status of struct member 'VehModMngtGlbSafe1CarModSts1_ref' of type /CppImplementationDataTypes/VehModMngtGlbSafe1CarModSts1
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/VehModMngtGlbSafe1CarModSts1)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VehModMngtGlbSafe1CarModSts1::VehModMngtGlbSafe1CarModSts1>{})  && 
  
  // Check static size status of struct member 'VehModMngtGlbSafe1PwrLvlElecMai_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VehModMngtGlbSafe1PwrLvlElecMai::VehModMngtGlbSafe1PwrLvlElecMai>{})  && 
  
  // Check static size status of struct member 'VehModMngtGlbSafe1UsgModSts_ref' of type /CppImplementationDataTypes/VehModMngtGlbSafe1UsgModSts
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/VehModMngtGlbSafe1UsgModSts)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VehModMngtGlbSafe1UsgModSts::VehModMngtGlbSafe1UsgModSts>{})  && 
  
  // Check static size status of struct member 'VehTiAndDataDay_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VehTiAndDataDay::VehTiAndDataDay>{})  && 
  
  // Check static size status of struct member 'VehTiAndDataHr1_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VehTiAndDataHr1::VehTiAndDataHr1>{})  && 
  
  // Check static size status of struct member 'VehTiAndDataMins1_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VehTiAndDataMins1::VehTiAndDataMins1>{})  && 
  
  // Check static size status of struct member 'VehTiAndDataMth1_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VehTiAndDataMth1::VehTiAndDataMth1>{})  && 
  
  // Check static size status of struct member 'VehTiAndDataSec1_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VehTiAndDataSec1::VehTiAndDataSec1>{})  && 
  
  // Check static size status of struct member 'VehTiAndDataYr1_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VehTiAndDataYr1::VehTiAndDataYr1>{})  && 
  
  // Check static size status of struct member 'VehBattUSysU_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VehBattUSysU::VehBattUSysU>{})  && 
  
  // Check static size status of struct member 'CarTiGlb_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::CarTiGlb::CarTiGlb>{})  && 
  
  // Check static size status of struct member 'ROI_Switch_ref' of type /CppImplementationDataTypes/ROI_Switch
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ROI_Switch)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ROI_Switch::ROI_Switch>{})  && 
  
  // Check static size status of struct member 'DataLength_ref' of type /CppImplementationDataTypes/uint16_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DataLength::DataLength>{})  && 
  
  // Check static size status of struct member 'DataID_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DataID::DataID>{})  && 
  
  // Check static size status of struct member 'Counter_ref' of type /CppImplementationDataTypes/uint16_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint16_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Counter::Counter>{})  && 
  
  // Check static size status of struct member 'Checksum_ref' of type /CppImplementationDataTypes/uint32_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint32_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Checksum::Checksum>{}) 
  };
    return is_static_size;
}

}  // namespace VehicleInfo2Lidar

#endif  // SOC2LIDAREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_VEHICLEINFO2LIDAR_SERIALIZER_VEHICLEINFO2LIDAR_H_

