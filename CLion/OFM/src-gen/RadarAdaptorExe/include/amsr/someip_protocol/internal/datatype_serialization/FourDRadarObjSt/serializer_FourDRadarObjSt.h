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
/**        \file  RadarAdaptorExe/include/amsr/someip_protocol/internal/datatype_serialization/FourDRadarObjSt/serializer_FourDRadarObjSt.h
 *        \brief  SOME/IP protocol serializer implementation for datatype 'FourDRadarObjSt'
 *
 *      \details  /CppImplementationDataTypes/FourDRadarObjSt
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 3fd8aac035abb6fb6709609fe09ab84fd0e635d8
 *********************************************************************************************************************/

#ifndef RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADAROBJST_SERIALIZER_FOURDRADAROBJST_H_
#define RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADAROBJST_SERIALIZER_FOURDRADAROBJST_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarObjSt/impl_type_fourdradarobjst.h"
#include "someip-protocol/internal/serialization/ser_common.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace FourDRadarObjSt {

/*!
 * \brief Serializer for datatype /CppImplementationDataTypes/FourDRadarObjSt.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 *
 * \param[in, out] writer Reference to byte stream writer.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarObjSt to be serialized.
 * \pre The writer holds a memory buffer which is enough to store the serialized data.
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
void SomeIpProtocolSerialize(amsr::someip_protocol::internal::serialization::Writer& writer, ::FourDRadarObjSt::FourDRadarObjSt const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;
  // Serialize non-TLV struct
    // Serialize struct member 'FourDID_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FourDID_ref);
    // Serialize struct member 'ObstacleProbability_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObstacleProbability_ref);
    // Serialize struct member 'VabsX_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VabsX_ref);
    // Serialize struct member 'VabsXStd_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VabsXStd_ref);
    // Serialize struct member 'VabsY_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VabsY_ref);
    // Serialize struct member 'VabsYStd_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.VabsYStd_ref);
    // Serialize struct member 'ValidFlag_ref' of type /CppImplementationDataTypes/ValidFlag
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ValidFlag)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ValidFlag_ref);
    // Serialize struct member 'Classification_ref' of type /CppImplementationDataTypes/Classification
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Classification)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.Classification_ref);
    // Serialize struct member 'DynamicProperty_ref' of type /CppImplementationDataTypes/DynamicProperty
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DynamicProperty)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DynamicProperty_ref);
    // Serialize struct member 'DistXStd_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DistXStd_ref);
    // Serialize struct member 'DistY_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DistY_ref);
    // Serialize struct member 'DistYStd_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DistYStd_ref);
    // Serialize struct member 'DistZ_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DistZ_ref);
    // Serialize struct member 'RCS_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.RCS_ref);
    // Serialize struct member 'LifeCycles_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.LifeCycles_ref);
    // Serialize struct member 'ProbabilityOfExistence_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ProbabilityOfExistence_ref);
    // Serialize struct member 'ObjSNR_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjSNR_ref);
    // Serialize struct member 'ObjXAccRel_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjXAccRel_ref);
    // Serialize struct member 'ObjYAccRel_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjYAccRel_ref);
    // Serialize struct member 'FourDHeadingAngle_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FourDHeadingAngle_ref);
    // Serialize struct member 'TargetClassificationConfidence_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.TargetClassificationConfidence_ref);
    // Serialize struct member 'ObjBoundingBoxHeight_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjBoundingBoxHeight_ref);
    // Serialize struct member 'ObjBoundingBoxLength_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjBoundingBoxLength_ref);
    // Serialize struct member 'ObjBoundingBoxWidth_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjBoundingBoxWidth_ref);
    // Serialize struct member 'DistZStd_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DistZStd_ref);
    // Serialize struct member 'ObjNearestPtX_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjNearestPtX_ref);
    // Serialize struct member 'ObjNearestPtY_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjNearestPtY_ref);
    // Serialize struct member 'ObjNearestPtZ_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.ObjNearestPtZ_ref);
    // Serialize struct member 'UpdateFlag_ref' of type /CppImplementationDataTypes/UpdateFlag
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/UpdateFlag)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.UpdateFlag_ref);
    // Serialize struct member 'FourDObjChks_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FourDObjChks_ref);
    // Serialize struct member 'DistX_ref' of type /CppImplementationDataTypes/float
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.DistX_ref);
    // Serialize struct member 'FourDObjCntr_ref' of type /CppImplementationDataTypes/uint8_t
    serialization::SomeIpProtocolSerialize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(writer, data.FourDObjCntr_ref);
}

/*!
 * \brief Calculates the required buffer size for datatype /CppImplementationDataTypes/FourDRadarObjSt.
 * \details Data type class: DataTypeStruct (CppImplDataTypeStruct).
 *          is TLV struct: false
 *
 * \tparam TpPack Transformation properties to be used for serialization.
 * \param[in] data Reference to the data object of type /CppImplementationDataTypes/FourDRadarObjSt.
 * \return Returns the required buffer size for the struct in bytes.
 * \pre -
 * \context Reactor|App
 * \threadsafe FALSE
 * \reentrant TRUE
 * \vprivate Vector component internal API.
 * \synchronous TRUE
 */
