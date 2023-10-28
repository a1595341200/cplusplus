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
/**        \file  PerceptionRearExe/include/INSinf1OutIDT/impl_type_insinf1outidt.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: ac290ed6b867d81fff39c644dd6c9dfa396bacad
 *********************************************************************************************************************/

#ifndef PERCEPTIONREAREXE_INCLUDE_INSINF1OUTIDT_IMPL_TYPE_INSINF1OUTIDT_H_
#define PERCEPTIONREAREXE_INCLUDE_INSINF1OUTIDT_IMPL_TYPE_INSINF1OUTIDT_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cmath>
#include <cstdint>
#include <limits>
#include <map>
#include <string>
#include <vector>
#include "InsCalSts1IDT/impl_type_inscalsts1idt.h"
#include "float32IDT/impl_type_float32idt.h"
#include "uint32IDT/impl_type_uint32idt.h"
#include "uint8IDT/impl_type_uint8idt.h"

namespace INSinf1OutIDT {

// VCA Disable [LNG-01,LNG-03,SLC-11,SLC-12,SLC-14,SLC-16,SPC-15] : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION
// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type INSinf1OutIDT.
 * \remark generated
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/INSinf1OutIDT
 */
struct INSinf1OutIDT {
  using INSinfChks_generated_type = uint8IDT::uint8IDT;
  using INSinfCntr_generated_type = uint8IDT::uint8IDT;
  using INSCalStatus_generated_type = InsCalSts1IDT::InsCalSts1IDT;
  using INSEastSpd_generated_type = float32IDT::float32IDT;
  using INSEastSpdStd_generated_type = float32IDT::float32IDT;
  using INSGroundSpdStd_generated_type = float32IDT::float32IDT;
  using INSHeadingAngle_generated_type = float32IDT::float32IDT;
  using INSHeadingAngleStd_generated_type = float32IDT::float32IDT;
  using INSLatitude_generated_type = uint32IDT::uint32IDT;
  using INSLocatHeight_generated_type = float32IDT::float32IDT;
  using INSLongitude_generated_type = uint32IDT::uint32IDT;
  using INSNavStatus_generated_type = uint8IDT::uint8IDT;
  using INSNorthSpd_generated_type = float32IDT::float32IDT;
  using INSNorthSpdStd_generated_type = float32IDT::float32IDT;
  using INSPitchAngle_generated_type = float32IDT::float32IDT;
  using INSPitchAngleStd_generated_type = float32IDT::float32IDT;
  using INSRollAngle_generated_type = float32IDT::float32IDT;
  using INSRollAngleStd_generated_type = float32IDT::float32IDT;
  using INSStdLat_generated_type = float32IDT::float32IDT;
  using INSStdLocatHeight_generated_type = float32IDT::float32IDT;
  using INSStdLon_generated_type = float32IDT::float32IDT;
  using INSTimestampHi_generated_type = uint32IDT::uint32IDT;
  using INSTimestampLo_generated_type = uint32IDT::uint32IDT;
  using INSToGroundSpd_generated_type = float32IDT::float32IDT;
  using INS_DR_ValidSta_generated_type = uint8IDT::uint8IDT;
  using INS_PreciousLvl_generated_type = uint8IDT::uint8IDT;
  using INSinfReserve_generated_type = uint8IDT::uint8IDT;

