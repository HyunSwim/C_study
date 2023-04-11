
/*******************************************************************************
**  FILE-NAME: Rte_Type.h                                                     **
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

/******************************************************************************/

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
#ifndef RTE_TYPE_H
#define RTE_TYPE_H

/*******************************************************************************
**                  Include Section                                           **
*******************************************************************************/
/* polyspace:begin<MISRA-C:1.1:Not a defect:Justify with annotations> No Impact of this rule violation (AUTOSAR Standard : Inclusion of Header Files) */
/* Rte_Type_9:Inclusion of Rte.h file in Rte_Type.h Header file*/
#include "Rte.h"
#include "Rte_Cfg.h"
#include "Rte_PBCfg.h"
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
* MACROS USED FOR Data Conversion for Application Datatypes                   **
*******************************************************************************/

/*******************************************************************************
* MACROS USED FOR Range Datatypes                                             **
*******************************************************************************/

/*******************************************************************************
* MACROS USED FOR Invalid Value Datatypes                                     **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for AUTOSAR data types                                    **
*******************************************************************************/
typedef unsigned char BswM_ShutdownTargetType;
typedef unsigned char BswM_StateManagerType;
typedef unsigned char DTRStatusType;
typedef uint8 DataArrayType_ActuatorControl[1];
typedef uint8 DataArrayType_BatVolt[1];
typedef uint8 DataArrayType_ECT[1];
typedef uint8 DataArrayType_RPM[2];
typedef uint8 DataArrayType_SystemSupplierECUHardwareVersionNumber[4];
typedef uint8 DataArrayType_SystemSupplierECUSoftwareNumber[4];
typedef uint8 DataArrayType_VINDataIdentifier[17];
typedef uint8 DataArrayType_VehicleManufacturerECUSoftwareVersionNumber[17];
typedef uint8 DataArrayType_VehicleSpeed[1];
typedef uint8 DcmDspDidRangeArrayType_DIDs_0100h_0110h[30];
typedef uint8 Dcm_CertAuthorizationInfoType[4];
typedef uint8 Dcm_CertExpirationDateInfoType[3];
typedef struct {
	Dcm_CertAuthorizationInfoType authorization;
	Dcm_CertExpirationDateInfoType expirationDate;
} Dcm_CertInfoType;
typedef unsigned char Dcm_CommunicationModeType;
typedef unsigned char Dcm_ConfirmationStatusType;
typedef unsigned char Dcm_EcuStartModeType;
typedef unsigned char Dcm_IdContextType;
typedef unsigned char Dcm_MsgItemType;
typedef unsigned long Dcm_MsgLenType;
typedef unsigned char Dcm_NegativeResponseCodeType;
typedef unsigned char Dcm_OpStatusType;
typedef struct {
	uint16 TesterSourceAddr;
	uint8 ProtocolId;
	uint8 Sid;
	uint8 SubFncId;
	boolean ReprogramingRequest;
	boolean ApplUpdated;
	boolean ResponseRequired;
	uint8 SecLvInfo;
} Dcm_ProgConditionsType;
typedef unsigned char Dcm_ProtocolType;
typedef unsigned char Dcm_ReturnReadMemoryType;
typedef unsigned char Dcm_ReturnWriteMemoryType;
typedef unsigned char Dcm_RoeStateType;
typedef unsigned char Dcm_SecLevelType;
typedef unsigned char Dcm_SesCtrlType;
typedef unsigned char Dcm_StatusType;
typedef uint8 KeyArrayType_L1[4];
typedef uint8 KeyArrayType_L9[8];
typedef uint8 RequestDataArray[620];
typedef unsigned char RequestDataOutType_RID_0200h_CalibrationActuator_routineStatus_ResOutSignal;
typedef uint8 ScalingInfoArrayType_VINDataIdentifier[2];
typedef uint8 ScalingInfoArrayType_VehicleSpeed[9];
typedef uint8 SeedArrayType_L1[4];
typedef uint8 SeedArrayType_L9[8];
typedef unsigned char StartDataInType_RID_0200h_CalibrationActuator_routineControlOption_StartInSignal;
typedef unsigned char StartDataOutType_RID_0200h_CalibrationActuator_routineStatus_StartOutSignal;
typedef unsigned char StopDataInType_RID_0200h_CalibrationActuator_DcmDspRoutineStopInSignal0;
typedef unsigned char StopDataOutType_RID_0200h_CalibrationActuator_DcmDspRoutineStopOutSignal0;
typedef uint8 DataArrayType_DE_0001[3];
typedef uint8 DataArrayType_DE_0002[3];
typedef unsigned char Dem_DTCFormatType;
typedef unsigned char Dem_DTCKindType;
typedef unsigned char Dem_DTCOriginType;
typedef unsigned char Dem_DTCRequestType;
typedef unsigned char Dem_DTCSeverityType;
typedef unsigned char Dem_DTCStatusMaskType;
typedef unsigned char Dem_DTCTranslationFormatType;
typedef unsigned short Dem_EventIdType;
typedef unsigned char Dem_EventStatusExtendedType;
typedef unsigned char Dem_EventStatusType;
typedef unsigned char Dem_IndicatorStatusType;
typedef unsigned char Dem_InitMonitorReasonType;
typedef uint8 Dem_MaxDataValueType[6];
typedef unsigned char Dem_OperationCycleStateType;
typedef unsigned char Dem_ReturnClearDTCType;
typedef unsigned char Dem_ReturnControlDTCSettingType;
typedef unsigned char Dem_ReturnDisableDTCRecordUpdateType;
typedef unsigned char Dem_ReturnGetDTCByOccurrenceTimeType;
typedef unsigned char Dem_ReturnGetExtendedDataRecordByDTCType;
typedef unsigned char Dem_ReturnGetFreezeFrameDataByDTCType;
typedef unsigned char Dem_ReturnGetFunctionalUnitOfDTCType;
typedef unsigned char Dem_ReturnGetNextFilteredDTCType;
typedef unsigned char Dem_ReturnGetNumberOfFilteredDTCType;
typedef unsigned char Dem_ReturnGetSeverityOfDTCType;
typedef unsigned char Dem_ReturnGetSizeOfExtendedDataRecordByDTCType;
typedef unsigned char Dem_ReturnGetSizeOfFreezeFrameByDTCType;
typedef unsigned char Dem_ReturnGetStatusOfDTCType;
typedef unsigned char Dem_ReturnSetFilterType;
typedef uint8 array8uint8[8];
typedef uint8 EcuM_BootTargetType;
typedef uint16 EcuM_CallerType;
typedef uint8 EcuM_ModeType;
typedef uint8 EcuM_ResetType;
typedef uint8 EcuM_ShutdownCauseType;
typedef uint8 EcuM_StateType;
typedef uint32 EcuM_TimeType;
typedef uint8 EcuM_UserType;
typedef uint32 EcuM_WakeupSourceType;
typedef unsigned char ComM_InhibitionStatusType;
typedef unsigned char ComM_InitStatusType;
typedef unsigned char ComM_ModeType;
typedef unsigned char ComM_PncModeType;
typedef unsigned char ComM_StateType;
typedef unsigned char ComM_UserHandleType;
typedef struct {
	unsigned char numberOfRequesters;
	ComM_UserHandleType handleArray[2];
} ComM_UserHandleArrayType;
typedef unsigned char NetworkHandleType;
typedef unsigned char PNCHandleType;
typedef unsigned char Boolean;
typedef unsigned char FiM_FunctionIdType;
typedef unsigned char FiM_Uint8Type;
typedef unsigned char IoHwAb_BoolType;
typedef unsigned long IoHwAb_GptValueType;
typedef unsigned char IoHwAb_IcuActivationType;
typedef unsigned short IoHwAb_IcuValueType;
typedef struct {
	IoHwAb_IcuValueType ActiveTime;
	IoHwAb_IcuValueType PeriodTime;
} IoHwAb_IcuDutyCycleType;
typedef unsigned long IoHwAb_IcuEdgeNumberType;
typedef unsigned short IoHwAb_IcuIndexType;
typedef unsigned char IoHwAb_IcuStateType;
typedef unsigned short IoHwAb_IndexType;
typedef unsigned char IoHwAb_LengthType;
typedef unsigned char IoHwAb_LevelType;
typedef unsigned char IoHwAb_OcuPinActionType;
typedef unsigned char IoHwAb_OcuPinStateType;
typedef unsigned char IoHwAb_OcuReturnType;
typedef unsigned short IoHwAb_OcuValueType;
typedef unsigned char IoHwAb_PwmEdgeType;
typedef unsigned long IoHwAb_PwmPeriodType;
typedef unsigned char IoHwAb_ThresholdType;
typedef unsigned short IoHwAb_ValueType;
typedef const void * ConstVoidPtr;
typedef uint16 NvM_BlockIdType;
typedef uint8 NvM_RequestResultType;
typedef void * VoidPtr;
typedef uint16 WdgM_CheckpointIdType;
typedef uint8 WdgM_GlobalStatusType;
typedef uint8 WdgM_LocalStatusType;
typedef uint8 WdgM_ModeType;
typedef uint16 WdgM_SupervisedEntityIdType;
typedef uint8 WdgM_SupervisionType;

