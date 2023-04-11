/*******************************************************************************
**  FILE-NAME: Dem_Cfg.h                                                      **
**                                                                            **
**  MODULE-NAME: AUTOSAR DEM Module                                           **
**                                                                            **
**  NOTE: This file is auto generated, do not edit this file manually.        **                                                                **
**                                                                            **
********************************************************************************

********************************************************************************
**                      Generation Tool Information                           **
********************************************************************************
**  Tool Version: 2.7.3                                                       **
**                                                                            **
**  Change History: Refer log file (use -l option to generate log file)       **
**                                                                            **
********************************************************************************
**                      File Generation Information                           **
*******************************************************************************/

/*
 * INPUT FILE:    Configuration\ECU\Ecud_Dcm.arxml
 *                Configuration\ECU\Ecud_NvM.arxml
 *                Configuration\ECU\Ecud_Dem.arxml
 * GENERATED ON:  This timestamp is removed.
 */

#ifndef DEM_CFG_H
#define DEM_CFG_H

/* polyspace:begin<MISRA-C:1.1:Not a defect:Justify with annotations> Necessary in logic */

/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/
#include "Platform_Types.h"

/*******************************************************************************
**                      Common Published Information                          **
*******************************************************************************/
#define DEM_AR_RELEASE_MAJOR_VERSION                       4
#define DEM_AR_RELEASE_MINOR_VERSION                       0
#define DEM_AR_RELEASE_REVISION_VERSION                    3
#define DEM_SW_MAJOR_VERSION                               1
#define DEM_SW_MINOR_VERSION                               0
#define DEM_SW_PATCH_VERSION                               5
#define DEM_VENDOR_ID                                      ((uint16)76)
#define DEM_MODULE_ID                                      ((uint16)54)

/*******************************************************************************
**                      Precompile Options                                    **
*******************************************************************************/
/* To enable/disable development error detection */
#define DEM_DEV_ERROR_DETECT (STD_ON)

/* To enable/disable the Dem_GetVersionInfo API */
#define DEM_VERSION_INFO_API (STD_OFF)

/* Pre-compile option to enable or disable DTC suppression support */
#define DEM_DTC_SUPPRESSION_SUPPORT (STD_OFF)

/* Pre-compile option whether counter based pre debounced supported or not */
#define DEM_DEBOUNCE_COUNTER_SUPPORT (STD_ON)

/* Pre-compile option whether time based pre debounce supported or not */
#define DEM_DEBOUNCE_TIME_SUPPORT (STD_ON)

/* 
 * Pre-compile option defines whether the enable conditions is supported or
 * not
 */
#define DEM_ENABLE_CONDITION_SUPPORT (STD_ON)

/* Macro for the displacement support configured */
#define DEM_EVENT_DISPLACEMENT_SUPPORT (STD_ON)

/* Pre-compile option defines support of OBD Functionality */
#define DEM_OBD_SUPPORT (STD_OFF)

/* 
 * Pre-Compile option defines the storage of operation cycle state as      
 *               volatile or non- volatile
 */
#define DEM_OPERATION_CYCLE_STATUS_STORAGE (STD_ON)

/* Pre-compile option defines support of PTO Functionality */
#define DEM_PTO_SUPPORT (STD_OFF)

/* Activate/Deactivate the permanent storage of the "TestFailed" status bits */
#define DEM_STATUS_BIT_STORAGE_TESTFAILED (STD_OFF)

/* Macro for the storsage condition support */
#define DEM_STORAGE_CONDITION_SUPPORT (STD_OFF)

/* Macro to Activate/Deactivate the notification to the DLT */
#define DEM_TRIGGER_DLT_REPORTS (STD_OFF)

/* Macro to Activate/Deactivate the notification to the DCM */
#define DEM_TRIGGER_DCM_REPORTS (STD_OFF)

/* Macro to Activate/Deactivate the notification to the FIM */
#define DEM_TRIGGER_FIM_REPORTS (STD_ON)

/* 
 * Macro to define whether init should be triggered before or after        
 *              DEM_CLEAR_OK
 */
