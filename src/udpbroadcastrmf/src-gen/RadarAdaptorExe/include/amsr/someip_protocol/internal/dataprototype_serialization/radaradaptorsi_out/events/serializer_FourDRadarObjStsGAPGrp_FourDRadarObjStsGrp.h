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
/**        \file  RadarAdaptorExe/include/amsr/someip_protocol/internal/dataprototype_serialization/radaradaptorsi_out/events/serializer_FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp.h
 *        \brief  SOME/IP protocol serializer implementation for data prototype '/JICA/Service/Interface/RadarAdaptorSI_Out/FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_someipprotocol
 *         Commit ID: 1b535f531ca8eaaa17edbe97d022bbf394412553
 *********************************************************************************************************************/

#ifndef RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_RADARADAPTORSI_OUT_EVENTS_serializer_FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp_h_
#define RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_RADARADAPTORSI_OUT_EVENTS_serializer_FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp_h_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include "FourDRadarObjStsGrp01_42IDT/impl_type_fourdradarobjstsgrp01_42idt.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarECUStsIDT/serializer_FourDRadarECUStsIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarObjStIDT/serializer_FourDRadarObjStIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FourDRadarObjStsGrp01_42IDT/serializer_FourDRadarObjStsGrp01_42IDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FrontFourDRadarSts1VccIDT/serializer_FrontFourDRadarSts1VccIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/FrontFourDRadarVDYIDT/serializer_FrontFourDRadarVDYIDT.h"
#include "amsr/someip_protocol/internal/datatype_serialization/TFourDRadarDataValidIDT/serializer_TFourDRadarDataValidIDT.h"
#include "someip-protocol/internal/serialization/ser_forward.h"
#include "someip-protocol/internal/serialization/ser_sizing.h"
#include "someip-protocol/internal/serialization/types.h"
#include "someip-protocol/internal/serialization/writer.h"

namespace amsr {
namespace someip_protocol {
namespace internal {
namespace dataprototype_serializer {
namespace radaradaptorsi_out {
namespace events {

/*!
 * \brief Serializer for service event /JICA/Service/Interface/RadarAdaptorSI_Out/FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp
 *        of service interface /JICA/Service/Interface/RadarAdaptorSI_Out.
 * \details Top-Level data type: /CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT
 *          Effective transformation properties of the DataPrototype:
 *          - ByteOrder:                    MOST-SIGNIFICANT-BYTE-FIRST (big-endian)
 *          - sizeOfArrayLengthField:       4
 *          - sizeOfVectorLengthField:      4
 *          - sizeOfMapLengthField:         4
 *          - sizeOfStringLengthField:      4
 *          - sizeOfStructLengthField:      0
 *          - sizeOfUnionLengthField:       4
 *          - sizeOfUnionTypeSelectorField: 4
 *          - isBomActive:                  true
 *          - isNullTerminationActive:      true
 *          - isDynamicLengthFieldSize:     false
 */
class SerializerFourDRadarObjStsGAPGrp_FourDRadarObjStsGrp {
 public:
  /*!
   * \brief Returns the required buffer size for the data prototype service event /JICA/Service/Interface/RadarAdaptorSI_Out/FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp.
   *
   * \param[in]   data Reference to data object of top-level data type /CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  constexpr static std::size_t GetRequiredBufferSize(::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT const &data) noexcept {
    return serialization::GetRequiredBufferSize<
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >(data);
  }

  /*!
   * \brief Returns the maximum buffer size for the data prototype service event /JICA/Service/Interface/RadarAdaptorSI_Out/FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp.
   *
   * \return      Calculated buffer size for serialization.
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  constexpr static amsr::someip_protocol::internal::serialization::InfSizeT GetMaximumBufferSize() noexcept {
    return serialization::GetMaximumBufferSize<
      ::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT,
      TpPackDataPrototype,
      // Config of struct length field (/CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT)
      internal::LengthSize<serialization::Tp<TpPackDataPrototype>::kSizeOfStructLengthField, typename serialization::Tp<TpPackDataPrototype>::ByteOrder>

      >();
  }


  /*!
   * \brief Serialize the data prototype service event /JICA/Service/Interface/RadarAdaptorSI_Out/FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp.
   *
   * \param[in,out] writer Reference to the byte stream writer.
   * \param[in]     data Reference to data object of top-level data type /CppImplementationDataTypes/FourDRadarObjStsGrp01_42IDT
   *                , whose value will be serialized into the writer.
   *
   * \pre         -
   * \context     App
   * \threadsafe  FALSE
   * \reentrant   FALSE
   * \synchronous TRUE
   * \spec
   *   requires true;
   * \endspec
   */
  // VECTOR NC AutosarC++17_10-M3.2.4: MD_SOMEIPPROTOCOL_AutosarC++17_10-M3.2.4_false_positive
  static void Serialize(serialization::Writer &writer, ::FourDRadarObjStsGrp01_42IDT::FourDRadarObjStsGrp01_42IDT const &data) noexcept;

 private:
  /*!
   * \brief Transformation properties of the data prototype.
   */
  using TpPackDataPrototype = internal::TpPack<
      BigEndian,
      internal::SizeOfArrayLengthField<4>,
      internal::SizeOfVectorLengthField<4>,
      internal::SizeOfMapLengthField<4>,
      internal::SizeOfStringLengthField<4>,
      internal::SizeOfStructLengthField<0>,
      internal::SizeOfUnionLengthField<4>,
      internal::SizeOfUnionTypeSelectorField<4>,
      internal::StringBomActive,
      internal::StringNullTerminationActive,
      serialization::DynamicLengthFieldSizeInactive>;

};

}  // namespace events
}  // namespace radaradaptorsi_out
}  // namespace dataprototype_serializer
}  // namespace internal
}  // namespace someip_protocol
}  // namespace amsr

#endif  // RADARADAPTOREXE_INCLUDE_AMSR_SOMEIP_PROTOCOL_INTERNAL_DATAPROTOTYPE_SERIALIZATION_RADARADAPTORSI_OUT_EVENTS_serializer_FourDRadarObjStsGAPGrp_FourDRadarObjStsGrp_h_

