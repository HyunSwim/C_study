/*******************************************************************************
**                                                                            **
**  (C) 2013 HYUNDAI AUTRON Co., Ltd.                                         **
**  Confidential Proprietary Information. Distribution Limited.               **
**  Do Not Copy Without Prior Permission                                      **
**                                                                            **
**  FILE-NAME: FiM_Cfg.h                                                      **
**                                                                            **
**  MODULE-NAME: AUTOSAR Function Inhibition Manager Module                   **
**                                                                            **
**  NOTE: This file is auto generated, do not edit this file manually.        **
**                                                                            **
********************************************************************************

********************************************************************************
**                      Generation Tool Information                           **
********************************************************************************
**  Tool Version: 1.0.6                                                       **
**                                                                            **
**  Change History: Refer log file (use -l option to generate log file)       **
**                                                                            **
********************************************************************************
**                      File Generation Information                           **
*******************************************************************************/

/*
 * INPUT FILE:    Configuration\ECU\Ecud_FiM.arxml
 *                Configuration\ECU\Ecud_Dem.arxml
 * GENERATED ON:  This timestamp is removed.
 */  

#ifndef FIM_CFG_H
#define FIM_CFG_H   

/*******************************************************************************
**                       	       Include Section                              **
*******************************************************************************/
#include "Platform_Types.h"

/*******************************************************************************
**                       Common Published Information                         **
*******************************************************************************/
#define FIM_AR_RELEASE_MAJOR_VERSION                       4
#define FIM_AR_RELEASE_MINOR_VERSION                       0
#define FIM_AR_RELEASE_REVISION_VERSION                    3
#define FIM_SW_MAJOR_VERSION                               1
#define FIM_SW_MINOR_VERSION                               0
#define FIM_SW_PATCH_VERSION                               0
#define FIM_VENDOR_ID                                      ((uint16)76)
#define FIM_MODULE_ID                                      ((uint16)11)

/*******************************************************************************
**                       Pre-compile Options                                  **
*******************************************************************************/
  
/*******************************************************************************
**                   FiM General parameters configuration                     **
*******************************************************************************/
/* Total number of Dem referred by Fim */
#define FIM_TOTAL_NUM_OF_DEM_EVENTS (3)

/* Pre-compile option to enable/disable calibration of inhibit relations */
#define FIM_DATA_FIXED (STD_OFF)

/* 
 * Pre-compile option to enable/disable evaluation of Dem Events in
 * Interrupt Mode
 */
#define FIM_EVENT_UPDATE_TRIGGERED_BY_DEM    (STD_ON)

/* Pre-compile option to enable/disable the FiM_GetVersionInfo API */
#define FIM_VERSION_INFO_API (STD_OFF)

/* Pre-compile option to enable/disable development error detection */
#define FIM_DEV_ERROR_DETECT (STD_ON)

/* optimization of configured FIDs if sequential and starts from 0 */
#define FIM_FIDS_SEQUENTIAL (STD_ON)

/* Total number of FIDs configured in FiM */
#define FIM_TOTAL_NUM_OF_FIDS (2)

/* The largest value of all the configured FIDs */
#define FIM_LARGEST_FID (1)

/* Pre-compile option to enable/disable EventId Binary Search and Generation  */
#define FIM_EN_EVENTID_BINARYSEARCH (STD_ON)

/* Pre-compile option to enable/disable FID Binary Search and Generation */
#define FIM_EN_FID_BINARYSEARCH (STD_OFF)


/*******************************************************************************
**                     Handle Ids for FIDs                                    **
*******************************************************************************/
#define FiMConf_FiMFID_FiMFID_0                            ((FiM_FunctionIdType)0)
#define FiMConf_FiMFID_FiMFID_1                            ((FiM_FunctionIdType)1)

/*******************************************************************************
**                      Type Definitions                                      **
*******************************************************************************/
typedef uint8 FiM_EventsSizeType;
typedef uint8 FiM_FidsSizeType;
typedef uint8 FiM_EventFidLinkType;
#endif /* FIM_CFG_H */
/*******************************************************************************
**                          END OF FILE                                       **
*******************************************************************************/
