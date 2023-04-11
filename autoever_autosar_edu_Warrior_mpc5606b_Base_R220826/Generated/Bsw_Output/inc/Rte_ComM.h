
/*******************************************************************************
**  FILE-NAME: Rte_ComM.h                                                     **
**                                                                            **
**  MODULE-NAME: AUTOSAR RTE GENERATION TOOL                                  **
**                                                                            **
**  NOTE: This file is auto generated, do not edit this file manually.        **
**                                                                            **
********************************************************************************

********************************************************************************
**                      Generation Tool Information                           **
********************************************************************************
**  Tool Version: 4.4.2                                                   **
**                                                                            **
**  Change History: Refer log file (use -l option to generate log file)       **
**                                                                            **
********************************************************************************
**                      File Generation Information                           **
*******************************************************************************/
/*
 * INPUT FILE:
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\ECUCD_EcucValueCollection.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Com.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Det.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_EcuC.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Os.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Rte.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Adc.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_BswM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Can.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_CanIf.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_CanSM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_CanTp.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Com.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_ComM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Crc.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Dcm.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Dem.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Det.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Dio.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Fee.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_FiM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Fls.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Gpt.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Icu_43.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Mcu.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_MemIf.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_NvM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Os.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_PduR.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Port.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Pwm_43.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Spi.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Wdg_43.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Composition\EcuExtract.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\DBImport\Project.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\DataTypes\AUTOSAR_DataTypes.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\DataTypes\AUTOSAR_DataTypes_Etc.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_ComM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_Dcm.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_Dem.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_FiM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_Mode.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_WdgM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\MODE_PortInterfaces.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_Bsw_BswM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_ComM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_Det.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_FiM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_EcuM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_IoHwAb.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_WdgIf.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_WdgM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_Dcm.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_Dem.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_EcuM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_NvM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_IoHwAb.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_WdgM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Static_Code\Modules\b_autosar_swc_ErrorManagement\App_ErrM.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Static_Code\Modules\b_autosar_sys_EcuM_R40\generator\EcuM_PortInterface.arxml
 *      C:\Users\cypark\Desktop\mobilgeneStudio2021a_x86_64\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Static_Code\Modules\b_autosar_sys_WdgM_R40\generator\Swcd_WdgM_Fixed.arxml

 * GENERATED ON:  This timestamp is removed.
*/

/*******************************************************************************
* PRE-JUSTIFICATION BEGINE SECTION (MISRA-C RULE CHECKER)
* These rules will not be applied for verification based on the MISRA Rule
* in Rte generated source
*******************************************************************************/
/*
  polyspace:begin<MISRA-C:5.1:Not a defect:Justify with annotations> Number of character is depends on user configuration
  polyspace:begin<MISRA-C:19.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:begin<MISRA-C:19.4:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1154, #6713)
  polyspace:begin<MISRA-C:19.6:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:begin<MISRA-C:19.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1236)
*/

/*******************************************************************************
**                         MULTIPLE INCLUSION PROTECTION                      **
*******************************************************************************/
 #ifndef RTE_COMM_H
      #define RTE_COMM_H
 /*
  * CAUTION:
  *
  * Do NOT
  *
  *   #define RTE_ALLOW_CROSS_HEADER_INCLUSION
  *
  * in ASW/BSW code. The symbol shall be used only for RTE internally.
  */
 #ifndef RTE_ALLOW_CROSS_HEADER_INCLUSION
      #ifdef RTE_APPLICATION_HEADER_FILE
      #error Multiple application header files included.
      #endif
      #define RTE_APPLICATION_HEADER_FILE
      #endif

/*******************************************************************************
**                  Include Section                                           **
*******************************************************************************/
/* polyspace:begin<MISRA-C:1.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Inclusion of Header Files) */
#include "Rte_ComM_Type.h"

/* polyspace:end<MISRA-C:1.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Inclusion of Header Files) */

