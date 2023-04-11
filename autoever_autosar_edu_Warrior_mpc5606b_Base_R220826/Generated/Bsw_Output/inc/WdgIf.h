/*******************************************************************************
**  FILE-NAME: WdgIf.h                                                        **
**                                                                            **
**  MODULE-NAME: AUTOSAR WDGIF Module                                         **
**                                                                            **
**  NOTE: This file is auto generated, do not edit this file manually.        **
**                                                                            **
********************************************************************************

********************************************************************************
**                      Generation Tool Information                           **
********************************************************************************
**  Tool Version: 1.2.1                                                       **
**                                                                            **
**  Change History: Refer log file (use -l option to generate log file)       **
**                                                                            **
********************************************************************************
**                      File Generation Information                           **
*******************************************************************************/
/*
 * INPUT FILE:    Configuration\ECU\Mcal\Ecud_Wdg.arxml
 *                Configuration\ECU\Ecud_WdgIf.arxml
 * GENERATED ON:  This timestamp is removed.
 */

/*******************************************************************************
**              PRE-JUSTIFICATION BEGIN (MISRA-C RULE CHECKER)                **
*******************************************************************************/
/*
  polyspace:begin<MISRA-C:19.4:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : WdgIf SWS #001, #019, #036)
  polyspace:begin<MISRA-C:19.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : WdgIf SWS #001, #019, #036)
*/

#ifndef WDGIF_H
#define WDGIF_H
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "WdgIf_Cfg.h"
#include "WdgIf_Types.h"
#include "Std_Types.h"

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/
#define WDGIF_INSTANCE_ID                         ((uint8)0)
#define WDGIF_ZERO                                ((uint8)0)
#define WDGIF_ONE                                 ((uint8)1)

/*******************************************************************************
**                        API service ids                                     **
*******************************************************************************/
#define WDGIF_SETMODE_SID                         ((uint8)0x01)
#define WDGIF_SETTRIGGERCONDITION_SID             ((uint8)0x02)
#define WDGIF_GETVERSIONINFO_SID                  ((uint8)0x03)

/*******************************************************************************
**                      DET Error Codes                                       **
*******************************************************************************/
#define WDGIF_E_PARAM_DEVICE                      ((uint8)0x01)
#define WDGIF_E_INV_POINTER                       ((uint8)0x02)

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define WDGIF_START_SEC_CODE
#include "MemMap.h"
 /* Function for switching the underlying Wdg Driver Current Mode */
extern FUNC(Std_ReturnType,  WDGIF_CODE) WdgIf_SetMode
  (uint8 DeviceIndex, WdgIf_ModeType WdgMode);
#define WDGIF_STOP_SEC_CODE
#include "MemMap.h"

#define WDGIF_START_SEC_CODE
#include "MemMap.h"
/* Function for triggering the underlying Wdg Driver from expiring */
extern FUNC(void, WDGIF_CODE) WdgIf_SetTriggerCondition
  (uint8 DeviceIndex, uint16 Timeout);
#define WDGIF_STOP_SEC_CODE
#include "MemMap.h"

#define WDGIF_START_SEC_CODE
#include "MemMap.h"
/* Function which returns the version information of WdgIf Module */
extern FUNC(void, WDGIF_CODE) WdgIf_GetVersionInfo
    (P2VAR(Std_VersionInfoType, AUTOMATIC, WDGIF_APPL_DATA)VersionInfoPtr);
#define WDGIF_STOP_SEC_CODE
#include "MemMap.h"

/*******************************************************************************
**               PRE-JUSTIFICATION END (MISRA-C RULE CHECKER)                 **
*******************************************************************************/
/*
  polyspace:end<MISRA-C:19.4:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : WdgIf SWS #001, #019, #036)
  polyspace:end<MISRA-C:19.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : WdgIf SWS #001, #019, #036)
*/

#endif /* WDGIF_H */
/*******************************************************************************
**                          End of File                                       **
*******************************************************************************/