  INSinfChks_generated_type INSinfChks;
  INSinfCntr_generated_type INSinfCntr;
  INSCalStatus_generated_type INSCalStatus;
  INSEastSpd_generated_type INSEastSpd;
  INSEastSpdStd_generated_type INSEastSpdStd;
  INSGroundSpdStd_generated_type INSGroundSpdStd;
  INSHeadingAngle_generated_type INSHeadingAngle;
  INSHeadingAngleStd_generated_type INSHeadingAngleStd;
  INSLatitude_generated_type INSLatitude;
  INSLocatHeight_generated_type INSLocatHeight;
  INSLongitude_generated_type INSLongitude;
  INSNavStatus_generated_type INSNavStatus;
  INSNorthSpd_generated_type INSNorthSpd;
  INSNorthSpdStd_generated_type INSNorthSpdStd;
  INSPitchAngle_generated_type INSPitchAngle;
  INSPitchAngleStd_generated_type INSPitchAngleStd;
  INSRollAngle_generated_type INSRollAngle;
  INSRollAngleStd_generated_type INSRollAngleStd;
  INSStdLat_generated_type INSStdLat;
  INSStdLocatHeight_generated_type INSStdLocatHeight;
  INSStdLon_generated_type INSStdLon;
  INSTimestampHi_generated_type INSTimestampHi;
  INSTimestampLo_generated_type INSTimestampLo;
  INSToGroundSpd_generated_type INSToGroundSpd;
  INS_DR_ValidSta_generated_type INS_DR_ValidSta;
  INS_PreciousLvl_generated_type INS_PreciousLvl;
  INSinfReserve_generated_type INSinfReserve;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief   Compare for equality with another INSinf1OutIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator==(INSinf1OutIDT const& l,
                       INSinf1OutIDT const& r) noexcept {
  // VECTOR Next Construct VectorC++-V3.9.2: MD_MDTG_V3.9.2_EqualsOperator
  auto const compare_float = [](auto l_float, auto r_float) -> bool {
    // VECTOR Next Construct AutosarC++17_10-M0.4.2: MD_MDTG_M0.4.2_GeneratedFloatPointComparison
    return (std::fabs(l_float - r_float) <= std::numeric_limits<decltype(l_float)>::epsilon());
  };
  return (&l == &r) || ((l.INSinfChks == r.INSinfChks)
                         && (l.INSinfCntr == r.INSinfCntr)
                         && (l.INSCalStatus == r.INSCalStatus)
                         && compare_float(l.INSEastSpd, r.INSEastSpd)
                         && compare_float(l.INSEastSpdStd, r.INSEastSpdStd)
                         && compare_float(l.INSGroundSpdStd, r.INSGroundSpdStd)
                         && compare_float(l.INSHeadingAngle, r.INSHeadingAngle)
                         && compare_float(l.INSHeadingAngleStd, r.INSHeadingAngleStd)
                         && (l.INSLatitude == r.INSLatitude)
                         && compare_float(l.INSLocatHeight, r.INSLocatHeight)
                         && (l.INSLongitude == r.INSLongitude)
                         && (l.INSNavStatus == r.INSNavStatus)
                         && compare_float(l.INSNorthSpd, r.INSNorthSpd)
                         && compare_float(l.INSNorthSpdStd, r.INSNorthSpdStd)
                         && compare_float(l.INSPitchAngle, r.INSPitchAngle)
                         && compare_float(l.INSPitchAngleStd, r.INSPitchAngleStd)
                         && compare_float(l.INSRollAngle, r.INSRollAngle)
                         && compare_float(l.INSRollAngleStd, r.INSRollAngleStd)
                         && compare_float(l.INSStdLat, r.INSStdLat)
                         && compare_float(l.INSStdLocatHeight, r.INSStdLocatHeight)
                         && compare_float(l.INSStdLon, r.INSStdLon)
                         && (l.INSTimestampHi == r.INSTimestampHi)
                         && (l.INSTimestampLo == r.INSTimestampLo)
                         && compare_float(l.INSToGroundSpd, r.INSToGroundSpd)
                         && (l.INS_DR_ValidSta == r.INS_DR_ValidSta)
                         && (l.INS_PreciousLvl == r.INS_PreciousLvl)
                         && (l.INSinfReserve == r.INSinfReserve)
  );
}

/*!
 * \brief   Compare for inequality with another INSinf1OutIDT instance.
 * \details The method for comparing floating point members is to check whether they are at most
 *          one machine epsilon apart. This method works best for comparing numbers between
 *          1.0 and 2.0. Larger numbers will only be equal if they match exactly, and smaller
 *          numbers that are relatively far apart will be considered equal.
 *          Consider if your application requires a different comparison method, and if so
 *          use your own.
 */
inline bool operator!=(INSinf1OutIDT const& l,
                       INSinf1OutIDT const& r) noexcept {
  return !(l == r);
}
// VCA Enable : VCA_MODELLEDDATATYPEGENERATOR_DATA_TYPE_DECLARATION

}  // namespace INSinf1OutIDT

#endif  // PERCEPTIONREAREXE_INCLUDE_INSINF1OUTIDT_IMPL_TYPE_INSINF1OUTIDT_H_
