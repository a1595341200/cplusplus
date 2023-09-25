/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_AAU_Codes.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description:
	List of different AAU and Function Codes that are used to map an error entry of the error buffer to the corresponding AAU and Function. 
* Others:
* Function List:
    1.��������
    2.��������
* History: 
    1.Date:
      Author:
      Modification:
    2.��������
**********************************************************************************/ 

#ifndef JKOBJFUSN_AAU_CODES_H
#define JKOBJFUSN_AAU_CODES_H


/*****************************/
/* AAU Definitions           */
/*****************************/
#define  JKOBJFUSN_AAU_CAM_CONVERT                          (0x01u)
#define  JKOBJFUSN_AAU_ASSOCIATION                          (0x02u)
#define  JKOBJFUSN_AAU_COMMON_ARRAY_UTILS                   (0x03u)
#define  JKOBJFUSN_AAU_COMMON_MATRIX                        (0x04u)
#define  JKOBJFUSN_AAU_DISTANCE_SCORE                       (0x05u)
#define  JKOBJFUSN_AAU_EGOCOORDCOMPENSATION                 (0x06u)
#define  JKOBJFUSN_AAU_EGOMOTION                            (0x07u)
#define  JKOBJFUSN_AAU_FUSION                               (0x08u)
#define  JKOBJFUSN_AAU_FUSION_MATH                          (0x09u)
#define  JKOBJFUSN_AAU_FUSION_MEMORY                        (0x0Au)
#define  JKOBJFUSN_AAU_FUSION_TOOLS                         (0x0Bu)
#define  JKOBJFUSN_AAU_GAINESTIMATION                       (0x0Cu)
#define  JKOBJFUSN_AAU_IDPROVIDER                           (0x0Du)
#define  JKOBJFUSN_AAU_LKF                                  (0x0Eu)
#define  JKOBJFUSN_AAU_COORDINATED_TURN                     (0x0Fu)
#define  JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT                  (0x10u)
#define  JKOBJFUSN_AAU_MODES_FILTERING                      (0x11u)
#define  JKOBJFUSN_AAU_MOTION_TYPE                          (0x12u)
#define  JKOBJFUSN_AAU_OBJECT_SELECTION                     (0x13u)
#define  JKOBJFUSN_AAU_DIST_MATRIX                          (0x14u)
#define  JKOBJFUSN_AAU_KINEMATICS                           (0x15u)
#define  JKOBJFUSN_AAU_PARAMETER_INTERFACE                  (0x16u)
#define  JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS                 (0x17u)
#define  JKOBJFUSN_AAU_VERSION                              (0x18u)
#define  JKOBJFUSN_AAU_QUALITY_MANAGEMENT                   (0x19u)
#define  JKOBJFUSN_AAU_TRACKMERGE                           (0x1Au)
#define  JKOBJFUSN_AAU_VALIDATION_MANAGEMENT                (0x1Bu)
#define  JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT   (0x1Cu)
#define  JKOBJFUSN_AAU_RADAR_CONVERT                        (0x1Du)  
#define  JKOBJFUSN_AAU_OBJECT_FUSION_MPF_CONVERTER_FUNC     (0x1Eu)  
#define  JKOBJFUSN_AAU_OBJECT_FUSION_MPF_FUNC               (0x1Fu)  
//#define  JKOBJFUSN_AAU_TARGET_PREDICTION                    (0x20u)


/*********************************************************/
/* JKOBJFUSN_AAU_CAM_CONVERT AAU Function Definitions */
/*********************************************************/
#define  JKOBJFUSN_AAU_CAM_CONVERT_FRNT_CAMOBJLIST_TO_JKOBJLIST_CONVERTER           (0x01u)
#define  JKOBJFUSN_AAU_CAM_CONVERT_CAMOBJ_TO_TRACKABLE_CONVERTER_CONVERTER_OBJECT   (0x02u)
#define  JKOBJFUSN_AAU_CAM_CONVERT_CONVERT_CAM_MTN_PAT                              (0x03u)
#define  JKOBJFUSN_AAU_CAM_CONVERT_CONVERT_CAM_OBJ_TYPE                             (0x04u)
#define  JKOBJFUSN_AAU_CAM_CONVERT_VALIDATE_VISION_OBJECT                           (0x05u)
#define  JKOBJFUSN_AAU_CAM_CONVERT_CALCULATE_VARIANCES_CAM                          (0x06u)
#define  JKOBJFUSN_AAU_CAM_CONVERT_VALIDATE_TIMESTAMP_FRNT                          (0x07u)

