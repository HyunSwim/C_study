
/*******************************************************************************
**  FILE-NAME: Rte_PBCfg.c                                                    **
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
  polyspace:begin<MISRA-C:19.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:begin<MISRA-C:19.4:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1154, #6713)
  polyspace:begin<MISRA-C:19.6:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:begin<MISRA-C:19.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1236)
*/

/*******************************************************************************
**                       Include Section                                      **
*******************************************************************************/
#include "Rte_PBCfg.h"

/*******************************************************************************
**                      Configuration Data                                    **
*******************************************************************************/

/*******************************************************************************
* PRE-JUSTIFICATION END SECTION (MISRA-C RULE CHECKER)
*******************************************************************************/
/*
  polyspace:end<MISRA-C:19.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:end<MISRA-C:19.4:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1154, #6713)
  polyspace:end<MISRA-C:19.6:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Memory Mapping)
  polyspace:end<MISRA-C:19.7:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Rte SWS #1236)
*/

/*******************************************************************************
**                          END OF FILE                                       **
*******************************************************************************/
