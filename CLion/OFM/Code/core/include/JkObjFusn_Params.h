/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JKOBJFUSN_PARAMS.h 
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: Fusion parameters
	This is a structure definition file that defines parameters for the fusion module.

	Comments:

	There are several options for parameter handling in Simulink (as far as we know):
	  - Block mask: enter parameters in a block mask, they will be passed to the C code through the SimStruct
	  - Bus: Pass parameters through a bus

	Block mask:
	  - Parameters can be edited manually via block mask
	  - Different handling of parameters set before startup and runtime parameters
	  - Parameter passing to C can be implemented manually or with the S-function generator
	  - Manual implementation via SimStruct looks tedious
	  - Generated code is very naïve (copying each value in the struct with a separate memcopy) and cannot handle lists

	Bus:
	  - Block needs an additional input for the parameter bus (similar to JK object struct/list)
	  - Bus creation can be done manually in Simulink
	  - No (easy) separation between startup and runtime parameters
	  - Parameters could be read from file and fed to fusion module via the bus input

	General notes:
	  - Independent from any chosen parameter concept we need to map parameters from Simulink to our C fusion module. 
	Either we parse them out of the SimStruct (block mask option) and pass them through the S-function wrapper to 
	our module or we use the bus concept (similar handling of parameters as already done for the JK object struct list).
	  - Thus, we can choose our parameter concept for the fusion module independently from Simulink since we need to 
	implement a conversion anyway. All three concepts can be realized/combined with Simulink with help of this conversion 
	(as far as we understood the Simulink parameter handling for now).
* Others:
* Function List:
    1.¡­¡­¡­¡­
    2.¡­¡­¡­¡­
* History: 
    1.Date:
      Author:
      Modification:
    2.¡­¡­¡­¡­
**********************************************************************************/

#ifndef JKOBJFUSN_PARAMS_H
#define JKOBJFUSN_PARAMS_H

#include "Jk_common_types.h"


/***************/
/* Sensor mode */
/***************/
/** @name Sensor mode macros
 * Sensor mode  parameters
 \{**/
/** Default value */
#define JKOBJFUSN_PARAMS_U32SENSORMODE_DEFAULT           (0x7FFFFFFFu)
/** minimal value */
#define JKOBJFUSN_PARAMS_U32SENSORMODE_MIN               (0u)
/** maximum value */
#define JKOBJFUSN_PARAMS_U32SENSORMODE_MAX               (0x7FFFFFFFu)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_U32SENSORMODE_ISENUM            (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_U32SENSORMODE_DESCR             ("Decodes which sensors will be used in the fusion module (using a sensor pattern)")
/** \}*/

/*******************/
/* Match Gate      */
/*******************/
/** @name Match Gate macros
 * Match Gate parameters
 \{**/
/** Default value */
#define JKOBJFUSN_PARAMS_F32MATCHGATE_DEFAULT          (40.0f)
/** minimum value */
#define JKOBJFUSN_PARAMS_F32MATCHGATE_MIN              (0.0f)
/** maximum value */
#define JKOBJFUSN_PARAMS_F32MATCHGATE_MAX              (64.f)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_F32MATCHGATE_ISENUM           (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_F32MATCHGATE_DESCR            ("Gate for matching")
/** \}*/

/*******************/
/* Process Noise in x */
/*******************/
/** @name Post Prediction macros
 * Process Noise of the highest derivation in x in the Wiener-sequence-acceleration model
 * depends on value of bAccelerationX
 * False: constant velocity model - process noise specifies acceleration variance (constant velocity model)
 * TRUE: constant velocity model - process noise specifies jerk variance (constant acceleration model)
 \{**/
/** Default value */
#define JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINXFORQ_DEFAULT     (1.0f)
/** minimum value */
#define JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINXFORQ_MIN         (0.0f)
/** maximum value */
#define JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINXFORQ_MAX         (FLT_MAX)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINXFORQ_ISENUM      (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINXFORQ_DESCR       ("Variance in X (highest derivation) for Q matrix in case of Pedestrians")
/** \}*/
   