/**************************************************/
/* JK_ASSOCIATION AUU Function Definitions       */
/**************************************************/
#define  JKOBJFUSN_AAU_ASSOCIATION_RUN_ASSOCIATION                           (0x01u)
#define  JKOBJFUSN_AAU_ASSOCIATION_VERIFY_ASSOCIATION_INPUT                  (0x02u)

/**************************************************/
/* JKOBJFUSN_AAU_COMMON_ARRAY_UTILS AUU Function Definitions       */
/**************************************************/
#define  JKOBJFUSN_AAU_COMMON_ARRAY_UTILS_DEFAULT_INIT_AS8                   (0x01u)
#define  JKOBJFUSN_AAU_COMMON_ARRAY_UTILS_DEFAULT_INIT_AU16                  (0x02u)
#define  JKOBJFUSN_AAU_COMMON_ARRAY_UTILS_DEFAULT_INIT_AU32                  (0x03u)
#define  JKOBJFUSN_AAU_COMMON_ARRAY_UTILS_DEFAULT_INIT_AF32                  (0x04u)
#define  JKOBJFUSN_AAU_COMMON_ARRAY_UTILS_DEFAULT_INIT_ABOOL                 (0x05u)
#define  JKOBJFUSN_AAU_COMMON_ARRAY_UTILS_find_LARGEST_INDEX_F32             (0x06u)

/*********************************************************/
/* JKOBJFUSN_AAU_COMMON_MATRIX AAU Function Definitions */
/*********************************************************/

#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATADD           (0x01u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATSUB           (0x02u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATMUL           (0x03u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATTRANSPOSE     (0x04u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATINV           (0x05u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATDET           (0x06u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATZEROS         (0x07u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATEYE           (0x08u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATMULVEC        (0x09u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32VECADD           (0x0Au)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32VECSUB           (0x0Bu)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32VECMULVEC        (0x0Cu)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32VECZEROS         (0x0Du)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32SYM_MAT_ZEROS    (0x0Eu)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32SYM_MAT_TO_MAT   (0x0Fu)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MAT_TO_SYM_MAT   (0x10u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32SYM_MAT_EYE      (0x11u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MAXEIG           (0x12u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATNORM          (0x13u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATCONDNB        (0x14u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32MATMULSCAL       (0x15u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_COPY_MAT            (0x16u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_COPY_VEC            (0x17u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_INIT_MAT            (0x18u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_INIT_VEC            (0x19u)
#define JKOBJFUSN_AAU_COMMON_MATRIX_INIT_SYM_MAT        (0x1Au)
#define JKOBJFUSN_AAU_COMMON_MATRIX_ADD_SYM_MAT_PART    (0x1Bu)
#define JKOBJFUSN_AAU_COMMON_MATRIX_F32VECSUBPART       (0x1Cu)
#define JKOBJFUSN_AAU_COMMON_MATRIX_EGOCOMP_SYMMAT      (0x1Du)
#define JKOBJFUSN_AAU_COMMON_MATRIX_PREDICT_SYMMAT      (0x1Eu)
#define JKOBJFUSN_AAU_COMMON_MATRIX_ROTATE_SYMMAT       (0x1Fu)
#define JKOBJFUSN_AAU_COMMON_MATRIX_COPY_SYMMAT         (0x20u)

/**********************************************************/
/* JKOBJFUSN_AAU_DISTANCE_SCORE AUU Function Definitions */
/**********************************************************/
#define  JKOBJFUSN_AAU_DISTANCE_SCORE_COMPUTE_EXTENDED_DIST                  (0x01u)
#define  JKOBJFUSN_AAU_DISTANCE_SCORE_CALCULATE_DISTANCE                     (0x02u)
#define  JKOBJFUSN_AAU_DISTANCE_SCORE_SLECT_REDUCED_COV_MAT                  (0x03u)
#define  JKOBJFUSN_AAU_DISTANCE_SCORE_SLECT_REDUCED_STATE_VEC                (0x04u)
#define  JKOBJFUSN_AAU_DISTANCE_SCORE_GET_COST_MAP_INDEX                     (0x05u)
#define  JKOBJFUSN_AAU_DISTANCE_SCORE_DISTANCE_SCORE_TRACK_TO_TRACK          (0x06u)
#define  JKOBJFUSN_AAU_DISTANCE_SCORE_CALCULATE_GAIN                         (0x07u)
#define  JKOBJFUSN_AAU_DISTANCE_SCORE_MAT_INV                                (0x08u)
#define  JKOBJFUSN_AAU_DISTANCE_SCORE_MAT_DET                                (0x09u)

