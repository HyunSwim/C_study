
/*******************************************************************************
**  FILE-NAME: Rte_WdgM.h                                                     **
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
 #ifndef RTE_WDGM_H
      #define RTE_WDGM_H
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
#include "Rte_WdgM_Type.h"

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
struct Rte_CDS_WdgM
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
extern const struct Rte_CDS_WdgM Rte_Inst_WdgM;
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

#ifndef RTE_E_WdgM_AliveSupervision_E_NOT_OK
#define RTE_E_WdgM_AliveSupervision_E_NOT_OK 1U
#endif

#ifndef RTE_E_WdgM_API_E_NOT_OK
#define RTE_E_WdgM_API_E_NOT_OK 1U
#endif

/*******************************************************************************
** Prototypes for Rte API                                                     **
*******************************************************************************/
#define RTE_START_SEC_CODE
#include "MemMap.h"

extern FUNC(Rte_ModeType_WdgM_Mode, RTE_CODE) Rte_Mode_WdgM_mode_SE_Init_currentMode(void);

extern FUNC(Rte_ModeType_WdgM_Mode, RTE_CODE) Rte_Mode_WdgM_mode_SE_WdgMTest_currentMode(void);

extern FUNC(Rte_ModeType_WdgM_Mode, RTE_CODE) Rte_Mode_WdgM_globalMode_currentMode(void);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_WdgM_globalMode_currentMode(IN Rte_ModeType_WdgM_Mode NewMode);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_WdgM_mode_SE_Init_currentMode(IN Rte_ModeType_WdgM_Mode NewMode);

extern FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_WdgM_mode_SE_WdgMTest_currentMode(IN Rte_ModeType_WdgM_Mode NewMode);

#define RTE_STOP_SEC_CODE
#include "MemMap.h"

/*******************************************************************************
** API Mapping                                                                **
*******************************************************************************/

#ifndef Rte_Mode_mode_SE_Init_currentMode
#define Rte_Mode_mode_SE_Init_currentMode  Rte_Mode_WdgM_mode_SE_Init_currentMode
#endif

#ifndef Rte_Mode_mode_SE_WdgMTest_currentMode
#define Rte_Mode_mode_SE_WdgMTest_currentMode  Rte_Mode_WdgM_mode_SE_WdgMTest_currentMode
#endif

#ifndef Rte_Mode_globalMode_currentMode
#define Rte_Mode_globalMode_currentMode  Rte_Mode_WdgM_globalMode_currentMode
#endif

#ifndef Rte_Switch_globalMode_currentMode
#define Rte_Switch_globalMode_currentMode  Rte_Switch_WdgM_globalMode_currentMode
#endif

#ifndef Rte_Switch_mode_SE_Init_currentMode
#define Rte_Switch_mode_SE_Init_currentMode  Rte_Switch_WdgM_mode_SE_Init_currentMode
#endif

#ifndef Rte_Switch_mode_SE_WdgMTest_currentMode
#define Rte_Switch_mode_SE_WdgMTest_currentMode  Rte_Switch_WdgM_mode_SE_WdgMTest_currentMode
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

#define WdgM_START_SEC_CODE
#include "WdgM_MemMap.h"
FUNC(Std_ReturnType, WdgM_CODE) WdgM_CheckpointReached(IN VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) ddSEID, IN VAR(WdgM_CheckpointIdType, AUTOMATIC) ddCheckpointID);

FUNC(Std_ReturnType, WdgM_CODE) WdgM_GetFirstExpiredSEID(OUT P2VAR(WdgM_SupervisedEntityIdType, AUTOMATIC, RTE_APPL_DATA) pSEID);

FUNC(Std_ReturnType, WdgM_CODE) WdgM_GetGlobalStatus(OUT P2VAR(WdgM_GlobalStatusType, AUTOMATIC, RTE_APPL_DATA) pStatus);

FUNC(Std_ReturnType, WdgM_CODE) WdgM_GetLocalStatus(IN VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) ddSEID, OUT P2VAR(WdgM_LocalStatusType, AUTOMATIC, RTE_APPL_DATA) pStatus);

FUNC(Std_ReturnType, WdgM_CODE) WdgM_GetMode(OUT P2VAR(WdgM_ModeType, AUTOMATIC, RTE_APPL_DATA) pMode);

FUNC(void, WdgM_CODE) WdgM_MainFunction(void);

FUNC(void, WdgM_CODE) WdgM_PerformReset(void);

FUNC(Std_ReturnType, WdgM_CODE) WdgM_SetMode(IN VAR(WdgM_ModeType, AUTOMATIC) ddMode, IN VAR(uint16, AUTOMATIC) usCallerID);

FUNC(Std_ReturnType, WdgM_CODE) WdgM_UpdateAliveCounter(IN VAR(WdgM_SupervisedEntityIdType, AUTOMATIC) ddSEID);

#define WdgM_STOP_SEC_CODE
#include "WdgM_MemMap.h"

/*
  polyspace:end<MISRA-C:8.8:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1132)
*/

/*******************************************************************************
** Runnables Mapping                                                          **
*******************************************************************************/
#ifndef RTE_RUNNABLE_CheckpointReached
#define RTE_RUNNABLE_CheckpointReached WdgM_CheckpointReached
#endif
#ifndef RTE_RUNNABLE_GetFirstExpiredSEID
#define RTE_RUNNABLE_GetFirstExpiredSEID WdgM_GetFirstExpiredSEID
#endif
#ifndef RTE_RUNNABLE_GetGlobalStatus
#define RTE_RUNNABLE_GetGlobalStatus WdgM_GetGlobalStatus
#endif
#ifndef RTE_RUNNABLE_GetLocalStatus
#define RTE_RUNNABLE_GetLocalStatus WdgM_GetLocalStatus
#endif
#ifndef RTE_RUNNABLE_GetMode
#define RTE_RUNNABLE_GetMode WdgM_GetMode
#endif
#ifndef RTE_RUNNABLE_MainFunction
#define RTE_RUNNABLE_MainFunction WdgM_MainFunction
#endif
#ifndef RTE_RUNNABLE_PerformReset
#define RTE_RUNNABLE_PerformReset WdgM_PerformReset
#endif
#ifndef RTE_RUNNABLE_SetMode
#define RTE_RUNNABLE_SetMode WdgM_SetMode
#endif
#ifndef RTE_RUNNABLE_UpdateAliveCounter
#define RTE_RUNNABLE_UpdateAliveCounter WdgM_UpdateAliveCounter
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