template <typename TpPack>
constexpr std::size_t GetRequiredBufferSize(::FourDRadarObjSt::FourDRadarObjSt const &data) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  // Sum of required size
  std::size_t required_buffer_size{0};

  // Accumulate the static size of struct member 'FourDID_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FourDID_ref);
  // Accumulate the static size of struct member 'ObstacleProbability_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObstacleProbability_ref);
  // Accumulate the static size of struct member 'VabsX_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VabsX_ref);
  // Accumulate the static size of struct member 'VabsXStd_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VabsXStd_ref);
  // Accumulate the static size of struct member 'VabsY_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VabsY_ref);
  // Accumulate the static size of struct member 'VabsYStd_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.VabsYStd_ref);
  // Accumulate the static size of struct member 'ValidFlag_ref' of type /CppImplementationDataTypes/ValidFlag
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/ValidFlag)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ValidFlag_ref);
  // Accumulate the static size of struct member 'Classification_ref' of type /CppImplementationDataTypes/Classification
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/Classification)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.Classification_ref);
  // Accumulate the static size of struct member 'DynamicProperty_ref' of type /CppImplementationDataTypes/DynamicProperty
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/DynamicProperty)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DynamicProperty_ref);
  // Accumulate the static size of struct member 'DistXStd_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DistXStd_ref);
  // Accumulate the static size of struct member 'DistY_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DistY_ref);
  // Accumulate the static size of struct member 'DistYStd_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DistYStd_ref);
  // Accumulate the static size of struct member 'DistZ_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DistZ_ref);
  // Accumulate the static size of struct member 'RCS_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.RCS_ref);
  // Accumulate the static size of struct member 'LifeCycles_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.LifeCycles_ref);
  // Accumulate the static size of struct member 'ProbabilityOfExistence_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ProbabilityOfExistence_ref);
  // Accumulate the static size of struct member 'ObjSNR_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjSNR_ref);
  // Accumulate the static size of struct member 'ObjXAccRel_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjXAccRel_ref);
  // Accumulate the static size of struct member 'ObjYAccRel_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjYAccRel_ref);
  // Accumulate the static size of struct member 'FourDHeadingAngle_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FourDHeadingAngle_ref);
  // Accumulate the static size of struct member 'TargetClassificationConfidence_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.TargetClassificationConfidence_ref);
  // Accumulate the static size of struct member 'ObjBoundingBoxHeight_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjBoundingBoxHeight_ref);
  // Accumulate the static size of struct member 'ObjBoundingBoxLength_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjBoundingBoxLength_ref);
  // Accumulate the static size of struct member 'ObjBoundingBoxWidth_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjBoundingBoxWidth_ref);
  // Accumulate the static size of struct member 'DistZStd_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DistZStd_ref);
  // Accumulate the static size of struct member 'ObjNearestPtX_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjNearestPtX_ref);
  // Accumulate the static size of struct member 'ObjNearestPtY_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjNearestPtY_ref);
  // Accumulate the static size of struct member 'ObjNearestPtZ_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.ObjNearestPtZ_ref);
  // Accumulate the static size of struct member 'UpdateFlag_ref' of type /CppImplementationDataTypes/UpdateFlag
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/UpdateFlag)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.UpdateFlag_ref);
  // Accumulate the static size of struct member 'FourDObjChks_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FourDObjChks_ref);
  // Accumulate the static size of struct member 'DistX_ref' of type /CppImplementationDataTypes/float
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.DistX_ref);
  // Accumulate the static size of struct member 'FourDObjCntr_ref' of type /CppImplementationDataTypes/uint8_t
  required_buffer_size += serialization::GetRequiredBufferSize<
                        TpPack,
                        // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                        typename serialization::Tp<TpPack>::ByteOrder

                        >(data.FourDObjCntr_ref);

  return required_buffer_size;
}