#define DEM_TRIGGER_INIT_BEFORE_CLEAR_OK (STD_OFF)

/* Pre-Compile option defines the processing of aging cycle counter */
#define DEM_AGING_CYCLE_COUNTER_PROCESS (DEM_PROCESS_AGINGCTR_INTERN)

/* 
 * Pre-compile option defines the maximum number of elements in buffer for 
 *                    handling of BSW errors
 */
#define DEM_BSW_ERROR_BUFFER_SIZE (25)

/* Pre-compile option defines the clearing process */
#define DEM_CLEAR_DTC_BEHAVIOUR (DEM_CLRRESP_NONVOLATILE_TRIGGER)

/* Pre-compile option defines the global status mask */
#define DEM_STATUS_AVAILABILITY_MASK (0x89U)

/* Macro for the Combination Support */
#define DEM_EVENT_COMBINATION_SUPPORT (DEM_EVCOMB_DISABLED)

/* Macro for extended data capture */
#define DEM_EXTENDED_DATA_CAPTURE (DEM_TRIGGER_TESTFAILED)

/* Macro for freeze frame capture */
#define DEM_FREEZE_FRAME_CAPTURE (DEM_TRIGGER_TESTFAILED)

/* Macro for the Immediate storage limit configured */
#define DEM_IMMEDIATE_NV_STORAGE_LIMIT ((uint8)5)

/* 
 * Pre-compile option indicates the maximum number of events that can be
 * stored  in the mirror memory
 */
#define DEM_MAX_NUMBER_EVENT_ENTRY_MIR (0)

/* 
 * Pre-compile option indicates the maximum number of events that can be
 * stored  in the primary memory
 */
#define DEM_MAX_NUMBER_EVENT_ENTRY_PRI (3)

/* 
 * Pre-compile option indicates the maximum number of events that can be
 * stored  in the secondary memory
 */
#define DEM_MAX_NUMBER_EVENT_ENTRY_SEC (0)

/* 
 * Pre-compile option indicates the maximum number of events that can be
 * stored  in the permanent memory
 */
#define DEM_MAX_NUMBER_EVENT_ENTRY_PER (0)

/* Pre-compile option defines the size of Prestore buffer */
#define DEM_MAX_NUMBER_PRESTORED_FF (0)

/* Pre-compile option for occurrence counter proccessing */
#define DEM_OCCCTR_PROCESSING (DEM_PROCESS_OCCCTR_TF)

/* Macro for task time */
#define DEM_TASK_TIME (10)

/* 
 * Pre-compile option defines the type of DTC which is supported by the
 * ECU.  The DTC can be of ISO14229-1/CustomerSpecific/SAEJ1939/WWH-OBD-Format
 */
#define DEM_TYPE_OF_DTC_SUPPORTED (DEM_DTC_TRANSLATION_ISO15031_6)

/* 
 * defines the type of assigning freeze frame record numbers               
 *       for event-specific freeze frame records
 */
#define DEM_FFRECORD_NUMERATION_TYPE (DEM_FF_RECNUM_CALCULATED)

/* Precompile option for MIL Indicator ID */
#define DEM_MIL_INDICATORID (0)

/* Precompile option for operation cycle proccessing */
#define DEM_OPER_CYCLE_PROCESSING (0)

/* Precompile option for status bit handling for Test Failed Since Last Clear */
#define DEM_STATUS_BIT_HANDLING_TFSLC (DEM_STATUS_BIT_NORMAL)

/* 
 * Precompile option for calculating the lower nibble value based on the
 * configuration
 */
#define DEM_PID01_BYTEB_LOWER_NIBBLE (0x00)

/* Precompile option for calculating the byte when engine is of type spark */
#define DEM_PID01_BYTEC_SPARK (0x00)

/* 
 * Precompile option for calculating the byte when engine is of type
 * compression
 */
#define DEM_PID01_BYTEC_COMPRESSION (0)

/* Precompile option for the type of ObdCompliance */
#define DEM_OBD_COMPLIANCE  (DEM_OBDII_CALIFORNIAARB)

/* Precompile option for the type of Engine */
#define DEM_ENGINE_CHECK  (DEM_ENGINE_SPARK)

/* Precompile option for the total number of the PID data elements */
#define DEM_TOTAL_PID_DATAELEMENT_COUNT  (0)

/* To enable/disable general interface */
#define DEM_GENERAL_INTERFACE_SUPPORT (STD_OFF)

/* 
 * Defines if the aging cycle counter is processed every aging cycles or if
 * only tested aging cycle are considered.
 */
#define DEM_AGING_REQUIERES_TESTED_CYCLE (STD_ON)

/* 
 * Defines if the healing cycle counter is processed every event operation
 * cycles or if only tested event operation cycle are considered.
 */
#define DEM_HEALING_REQUIERES_TESTED_CYCLE (STD_ON)

/* Pre-compile option whether monitor internal pre debounce supported or not */
#define DEM_DEBOUNCE_MONITOR_INTERNAL_SUPPORT (STD_OFF)

/* 
 * This configuration switch defines, whether support for nvm access
 * optimization is enabled or not.
 */
#define DEM_NVRAMBLOCK_ACCESS_OPTIMIZATION_SUPPORT (STD_ON)

/* Pre-compile option whether monitor internal pre debounce supported or not */
#define DEM_J1939_SUPPORT (STD_OFF)

/* Pre-compile option the Initialization for FiM */
#define DEM_FIM_INTEGRATED (STD_ON)

/* Total DEM_MAX_LISTOFCOMBINEDEVENTS entries */
#define DEM_MAX_LISTOFCOMBINEDEVENTS (7)

/* Total DEM_MAX_LISTOFDATAELEMENTCLASSINDEX entries */
#define DEM_MAX_LISTOFDATAELEMENTCLASSINDEX (6)

/* Total DEM_MAX_LISTOFDIDCLASSINDEX entries */
#define DEM_MAX_LISTOFDIDCLASSINDEX (2)

/* Total DEM_MAX_LISTOFEDRECORDCLASSINDEX entries */
#define DEM_MAX_LISTOFEDRECORDCLASSINDEX (5)

/* Total DEM_MAX_LISTOFENABLECONDITIONID entries */
#define DEM_MAX_LISTOFENABLECONDITIONID (1)

/* Total DEM_MAX_LISTOFFFRECORDNUMBERS entries */
#define DEM_MAX_LISTOFFFRECORDNUMBERS (2)

/* Total DEM_MAX_LISTOFSTORAGECONDITIONID entries */
#define DEM_MAX_LISTOFSTORAGECONDITIONID (0)

/* Total DEM_MAX_NUMBER_OF_DTC entries */
#define DEM_MAX_NUMBER_OF_DTC (8)

/* Total DEM_MAX_NUMBER_OF_PID_DATAELEMENT entries */
#define DEM_MAX_NUMBER_OF_PID_DATAELEMENT (0)

/* Total DEM_MAX_NUMBER_OF_PID_RECDS entries */
#define DEM_MAX_NUMBER_OF_PID_RECDS (0)

/* Total DEM_MAX_NUM_GRP_DTC entries */
#define DEM_MAX_NUM_GRP_DTC (4)

/* Total DEM_MAX_NUM_OF_EVENT_STAT_CHNG_FCTS entries */
#define DEM_MAX_NUM_OF_EVENT_STAT_CHNG_FCTS (2)

/* Total DEM_NO_OF_OPERATIONCYCLECONFIGURED entries */
#define DEM_NO_OF_OPERATIONCYCLECONFIGURED (1)

/* Total DEM_NUMBER_ENABLE_CONDITION entries */
#define DEM_NUMBER_ENABLE_CONDITION (1)

/* Total DEM_NUMBER_OF_DATA_ELEMENT_INTERNAL entries */
#define DEM_NUMBER_OF_DATA_ELEMENT_INTERNAL (0)

/* Total DEM_NUMBER_OF_EVENTS entries */
#define DEM_NUMBER_OF_EVENTS (69)

/* Total DEM_NUMBER_OF_INDICATORS entries */
#define DEM_NUMBER_OF_INDICATORS (7)

/* Total DEM_NUMBER_OF_PRE_DEBOUNCE_COUNTER entries */
#define DEM_NUMBER_OF_PRE_DEBOUNCE_COUNTER (6)

/* Total DEM_NUMBER_OF_PRE_DEBOUNCE_MONITOR_INTERNAL entries */
#define DEM_NUMBER_OF_PRE_DEBOUNCE_MONITOR_INTERNAL (0)

/* Total DEM_NUMBER_OF_PRE_DEBOUNCE_TIME entries */
#define DEM_NUMBER_OF_PRE_DEBOUNCE_TIME (1)

/* Total DEM_NUMBER_OF_RATIO_INFO entries */
#define DEM_NUMBER_OF_RATIO_INFO (0)

/* Total DEM_NUMBER_OPERATION_CYCLES entries */
#define DEM_NUMBER_OPERATION_CYCLES (1)

/* Total DEM_NUMBER_STORAGE_CONDITION entries */
#define DEM_NUMBER_STORAGE_CONDITION (0)

/* Total DEM_NUM_OF_DATAELEMENTCLASS entries */
#define DEM_NUM_OF_DATAELEMENTCLASS (4)

/* Total DEM_NUM_OF_DIDCLASS entries */
#define DEM_NUM_OF_DIDCLASS (2)

/* Total DEM_NUM_OF_EVENTRELATEDDATA entries */
#define DEM_NUM_OF_EVENTRELATEDDATA (4)

/* Total DEM_NUM_OF_EXTENDEDDATACLASS entries */
#define DEM_NUM_OF_EXTENDEDDATACLASS (4)

/* Total DEM_NUM_OF_EXTENDEDDATARECORDCLASS entries */
#define DEM_NUM_OF_EXTENDEDDATARECORDCLASS (4)

/* Total DEM_NUM_OF_FREEZEFRAMECLASS entries */
#define DEM_NUM_OF_FREEZEFRAMECLASS (2)

/* Total DEM_NUM_OF_PRIMARY_EVENTMEMORY_NVBLOCKID entries */
#define DEM_NUM_OF_PRIMARY_EVENTMEMORY_NVBLOCKID (3)

/* Total DEM_NUM_OF_SECONDARY_EVENTMEMORY_NVBLOCKID entries */
#define DEM_NUM_OF_SECONDARY_EVENTMEMORY_NVBLOCKID (0)


/* Macro to define the max number of data elements for Did */
#define DEM_MAX_DATA_ELEMENT_PER_DID 1

/* Precompile option for the total number destination selected */
#define DEM_MAX_EVENT_DESTINATION_SELECTED 1

/* Macro to define the max number of events for operation cycle */
#define DEM_MAX_EVENT_PER_CYCLE 69

/* Macro to define max number of events for indicator */
#define DEM_MAX_EVENT_PER_INDICATOR 0

/* Macro to define the max number of event status functions of all events */
#define DEM_MAX_EVENT_STATUS_FUNC 1

/* Macro to define the max number of indicator attributes of all events */
#define DEM_MAX_IND_PER_EVENT 1

/* Macro to define the max number of enable conditions of all events */
#define DEM_MAX_NUMBER_OF_EC_PER_GROUP 1

/* Macro to define the max number of storage conditions of all events */
#define DEM_MAX_NUMBER_OF_SC_PER_GROUP 0

/* Macro to define the max number of events for DTC */
#define DEM_MAX_NUM_EVENTS_PER_DTC 1

/* Precompile option for the total number callback DTC Status changed */
#define DEM_MAX_NUM_OF_DTC_STAT_CHNG_FCTS 0

/* Macro to define the max size of event related data */
#define DEM_MAX_SIZE_OF_EVENT_DATA 0

/* 
 * Precompile option for the enable/disable of fault confirmation
 * counter(trip counter)
 */