/* COMPATIBLE WITH C and C++ languages */
#ifdef __cplusplus
 extern "C"
 {
#endif

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/
#ifdef RTE_VENDOR_ID
  #if (RTE_VENDOR_ID != 76)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Vendor Id"
  #endif
#else
  #define RTE_VENDOR_ID 76
#endif

#ifdef RTE_MODULE_ID
  #if (RTE_MODULE_ID != 2)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Module Id"
  #endif
#else
  #define RTE_MODULE_ID 2
#endif

#ifdef RTE_SW_MAJOR_VERSION
  #if (RTE_SW_MAJOR_VERSION != 4)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Major Version"
  #endif
#else
  #define RTE_SW_MAJOR_VERSION 4
#endif

#ifdef RTE_SW_MINOR_VERSION
  #if (RTE_SW_MINOR_VERSION != 4)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Minor Version"
  #endif
#else
  #define RTE_SW_MINOR_VERSION 4
#endif

#ifdef RTE_SW_PATCH_VERSION
  #if (RTE_SW_PATCH_VERSION != 2)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Patch Version"
  #endif
#else
  #define RTE_SW_PATCH_VERSION 2
#endif

#ifdef RTE_AR_RELEASE_MAJOR_VERSION
  #if (RTE_AR_RELEASE_MAJOR_VERSION != 4)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Release Major Version"
  #endif
#else
  #define RTE_AR_RELEASE_MAJOR_VERSION 4
#endif

#ifdef RTE_AR_RELEASE_MINOR_VERSION
  #if (RTE_AR_RELEASE_MINOR_VERSION != 0)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Release Minor Version"
  #endif
#else
  #define RTE_AR_RELEASE_MINOR_VERSION 0
#endif

#ifdef RTE_AR_RELEASE_REVISION_VERSION
  #if (RTE_AR_RELEASE_REVISION_VERSION != 3)
    #error "Rte_Cfg.h : Mismatch in Rte Specification Release Revision Version"
  #endif
#else
  #define RTE_AR_RELEASE_REVISION_VERSION 3
#endif

/*******************************************************************************
** Init Macro
*******************************************************************************/

/******************************************************************************
** Type Definitions for Rte API                                               **
*******************************************************************************/

/*******************************************************************************
** Global Variables                                                           **
*******************************************************************************/

/*******************************************************************************
** Global Variables for Per Instance Memory                                   **
*******************************************************************************/

/*******************************************************************************
** Invalid Value Const Variables                                              **
*******************************************************************************/

/*******************************************************************************
** Macros for Direct API functions defined in PDS                             **
*******************************************************************************/

/*******************************************************************************
** Macros for InDirect(port oriented) API functions defined in PDS            **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for port handles of PDS                                   **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for component instance handles                            **
*******************************************************************************/
/*
  polyspace:begin<MISRA-C:5.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #3724)
*/
struct Rte_CDS_ComM
{
  VAR(uint8, RTE_DATA) _dummy;
};

/*
  polyspace:end<MISRA-C:5.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #3724)
*/
/*******************************************************************************
** Component instance handles                                                 **
*******************************************************************************/
#define RTE_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"
extern const struct Rte_CDS_ComM Rte_Inst_ComM;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

/*******************************************************************************
** Global Variables for Component Instance Handle                             **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for component instance handles                            **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for PerInstanceMemory (Exists only for multiple instances)**
*******************************************************************************/

/*******************************************************************************
** Macros for Direct API functions                                            **
*******************************************************************************/

/*******************************************************************************
** Macros for Exclusive Areas                                                 **
*******************************************************************************/

/*******************************************************************************
** Macros for ApplicationError in Client Server                               **
*******************************************************************************/

#ifndef RTE_E_ComM_ECUModeLimitation_E_NOT_OK
#define RTE_E_ComM_ECUModeLimitation_E_NOT_OK 1U
#endif

#ifndef RTE_E_ComM_UserRequest_E_NOT_OK
#define RTE_E_ComM_UserRequest_E_NOT_OK 1U
#endif

#ifndef RTE_E_ComM_UserRequest_E_MODE_LIMITATION
#define RTE_E_ComM_UserRequest_E_MODE_LIMITATION 2U
#endif

#ifndef RTE_E_ComM_ChannelLimitation_E_NOT_OK
#define RTE_E_ComM_ChannelLimitation_E_NOT_OK 1U
#endif

/*******************************************************************************
** Prototypes for Rte API                                                     **
*******************************************************************************/
#define RTE_START_SEC_CODE
#include "MemMap.h"
extern FUNC(Std_ReturnType, RTE_CODE)
Rte_Write_ComM_CR000_P_fullComRequestors(IN P2CONST(ComM_UserHandleArrayType, AUTOMATIC, RTE_APPL_DATA) Data);

extern FUNC(Std_ReturnType, RTE_CODE)
Rte_Write_ComM_CR001_P_fullComRequestors(IN P2CONST(ComM_UserHandleArrayType, AUTOMATIC, RTE_APPL_DATA) Data);

extern FUNC(Std_ReturnType, RTE_CODE)
Rte_Write_ComM_CR002_P_fullComRequestors(IN P2CONST(ComM_UserHandleArrayType, AUTOMATIC, RTE_APPL_DATA) Data);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_ComM_UM000_P_currentMode(IN Rte_ModeType_ComMMode NewMode);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_ComM_UM001_P_currentMode(IN Rte_ModeType_ComMMode NewMode);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_ComM_UM002_P_currentMode(IN Rte_ModeType_ComMMode NewMode);

#define RTE_STOP_SEC_CODE
#include "MemMap.h"

/*******************************************************************************
** API Mapping                                                                **
*******************************************************************************/
#ifndef Rte_Write_CR000_P_fullComRequestors
#define Rte_Write_CR000_P_fullComRequestors \
  Rte_Write_ComM_CR000_P_fullComRequestors
#endif

#ifndef Rte_Write_CR001_P_fullComRequestors
#define Rte_Write_CR001_P_fullComRequestors \
  Rte_Write_ComM_CR001_P_fullComRequestors
#endif

#ifndef Rte_Write_CR002_P_fullComRequestors
#define Rte_Write_CR002_P_fullComRequestors \
  Rte_Write_ComM_CR002_P_fullComRequestors
#endif

#ifndef Rte_Switch_UM000_P_currentMode
#define Rte_Switch_UM000_P_currentMode  Rte_Switch_ComM_UM000_P_currentMode
#endif

#ifndef Rte_Switch_UM001_P_currentMode
#define Rte_Switch_UM001_P_currentMode  Rte_Switch_ComM_UM001_P_currentMode
#endif

#ifndef Rte_Switch_UM002_P_currentMode
#define Rte_Switch_UM002_P_currentMode  Rte_Switch_ComM_UM002_P_currentMode
#endif

/*******************************************************************************
** Client Server Macro                                                        **
*******************************************************************************/

/*******************************************************************************
** Prototypes for Runnable entities                                           **
*******************************************************************************/
/*
  polyspace:begin<MISRA-C:8.8:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1132)
*/

#define ComM_START_SEC_CODE
#include "ComM_MemMap.h"
FUNC(Std_ReturnType, ComM_CODE) ComM_GetCurrentComMode(IN VAR(ComM_UserHandleType, AUTOMATIC) User, OUT P2VAR(ComM_ModeType, AUTOMATIC, RTE_APPL_DATA) ComMode);

FUNC(Std_ReturnType, ComM_CODE) ComM_GetInhibitionStatus(IN VAR(NetworkHandleType, AUTOMATIC) PortDefinedArgument_1, OUT P2VAR(ComM_InhibitionStatusType, AUTOMATIC, RTE_APPL_DATA) Status);

FUNC(Std_ReturnType, ComM_CODE) ComM_GetRequestedComMode(IN VAR(ComM_UserHandleType, AUTOMATIC) User, OUT P2VAR(ComM_ModeType, AUTOMATIC, RTE_APPL_DATA) ComMode);

FUNC(Std_ReturnType, ComM_CODE) ComM_GetState(IN VAR(NetworkHandleType, AUTOMATIC) PortDefinedArgument_1, OUT P2VAR(ComM_StateType, AUTOMATIC, RTE_APPL_DATA) State);

FUNC(Std_ReturnType, ComM_CODE) ComM_GetStatus(OUT P2VAR(ComM_InitStatusType, AUTOMATIC, RTE_APPL_DATA) Status);

FUNC(Std_ReturnType, ComM_CODE) ComM_LimitChannelToNoComMode(IN VAR(NetworkHandleType, AUTOMATIC) PortDefinedArgument_1, IN VAR(boolean, AUTOMATIC) Status);

FUNC(Std_ReturnType, ComM_CODE) ComM_LimitECUToNoComMode(IN VAR(boolean, AUTOMATIC) Status);

FUNC(Std_ReturnType, ComM_CODE) ComM_PreventWakeUp(IN VAR(NetworkHandleType, AUTOMATIC) PortDefinedArgument_1, IN VAR(boolean, AUTOMATIC) Status);

FUNC(Std_ReturnType, ComM_CODE) ComM_ReadInhibitCounter(OUT P2VAR(uint16, AUTOMATIC, RTE_APPL_DATA) CounterValue);

FUNC(Std_ReturnType, ComM_CODE) ComM_RequestComMode(IN VAR(ComM_UserHandleType, AUTOMATIC) User, IN VAR(ComM_ModeType, AUTOMATIC) ComMode);

FUNC(Std_ReturnType, ComM_CODE) ComM_ResetInhibitCounter(void);

FUNC(Std_ReturnType, ComM_CODE) ComM_SetECUGroupClassification(IN VAR(ComM_InhibitionStatusType, AUTOMATIC) Status);

#define ComM_STOP_SEC_CODE
#include "ComM_MemMap.h"

/*
  polyspace:end<MISRA-C:8.8:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1132)
*/

/*******************************************************************************
** Runnables Mapping                                                          **
*******************************************************************************/
#ifndef RTE_RUNNABLE_GetCurrentComMode
#define RTE_RUNNABLE_GetCurrentComMode ComM_GetCurrentComMode
#endif
#ifndef RTE_RUNNABLE_GetInhibitionStatus
#define RTE_RUNNABLE_GetInhibitionStatus ComM_GetInhibitionStatus
#endif
#ifndef RTE_RUNNABLE_GetRequestedComMode
#define RTE_RUNNABLE_GetRequestedComMode ComM_GetRequestedComMode
#endif
#ifndef RTE_RUNNABLE_GetState
#define RTE_RUNNABLE_GetState ComM_GetState
#endif
#ifndef RTE_RUNNABLE_GetStatus
#define RTE_RUNNABLE_GetStatus ComM_GetStatus
#endif
#ifndef RTE_RUNNABLE_LimitChannelToNoComMode
#define RTE_RUNNABLE_LimitChannelToNoComMode ComM_LimitChannelToNoComMode
#endif
#ifndef RTE_RUNNABLE_LimitECUToNoComMode
#define RTE_RUNNABLE_LimitECUToNoComMode ComM_LimitECUToNoComMode
#endif
#ifndef RTE_RUNNABLE_PreventWakeup
#define RTE_RUNNABLE_PreventWakeup ComM_PreventWakeUp
#endif
#ifndef RTE_RUNNABLE_ReadInhibitCounter
#define RTE_RUNNABLE_ReadInhibitCounter ComM_ReadInhibitCounter
#endif
#ifndef RTE_RUNNABLE_RequestComMode
#define RTE_RUNNABLE_RequestComMode ComM_RequestComMode
#endif
#ifndef RTE_RUNNABLE_ResetInhibitCounter
#define RTE_RUNNABLE_ResetInhibitCounter ComM_ResetInhibitCounter
#endif
#ifndef RTE_RUNNABLE_SetECUGroupClassification
#define RTE_RUNNABLE_SetECUGroupClassification ComM_SetECUGroupClassification
#endif

/* COMPATIBLE WITH C and C++ languages */
#ifdef __cplusplus
 }
#endif

#endif

/*******************************************************************************
* PRE-JUSTIFICATION END SECTION (MISRA-C RULE CHECKER)
*******************************************************************************/
/*
  polyspace:end<MISRA-C:5.1:Not a defect:Justify with annotations> Number of character is depends on user configuration
  polyspace:end<MISRA-C:19.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:end<MISRA-C:19.4:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1154, #6713)
  polyspace:end<MISRA-C:19.6:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:end<MISRA-C:19.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1236)
*/

/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/

