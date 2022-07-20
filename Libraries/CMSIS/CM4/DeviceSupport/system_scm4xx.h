/**
 **************************************************************************
 * File Name    : system_scm4xx.h
 * Description  : CMSIS Cortex-M4 system header file.
 * Date         : 2018-02-26
 * Version      : V1.0.4
 **************************************************************************
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