#define DEM_NUM_OF_ENABLE_TRIP_COUNTER 1

/* 
 * Precompile option for the total number failure counter to be stored for
 * indicator
 */
#define DEM_NUM_OF_FAILURE_COUNTER 1

/* Macro to define the max number of FF to be stored for an event */
#define DEM_NUM_OF_FF_RECNUM 0

/* 
 * Precompile option for the total number healing counter to be stored for
 * indicator
 */
#define DEM_NUM_OF_HEALING_COUNTER 5

/* 
 * Precompile option for the total indicator attribite status to be stored
 * for indicator
 */
#define DEM_NUM_OF_INDICATOR_ATTRIBUTE_STATUS 0

/* 
 * Activate/Deactivate the permanent storage of the "TestFailed" status
 * bitValue
 */
#define DEM_NUM_OF_TESTFAILED_BIT_STORAGE 0

/* Macro to define the max size of event related data */
#define DEM_SIZE_OF_EVENT_DATA 8

/* Macro to define the max size of extended data */
#define DEM_SIZE_OF_EXTENDED_DATA 3

/* Macro to define the max size of freeze frame */
#define DEM_SIZE_OF_FF_ONE_RECORD 3

/* Macro to define the max size of freeze frame */
#define DEM_SIZE_OF_FREEZEFRAME 6


/* DEM_DTC_GROUP_BODY_DTCS */
#define DEM_DTC_GROUP_BODY_DTCS 0x8000FF

/* DEM_DTC_GROUP_CHASSIS_DTCS */
#define DEM_DTC_GROUP_CHASSIS_DTCS 0x4000FF

/* DEM_DTC_GROUP_NETWORK_COM_DTCS */
#define DEM_DTC_GROUP_NETWORK_COM_DTCS 0xC000FF

/* DEM_DTC_GROUP_POWERTRAIN_DTCS */
#define DEM_DTC_GROUP_POWERTRAIN_DTCS 0xFF


/*******************************************************************************
**                      HandleId's Information                                **
*******************************************************************************/

/* Handles for NvM related Macros /AUTOSAR/NvM/NvMBlock_DemNonVolatileData */
#define DEM_NVM_BLK_ID_NON_VOLATILE_DATA 2
/* Handles for NvM related Macros /AUTOSAR/NvM/NvMBlock_DemEventStatusNvRamBlock */
#define DEM_NVM_BLK_ID_EVENT_STATUS 3

/* The handles for each StorageCondition configured */

/* The handles for each EventParameter configured */
#define DemConf_DemEventParameter_ADC_E_TIMEOUT            ((Dem_EventIdType)1)
#define DemConf_DemEventParameter_ETH_E_ACCESS             ((Dem_EventIdType)2)
#define DemConf_DemEventParameter_FLS_E_WRITE_FAILED       ((Dem_EventIdType)3)
#define DemConf_DemEventParameter_FLS_E_ERASE_FAILED       ((Dem_EventIdType)4)
#define DemConf_DemEventParameter_FLS_E_READ_FAILED        ((Dem_EventIdType)5)
#define DemConf_DemEventParameter_FLS_E_COMPARE_FAILED     ((Dem_EventIdType)6)
#define DemConf_DemEventParameter_FLS_E_UNEXPECTED_FLASH_ID ((Dem_EventIdType)7)
#define DemConf_DemEventParameter_FR_E_ACCESS              ((Dem_EventIdType)8)
#define DemConf_DemEventParameter_LIN_E_TIMEOUT            ((Dem_EventIdType)9)
#define DemConf_DemEventParameter_MCU_E_CLOCK_FAILURE      ((Dem_EventIdType)10)
#define DemConf_DemEventParameter_MCU_E_LOCK_FAILURE       ((Dem_EventIdType)11)
#define DemConf_DemEventParameter_MCU_E_QUARTZ_FAILURE     ((Dem_EventIdType)12)
#define DemConf_DemEventParameter_MCU_E_TIMEOUT_TRANSITION ((Dem_EventIdType)13)
#define DemConf_DemEventParameter_PWM_E_UNEXPECTED_IRQ     ((Dem_EventIdType)14)
#define DemConf_DemEventParameter_SPI_E_TIMEOUT            ((Dem_EventIdType)15)
#define DemConf_DemEventParameter_WDG_E_MODE_FAILED        ((Dem_EventIdType)16)
#define DemConf_DemEventParameter_WDG_E_DISABLE_REJECTED   ((Dem_EventIdType)17)
#define DemConf_DemEventParameter_WDG_E_MISS_TRIGGER       ((Dem_EventIdType)18)
#define DemConf_DemEventParameter_ECUM_E_CONFIGURATION_DATA_INCONSISTENT\
  ((Dem_EventIdType)19)