/*******************/
/* Process Noise in y */
/*******************/
/** @name Post Prediction macros
 * Process Noise of the highest derivation in y in the Wiener-sequence-acceleration model
 * depends on value of bAccelerationY
 * False: constant velocity model - process noise specifies acceleration variance (constant velocity model)
 * TRUE: constant velocity model - process noise specifies jerk variance (constant acceleration model)
 \{**/
/** Default value */
#define JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINYFORQ_DEFAULT     (1.0f)
/** minimum value */
#define JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINYFORQ_MIN         (0.0f)
/** maximum value */
#define JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINYFORQ_MAX         (FLT_MAX)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINYFORQ_ISENUM      (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_F32PEDESTRIANVARIANCEINYFORQ_DESCR       ("Variance in Y (highest derivation) for Q matrix in case of Pedestrians")
/** \}*/


/**********************/
/* Process Noise in x */
/**********************/
/** \@name Post Prediction macros
 * Process Noise of the highest derivation in x in the Wiener-sequence-acceleration model
 * depends on value of bAccelerationX
 * False: constant velocity model - process noise specifies acceleration variance (constant velocity model)
 * TRUE: constant velocity model - process noise specifies jerk variance (constant acceleration model)
 \{**/
/** Default value */
#define JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINXFORQ_DEFAULT     (1.0f)
/** minimum value */
#define JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINXFORQ_MIN         (0.0f)
/** maximum value */
#define JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINXFORQ_MAX         (FLT_MAX)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINXFORQ_ISENUM      (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINXFORQ_DESCR       ("Variance in X (highest derivation) for Q matrix in case of vehicles")
/** \}*/
   
/*******************/
/* Process Noise in y */
/*******************/
/** \name Post Prediction macros
 * Process Noise of the highest derivation in y in the Wiener-sequence-acceleration model
 * depends on value of bAccelerationY
 * False: constant velocity model - process noise specifies acceleration variance (constant velocity model)
 * TRUE: constant velocity model - process noise specifies jerk variance (constant acceleration model)
 \{**/
/** Default value */
#define JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINYFORQ_DEFAULT     (1.0f)
/** minimum value */
#define JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINYFORQ_MIN         (0.0f)
/** maximum value */
#define JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINYFORQ_MAX         (FLT_MAX)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINYFORQ_ISENUM      (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_F32VEHICLEVARIANCEINYFORQ_DESCR       ("Variance in Y (highest derivation) for Q matrix in case of vehicles")
/** \}*/

/*************************/
/* Kinematic Transformation */
/*************************/
/** @name kinematic transformation in x macro
 * Bool which enables to output in overground metric
 \{**/
/** Default value */
#define JKOBJFUSN_PARAMS_BOUTPUTISOVERGROUND_DEFAULT  (TRUE)
/** minimum value */
#define JKOBJFUSN_PARAMS_BOUTPUTISOVERGROUND_MIN      (FALSE)
/** maximum value */
#define JKOBJFUSN_PARAMS_BOUTPUTISOVERGROUND_MAX      (TRUE)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_BOUTPUTISOVERGROUND_ISENUM   (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_BOUTPUTISOVERGROUND_DESCR    ("Bool which enables to output in overground metric")
///\}

/** @name Enables and disables a track merging algorithm
 \{**/
/** Default value */
#define JKOBJFUSN_PARAMS_BUSETRACKMERGE_DEFAULT         (TRUE)
/** minimum value */
#define JKOBJFUSN_PARAMS_BUSETRACKMERGE_MIN             (FALSE)
/** maximum value */
#define JKOBJFUSN_PARAMS_BUSETRACKMERGE_MAX             (TRUE)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_BUSETRACKMERGE_ISENUM          (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_BUSETRACKMERGE_DESCR           ("Enables and disables a track merging algorithm")
///\}

/** @name Enables and disables a coasting algorithm
 \{**/
/** Default value */
#define JKOBJFUSN_PARAMS_BUSECOASTING_DEFAULT         (FALSE)
/** minimum value */
#define JKOBJFUSN_PARAMS_BUSECOASTING_MIN             (FALSE)
/** maximum value */
#define JKOBJFUSN_PARAMS_BUSECOASTING_MAX             (TRUE)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_BUSECOASTING_ISENUM          (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_BUSECOASTING_DESCR           ("Enables and disables a coasting algorithm")
///\}