/**************************************************/
/* JKOBJFUSN_AAU_EGOCOORDCOMPENSATION AUU Function Definitions */
/**************************************************/
#define  JKOBJFUSN_AAU_EGO_COORDINATE_COMPENSATION_COMPENSATE_TRACKABLE_LIST (0x01u)
#define  JKOBJFUSN_AAU_EGO_COORDINATE_COMPENSATION_COORD_TRANSLATION         (0x02u)
#define  JKOBJFUSN_AAU_EGO_COORDINATE_COMPENSATION_COORD_ROTATION            (0x03u)
#define  JKOBJFUSN_AAU_EGO_COORDINATE_COMPENSATION_ANGLE_ROTATION            (0x04u)
#define  JKOBJFUSN_AAU_EGO_COORDINATE_COMPENSATION_ADAPT_COV_MAT             (0x05u)

/**************************************************/
/* JKOBJFUSN_AAU_EGOMOTION AUU Function Definitions */
/**************************************************/
#define  JKOBJFUSN_AAU_EGOMOTION_EGOMOTION_HISTORY_INIT                      (0x01u)
#define  JKOBJFUSN_AAU_EGOMOTION_EGOMOTION_ADD_ITEM_TO_HISTORY               (0x02u)
#define  JKOBJFUSN_AAU_EGOMOTION_EGOMOTION_GET_EGOMOTION_HISTORY             (0x03u)
#define  JKOBJFUSN_AAU_EGOMOTION_EGOMOTION_GET_DELTA_PATH                    (0x04u)
#define  JKOBJFUSN_AAU_EGOMOTION_EGOMOTION_ITEM_INIT                         (0x05u)
#define  JKOBJFUSN_AAU_EGOMOTION_EGOMOTION_GET_EGOMOTION_HISTORY_IDX         (0x07u)
#define  JKOBJFUSN_AAU_EGOMOTION_EGOMOTION_COPY_EGOMOTION_ITEM               (0x07u)
#define  JKOBJFUSN_AAU_EGOMOTION_EGOMOTION_COPY_EGOMOTION_HISTORY            (0x08u)

/**************************************************/
/* JK_FUSION AUU Function Definitions            */
/**************************************************/

#define  JKOBJFUSN_AAU_FUSION_PERFORM_FUSION_CYCLE              (0x01u)
#define  JKOBJFUSN_AAU_FUSION_COUNT_NUMBER_OF_INPUT_LISTS       (0x02u)
#define  JKOBJFUSN_AAU_FUSION_PERFORM_INPUT_VALIDATION          (0x03u)
#define  JKOBJFUSN_AAU_FUSION_ANALYZE_INPUT_LISTS               (0x04u)
#define  JKOBJFUSN_AAU_FUSION_IDENTIFY_UPDATED_LISTS            (0x06u)
#define  JKOBJFUSN_AAU_FUSION_COMPUTE_INPUT_LIST_ORDERING       (0x07u)
#define  JKOBJFUSN_AAU_FUSION_UPDATE_EGO_MOTION                 (0x08u)
#define  JKOBJFUSN_AAU_FUSION_PERFORM_TIMER_EVENT               (0x09u)
#define  JKOBJFUSN_AAU_FUSION_START_CYCLE                       (0x0Au)
#define  JKOBJFUSN_AAU_FUSION_SENSOR_EVENT                      (0x0Bu)

/***********************************************************************/
/* JKOBJFUSN_AAU_FUSION_MATH AUU Function Definitions */
/***********************************************************************/
#define  JKOBJFUSN_AAU_FUSION_MATH_ABS                          (0x01u)
#define  JKOBJFUSN_AAU_FUSION_MATH_SQRT                         (0x02u)
#define  JKOBJFUSN_AAU_FUSION_MATH_LOG                          (0x03u)
#define  JKOBJFUSN_AAU_FUSION_MATH_RTOD                         (0x04u)
#define  JKOBJFUSN_AAU_FUSION_MATH_COS                          (0x05u)
#define  JKOBJFUSN_AAU_FUSION_MATH_SIN                          (0x06u)
#define  JKOBJFUSN_AAU_FUSION_MATH_NORM_ANGLE                   (0x07u)
#define  JKOBJFUSN_AAU_FUSION_MATH_ATAN2                        (0x08u)
#define  JKOBJFUSN_AAU_FUSION_MATH_POW2                         (0x09u)
#define  JKOBJFUSN_AAU_FUSION_MATH_INTERP1                      (0x0Au)
#define  JKOBJFUSN_AAU_FUSION_MATH_EXP                          (0x0Bu)
#define  JKOBJFUSN_AAU_FUSION_MATH_IS_INF                       (0x0Cu)
#define  JKOBJFUSN_AAU_FUSION_MATH_IS_NAN                       (0x0Du)
#define  JKOBJFUSN_AAU_FUSION_MATH_COPY_SIGN                    (0x0Eu)
#define  JKOBJFUSN_AAU_FUSION_MATH_FREXP                        (0x0Fu)
#define  JKOBJFUSN_AAU_FUSION_MATH_SET_EXP                      (0x10u)
#define  JKOBJFUSN_AAU_FUSION_MATH_PACK                         (0x11u)
#define  JKOBJFUSN_AAU_FUSION_MATH_IS_ZERO                      (0x12u)
#define  JKOBJFUSN_AAU_FUSION_MATH_MODFF                        (0x13u)
#define  JKOBJFUSN_AAU_FUSION_MATH_SIN_IMPL                     (0x14u)
#define  JKOBJFUSN_AAU_FUSION_MATH_ATAN                         (0x15u)
#define  JKOBJFUSN_AAU_FUSION_MATH_FMOD                         (0x16u)
#define  JKOBJFUSN_AAU_FUSION_MATH_REMAINDER                    (0x17u)
#define  JKOBJFUSN_AAU_FUSION_MATH_SIGNBIT                      (0x18u)
#define  JKOBJFUSN_AAU_FUSION_MATH_MANT                         (0x19u)