#define DemConf_DemEventParameter_ECUM_E_RAM_CHECK_FAILED  ((Dem_EventIdType)20)
#define DemConf_DemEventParameter_DEM_E_TEST_EVENT1        ((Dem_EventIdType)21)
#define DemConf_DemEventParameter_Dem_FLS_COMPARE_ERROR    ((Dem_EventIdType)22)
#define DemConf_DemEventParameter_Dem_FLS_ERASE_ERROR      ((Dem_EventIdType)23)
#define DemConf_DemEventParameter_Dem_FLS_READ_ERROR       ((Dem_EventIdType)24)
#define DemConf_DemEventParameter_Dem_FLS_WRITE_ERROR      ((Dem_EventIdType)25)
#define DemConf_DemEventParameter_WDGM_E_IMPROPER_CALLER   ((Dem_EventIdType)26)
#define DemConf_DemEventParameter_WDGM_E_MONITORING        ((Dem_EventIdType)27)
#define DemConf_DemEventParameter_WDGM_E_SET_MODE          ((Dem_EventIdType)28)
#define DemConf_DemEventParameter_Dem_FEE_UNCONFIG_BLK_EXCEEDED_ERROR\
  ((Dem_EventIdType)29)
#define DemConf_DemEventParameter_Dem_FEE_GC_INIT_ERROR    ((Dem_EventIdType)30)
#define DemConf_DemEventParameter_Dem_FEE_GC_TRIG_ERROR    ((Dem_EventIdType)31)
#define DemConf_DemEventParameter_Dem_FEE_WRITE_ERROR      ((Dem_EventIdType)32)
#define DemConf_DemEventParameter_Dem_FEE_READ_ERROR       ((Dem_EventIdType)33)
#define DemConf_DemEventParameter_Dem_FEE_GC_WRITE_ERROR   ((Dem_EventIdType)34)
#define DemConf_DemEventParameter_Dem_FEE_GC_READ_ERROR    ((Dem_EventIdType)35)
#define DemConf_DemEventParameter_Dem_FEE_GC_ERASE_ERROR   ((Dem_EventIdType)36)
#define DemConf_DemEventParameter_Dem_FEE_INVALIDATE_ERROR ((Dem_EventIdType)37)
#define DemConf_DemEventParameter_NVM_E_INTEGRITY_FAILED   ((Dem_EventIdType)38)
#define DemConf_DemEventParameter_NVM_E_LOSS_OF_REDUNDANCY ((Dem_EventIdType)39)
#define DemConf_DemEventParameter_NVM_E_QUEUE_OVERFLOW     ((Dem_EventIdType)40)
#define DemConf_DemEventParameter_NVM_E_REQ_FAILED         ((Dem_EventIdType)41)
#define DemConf_DemEventParameter_NVM_E_VERIFY_FAILED      ((Dem_EventIdType)42)
#define DemConf_DemEventParameter_NVM_E_WRITE_PROTECTED    ((Dem_EventIdType)43)
#define DemConf_DemEventParameter_NVM_E_WRONG_BLOCK_ID     ((Dem_EventIdType)44)
#define DemConf_DemEventParameter_DEM_E_TEST_EVENT2        ((Dem_EventIdType)45)
#define DemConf_DemEventParameter_DEM_E_TEST_EVENT3        ((Dem_EventIdType)46)
#define DemConf_DemEventParameter_DEM_E_TEST_EVENT4        ((Dem_EventIdType)47)
#define DemConf_DemEventParameter_ECUM_E_IMPROPER_CALLER   ((Dem_EventIdType)48)
#define DemConf_DemEventParameter_EEP_E_COMPARE_FAILED     ((Dem_EventIdType)49)
#define DemConf_DemEventParameter_EEP_E_ERASE_FAILED       ((Dem_EventIdType)50)
#define DemConf_DemEventParameter_EEP_E_READ_FAILED        ((Dem_EventIdType)51)
#define DemConf_DemEventParameter_EEP_E_WRITE_FAILED       ((Dem_EventIdType)52)
#define DemConf_DemEventParameter_CANSM_E_BUS_OFF          ((Dem_EventIdType)53)
#define DemConf_DemEventParameter_DEM_E_TEST_EVENT5        ((Dem_EventIdType)54)
#define DemConf_DemEventParameter_DEM_E_TEST_EVENT6        ((Dem_EventIdType)55)
#define DemConf_DemEventParameter_IOHWAB_E_WRONG_STATE     ((Dem_EventIdType)56)
#define DemConf_DemEventParameter_IOHWAB_E_WRONG_SETTING   ((Dem_EventIdType)57)
#define DemConf_DemEventParameter_IOHWAB_E_WRONG_PARAM     ((Dem_EventIdType)58)
#define DemConf_DemEventParameter_IOHWAB_E_SETUP_FAIL      ((Dem_EventIdType)59)
#define DemConf_DemEventParameter_IOHWAB_E_BUSY            ((Dem_EventIdType)60)
#define DemConf_DemEventParameter_IOHWAB_E_PROC_FAIL       ((Dem_EventIdType)61)
#define DemConf_DemEventParameter_CANCM_E_BAT_FAIL         ((Dem_EventIdType)62)
#define DemConf_DemEventParameter_RAMTST_E_RAM_FAILURE     ((Dem_EventIdType)63)
#define DemConf_DemEventParameter_ETHTRCV_E_ACCESS         ((Dem_EventIdType)64)
#define DemConf_DemEventParameter_ETHSM_E_LINK_DOWN        ((Dem_EventIdType)65)
#define DemConf_DemEventParameter_WDG_76_ACW_E_DISABLE_REJECTED\
  ((Dem_EventIdType)66)