/*******************************************************************************
** Sender Receiver Structure                                                  **
*******************************************************************************/

/*******************************************************************************
** Client Server Structure                                                    **
*******************************************************************************/

typedef struct {
  Std_ReturnType ddCsWdgM_PerformResetAppErr;
} Rte_CsWdgM_PerformReset_Type;

typedef struct {
  Std_ReturnType ddCsWdgM_SetModeAppErr;
  WdgM_ModeType ucCsWdgM_SetModeddMode;
  uint16 usCsWdgM_SetModeusCallerID;
} Rte_CsWdgM_SetMode_Type;

/*******************************************************************************
** Type Definitions for Enumeration constants                                 **
*******************************************************************************/

/*******************************************************************************
** Typedefs of Modes
*******************************************************************************/

/*******************************************************************************
** ParameterElementGroup section
*******************************************************************************/

/*******************************************************************************
** Type Definitions for Data structured required for Rte implementation       **
*******************************************************************************/

/*******************************************************************************
** Type Definitions for port-defined argument values for server               **
*******************************************************************************/
#define Rte_PDAV_IoHwAbP_IoHwAbDigitalDirectLogical_S04_1 4
#define Rte_PDAV_DemEventInfo_Dem_FLS_ERASE_ERROR_1 23
#define Rte_PDAV_DemEventInfo_DEM_E_TEST_EVENT6_1 55
#define Rte_PDAV_DemEventInfo_DEM_E_TEST_EVENT2_1 45
#define Rte_PDAV_NvMPS_NvMBlock_DemNonVolatileData_1 2
#define Rte_PDAV_DemEvent_DEM_E_TEST_EVENT6_1 55
#define Rte_PDAV_DemEventInfo_FR_E_ACCESS_1 8
#define Rte_PDAV_DetDS000_1 1
#define Rte_PDAV_IoHwAbP_IoHwAbDigitalDirectLogical_S01_1 1
#define Rte_PDAV_DemEventInfo_CANCM_E_BAT_FAIL_1 62
#define Rte_PDAV_DemEvent_DEM_E_TEST_EVENT4_1 47
#define Rte_PDAV_DemEventInfo_PWM_E_UNEXPECTED_IRQ_1 14
#define Rte_PDAV_DemEventInfo_FLS_E_UNEXPECTED_FLASH_ID_1 7
#define Rte_PDAV_DemEventInfo_IOHWAB_E_WRONG_SETTING_1 57
#define Rte_PDAV_DemEventInfo_MCU_E_LOCK_FAILURE_1 11
#define Rte_PDAV_IoHwAbP_IoHwAbDigitalDirectLogical_S02_1 2
#define Rte_PDAV_DemEventInfo_MCU_E_QUARTZ_FAILURE_1 12
#define Rte_PDAV_DemEventInfo_EEP_E_READ_FAILED_1 51
#define Rte_PDAV_DemEventInfo_NVM_E_WRITE_PROTECTED_1 43
#define Rte_PDAV_DemEventInfo_CANSM_E_BUS_OFF_1 53
#define Rte_PDAV_DemEventInfo_DEM_E_TEST_EVENT1_1 21
#define Rte_PDAV_NvMPS_NvMBlock_DemPrimaryEventMemory_1_1 5
#define Rte_PDAV_DemEventInfo_NVM_E_VERIFY_FAILED_1 42
#define Rte_PDAV_DemEventInfo_NVM_E_WRONG_BLOCK_ID_1 44
#define Rte_PDAV_DemEventInfo_FLS_E_WRITE_FAILED_1 3
#define Rte_PDAV_IoHwAbP_IoHwAbIcuLogical_Timestamp_PA8_1 0
#define Rte_PDAV_DemEventInfo_EEP_E_ERASE_FAILED_1 50
#define Rte_PDAV_DemEventInfo_Dem_FEE_INVALIDATE_ERROR_1 37
#define Rte_PDAV_DemEventInfo_Dem_FEE_GC_INIT_ERROR_1 30
#define Rte_PDAV_DemEventInfo_ETH_E_ACCESS_1 2
#define Rte_PDAV_DemEventInfo_WDG_E_MISS_TRIGGER_1 18
#define Rte_PDAV_DemEventInfo_MCU_E_TIMEOUT_TRANSITION_1 13
#define Rte_PDAV_DemEventInfo_IOHWAB_E_WRONG_STATE_1 56
#define Rte_PDAV_NvMPS_NvMBlock_IntTst_TestBlock1_1 7
#define Rte_PDAV_DemEventInfo_Dem_FEE_WRITE_ERROR_1 32
#define Rte_PDAV_DemEventInfo_Dem_FEE_GC_TRIG_ERROR_1 31
#define Rte_PDAV_DemEventInfo_ECUM_E_CONFIGURATION_DATA_INCONSISTENT_1 19
#define Rte_PDAV_IoHwAbP_IoHwAbPwm_0_1 0
#define Rte_PDAV_DemIndStatus_DemIndicator_0_1 0
#define Rte_PDAV_NvMPS_NvMBlock_DemPrimaryEventMemory_0_1 4
#define Rte_PDAV_DemEventInfo_IOHWAB_E_PROC_FAIL_1 61
#define Rte_PDAV_ComMPPortPrototype_ComMChannel_Project_1 0
#define Rte_PDAV_DemEventInfo_WDG_76_ACW_E_DISABLE_REJECTED_1 66
#define Rte_PDAV_WdgMalive_SE_Init_1 300
#define Rte_PDAV_IoHwAbP_IoHwAbGptLogical0_1 0
#define Rte_PDAV_DemEventInfo_IOHWAB_E_SETUP_FAIL_1 59
#define Rte_PDAV_DemEvent_DEM_E_TEST_EVENT2_1 45
#define Rte_PDAV_DemEventInfo_Dem_FLS_READ_ERROR_1 24
#define Rte_PDAV_DemEventInfo_FLS_E_ERASE_FAILED_1 4
#define Rte_PDAV_NvMPS_NvMBlock_IntTst_TestBlock3_1 9
#define Rte_PDAV_DemEventInfo_DEM_E_TEST_EVENT4_1 47
#define Rte_PDAV_DemEventInfo_CANSM_E_MODE_CHANGE_PROJECT_1 68
#define Rte_PDAV_NvMPS_NvMBlock_ConfigID_1 1
#define Rte_PDAV_DemEventInfo_NVM_E_QUEUE_OVERFLOW_1 40
#define Rte_PDAV_DemOverflowIndPrimaryMemory_1 1
#define Rte_PDAV_DemEventInfo_WDGM_E_SET_MODE_1 28
#define Rte_PDAV_DemEventInfo_Dem_FEE_READ_ERROR_1 33
#define Rte_PDAV_DemEventInfo_ETHTRCV_E_ACCESS_1 64
#define Rte_PDAV_DemEventInfo_Dem_FEE_UNCONFIG_BLK_EXCEEDED_ERROR_1 29
#define Rte_PDAV_DemEventInfo_Dem_FEE_GC_ERASE_ERROR_1 36
#define Rte_PDAV_DemEventInfo_EEP_E_WRITE_FAILED_1 52
#define Rte_PDAV_IoHwAbP_IoHwAbGptLogical_EMIOS4_1 1
#define Rte_PDAV_DemEventInfo_ECUM_E_RAM_CHECK_FAILED_1 20
#define Rte_PDAV_DemEvent_DEM_E_TEST_EVENT5_1 54
#define Rte_PDAV_DemEventInfo_MCU_E_CLOCK_FAILURE_1 10
#define Rte_PDAV_DemEventInfo_DEM_E_TEST_EVENT3_1 46
#define Rte_PDAV_DemEventInfo_NVM_E_LOSS_OF_REDUNDANCY_1 39
#define Rte_PDAV_ComMCL000_P_1 0
#define Rte_PDAV_DemEventInfo_Dem_FLS_WRITE_ERROR_1 25
#define Rte_PDAV_IoHwAbP_IoHwAbDigitalDirectLogical_LED01_1 0
#define Rte_PDAV_DemEventInfo_ADC_E_TIMEOUT_1 1
#define Rte_PDAV_DemEventInfo_WDG_76_ACW_E_MODE_FAILED_1 67
#define Rte_PDAV_DemEventInfo_REGMON_E_REG_FAILURE_1 69
#define Rte_PDAV_DemEventInfo_SPI_E_TIMEOUT_1 15
#define Rte_PDAV_DemEventInfo_IOHWAB_E_BUSY_1 60
#define Rte_PDAV_NvMPS_NvMBlock_DemEventStatusNvRamBlock_1 3
#define Rte_PDAV_DemEventInfo_DEM_E_TEST_EVENT5_1 54
#define Rte_PDAV_DemOpCycle_DemOperationCycle0_1 0
#define Rte_PDAV_DemEventInfo_Dem_FLS_COMPARE_ERROR_1 22
#define Rte_PDAV_IoHwAbP_IoHwAbDigitalDirectLogical_S03_1 3
#define Rte_PDAV_FiMFunc_FiMFID_0_1 0
#define Rte_PDAV_WdgMalive_SE_WdgMTest_1 400
#define Rte_PDAV_DemEventInfo_NVM_E_REQ_FAILED_1 41
#define Rte_PDAV_DemEventInfo_NVM_E_INTEGRITY_FAILED_1 38
#define Rte_PDAV_FiMFunc_FiMFID_1_1 1
#define Rte_PDAV_ComMUR001_P_1 1
#define Rte_PDAV_DemEventInfo_WDG_E_MODE_FAILED_1 16
#define Rte_PDAV_DemEventInfo_FLS_E_READ_FAILED_1 5
#define Rte_PDAV_DemEventInfo_ECUM_E_IMPROPER_CALLER_1 48
#define Rte_PDAV_ComMUR000_P_1 0
#define Rte_PDAV_DemEventInfo_Dem_FEE_GC_WRITE_ERROR_1 34
#define Rte_PDAV_IoHwAbP_IoHwAbAnalogInputLogical_PD00_1 0
#define Rte_PDAV_ComMCL001_P_1 1
#define Rte_PDAV_DemEventInfo_FLS_E_COMPARE_FAILED_1 6
#define Rte_PDAV_DemEventInfo_WDG_E_DISABLE_REJECTED_1 17
#define Rte_PDAV_DemIndStatus_DemIndicator_1_1 1
#define Rte_PDAV_DemEventInfo_RAMTST_E_RAM_FAILURE_1 63
#define Rte_PDAV_IoHwAbP_IoHwAbAnalogInputDirectLogical_01_1 0
#define Rte_PDAV_DemEventInfo_WDGM_E_MONITORING_1 27
#define Rte_PDAV_NvMPS_NvMBlock_DemPrimaryEventMemory_2_1 6
#define Rte_PDAV_DemEventInfo_LIN_E_TIMEOUT_1 9
#define Rte_PDAV_DemEventInfo_WDGM_E_IMPROPER_CALLER_1 26
#define Rte_PDAV_DemEvent_DEM_E_TEST_EVENT1_1 21
#define Rte_PDAV_DemEventInfo_Dem_FEE_GC_READ_ERROR_1 35
#define Rte_PDAV_DemEventInfo_IOHWAB_E_WRONG_PARAM_1 58
#define Rte_PDAV_DemEventInfo_ETHSM_E_LINK_DOWN_1 65
#define Rte_PDAV_DemEvent_DEM_E_TEST_EVENT3_1 46
#define Rte_PDAV_DemEventInfo_EEP_E_COMPARE_FAILED_1 49
#define Rte_PDAV_DemEnableCond_DemEnableCondition_1 0
#define Rte_PDAV_NvMPS_NvMBlock_IntTst_TestBlock2_1 8

/*******************************************************************************
** Per-instance Memory Type Definition                                        **
*******************************************************************************/

/*******************************************************************************
** Component Data Structures                                                  **
** If all sections of the Component Data Structure are empty                  **
*******************************************************************************/

/*******************************************************************************
** Data Handles section within CDS to support Rte_IRead and Rte_IWrite APIs   **
*******************************************************************************/

/*******************************************************************************
** Data Handles section without status                                        **
*******************************************************************************/

/*******************************************************************************
** Data Handles section with status                                           **
*******************************************************************************/

/*******************************************************************************
** Port Data Structures                                                       **
*******************************************************************************/

/*******************************************************************************
** Component Data Structures                                                  **
** If sections of the Component Data Structure are specified                  **
*******************************************************************************/

/*******************************************************************************
** Global variables                                                           **
*******************************************************************************/

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
