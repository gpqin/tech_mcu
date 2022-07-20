/*
 **************************************************************************
 * File Name    : scm_board.h
 * Description  : Header file for SCM_EVB board
 *              : 1. Set of firmware functions to manage Leds, push-button and COM ports.
 *                2. initialize Delay Function and USB
 * Date         : 2018-11-28
 * Version      : V1.0.2
 */
/****************** (C) COPYRIGHT 2018 SC *********END OF FILE*********/

#ifndef __SCM_BOARD_H
#define __SCM_BOARD_H
#include <scm4xx.h>
/*
* This header include define support list:
* 	1. SCM402F_EVB V1.0 Board
* 	2. SCM403C_EVB V1.0 Board
* 	3. SCM402L_EVB V1.0 Board
* 	4. SCM402P_EVB V1.0 Board
*   5. SCM402FA_EVB V1.0 Board
*   6. SCM402FB_EVB V1.0 Board
*   7. SCM402GA_EVB V1.0 Board
* if define SCM402F_EVB_V1_0, the header file support SCM402F_EVB V1.0 Board
* if define SCM403C_EVB_V1_0, the header file support SCM403C_EVB V1.0 Board
* if define SCM402L_EVB_V1_0, the header file support SCM402L_EVB V1.0 Board
* if define SCM402P_EVB_V1_0, the header file support SCM402P_EVB V1.0 Board
* if define SCM402FA_EVB_V1_0, the header file support SCM402FA_EVB V1.0 Board
* if define SCM402FB_EVB_V1_0, the header file support SCM402FB_EVB V1.0 Board
* if define SCM402GA_EVB_V1_0, the header file support SCM402GA_EVB V1.0 Board
*/
#if !defined (SCM402F_EVB_V1_0) && !defined (SCM403C_EVB_V1_0) && \
    !defined (SCM402L_EVB_V1_0) && !defined (SCM402P_EVB_V1_0) && \
    !defined (SCM402FA_EVB_V1_0)&& !defined (SCM402FB_EVB_V1_0)&& \
    !defined (SCM402GA_EVB_V1_0)
#error "Please select first the board SCM_EVB device used in your application (in scm_board.h file)"
#endif


/*define usb pin*/
#define USB_DP_PIN          GPIO_Pins_12
#define USB_DM_PIN          GPIO_Pins_11

#define USB_GPIO            GPIOA
#define USB_GPIO_RCC_CLK    RCC_APB2PERIPH_GPIOA

/*SCM_EVB LED*/
typedef enum
{
  LED1 = 0,
  LED2,
  LED3,
  LED4
}LED_Type;    

#define LED_NUM     4

#if defined (SCM403C_EVB_V1_0)
/*have no LED1*/
#define LED1_PIN                0
#define LED1_GPIO               NULL
#define LED1_GPIO_RCC_CLK       0

#define LED2_PIN                GPIO_Pins_6
#define LED2_GPIO               GPIOF
#define LED2_GPIO_RCC_CLK       RCC_APB2PERIPH_GPIOF

#define LED3_PIN                GPIO_Pins_11
#define LED3_GPIO               GPIOB
#define LED3_GPIO_RCC_CLK       RCC_APB2PERIPH_GPIOB

#define LED4_PIN                GPIO_Pins_5
#define LED4_GPIO               GPIOB
#define LED4_GPIO_RCC_CLK       RCC_APB2PERIPH_GPIOB
#endif

#if defined (SCM402F_EVB_V1_0) || defined (SCM402P_EVB_V1_0) || \
    defined (SCM402FA_EVB_V1_0)|| defined (SCM402FB_EVB_V1_0)|| \
    defined (SCM402GA_EVB_V1_0)
/*have no LED1*/
#define LED1_PIN                0
#define LED1_GPIO               NULL
#define LED1_GPIO_RCC_CLK       0

#define LED2_PIN                GPIO_Pins_13
#define LED2_GPIO               GPIOD
#define LED2_GPIO_RCC_CLK       RCC_APB2PERIPH_GPIOD

#define LED3_PIN                GPIO_Pins_14
#define LED3_GPIO               GPIOD
#define LED3_GPIO_RCC_CLK       RCC_APB2PERIPH_GPIOD

#define LED4_PIN                GPIO_Pins_15
#define LED4_GPIO               GPIOD
#define LED4_GPIO_RCC_CLK       RCC_APB2PERIPH_GPIOD
#endif

#if defined (SCM402L_EVB_V1_0)
/*have no LED1*/
#define LED1_PIN                0
#define LED1_GPIO               NULL
#define LED1_GPIO_RCC_CLK       0

#define LED2_PIN                GPIO_Pins_14
#define LED2_GPIO               GPIOB
#define LED2_GPIO_RCC_CLK       RCC_APB2PERIPH_GPIOB

#define LED3_PIN                GPIO_Pins_11
#define LED3_GPIO               GPIOB
#define LED3_GPIO_RCC_CLK       RCC_APB2PERIPH_GPIOB

#define LED4_PIN                GPIO_Pins_5
#define LED4_GPIO               GPIOB
#define LED4_GPIO_RCC_CLK       RCC_APB2PERIPH_GPIOB
#endif
/*End LED define*/


/*define button*/
typedef enum
{
  BUTTON_WAKEUP = 0,
  BUTTON_USER_KEY,
  BUTTON_KEY1_DOWN,
  BUTTON_KEY2_LEFT,   
  NO_BUTTON    
}BUTTON_Type;

#define BUTTON_NUM  2

#define BUTTON_WAKEUP_PIN              GPIO_Pins_0
#define BUTTON_WAKEUP_GPIO             GPIOA
#define BUTTON_WAKEUP_RCC_CLK          RCC_APB2PERIPH_GPIOA

#define BUTTON_USER_KEY_PIN            GPIO_Pins_13
#define BUTTON_USER_KEY_GPIO           GPIOC
#define BUTTON_USER_KEY_RCC_CLK        RCC_APB2PERIPH_GPIOC

/*end define button*/
#if defined (SCM402F_EVB_V1_0) || defined (SCM402L_EVB_V1_0) || \
    defined (SCM402P_EVB_V1_0) || defined (SCM402FA_EVB_V1_0)|| \
    defined (SCM402FB_EVB_V1_0)|| defined (SCM402GA_EVB_V1_0)
/*Audio DAC OUTPUT GPIO Pin*/
#define M402_AUDIO_DAC_OUTPIN          GPIO_Pins_4
#endif



int SCM_Board_Init(void);
void SCM_USB_GPIO_init(void);

/*Led Operation function*/
void SCM_LEDn_Init(LED_Type led);
void SCM_LEDn_ON(LED_Type led);
void SCM_LEDn_OFF(LED_Type led);
void SCM_LEDn_Toggle(LED_Type led);

/*Button Operation function*/
void SCM_BUTTON_Init(BUTTON_Type button);
BUTTON_Type SCM_BUTTON_Press(void);
uint8_t SCM_BUTTON_State(BUTTON_Type button);

//void UART_Print_Init(uint32_t bound);

/*Delay function*/
void Delay_init(void);
void Delay_us(u32 nus);
void Delay_ms(u16 nms);
void Delay_sec(u16 sec);
#endif
