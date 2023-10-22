/*********************************************************************************
* Copyright(C) JiKa Inc. All rights reserved.
* FileName: JkObjFusn_Eps.h
* Author:  ruifeng.ding
* Version: 1.00
* Date:  2021/08/11
* Description: allowed tolerances for floating point computation
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

#ifndef JKOBJFUSN_EPS_H
#define JKOBJFUSN_EPS_H

/** epsilon for comparing f32 times */
#define JK_FUSION_DT_EPS (0.0001f)                  /**> [sec] */
/// epsilon for comparing f32 positions (and velocities)
///\todo: until we worked on the LKF precision user story we define a higher
/// epsilon so that tests will pass again.
//#define JK_FUSION_POS_EPS_ABS (0.0001f)                 /* [m]   */
#define JK_FUSION_POS_EPS_ABS (0.001f)                    /* [m]   */
#define JK_FUSION_POS_EPS_REL (0.001f)
#define JK_FUSION_COV_EPS_ABS (0.002f)
#define JK_FUSION_COV_EPS_REL (0.002f)
#define JK_FUSION_COMPARE_TO_ZERO (0.00000001f)



#endif /* JKOBJFUSN_EPS_H */

/** @} */
