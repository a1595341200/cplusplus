
#ifndef SFOBJECTFUSIONMPFCONVERTER_WRAPPER_H_
#define SFOBJECTFUSIONMPFCONVERTER_WRAPPER_H_ 1   

/******************************************************************************

JIKA ELECTRONIC document.

-------------------------------------------------------------------------------

Copyright JiKa Inc. All rights reserved.

*******************************************************************************
H-File Template Version: 
*******************************************************************************

Overview of the interfaces:
   Input interface: Radar, Camera Object lists and Egomotion structs
   Output interface: RaCam Object list

******************************************************************************/
/* PRQA S 0288 ++ */
/*
 * Explanation:
 *    Header file for s-function wrapper RaCam converter in CADS4 simulink
 */
/*
$Revision: 1.4 $
$ProjectName: e:/Automated_Driving_System_Library/ComponentLibrary/ObjFusn/Integration/Simulink/ObjFusn/Integration/CustomCode/Wrapper/ObjectFusionMpfConverter/project.pj $
*/
/* PRQA S 0288 -- */
/*****************************************************************************/
/******************************************************************************
EXTERNAL DEPENDENCIES
******************************************************************************/

#include "Jk_common_types.h"
#include "JkObjFusn_ObjectListType.h"
#include "ObjFusnObjListToVolvoSnsrFusnConvert.h"


#ifdef __cplusplus
extern "C" {
#endif
   
/******************************************************************************
DEFINITION OF CONSTANTS
******************************************************************************/

/******************************************************************************
DECLARATION OF TYPES
******************************************************************************/

/******************************************************************************
DECLARATION OF VARIABLES
******************************************************************************/

/******************************************************************************
DECLARATION OF CONSTANT DATA
******************************************************************************/

/******************************************************************************
DECLARATION OF FUNCTIONS
******************************************************************************/

void sfObjectFusionMpfConverter_Init_wrapper();
 
void sfObjectFusionMpfConverter_Outputs_wrapper(JkObjFusn_ObjectListType *const pFusnObjLists_Input,
                          JkObjFusn_EgoMotionType *const pEgoMotion,
                          const uint32 u32TimeStamp,
                          typeRaCamObjectVcc *const pRACAMObjListOut);

/******************************************************************************
DECLARATION OF FUNCTION-LIKE MACROS
******************************************************************************/

#ifdef __cplusplus
}
#endif

/******************************************************************************
End Of File
*****************************************************************************/

#endif /* _SFOBJECTFUSIONRACAMCONVERTER_WRAPPER_H_ */