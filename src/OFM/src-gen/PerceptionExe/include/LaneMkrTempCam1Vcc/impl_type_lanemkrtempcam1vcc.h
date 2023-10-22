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
/**        \file  PerceptionExe/include/LaneMkrTempCam1Vcc/impl_type_lanemkrtempcam1vcc.h
 *        \brief
 *
 *      \details
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 *  GENERATOR INFORMATION
 *  -------------------------------------------------------------------------------------------------------------------
 *    Generator Name: amsr_modelleddatatypes_api
 *         Commit ID: 46318213ad7ac4d9dbeb54ad2e67c431a47a9a9f
 *********************************************************************************************************************/

#ifndef PERCEPTIONEXE_INCLUDE_LANEMKRTEMPCAM1VCC_IMPL_TYPE_LANEMKRTEMPCAM1VCC_H_
#define PERCEPTIONEXE_INCLUDE_LANEMKRTEMPCAM1VCC_IMPL_TYPE_LANEMKRTEMPCAM1VCC_H_

/**********************************************************************************************************************
 *  INCLUDES
 *********************************************************************************************************************/
#include <array>
#include <cstdint>
#include <map>
#include <string>
#include <vector>
#include "C0First/impl_type_c0first.h"
#include "C0FirstVariance/impl_type_c0firstvariance.h"
#include "C0Sec/impl_type_c0sec.h"
#include "C0SecVariance/impl_type_c0secvariance.h"
#include "C1First/impl_type_c1first.h"
#include "C1FirstVariance/impl_type_c1firstvariance.h"
#include "C1Sec/impl_type_c1sec.h"
#include "C1SecVariance/impl_type_c1secvariance.h"
#include "C2First/impl_type_c2first.h"
#include "C2FirstVariance/impl_type_c2firstvariance.h"
#include "C2Sec/impl_type_c2sec.h"
#include "C2SecVariance/impl_type_c2secvariance.h"
#include "C3First/impl_type_c3first.h"
#include "C3FirstVariance/impl_type_c3firstvariance.h"
#include "C3Sec/impl_type_c3sec.h"
#include "C3SecVariance/impl_type_c3secvariance.h"
#include "CamChks/impl_type_camchks.h"
#include "CamCntr/impl_type_camcntr.h"
#include "CamObjId/impl_type_camobjid.h"
#include "CamTimeStamp/impl_type_camtimestamp.h"
#include "FirstEndPoint/impl_type_firstendpoint.h"
#include "FirstStartPoint/impl_type_firststartpoint.h"
#include "IsSecValid/impl_type_issecvalid.h"
#include "MdlQlyLane/impl_type_mdlqlylane.h"
#include "MeasQlyLane/impl_type_measqlylane.h"
#include "SecEndPoint/impl_type_secendpoint.h"
#include "SecStartPoint/impl_type_secstartpoint.h"
#include "Valid/impl_type_valid.h"

namespace LaneMkrTempCam1Vcc {

// VECTOR Disable AutosarC++17_10-A12.6.1: MD_MDTG_A12.6.1_GeneratedStructUninitializedMembers
// VECTOR Disable AutosarC++17_10-M8.5.1: MD_MDTG_M8.5.1_GeneratedStructUninitializedMembers
/*!
 * \brief Type LaneMkrTempCam1Vcc.
 * \remark generated
 * \trace SPEC-5951372
 *
 * IMPLEMENTATION-DATA-TYPE /CppImplementationDataTypes/LaneMkrTempCam1Vcc
 */
struct LaneMkrTempCam1Vcc {
  using _C0First_ref_type = C0First::C0First;
  using _C0FirstVariance_ref_type = C0FirstVariance::C0FirstVariance;
  using _C1First_ref_type = C1First::C1First;
  using _C1FirstVariance_ref_type = C1FirstVariance::C1FirstVariance;
  using _C2First_ref_type = C2First::C2First;
  using _C2FirstVariance_ref_type = C2FirstVariance::C2FirstVariance;
  using _C3First_ref_type = C3First::C3First;
  using _C3FirstVariance_ref_type = C3FirstVariance::C3FirstVariance;
  using _FirstStartPoint_ref_type = FirstStartPoint::FirstStartPoint;
  using _FirstEndPoint_ref_type = FirstEndPoint::FirstEndPoint;
  using _C0Sec_ref_type = C0Sec::C0Sec;
  using _C0SecVariance_ref_type = C0SecVariance::C0SecVariance;
  using _C1Sec_ref_type = C1Sec::C1Sec;
  using _C1SecVariance_ref_type = C1SecVariance::C1SecVariance;
  using _C2Sec_ref_type = C2Sec::C2Sec;
  using _C2SecVariance_ref_type = C2SecVariance::C2SecVariance;
  using _C3Sec_ref_type = C3Sec::C3Sec;
  using _C3SecVariance_ref_type = C3SecVariance::C3SecVariance;
  using _SecStartPoint_ref_type = SecStartPoint::SecStartPoint;
  using _SecEndPoint_ref_type = SecEndPoint::SecEndPoint;
  using _IsSecValid_ref_type = IsSecValid::IsSecValid;
  using _CamObjId_ref_type = CamObjId::CamObjId;
  using _Valid_ref_type = Valid::Valid;
  using _MeasQlyLane_ref_type = MeasQlyLane::MeasQlyLane;
  using _MdlQlyLane_ref_type = MdlQlyLane::MdlQlyLane;
  using _CamChks_ref_type = CamChks::CamChks;
  using _CamCntr_ref_type = CamCntr::CamCntr;
  using _CamTimeStamp_ref_type = CamTimeStamp::CamTimeStamp;

