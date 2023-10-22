/** \addtogroup objectlist 
 *  @{
 * \file    JkObjFusn_au16FsnID.h 
 * \brief  This is a structure definition file for the debug output array 
 *
 * \author      $Author: Bernhard Neuhauser (bernhard.neuhauser) $  
 *
 * Revision:    $Revision: 1.1 $
 * Created on:  $Date: 2017/05/12 09:37:22CEST $
 *
 *
 *
 * <br>=====================================================<br>
 * <b>Copyright 2014 by Autoliv Electronics Europe.</b>
 * <br>
 * All rights reserved. Property of Autoliv Electronics Europe.<br>
 * Restricted rights to use, duplicate or disclose of this code<br>
 * are granted through contract.
 * <br>=====================================================<br>
 */


#ifndef JKOBJFUSN_AU16FSNID_H_
#define JKOBJFUSN_AU16FSNID_H_ 

#ifdef __cplusplus
extern "C" {
#endif

#include "Std_Types.h"

/*==================[macros]================================================*/

/** Variable-sized list of trackables.
 * the trackable list represents object and track lists
 */
typedef struct JkObjFusn_au16FsnIdTag
{
   uint16 au16FsnId[32];

} JkObjFusn_au16FsnId;

#ifdef __cplusplus
}
#endif
    
#endif /**@} JKOBJFUSN_AU16FSNID_H_ */