/**********************************/
/* Dynamic Calibration Parameters */
/**********************************/

/** @name Sets the distance from front bumper to mid of rear axle
\{**/
/** Default value shall be SX11 length */
#define JKOBJFUSN_PARAMS_DYNCALREARTOVEHICLEFRONT_DEFAULT         (3.600f)
/** minimum value */
#define JKOBJFUSN_PARAMS_DYNCALREARTOVEHICLEFRONT_MIN             (0.0f)
/** maximum value */
#define JKOBJFUSN_PARAMS_DYNCALREARTOVEHICLEFRONT_MAX             (6.0f)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_DYNCALREARTOVEHICLEFRONT_ISENUM          (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_DYNCALREARTOVEHICLEFRONT_DESCR           ("Sets the distance from front bumper to mid of rear axle")
///\}

/** @name Sets the lateral position offset from cam
\{**/
/** Default value */
#define JKOBJFUSN_PARAMS_DYNCALCAMLATOFFSET_DEFAULT         (0.0f)
/** minimum value */
#define JKOBJFUSN_PARAMS_DYNCALCAMLATOFFSET_MIN             (-5.0f)
/** maximum value */
#define JKOBJFUSN_PARAMS_DYNCALCAMLATOFFSET_MAX             (5.0f)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_DYNCALCAMLATOFFSET_ISENUM          (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_DYNCALCAMLATOFFSET_DESCR           ("Sets the lateral position offset from cam")
///\}

/** @name Sets the longitudinal position offset from cam to front bumper
\{**/
/** Default value */
#define JKOBJFUSN_PARAMS_DYNCALCAMLONGOFFSET_DEFAULT         (1.600f)
/** minimum value */
#define JKOBJFUSN_PARAMS_DYNCALCAMLONGOFFSET_MIN             (0.0f)
/** maximum value */
#define JKOBJFUSN_PARAMS_DYNCALCAMLONGOFFSET_MAX             (5.0f)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_DYNCALCAMLONGOFFSET_ISENUM          (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_DYNCALCAMLONGOFFSET_DESCR           ("Sets the longitudinal position offset from cam to front bumper")
///\}

/** @name Indicates the vehicle configuration parameter (SX11, FE, GE)
\{**/
/** Default value */
#define JKOBJFUSN_PARAMS_VEHCFGPARAM_DEFAULT         (0u)
/** minimum value */
#define JKOBJFUSN_PARAMS_VEHCFGPARAM_MIN             (0u)
/** maximum value */
#define JKOBJFUSN_PARAMS_VEHCFGPARAM_MAX             (254u)
/** flag indicating if this field is an enumeration */
#define JKOBJFUSN_PARAMS_VEHCFGPARAM_ISENUM          (0)
/** Brief description string */
#define JKOBJFUSN_PARAMS_VEHCFGPARAM_DESCR           ("Indicates the vehicle configuration parameter (SX11, FE, GE)")
///\}

/** a structure for holding all fusion parameters */
typedef struct JkObjFusn_ParametersTypeTag
{
   uint32 u32SensorMode;
   float32 f32MatchGate;
   float32 f32PedestrianVarianceInXForQ;
   float32 f32PedestrianVarianceInYForQ;
   float32 f32VehicleVarianceInXForQ;
   float32 f32VehicleVarianceInYForQ;

   boolean bOutputIsOverground;   

   /*
   This parameter enables track merge
   */
   boolean bUseTrackMerge;
   /*
   This parameter enables coasting
   */
   boolean bUseCoasting;

   /* include dynamic vehicle parameter */
   float32 f32DynCalPrmForAxleDstReToVehFrnt; /* vehicle distance mid of front bumper to mid of rear axle*/
   float32 f32DynCalPrmForCamLatDistToVehFrnt0; /* vehicle distance camera lateral position to mid of front bumper */
   float32 f32DynCalPrmForCamLongDistToVehFrnt0; /* vehicle distance camera longitudinal position to front bumper */
   uint8 u8VehCfgPrmInt; /* vehicle configuration parameter */

} JkObjFusn_ParametersType;
#endif ///\} JKOBJFUSN_PARAMS_H


