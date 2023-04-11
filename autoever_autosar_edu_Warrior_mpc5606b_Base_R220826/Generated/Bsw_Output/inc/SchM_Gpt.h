
/*******************************************************************************
**  FILE-NAME: SchM_Gpt.h                                                     **
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
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\ECUCD_EcucValueCollection.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Com.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Det.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_EcuC.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Os.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\ECU\Ecud_Rte.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Adc.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_BswM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Can.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_CanIf.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_CanSM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_CanTp.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Com.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_ComM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Crc.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Dcm.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Dem.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Det.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Dio.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Fee.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_FiM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Fls.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Gpt.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Icu_43.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Mcu.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_MemIf.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_NvM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Os.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_PduR.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Port.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Pwm_43.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Spi.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\BswMd\Bswmd_Wdg_43.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Composition\EcuExtract.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\DBImport\Project.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\DataTypes\AUTOSAR_DataTypes.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\DataTypes\AUTOSAR_DataTypes_Etc.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_ComM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_Dcm.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_Dem.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_FiM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_Mode.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_Rte.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_App\App_WdgM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\MODE_PortInterfaces.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_Bsw_BswM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_ComM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_Det.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Configuration\System\Swcd_Bsw\Swcd_FiM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_EcuM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_IoHwAb.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_WdgIf.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\bswmd\Bswmd_WdgM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_Dcm.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_Dem.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_EcuM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_Bsw_NvM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_IoHwAb.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Generated\Bsw_Output\swcd\Swcd_WdgM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Static_Code\Modules\b_autosar_swc_ErrorManagement\App_ErrM.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Static_Code\Modules\b_autosar_sys_EcuM_R40\generator\EcuM_PortInterface.arxml
 *      C:\workspace\autoever_autosar_edu_Warrior_mpc5606b_Base_R220826\Static_Code\Modules\b_autosar_sys_WdgM_R40\generator\Swcd_WdgM_Fixed.arxml

 * GENERATED ON:  This timestamp is removed.
*/

/******************************************************************************/

/*******************************************************************************
* PRE-JUSTIFICATION BEGINE SECTION (MISRA-C RULE CHECKER)
* These rules will not be applied for verification based on the MISRA Rule
* in Rte generated source
*******************************************************************************/

/*
    polyspace:begin<MISRA-C:5.1:Not a defect:Justify with annotations> Number of character is depends on user configuration
*/

/*******************************************************************************
**                         Input File                                         **
*******************************************************************************/

/*******************************************************************************
**                         MULTIPLE INCLUSION PROTECTION                      **
*******************************************************************************/
#ifndef SCHM_GPT_H
#define SCHM_GPT_H

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
/* polyspace:begin<MISRA-C:1.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Inclusion of Header Files) */
#include "Os.h"
#include "SchM_Gpt_Type.h"

#include "Rte.h"
/* polyspace:end<MISRA-C:1.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Inclusion of Header Files) */

/*******************************************************************************
** Version Information                                                        **
*******************************************************************************/
/* AUTOSAR SPECIFICATION VERSION INFORMATION */

#define SCHM_Gpt_AR_RELEASE_MAJOR_VERSION	4
#define SCHM_Gpt_AR_RELEASE_MINOR_VERSION	0
#define SCHM_Gpt_AR_REVISION_VERSION	2

/* SOFTWARE VERSION INFORMATION */

#define SCHM_Gpt_SW_MAJOR_VERSION	4
#define SCHM_Gpt_SW_MINOR_VERSION	0

/* RTE MODULE VERSION INFORMATION */

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

/* COMPATIBLE WITH C and C++ languages */
#ifdef __cplusplus
 extern "C" {
 #endif /* __cplusplus */

/*******************************************************************************
** RTE #DEFINES USED FOR INITIALISATION OF GLOBAL VARIABLES                   **
*******************************************************************************/

/*******************************************************************************
** Global Variables                                                           **
*******************************************************************************/

/*******************************************************************************
** Macros for Exclusive Areas                                                 **
*******************************************************************************/

/*******************************************************************************
** Prototypes for BswSchedulable entities                                     **
*******************************************************************************/

/*******************************************************************************
** Prototypes for BSW API                                                     **
*******************************************************************************/
#define RTE_START_SEC_CODE
#include "MemMap.h"
extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_20(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_20(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_61(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_61(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_64(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_64(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_51(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_51(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_13(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_13(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_54(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_54(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_55(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_55(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_30(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_30(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_04(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_04(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_27(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_27(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_57(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_57(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_17(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_17(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_10(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_10(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_50(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_50(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_58(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_58(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_60(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_60(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_11(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_11(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_21(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_21(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_03(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_03(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_34(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_34(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_62(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_62(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_47(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_47(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_14(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_14(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_22(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_22(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_56(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_56(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_38(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_38(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_09(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_09(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_49(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_49(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_08(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_08(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_33(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_33(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_46(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_46(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_29(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_29(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_28(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_28(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_39(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_39(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_26(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_26(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_44(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_44(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_02(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_02(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_01(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_01(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_40(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_40(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_63(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_63(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_07(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_07(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_31(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_31(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_06(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_06(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_32(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_32(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_12(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_12(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_41(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_41(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_23(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_23(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_45(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_45(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_52(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_52(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_15(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_15(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_53(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_53(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_24(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_24(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_25(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_25(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_59(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_59(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_42(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_42(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_48(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_48(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_16(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_16(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_05(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_05(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_00(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_00(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_43(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_43(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_18(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_18(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_36(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_36(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_37(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_37(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_19(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_19(void);

extern FUNC(void, RTE_CODE) SchM_Enter_Gpt_GPT_EXCLUSIVE_AREA_35(void);

extern FUNC(void, RTE_CODE) SchM_Exit_Gpt_GPT_EXCLUSIVE_AREA_35(void);

#define RTE_STOP_SEC_CODE
#include "MemMap.h"

/* COMPATIBLE WITH C and C++ languages */

 #ifdef __cplusplus
 } /* extern "C" */
 #endif /* __cplusplus */
#endif

/*******************************************************************************
* PRE-JUSTIFICATION END SECTION (MISRA-C RULE CHECKER)
*******************************************************************************/
/*
    polyspace:end<MISRA-C:5.1:Not a defect:Justify with annotations> Number of character is depends on user configuration
*/

/*******************************************************************************
**                          END OF FILE                                       **
*******************************************************************************/