/*!
 * \brief Checks if datatype /CppImplementationDataTypes/FourDRadarObjSt is of static size.
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
constexpr bool IsStaticSize(amsr::someip_protocol::internal::serialization::SizeToken<::FourDRadarObjSt::FourDRadarObjSt>) noexcept {
  // Namespace alias for static serialization code
  namespace serialization = amsr::someip_protocol::internal::serialization;

  constexpr bool is_static_size{
  // Check static size status of struct member 'FourDID_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FourDID::FourDID>{})  && 
  
  // Check static size status of struct member 'ObstacleProbability_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObstacleProbability::ObstacleProbability>{})  && 
  
  // Check static size status of struct member 'VabsX_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VabsX::VabsX>{})  && 
  
  // Check static size status of struct member 'VabsXStd_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VabsXStd::VabsXStd>{})  && 
  
  // Check static size status of struct member 'VabsY_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VabsY::VabsY>{})  && 
  
  // Check static size status of struct member 'VabsYStd_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::VabsYStd::VabsYStd>{})  && 
  
  // Check static size status of struct member 'ValidFlag_ref' of type /CppImplementationDataTypes/ValidFlag
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/ValidFlag)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ValidFlag::ValidFlag>{})  && 
  
  // Check static size status of struct member 'Classification_ref' of type /CppImplementationDataTypes/Classification
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/Classification)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::Classification::Classification>{})  && 
  
  // Check static size status of struct member 'DynamicProperty_ref' of type /CppImplementationDataTypes/DynamicProperty
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/DynamicProperty)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DynamicProperty::DynamicProperty>{})  && 
  
  // Check static size status of struct member 'DistXStd_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DistXStd::DistXStd>{})  && 
  
  // Check static size status of struct member 'DistY_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DistY::DistY>{})  && 
  
  // Check static size status of struct member 'DistYStd_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DistYStd::DistYStd>{})  && 
  
  // Check static size status of struct member 'DistZ_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DistZ::DistZ>{})  && 
  
  // Check static size status of struct member 'RCS_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::RCS::RCS>{})  && 
  
  // Check static size status of struct member 'LifeCycles_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::LifeCycles::LifeCycles>{})  && 
  
  // Check static size status of struct member 'ProbabilityOfExistence_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ProbabilityOfExistence::ProbabilityOfExistence>{})  && 
  
  // Check static size status of struct member 'ObjSNR_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjSNR::ObjSNR>{})  && 
  
  // Check static size status of struct member 'ObjXAccRel_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjXAccRel::ObjXAccRel>{})  && 
  
  // Check static size status of struct member 'ObjYAccRel_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjYAccRel::ObjYAccRel>{})  && 
  
  // Check static size status of struct member 'FourDHeadingAngle_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::HeadingAngle::FourDHeadingAngle>{})  && 
  
  // Check static size status of struct member 'TargetClassificationConfidence_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::TargetClassificationConfidence::TargetClassificationConfidence>{})  && 
  
  // Check static size status of struct member 'ObjBoundingBoxHeight_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjBoundingBoxHeight::ObjBoundingBoxHeight>{})  && 
  
  // Check static size status of struct member 'ObjBoundingBoxLength_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjBoundingBoxLength::ObjBoundingBoxLength>{})  && 
  
  // Check static size status of struct member 'ObjBoundingBoxWidth_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjBoundingBoxWidth::ObjBoundingBoxWidth>{})  && 
  
  // Check static size status of struct member 'DistZStd_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DistZStd::DistZStd>{})  && 
  
  // Check static size status of struct member 'ObjNearestPtX_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjNearestPtX::ObjNearestPtX>{})  && 
  
  // Check static size status of struct member 'ObjNearestPtY_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjNearestPtY::ObjNearestPtY>{})  && 
  
  // Check static size status of struct member 'ObjNearestPtZ_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::ObjNearestPtZ::ObjNearestPtZ>{})  && 
  
  // Check static size status of struct member 'UpdateFlag_ref' of type /CppImplementationDataTypes/UpdateFlag
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/UpdateFlag)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::UpdateFlag::UpdateFlag>{})  && 
  
  // Check static size status of struct member 'FourDObjChks_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FourDChks::FourDObjChks>{})  && 
  
  // Check static size status of struct member 'DistX_ref' of type /CppImplementationDataTypes/float
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/float)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::DistX::DistX>{})  && 
  
  // Check static size status of struct member 'FourDObjCntr_ref' of type /CppImplementationDataTypes/uint8_t
  serialization::IsStaticSize<
                      TpPack,
                      // Byte-order of primitive datatype (/CppImplementationDataTypes/uint8_t)
                      typename serialization::Tp<TpPack>::ByteOrder

                      >(serialization::SizeToken<::FourDCntr::FourDObjCntr>{}) 
  };
    return is_static_size;
}

}  // namespace FourDRadarObjSt

#endif  // RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATATYPE_SERIALIZATION_FOURDRADAROBJST_SERIALIZER_FOURDRADAROBJST_H_

