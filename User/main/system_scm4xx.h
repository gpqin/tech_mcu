/**
  ******************************************************************************
  * @file    USB_Device/VirtualComPort_loopback/inc/system_scm4xx.h
  * @author  SC
  * @version V1.1.2
  * @date    2019-01-04
  * @brief   CMSIS Cortex-M4 system header file.
  ******************************************************************************
  * @attention
  *
  * THE PRESENT FIRMWARE WHICH IS FOR GUIDANCE ONLY AIMS AT PROVIDING CUSTOMERS
  * WITH CODING INFORMATION REGARDING THEIR PRODUCTS IN ORDER FOR THEM TO SAVE
  * TIME. AS A RESULT, SCTEK SHALL NOT BE HELD LIABLE FOR ANY
  * DIRECT, INDIRECT OR CONSEQUENTIAL DAMAGES WITH RESPECT TO ANY CLAIMS ARISING
  * FROM THE CONTENT OF SUCH FIRMWARE AND/OR THE USE MADE BY CUSTOMERS OF THE
  * CODING INFORMATION CONTAINED HEREIN IN CONNECTION WITH THEIR PRODUCTS.
  *
  * <h2><center>&copy; COPYRIGHT 2018 SC</center></h2>
  ******************************************************************************
  */

/** @addtogroup CMSIS
  * @{
  */

/** @addtogroup scm4xx_system
  * @{
  */

/**
  * @brief Define to prevent recursive inclusion
  */
#ifndef __SYSTEM_SCM4xx_H
#define __SYSTEM_SCM4xx_H

#ifdef __cplusplus
extern "C" {
#endif

/** @addtogroup SCM4xx_System_Includes
  * @{
  */

/**
  * @}
  */


/** @addtogroup SCM4xx_System_Exported_types
  * @{
  */

extern uint32_t SystemCoreClock;          /*!< System Clock Frequency (Core Clock) */

/**
  * @}
  */

/** @addtogroup SCM4xx_System_Exported_Constants
  * @{
  */

/**
  * @}
  */

/** @addtogroup SCM4xx_System_Exported_Macros
  * @{
  */
#define HSE_STABLE_DELAY             (5000u)
#define PLL_STABLE_DELAY             (500u)
/**
  * @}
  */

/** @addtogroup SCM4xx_System_Exported_Functions
  * @{
  */

extern void SystemInit(void);
extern void SystemCoreClockUpdate(void);
/**
  * @}
  */

#ifdef __cplusplus
}
#endif

#endif /*__SYSTEM_SCM4xx_H */

/**
  * @}
  */

/**
  * @}
  */

