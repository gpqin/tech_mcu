/**
 **************************************************************************
 * File Name    : scm4xx_conf.h
 * Description  : scm4xx configuration file
 * Date         : 2018-02-26
 * Version      : V1.0.4
 **************************************************************************
 */


/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __SCM4xx_CONF_H
#define __SCM4xx_CONF_H

/* Includes ------------------------------------------------------------------*/
/* Uncomment/Comment the line below to enable/disable peripheral header file inclusion */
#include "scm4xx_adc.h"
#include "scm4xx_bkp.h"
#include "scm4xx_can.h"
#include "scm4xx_crc.h"
#include "scm4xx_dac.h"
#include "scm4xx_dbgmcu.h"
#include "scm4xx_dma.h"
#include "scm4xx_exti.h"
#include "scm4xx_flash.h"
#include "scm4xx_xmc.h"
#include "scm4xx_gpio.h"
#include "scm4xx_i2c.h"
#include "scm4xx_iwdg.h"
#include "scm4xx_pwr.h"
#include "scm4xx_rcc.h"
#include "scm4xx_acc.h"
#include "scm4xx_ertc.h"
#include "scm4xx_comp.h"
#include "scm4xx_rtc.h"
#include "scm4xx_sdio.h"
#include "scm4xx_spi.h"
#include "scm4xx_tim.h"
#include "scm4xx_usart.h"
#include "scm4xx_wwdg.h"
#include "misc.h"
/* High level functions for NVIC and SysTick (add-on to CMSIS functions) */

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/
/* Uncomment the line below to expanse the "assert_param" macro in the
   Standard Peripheral Library drivers code */
/* #define USE_FULL_ASSERT    1 */

/* Exported macro ------------------------------------------------------------*/
#ifdef  USE_FULL_ASSERT

/**
  * @brief  The assert_param macro is used for function's parameters check.
  * @param  expr: If expr is false, it calls assert_failed function which reports
  *         the name of the source file and the source line number of the call
  *         that failed. If expr is true, it returns no value.
  * @retval None
  */
#define assert_param(expr) ((expr) ? (void)0 : assert_failed((uint8_t *)__FILE__, __LINE__))
/* Exported functions ------------------------------------------------------- */
void assert_failed(uint8_t* file, uint32_t line);
#else
#define assert_param(expr) ((void)0)
#endif /* USE_FULL_ASSERT */

#endif /* __SCM4xx_CONF_H */


