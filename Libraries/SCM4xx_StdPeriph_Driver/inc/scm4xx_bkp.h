/**
 **************************************************************************
 * File Name    : scm4xx_bkp.h
 * Description  : scm4xx BKP header file
 * Date         : 2018-02-26
 * Version      : V1.0.4
 **************************************************************************
 */


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SCM4xx_BKP_H
#define __SCM4xx_BKP_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "scm4xx.h"

/** @addtogroup scm4xx_StdPeriph_Driver
  * @{
  */

/** @addtogroup BKP
  * @{
  */

/** @defgroup BKP_Exported_Types
  * @{
  */

/**
  * @}
  */

/** @defgroup BKP_Exported_Constants
  * @{
  */

/** @defgroup Tamper_Pin_active_level
  * @{
  */

#define BKP_TamperPinLv_H                   ((uint16_t)0x0000)
#define BKP_TamperPinLv_L                   ((uint16_t)0x0001)
#define IS_BKP_TAMPER_PIN_LV(LV)            (((LV) == BKP_TamperPinLv_H) || \
                                             ((LV) == BKP_TamperPinLv_L))
/**
  * @}
  */

/** @defgroup RTC_output_source_to_output_on_the_Tamper_pin
  * @{
  */

#define BKP_RTCOutput_None                  ((uint16_t)0x0000)
#define BKP_RTCOutput_CalClk                ((uint16_t)0x0080)
#define BKP_RTCOutput_Alarm                 ((uint16_t)0x0100)
#define BKP_RTCOutput_Second                ((uint16_t)0x0300)
#define IS_BKP_RTC_OUTPUT_SEL(SEL)          (((SEL) == BKP_RTCOutput_None) || \
                                             ((SEL) == BKP_RTCOutput_CalClk) || \
                                             ((SEL) == BKP_RTCOutput_Alarm) || \
                                             ((SEL) == BKP_RTCOutput_Second))
/**
  * @}
  */

/** @defgroup Data_Backup_Register
  * @{
  */