/***********************************************************************/
/* JKOBJFUSN_AAU_FUSION_MEMORY AUU Function Definitions */
/***********************************************************************/
#define  JKOBJFUSN_AAU_FUSION_MEMORY_JK_FUSION_MEMCPY            (0x01u)
#define  JKOBJFUSN_AAU_FUSION_MEMORY_INTERN_MEMCPY_BYTE          (0x02u)
#define  JKOBJFUSN_AAU_FUSION_MEMORY_INTERN_MEMCPY_DOUBLEWORD    (0x03u)
#define  JKOBJFUSN_AAU_FUSION_MEMORY_INTERN_MEMCPY               (0x04u)

/***********************************************************************/
/* JKOBJFUSN_AAU_FUSION_TOOLS AUU Function Definitions */
/***********************************************************************/
#define  JKOBJFUSN_AAU_FUSION_TOOLS_GET_NUMBER_OF_SETBITES       (0x01u)

/***********************************************************************/
/* JKOBJFUSN_AAU_GAINESTIMATION AUU Function Definitions */
/***********************************************************************/
#define  JKOBJFUSN_AAU_GAINESTIMATION_LIMIT_GAIN                 (0x01u)
#define  JKOBJFUSN_AAU_GAINESTIMATION_GAIN_UPDATE                (0x02u)
#define  JKOBJFUSN_AAU_GAINESTIMATION_GAIN_PREDICTION            (0x03u)
#define  JKOBJFUSN_AAU_GAINESTIMATION_GAIN_ESTIMATION            (0x04u)
#define  JKOBJFUSN_AAU_GAINESTIMATION_GAIN_COMPENSATION          (0x05u)
#define  JKOBJFUSN_AAU_GAINESTIMATION_GAIN_PINCREASE             (0x06u)
#define  JKOBJFUSN_AAU_GAINESTIMATION_INCREASE_P                 (0x07u)
#define  JKOBJFUSN_AAU_GAINESTIMATION_GET_RELATIVE_STATES        (0x08u)

/*********************************************************/
/* JKOBJFUSN_AAU_EGO_MOTION AUU Function Definitions    */
/*********************************************************/
#define  JKOBJFUSN_AAU_EGO_MOTION_ITEM_INIT                                         (0x01u)
#define  JKOBJFUSN_AAU_EGO_MOTION_HISTORY_INIT                                      (0x02u)
#define  JKOBJFUSN_AAU_EGO_MOTION_GET_MOTION_HISTORY_INDEX                          (0x03u)
#define  JKOBJFUSN_AAU_EGO_MOTION_GET_EGO_MOTION_HISTORY                            (0x04u)
#define  JKOBJFUSN_AAU_EGO_MOTION_ADD_ITEM_TO_HISTORY                               (0x05u)
#define  JKOBJFUSN_AAU_EGO_MOTION_GET_DELTA_PATH                                    (0x06u)
#define  JKOBJFUSN_AAU_EGO_MOTION_COPY_EGO_MOTION_ITEM                              (0x07u)
#define  JKOBJFUSN_AAU_EGO_MOTION_COPY_EGO_MOTION_HISTORY                           (0x08u)

/**********************************************************/
/* JKOBJFUSN_AAU_CALCULATE_GAIN AUU Function Definitions */
/**********************************************************/
#define JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_ESTIMATION                               (0x01u)
#define JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_UPDATE                                   (0x02u)
#define JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_PREDICTION                               (0x03u)
#define JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_COMPENSATION                             (0x04u)
#define JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_COMPENSATION_INVERSE                     (0x05u)
#define JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_PINCREASE                                (0x06u)
#define JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_LIMITGAIN                                (0x07u)
#define JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_INCREASEP                                (0x08u)
#define JKOBJFUSN_AAU_GAIN_ESTIMATION_GAIN_RELATIVESTATES                           (0x09u)

/*********************************************************/
/* JKOBJFUSN_AAU_IDPROVIDER AUU Function Definitions   */
/*********************************************************/
#define JKOBJFUSN_AAU_ID_PROVIDER_INIT                                              (0x01u)
#define JKOBJFUSN_AAU_ID_PROVIDER_GET_NEW_FUSION_ID                                 (0x02u)
#define JKOBJFUSN_AAU_ID_PROVIDER_RELEASE_FUSION_ID                                 (0x03u)
#define JKOBJFUSN_AAU_ID_PROVIDER_FINISH_CYCLE                                      (0x04u)       

/**************************************************/
/* JKOBJFUSN_AAU_LKF AUU Function Definitions    */
/**************************************************/
#define JKOBJFUSN_AAU_LKF_ADD_NEW_TRKBL                                             (0x01u)
#define JKOBJFUSN_AAU_LKF_GET_DYNAMIC_MODEL                                         (0x02u)
#define JKOBJFUSN_AAU_LKF_DO_PREDICT                                                (0x03u)
#define JKOBJFUSN_AAU_LKF_SET_MEASUREMENT_NOISE_ELEMENT                             (0x04u)
#define JKOBJFUSN_AAU_LKF_DO_CORRECT                                                (0x05u)
#define JKOBJFUSN_AAU_LKF_CALCULATE_KR                                              (0x06u)

/****************************************************************/
/* JKOBJFUSN_AAU_COORDINATED_TURN AUU Function Definitions */
/****************************************************************/
#define JKOBJFUSN_AAU_LKF_COORDINATED_TURN_DO_PREDICT                               (0x01u)
#define JKOBJFUSN_AAU_LKF_COORDINATED_TURN_DO_CORRECT                               (0x02u)

