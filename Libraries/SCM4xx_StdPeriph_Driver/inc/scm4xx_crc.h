/**
 **************************************************************************
 * File Name    : scm4xx_crc.h
 * Description  : scm4xx CRC header file
 * Date         : 2018-10-08
 * Version      : V1.0.5
 **************************************************************************
 */


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SCM4xx_CRC_H
#define __SCM4xx_CRC_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "scm4xx.h"

/** @addtogroup scm4xx_StdPeriph_Driver
  * @{
  */

/** @addtogroup CRC
  * @{
  */

/** @defgroup CRC_Exported_Types
  * @{
  */

/**
  * @}
  */

/** @defgroup CRC_Exported_Constants
  * @{
  */

/**
  * @}
  */

/** @defgroup CRC_Exported_Macros
  * @{
  */

/**
  * @}
  */

/** @defgroup CRC_Exported_Functions
  * @{
  */

void CRC_ResetDT(void);
uint32_t CRC_CalculateCRC(uint32_t Data);
uint32_t CRC_CalculateBlkCRC(uint32_t pBuffer[], uint32_t BufferLength);
uint32_t CRC_GetCRC(void);
void CRC_SetIDTReg(uint8_t IDValue);
uint8_t CRC_GetIDTReg(void);

#ifdef __cplusplus
}
#endif

#endif /* __SCM4xx_CRC_H */
/**
  * @}
  */

/**
  * @}
  */

/**
  * @}
  */