#define BKP_DT1                             ((uint16_t)0x0004)
#define BKP_DT2                             ((uint16_t)0x0008)
#define BKP_DT3                             ((uint16_t)0x000C)
#define BKP_DT4                             ((uint16_t)0x0010)
#define BKP_DT5                             ((uint16_t)0x0014)
#define BKP_DT6                             ((uint16_t)0x0018)
#define BKP_DT7                             ((uint16_t)0x001C)
#define BKP_DT8                             ((uint16_t)0x0020)
#define BKP_DT9                             ((uint16_t)0x0024)
#define BKP_DT10                            ((uint16_t)0x0028)
#define BKP_DT11                            ((uint16_t)0x0040)
#define BKP_DT12                            ((uint16_t)0x0044)
#define BKP_DT13                            ((uint16_t)0x0048)
#define BKP_DT14                            ((uint16_t)0x004C)
#define BKP_DT15                            ((uint16_t)0x0050)
#define BKP_DT16                            ((uint16_t)0x0054)
#define BKP_DT17                            ((uint16_t)0x0058)
#define BKP_DT18                            ((uint16_t)0x005C)
#define BKP_DT19                            ((uint16_t)0x0060)
#define BKP_DT20                            ((uint16_t)0x0064)
#define BKP_DT21                            ((uint16_t)0x0068)
#define BKP_DT22                            ((uint16_t)0x006C)
#define BKP_DT23                            ((uint16_t)0x0070)
#define BKP_DT24                            ((uint16_t)0x0074)
#define BKP_DT25                            ((uint16_t)0x0078)
#define BKP_DT26                            ((uint16_t)0x007C)
#define BKP_DT27                            ((uint16_t)0x0080)
#define BKP_DT28                            ((uint16_t)0x0084)
#define BKP_DT29                            ((uint16_t)0x0088)
#define BKP_DT30                            ((uint16_t)0x008C)
#define BKP_DT31                            ((uint16_t)0x0090)
#define BKP_DT32                            ((uint16_t)0x0094)
#define BKP_DT33                            ((uint16_t)0x0098)
#define BKP_DT34                            ((uint16_t)0x009C)
#define BKP_DT35                            ((uint16_t)0x00A0)
#define BKP_DT36                            ((uint16_t)0x00A4)
#define BKP_DT37                            ((uint16_t)0x00A8)
#define BKP_DT38                            ((uint16_t)0x00AC)
#define BKP_DT39                            ((uint16_t)0x00B0)
#define BKP_DT40                            ((uint16_t)0x00B4)
#define BKP_DT41                            ((uint16_t)0x00B8)
#define BKP_DT42                            ((uint16_t)0x00BC)
#if defined (SCM402xx)
#define BKP_DT43                            ((uint16_t)0x00C0)
#define BKP_DT44                            ((uint16_t)0x00C4)
#define BKP_DT45                            ((uint16_t)0x00C8)
#define BKP_DT46                            ((uint16_t)0x00CC)
#define BKP_DT47                            ((uint16_t)0x00D0)
#define BKP_DT48                            ((uint16_t)0x00D4)
#define BKP_DT49                            ((uint16_t)0x00D8)
#define BKP_DT50                            ((uint16_t)0x00DC)
#define BKP_DT51                            ((uint16_t)0x00E0)
#define BKP_DT52                            ((uint16_t)0x00E4)
#define BKP_DT53                            ((uint16_t)0x00E8)
#define BKP_DT54                            ((uint16_t)0x00EC)
#define BKP_DT55                            ((uint16_t)0x00F0)
#define BKP_DT56                            ((uint16_t)0x00F4)
#define BKP_DT57                            ((uint16_t)0x00F8)
#define BKP_DT58                            ((uint16_t)0x00FC)
#define BKP_DT59                            ((uint16_t)0x0100)
#define BKP_DT60                            ((uint16_t)0x0104)
#define BKP_DT61                            ((uint16_t)0x0108)
#define BKP_DT62                            ((uint16_t)0x010C)
#define BKP_DT63                            ((uint16_t)0x0110)
#define BKP_DT64                            ((uint16_t)0x0114)
#endif


#if !defined (SCM402xx)
#define IS_BKP_DT(DT)                       (((DT) == BKP_DT1)  || ((DT) == BKP_DT2)  || ((DT) == BKP_DT3)  || \
                                             ((DT) == BKP_DT4)  || ((DT) == BKP_DT5)  || ((DT) == BKP_DT6)  || \
                                             ((DT) == BKP_DT7)  || ((DT) == BKP_DT8)  || ((DT) == BKP_DT9)  || \
                                             ((DT) == BKP_DT10) || ((DT) == BKP_DT11) || ((DT) == BKP_DT12) || \
                                             ((DT) == BKP_DT13) || ((DT) == BKP_DT14) || ((DT) == BKP_DT15) || \
                                             ((DT) == BKP_DT16) || ((DT) == BKP_DT17) || ((DT) == BKP_DT18) || \
                                             ((DT) == BKP_DT19) || ((DT) == BKP_DT20) || ((DT) == BKP_DT21) || \
                                             ((DT) == BKP_DT22) || ((DT) == BKP_DT23) || ((DT) == BKP_DT24) || \
                                             ((DT) == BKP_DT25) || ((DT) == BKP_DT26) || ((DT) == BKP_DT27) || \
                                             ((DT) == BKP_DT28) || ((DT) == BKP_DT29) || ((DT) == BKP_DT30) || \
                                             ((DT) == BKP_DT31) || ((DT) == BKP_DT32) || ((DT) == BKP_DT33) || \
                                             ((DT) == BKP_DT34) || ((DT) == BKP_DT35) || ((DT) == BKP_DT36) || \
                                             ((DT) == BKP_DT37) || ((DT) == BKP_DT38) || ((DT) == BKP_DT39) || \
                                             ((DT) == BKP_DT40) || ((DT) == BKP_DT41) || ((DT) == BKP_DT42))