/****************************************************************/
/* JKOBJFUSN_AAU_LKF_TRACKMANAGEMENT AUU Function Definitions */
/****************************************************************/
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_INIT                                     (0x01u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_START_CYCLE                              (0x02u)   
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_FINALIZE_CYCLE                           (0x03u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_DELETE_SENSOR_INFORMATION                (0x04u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_PREDICT_INTERNAL_TRKBL                   (0x06u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_COMPENSATE_INTERNAL_TRKBL                (0x07u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_PREDICT_EXTERNAL_TRKBL                   (0x08u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_PREDICT_UPDATE_TRKBL                     (0x09u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_SETUP_NEW_LKF_TRKBL                      (0x0Au)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_CHECK_DYING_TRKBLS                       (0x0Bu)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_COPY_LKF_TRKBL_TO_OUTPUT_LIST            (0x0Cu)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_CALCULATE_MOTION_TYPE                    (0x0Du)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_GET_TRACK_LIST_AGE                       (0x0Eu)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_RUN_TRACK_MERGE                          (0x0Fu)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_GET_TRKBLE_LIST                          (0x11u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_START_NEW_TRKBL                          (0x12u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_UPDATE_AGE                               (0x13u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_UPDATE_TRKBLE                            (0x14u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_UPDATE_TRKBLE_INFOS                      (0x15u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_UPDATE_EXISTENCE_PROBABILITY             (0x16u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_SELECT_VIO_TRACKBLES                     (0x17u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_UPDATE_COORDINATED_TURN_MODEL            (0x18u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_DROP_OBJECTS                             (0x19u)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_REMOVE_OBSOLETE_OBJECTS                  (0x1Au)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_ADD_TRKBL                                (0x1Bu)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_CLEAR_VISION                             (0x1Cu)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_CLEAR_RADAR                              (0x1Du)
#define JKOBJFUSN_AAU_LKF_TRACK_MANAGEMENT_SETUP_NEW_LKF_TRKBLE                     (0x1Eu)

/**********************************************************************/
/* JKOBJFUSN_AAU_MODES_FILTERING AUU Function Definitions            */
/**********************************************************************/
#define JKOBJFUSN_AAU_MODES_FILTERING_MEAS_TO_LKF_UPDATE                            (0x01u)
#define JKOBJFUSN_AAU_MODES_FILTERING_PREDICT_OBJECT_LIST                           (0x02u)

/*********************************************************/
/* JKOBJFUSN_AAU_MOTION_TYPE AUU Function Definitions   */
/*********************************************************/
#define JKOBJFUSN_AAU_MOTION_TYPE_SET_MOTION_TYPE_TRKBL_LIST                        (0x01u)
#define JKOBJFUSN_AAU_MOTION_TYPE_SET_MOTION_TYPE_TRKBL                             (0x02u)

/**************************************************************/
/* JKOBJFUSN_AAU_OBJECT_SELECTION AUU Function Definitions   */
/**************************************************************/
#define JKOBJFUSN_AAU_OBJECT_SELECTION_VIO_TRACKABLE_SELECTION                      (0x01u)
#define JKOBJFUSN_AAU_OBJECT_SELECTION_SET_DROPPED_TRACKABLES_BINS                  (0x02u)     
#define JKOBJFUSN_AAU_OBJECT_SELECTION_SET_TRACKABLE_BIN_POSITION                   (0x03u)
#define JKOBJFUSN_AAU_OBJECT_SELECTION_CALCULATE_OBJECT_RANGE                       (0x04u)
#define JKOBJFUSN_AAU_OBJECT_SELECTION_CALCULATE_OBJECT_ANGLE                       (0x05u)

/**************************************************************/
/* JKOBJFUSN_AAU_DIST_MATRIX AUU Function Definitions   */
/**************************************************************/
#define JKOBJFUSN_AAU_DIST_MATRIX_INIT_DIST_MATRIX                                  (0x01u)
#define JKOBJFUSN_AAU_DIST_MATRIX_CONVERT_FLOAT_TO_FIXEDT_DIST_MAT                  (0x02u)     
#define JKOBJFUSN_AAU_DIST_MATRIX_CONVERT_FIXED_TO_FLOAT_DIST_MAT                   (0x03u)

/*******************************************************/
/* JKOBJFUSN_AAU_KINEMATICS AUU Function Definitions  */
/*******************************************************/
#define JKOBJFUSN_AAU_KINEMATICS_CHECK_INPUT_VALIDITY                               (0x01u)
#define JKOBJFUSN_AAU_KINEMATICS_RELATIVE_2_OVER_GROUND                             (0x02u)
#define JKOBJFUSN_AAU_KINEMATICS_OVER_GROUND_2_RELATIVE                             (0x03u)
#define JKOBJFUSN_AAU_KINEMATICS_KINEMATICS_RELATIVE_2_OVER_GROUND                  (0x04u)
#define JKOBJFUSN_AAU_KINEMATICS_KINEMATICS_OVER_GROUND_2_RELATIVE                  (0x05u)

/****************************************************************/
/* JKOBJFUSN_AAU_PARAMETER_INTERFACE AUU Function Definitions  */
/****************************************************************/
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_U32SENSORMODE                         (0x01u)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32MATCHGATE                          (0x02u)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32PEDESTRIANVARIANCEINXFORQ          (0x03u)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32PEDESTRIANVARIANCEINYFORQ          (0x05u)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32VEHICLEVARIANCEINXFORQ             (0x06u)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32VEHICLEVARIANCEINYFORQ             (0x07u)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_BOUTPUTISOVERGROUND                   (0x08u)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32EXTENDEDSCOREDIFFERENTID           (0x09u)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_BUSETRACKMERGE                        (0x0Au)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_BUSECOASTING                          (0x0Bu)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_U32COASTEDSENSOR                      (0x0Cu)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32ADDITIONALQONDIAGONAL              (0x0Du)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_BUSEMPFNUMOBJECTS                     (0x0Eu)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32VARIANCEINHEADINGFORQ              (0x0Fu)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32DYNCALREARTOVEHICLEFRONT           (0x11u)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32DYNCALCAMLATOFFSET                 (0x12u)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32DYNCALCAMLONGOFFSET                (0x13u)
#define JKOBJFUSN_AAU_PARAMETER_INTERFACE_SET_F32VEHCFGPARAM                        (0x14u)

/**************************************************************/
/* JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS AUU Function Definitions */
/**************************************************************/
#define JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_TRACKABLE_INIT_SENSOR_PATTERN_BUFFER     (0x01u)
#define JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_SET_SENSOR_INFOS                         (0x02u)
#define JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_TRACKABLE_GET_SENS_POS                   (0x03u)
#define JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_TRACKABLE_GET_SENS_PATTERN               (0x04u)
#define JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_INIT_OBJECT_LIST                         (0x05u)
#define JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_TRACKABLE_LIST_INIT                      (0x06u)
#define JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_TRACKABLE_INIT                           (0x07u)
#define JKOBJFUSN_AAU_TRACKABLE_LIST_UTILS_COPY_TRACKABLE                           (0x08u)

/**************************************************************/
/* JKOBJFUSN_AAU_VERSION AUU Function Definitions */
/**************************************************************/
#define JKOBJFUSN_AAU_VERSION_FUSION_FILL_VERSION                                   (0x01u)

/**************************************************************/
/* JKOBJFUSN_AAU_QUALITY_MANAGEMENT AUU Function Definitions */
/**************************************************************/
#define JKOBJFUSN_AAU_QUALITY_MANAGEMENT_JK_UPDATE_EXISTENCE_PROBABILITY            (0x01u)
#define JKOBJFUSN_AAU_QUALITY_MANAGEMENT_JK_UPDATE_TRACK_QUALITY                    (0x02u)             
#define JKOBJFUSN_AAU_QUALITY_MANAGEMENT_GET_PROBABILITY_TRUE_POSITIVE              (0x03u)              
#define JKOBJFUSN_AAU_QUALITY_MANAGEMENT_GET_PROBABILITY_FALSE_POSITIVE             (0x04u)
#define JKOBJFUSN_AAU_QUALITY_MANAGEMENT_UPDATE_EXISTENCE_PROBABILITY               (0x05u)

/*******************************************************/
/* JKOBJFUSN_AAU_TRACKMERGE AUU Function Definitions  */
/*******************************************************/
#define JKOBJFUSN_AAU_TRACKMERGE_MERGE_TRACKS                                       (0x01u)
#define JKOBJFUSN_AAU_TRACKMERGE_MERGE_TRKBL                                        (0x02u)
#define JKOBJFUSN_AAU_TRACKMERGE_DISTCAM2RADAR                                      (0x03u)
#define JKOBJFUSN_AAU_TRACKMERGE_FIND_NON_FUSED_TRACKS                              (0x04u)

/******************************************************************/
/* JKOBJFUSN_AAU_VALIDATION_MANAGEMENT AUU Function Definitions */
/******************************************************************/
#define JKOBJFUSN_AAU_VALIDATION_MANAGEMENT_VALIDATE_TRACKABLE                      (0x01u)
#define JKOBJFUSN_AAU_VALIDATION_MANAGEMENT_VALIDATE_TRACKABLE_MAP                  (0x02u)
#define JKOBJFUSN_AAU_VALIDATION_MANAGEMENT_VALIDATE_TRACKABLE_LIST                 (0x03u)
#define JKOBJFUSN_AAU_VALIDATION_MANAGEMENT_VALIDATE_SENSOR_INPUT                   (0x04u)
#define JKOBJFUSN_AAU_VALIDATION_MANAGEMENT_VALIDATE_OBJECT_LIST                    (0x05u)

/******************************************************************/
/* JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT AUU Function Definitions */
/******************************************************************/

#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_OBJFUSN_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_INIT        (0x01u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_OBJFUSN_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT             (0x02u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_INIT_RACAM_OBJLIST                                     (0x03u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_INIT_ID_MNG_ARRAY                                      (0x04u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_SET_RACAM_FUSN_ID                                      (0x05u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_CHECK_RACAM_FUSN_ID                                    (0x06u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_CLEAR_TRACK_STATUS                                     (0x07u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_SET_NEW_RACAM_ID                                       (0x08u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_GET_RACAM_MOTION_TYPE                                  (0x09u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_GET_RACAM_MOTION_TYPE_HIST                             (0x0Au)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_GET_RACAM_CLASS_TYPE                                   (0x0Bu)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_GET_RACAM_TRACK_STATUS                                 (0x0Cu)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_GET_PRIMARY_CMBB                                       (0x0Du)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_GET_POSITION_CONFIDENCE                                (0x0Eu)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_GET_TJA_CONFIDENCE                                     (0x0Fu)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_CALCULATE_CONFIDENCE_ROI                               (0x10u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_UPDATE_VARIANCES                                       (0x11u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_GET_FUSION_SOURCE                                      (0x12u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_EGO_IS_STATIONARY                                      (0x13u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_GET_VISION_CLASS_TYPE                                  (0x14u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_VERIFY_OBJECT_PLAUSIBILITY                             (0x15u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_VERIFY_ASIL_LEVEL                                      (0x16u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_VALIDATE_CONFIDENCE                                    (0x17u)
#define JKOBJFUSN_AAU_OBJLIST_TO_VOLVO_SNSR_FUSN_CONVERT_GET_EGOMOTION_INDEX                                    (0x18u)


/******************************************************************/
/* JKOBJFUSN_AAU_RADAR_CONVERT AUU Function Definitions  */
/******************************************************************/
#define JKOBJFUSN_AAU_RADAR_CONVERT_FRNT_RDR_OBJLIST_TO_JKOBJLIST_CONVERTER           (0x01u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_FRNT_RDR_OBJLIST_TO_JKOBJLIST_CONVERTER_4D        (0x02u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CORNER_RDR_OBJLIST_TO_JKOBJLIST_CONVERTER         (0x03u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_RDR_OBJ_TO_TRACKABLE_CONVERTER                    (0x04u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_VALIDATE_RADAR_OBJECT                             (0x05u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CONVERT_RDR_SENSOR_PAT                            (0x06u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CONVERT_RDR_OBJ_TYPE                              (0x07u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CONVERT_RDR_MTN_PAT                               (0x08u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CONVERT_RDR_TYP_CONF                              (0x09u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_GET_FRONT_RDR_OBJ_LIST_TO_PROCESS                 (0x0Au)
#define JKOBJFUSN_AAU_RADAR_CONVERT_GET_CORNER_RDR_OBJ_LIST_TO_PROCESS                (0x0Bu)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CALCULATE_VARIANCES_RADAR                         (0x0Cu)
#define JKOBJFUSN_AAU_RADAR_CONVERT_FIND_NEIGHBORS                                    (0x0Du)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CALCULATE_DISTANCE_CLUSTERING                     (0x0Eu)
#define JKOBJFUSN_AAU_RADAR_CONVERT_RUN_CLUSTERING                                    (0x0Fu)
#define JKOBJFUSN_AAU_RADAR_CONVERT_FIND_RELEVANT_TRACKS                              (0x10u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_RUN_LINEAR_REGRESSION                             (0x11u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_RUN_ROAD_BOUNDARY_DETECTION                       (0x12u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_ARRAY_CONTAINS_U16                                (0x13u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CALCULATE_OBJECT_ANGLE                            (0x14u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_RDR_OBJ_TO_TRACKABLE_CONVERTER_4D                 (0x15u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_VALIDATE_RADAR_OBJECT_4D                          (0x16u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CONVERT_RDR_OBJ_TYPE_4D                           (0x17u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CONVERT_RDR_MTN_PAT_4D                            (0x18u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CONVERT_RDR_TYP_CONF_4D                           (0x19u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_GET_FRONT_RDR_OBJ_LIST_TO_PROCESS_4D              (0x1Au)
#define JKOBJFUSN_AAU_RADAR_CONVERT_FIND_NEIGHBORS_4D                                 (0x1Bu)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CALCULATE_DISTANCE_CLUSTERING_4D                  (0x1Cu)
#define JKOBJFUSN_AAU_RADAR_CONVERT_RUN_CLUSTERING_4D                                 (0x1Du)
#define JKOBJFUSN_AAU_RADAR_CONVERT_FIND_RELEVANT_TRACKS_4D                           (0x1Eu)
#define JKOBJFUSN_AAU_RADAR_CONVERT_RUN_LINEAR_REGRESSION_4D                          (0x1Fu)
#define JKOBJFUSN_AAU_RADAR_CONVERT_RUN_ROAD_BOUNDARY_DETECTION_4D                    (0x20u)
#define JKOBJFUSN_AAU_RADAR_CONVERT_CALCULATE_OBJECT_ANGLE_4D                         (0x21u)


/******************************************************************/
/* JKOBJFUSN_AAU_OBJECT_FUSION_MPF_CONVERTER_FUNC AUU Function Definitions */
/******************************************************************/
#define JKOBJFUSN_AAU_OBJECT_FUSION_MPF_CONVERTER_FUNC_SF_OBJECT_FUSION_MPF_CONVERTER_INIT_WRAPPER               (0x01u)
#define JKOBJFUSN_AAU_OBJECT_FUSION_MPF_CONVERTER_FUNC_SF_OBJECT_FUSION_MPF_CONVERTER_OUTPUTS_WRAPPER            (0x02u)

/******************************************************************/
/* JKOBJFUSN_AAU_OBJECT_FUSION_MPF_FUNC AUU Function Definitions */
/******************************************************************/
#define JKOBJFUSN_AAU_OBJECT_FUSION_MPF_FUNC_SF_OBJECT_FUSION_MPF_INIT_WRAPPER        (0x01u)
#define JKOBJFUSN_AAU_OBJECT_FUSION_MPF_FUNC_SF_OBJECT_FUSION_MPF_OUTPUTS_WRAPPER     (0x02u)

#endif /** JKOBJFUSN_AAU_CODES_H */