  _C0First_ref_type C0First_ref;
  _C0FirstVariance_ref_type C0FirstVariance_ref;
  _C1First_ref_type C1First_ref;
  _C1FirstVariance_ref_type C1FirstVariance_ref;
  _C2First_ref_type C2First_ref;
  _C2FirstVariance_ref_type C2FirstVariance_ref;
  _C3First_ref_type C3First_ref;
  _C3FirstVariance_ref_type C3FirstVariance_ref;
  _FirstStartPoint_ref_type FirstStartPoint_ref;
  _FirstEndPoint_ref_type FirstEndPoint_ref;
  _C0Sec_ref_type C0Sec_ref;
  _C0SecVariance_ref_type C0SecVariance_ref;
  _C1Sec_ref_type C1Sec_ref;
  _C1SecVariance_ref_type C1SecVariance_ref;
  _C2Sec_ref_type C2Sec_ref;
  _C2SecVariance_ref_type C2SecVariance_ref;
  _C3Sec_ref_type C3Sec_ref;
  _C3SecVariance_ref_type C3SecVariance_ref;
  _SecStartPoint_ref_type SecStartPoint_ref;
  _SecEndPoint_ref_type SecEndPoint_ref;
  _IsSecValid_ref_type IsSecValid_ref;
  _CamObjId_ref_type CamObjId_ref;
  _Valid_ref_type Valid_ref;
  _MeasQlyLane_ref_type MeasQlyLane_ref;
  _MdlQlyLane_ref_type MdlQlyLane_ref;
  _CamChks_ref_type CamChks_ref;
  _CamCntr_ref_type CamCntr_ref;
  _CamTimeStamp_ref_type CamTimeStamp_ref;
};
// VECTOR Enable AutosarC++17_10-A12.6.1
// VECTOR Enable AutosarC++17_10-M8.5.1

/*!
 * \brief Compare for equality with another LaneMkrTempCam1Vcc instance.
 */
inline bool operator==(LaneMkrTempCam1Vcc const& l,
                       LaneMkrTempCam1Vcc const& r) noexcept {
  return (&l == &r) || ((l.C0First_ref == r.C0First_ref)
                         && (l.C0FirstVariance_ref == r.C0FirstVariance_ref)
                         && (l.C1First_ref == r.C1First_ref)
                         && (l.C1FirstVariance_ref == r.C1FirstVariance_ref)
                         && (l.C2First_ref == r.C2First_ref)
                         && (l.C2FirstVariance_ref == r.C2FirstVariance_ref)
                         && (l.C3First_ref == r.C3First_ref)
                         && (l.C3FirstVariance_ref == r.C3FirstVariance_ref)
                         && (l.FirstStartPoint_ref == r.FirstStartPoint_ref)
                         && (l.FirstEndPoint_ref == r.FirstEndPoint_ref)
                         && (l.C0Sec_ref == r.C0Sec_ref)
                         && (l.C0SecVariance_ref == r.C0SecVariance_ref)
                         && (l.C1Sec_ref == r.C1Sec_ref)
                         && (l.C1SecVariance_ref == r.C1SecVariance_ref)
                         && (l.C2Sec_ref == r.C2Sec_ref)
                         && (l.C2SecVariance_ref == r.C2SecVariance_ref)
                         && (l.C3Sec_ref == r.C3Sec_ref)
                         && (l.C3SecVariance_ref == r.C3SecVariance_ref)
                         && (l.SecStartPoint_ref == r.SecStartPoint_ref)
                         && (l.SecEndPoint_ref == r.SecEndPoint_ref)
                         && (l.IsSecValid_ref == r.IsSecValid_ref)
                         && (l.CamObjId_ref == r.CamObjId_ref)
                         && (l.Valid_ref == r.Valid_ref)
                         && (l.MeasQlyLane_ref == r.MeasQlyLane_ref)
                         && (l.MdlQlyLane_ref == r.MdlQlyLane_ref)
                         && (l.CamChks_ref == r.CamChks_ref)
                         && (l.CamCntr_ref == r.CamCntr_ref)
                         && (l.CamTimeStamp_ref == r.CamTimeStamp_ref)
  );
}

/*!
 * \brief Compare for inequality with another LaneMkrTempCam1Vcc instance.
 */
inline bool operator!=(LaneMkrTempCam1Vcc const& l,
                       LaneMkrTempCam1Vcc const& r) noexcept {
  return !(l == r);
}

}  // namespace LaneMkrTempCam1Vcc

#endif  // PERCEPTIONEXE_INCLUDE_LANEMKRTEMPCAM1VCC_IMPL_TYPE_LANEMKRTEMPCAM1VCC_H_
