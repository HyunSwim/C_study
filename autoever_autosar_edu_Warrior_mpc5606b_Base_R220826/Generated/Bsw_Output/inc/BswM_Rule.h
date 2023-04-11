/*******************************************************************************
**                                                                            **
**  (C) 2013 HYUNDAI AUTRON Co., Ltd.                                         **
**  Confidential Proprietary Information. Distribution Limited.               **
**  Do Not Copy Without Prior Permission                                      **
**                                                                            **
**  FILE-NAME : BswM_Rule.h                                                   **
**                                                                            **
**  PRODUCT   : AUTOSAR BswM Module                                           **
**                                                                            **
**  NOTE: This file is auto generated, do not edit this file manually.        **
**                                                                            **
********************************************************************************

********************************************************************************
**                      Generation Tool Information                           **
********************************************************************************
**  Tool Version: 2.5.3                                                       **
**                                                                            **
**  Change History: Refer log file (use -l option to generate log file)       **
**                                                                            **
********************************************************************************
**                      File Generation Information                           **
*******************************************************************************/

/*
 * INPUT FILE:    Configuration\ECU\Ecud_Os.arxml
 *                Configuration\ECU\Ecud_Com.arxml
 *                Configuration\ECU\Ecud_EcuM.arxml
 *                Configuration\ECU\Ecud_BswM.arxml
 *                Configuration\ECU\Ecud_ComM.arxml
 *                Configuration\ECU\Ecud_NvM.arxml
 * GENERATED ON:  This timestamp is removed.
 */

#ifndef BSWM_RULE_H
#define BSWM_RULE_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Std_Types.h"

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/
#define BSWM_START_SEC_CODE
#include "MemMap.h"


extern FUNC(void, BSWM_CODE) Rule_ComModeNotification_Project_FULL_COM(void);

extern FUNC(void, BSWM_CODE) Rule_ComModeNotification_Project_NO_COM(void);

extern FUNC(void, BSWM_CODE) Rule_ComModeNotification_Project_SILENT_COM(void);

extern FUNC(void, BSWM_CODE) Rule_ComControl_Project_ENABLE_TX(void);

extern FUNC(void, BSWM_CODE) Rule_ComControl_Project_ENABLE_RX(void);

extern FUNC(void, BSWM_CODE) Rule_ComControl_Project_DISABLE_DM(void);

extern FUNC(void, BSWM_CODE) Rule_ComControl_Project_DISABLE_RX(void);

extern FUNC(void, BSWM_CODE) Rule_ComControl_Project_DISABLE_TX(void);

extern FUNC(void, BSWM_CODE) Rule_ComControl_Project_ENABLE_DM(void);

extern FUNC(void, BSWM_CODE) Rule_ComModeRequest_Project_FULL_COM(void);

extern FUNC(void, BSWM_CODE) Rule_ComModeRequest_Project_NO_COM(void);

extern FUNC(void, BSWM_CODE) Rule_DiagnosticSessionNotification_DEFAULT_SESSION(void);

extern FUNC(void, BSWM_CODE) Rule_DiagnosticSessionNotification_ECU_PROGRAMMING_MODE(void);

extern FUNC(void, BSWM_CODE) Rule_DiagnosticSessionNotification_EXTENDED_DIAGNOSTIC_MODE(void);

extern FUNC(void, BSWM_CODE) Rule_DiagnosticSessionNotification_EXTENDED_DIAGNOSTIC_SESSION(void);

extern FUNC(void, BSWM_CODE) Rule_DiagnosticSessionNotification_PROGRAMMING_SESSION(void);

extern FUNC(void, BSWM_CODE) Rule_DiagnosticSessionNotification_QUIESCENT_CURRENT_DIAGNOSTIC_MODE_START(void);

extern FUNC(void, BSWM_CODE) Rule_DiagnosticSessionNotification_SAFETY_SYSTEM_DIAGNOSTIC_SESSION(void);

extern FUNC(void, BSWM_CODE) Rule_DiagnosticSessionNotification_SLEEP_MODE_START_REQUEST(void);

extern FUNC(void, BSWM_CODE) Rule_EcuStateTo_OFF(void);

extern FUNC(void, BSWM_CODE) Rule_EcuStateTo_RESET(void);

extern FUNC(void, BSWM_CODE) Rule_EcuStateTo_RUN_From_SLEEP(void);

extern FUNC(void, BSWM_CODE) Rule_EcuStateTo_RUN_From_STARTUP(void);

extern FUNC(void, BSWM_CODE) Rule_EcuStateTo_SHUTDOWN(void);

extern FUNC(void, BSWM_CODE) Rule_EcuStateTo_SLEEP(void);

extern FUNC(void, BSWM_CODE) Rule_EcuStateTo_STARTUP_THREE(void);

extern FUNC(void, BSWM_CODE) Rule_EcuStateTo_STARTUP_TWO(void);

extern FUNC(void, BSWM_CODE) Rule_EcuState_OFF(void);

extern FUNC(void, BSWM_CODE) Rule_EcuState_RESET(void);

extern FUNC(void, BSWM_CODE) Rule_EcuState_RUN(void);

extern FUNC(void, BSWM_CODE) Rule_EcuState_SHUTDOWN(void);

extern FUNC(void, BSWM_CODE) Rule_EcuState_SLEEP(void);

extern FUNC(void, BSWM_CODE) Rule_EcuState_STARTUP_THREE(void);

extern FUNC(void, BSWM_CODE) Rule_EcuState_STARTUP_TWO(void);

extern FUNC(void, BSWM_CODE) Rule_ShutdownTargetTo_OFF(void);

extern FUNC(void, BSWM_CODE) Rule_ShutdownTargetTo_RESET(void);

extern FUNC(void, BSWM_CODE) Rule_ShutdownTargetTo_RUN(void);

extern FUNC(void, BSWM_CODE) Rule_ShutdownTargetTo_SLEEP(void);

extern FUNC(void, BSWM_CODE) Rule_WakeupEventNotification_CAN1RX(void);

extern FUNC(void, BSWM_CODE) Rule_WakeupEventNotification_CAN1RX_POLL(void);


#define BSWM_STOP_SEC_CODE
#include "MemMap.h"

#endif /* BSWM_RULE_H */

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