#else
#define IS_BKP_DT(DT)                       (((DT) == BKP_DT1)  || ((DT) == BKP_DT2)  || ((DT) == BKP_DT3)  || \
                                             ((DT) == BKP_DT4)  || ((DT) == BKP_DT5)  || ((DT) == BKP_DT6)  || \
                                             ((DT) == BKP_DT7)  || ((DT) == BKP_DT8)  || ((DT) == BKP_DT9)  || \
                                             ((DT) == BKP_DT10) || ((DT) == BKP_DT11) || ((DT) == BKP_DT12) || \
                                             ((DT) == BKP_DT13) || ((DT) == BKP_DT14) || ((DT) == BKP_DT15) || \
                                             ((DT) == BKP_DT16) || ((DT) == BKP_DT17) || ((DT) == BKP_DT18) || \
                                             ((DT) == BKP_DT19) || ((DT) == BKP_DT20) || ((DT) == BKP_DT21) || \
                                             ((DT) == BKP_DT22) || ((DT) == BKP_DT23) || ((DT) == BKP_DT24) || \
                                             ((DT) == BKP_DT25) || ((DT) == BKP_DT26) || ((DT) == BKP_DT27) || \
                                             ((DT) == BKP_DT28) || ((DT) == BKP_DT29) || ((DT) == BKP_DT30) || \
                                             ((DT) == BKP_DT31) || ((DT) == BKP_DT32) || ((DT) == BKP_DT33) || \
                                             ((DT) == BKP_DT34) || ((DT) == BKP_DT35) || ((DT) == BKP_DT36) || \
                                             ((DT) == BKP_DT37) || ((DT) == BKP_DT38) || ((DT) == BKP_DT39) || \
                                             ((DT) == BKP_DT40) || ((DT) == BKP_DT41) || ((DT) == BKP_DT42) || \
                                             ((DT) == BKP_DT43) || ((DT) == BKP_DT44) || ((DT) == BKP_DT45) || \
                                             ((DT) == BKP_DT46) || ((DT) == BKP_DT47) || ((DT) == BKP_DT48) || \
                                             ((DT) == BKP_DT49) || ((DT) == BKP_DT50) || ((DT) == BKP_DT51) || \
                                             ((DT) == BKP_DT52) || ((DT) == BKP_DT53) || ((DT) == BKP_DT54) || \
                                             ((DT) == BKP_DT55) || ((DT) == BKP_DT56) || ((DT) == BKP_DT57) || \
                                             ((DT) == BKP_DT58) || ((DT) == BKP_DT59) || ((DT) == BKP_DT60) || \
                                             ((DT) == BKP_DT61) || ((DT) == BKP_DT62) || ((DT) == BKP_DT63) || \
                                             ((DT) == BKP_DT64))
#endif
#define IS_BKP_CAL_VAL(VAL)                 ((VAL) <= 0x7F)
/**
  * @}
  */

/**
  * @}
  */

/** @defgroup BKP_Exported_Macros
  * @{
  */

/**
  * @}
  */

/** @defgroup BKP_Exported_Functions
  * @{
  */

void BKP_Reset(void);
void BKP_TamperPinLvConfig(uint16_t BKP_TamperPinLevel);
void BKP_TamperPinCmd(FunctionalState NewState);
void BKP_IntConfig(FunctionalState NewState);
void BKP_RTCOutputConfig(uint16_t BKP_RTCOutputSource);
void BKP_SetRTCCalValue(uint8_t CalibrationValue);
void BKP_WriteBackupReg(uint16_t BKP_DR, uint16_t Data);
uint16_t BKP_ReadBackupReg(uint16_t BKP_DR);
FlagStatus BKP_GetFlagStatus(void);
void BKP_ClearFlag(void);
ITStatus BKP_GetIntStatus(void);
void BKP_ClearIntPendingBit(void);

#ifdef __cplusplus
}
#endif

#endif /* __SCM4xx_BKP_H */
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */


