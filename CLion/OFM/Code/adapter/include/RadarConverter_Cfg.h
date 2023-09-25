
#ifndef RADARCONVERTER_CFG_H_
#define RADARCONVERTER_CFG_H_ 1

#ifdef __cplusplus
extern "C" {
#endif

 
/*==================[macros]================================================*/

/** New Sensor model */
/** Position X */
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_0     (0.95110f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_1     (-0.0247f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_2     (FLT_ZERO)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_3     (0.00020f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_4     (0.00450f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_X_BETA_5     (FLT_ZERO)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_X_MIN        (0.1500f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_X_MAX        (FLT_ONE)

/* Position Y */
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_0     (0.3242f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_1     (-0.0028f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_2     (FLT_ZERO)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_3     (0.0001f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_4     (0.0060f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_5     (FLT_ZERO)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_MIN        (JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_BETA_0)
#define  JKOBJLIST_RAD_SENSOR_MODEL_POS_Y_MAX        (3.16230f)

/** Velocity X */
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_0     (1.5791f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_1     (-0.0305f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_2     (FLT_ZERO)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_3     (0.0002f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_4     (0.0003f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_BETA_5     (FLT_ZERO)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_MIN        (0.057f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_X_MAX        (FLT_TWO)

/** Velocity Y */
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_0     (1.87190f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_1     (0.04293f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_2     (FLT_ZERO)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_3     (0.00000f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_4     (0.00270f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_5     (FLT_ZERO)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_MIN        (JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_BETA_0)
#define  JKOBJLIST_RAD_SENSOR_MODEL_VEL_Y_MAX        (4.25230f)

/** Acceleration X */
#define  JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_0     (FLT_TWO)
#define  JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_1     (-0.0356f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_2     (FLT_ZERO)
#define  JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_3     (0.00030f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_4     (0.00970f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_BETA_5     (FLT_ZERO)
#define  JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_MIN        (0.75f)
#define  JKOBJLIST_RAD_SENSOR_MODEL_ACC_X_MAX        (FLT_TWO) 

#define  JKOBJLIST_RAD_SENSOR_DEFAULT_CLASS_PROB     (99u)

#define  JKOBJLIST_RAD_LATENCY_TO_SECONDS            (10000.0f)

#define  JKOBJLIST_RAD_MAX_MEASUREMENT_AGE           (0.5f)

#define  JKOBJLIST_RAD_USE_ACCELERATION              (STD_ON)

/* define for object existence probability threshold */
#define JKOBJLIST_RAD_EXIST_PROB_THRESHOLD           (95.f)

/* define bit pattern if object is ASIL verified */
#define JKOBJLIST_RAD_BITPATTERN_ASIL_VALID          (0x0Fu)
#define JKOBJLIST_RAD_BITPATTERN_ASIL_INVALID        (0x00u)
  
/** 
  * If enabled, road boundary detection algorithm is active such that 
  * stationary radar tracks that can be clustered to a line parallel to the
  * ego vehicle are removed 
  */
#define  JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION               (STD_ON)

#if STD_ON == JKOBJLIST_RAD_ENABLE_ROAD_BOUNDARY_DETECTION

/* Limit yaw-rate of ego-vehicle to approximately 11 deg / s */
#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_YAW               (11.f)

/** Max distance used in clustering during road boundary detection, set to 2.5m squared */
#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_DIST               (7.f)

#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_DIST_WEIGHT_X          (0.60f)

#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_DIST_WEIGHT_Y          (1.75f)

/* Minimum number of neighbors in order to create a cluster */
#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MIN_NUM_NEIGHBORS      (2u)

/* Minimum number of elements per cluster to do linear regression */
#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MIN_TRACKS_PER_CLUSTER (4u)

#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_RADAR_TRACKS       (40u)

#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_OFFSET_X               (3.0f)

#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_OFFSET_Y               (2.0f)

#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LENGTH                 (40.0f)

#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_WIDTH                  (6.0f)

#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_NUM_CLUSTERS       (10u)

#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_SLOPE              ((0.4f * JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_WIDTH) / JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_LENGTH)

#define JKOBJLIST_RAD_ROAD_BOUNDARY_DETECTION_MAX_DIST_TO_LINE       (0.25f)

#endif

/*==================[function]====================================*/

/*==================[external constants]====================================*/

#ifdef __cplusplus
}
#endif

#endif /* MPFRADAROBJLISTTOOBJFUSNOBJLISTCONVERT_H_ */