#define DemConf_DemEventParameter_WDG_76_ACW_E_MODE_FAILED ((Dem_EventIdType)67)
#define DemConf_DemEventParameter_CANSM_E_MODE_CHANGE_PROJECT ((Dem_EventIdType)68)
#define DemConf_DemEventParameter_REGMON_E_REG_FAILURE     ((Dem_EventIdType)69)

/* The handles for each EnableCondition configured */
#define DemConf_DemEnableCondition_DemEnableCondition     \
  ((Dem_EnableConditionIdType)0)

/* The handles for each Indicator configured */
#define DemConf_DemIndicator_DemIndicator_0                ((Dem_IndicatorIdType)0)
#define DemConf_DemIndicator_DemIndicator_1                ((Dem_IndicatorIdType)1)

/*******************************************************************************
**                      Type Definitions                                      **
*******************************************************************************/
/* The type definition is generated as uint8 or uint16 based on the number of
 * Event Status functions for the event configured */

typedef uint16 Dem_NumOfEvtStatFctsType;

/* The type definition is generated as uint8 or uint16 based on the number of
 * DTC status functions configured for the DTC */

typedef uint8 Dem_NumOfDtcInitMOFType;

/* The type definition is generated as uint8 or uint16 based on the
   multiplicity of the configuration container DemRatioId */



/* polyspace:end<MISRA-C:1.1:Not a defect:Justify with annotations> Necessary in logic */

#endif /* DEM_CFG_H */
/*******************************************************************************
**                      End of File                                           **
*******************************************************************************/
