/**
  ******************************************************************************
  * @file    USB_Device/VirtualComPort_loopback/src/main.c
  * @author  SC
  * @version V1.1.2
  * @date    2019-01-04
  * @brief   VirtualComPort loopback Demo main file
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

#include <scm4xx.h>

#include "scm_board.h"

/*delay macros*/
#define STEP_DELAY_MS	500
/*delay variable*/
static __IO float fac_us;
static __IO float fac_ms;

/**
  * @brief  initialize Delay function   
  * @param  None
  * @retval None
  */		   
void Delay_init()
{
  /*Config Systick*/
  SysTick_CLKSourceConfig(SysTick_CLKSource_HCLK_Div8);
  fac_us=(float)SystemCoreClock/(8 * 1000000);
  fac_ms=fac_us*1000;
}

/**
  * @brief  Inserts a delay time.
  * @param  nus: specifies the delay time length, in microsecond.
  * @retval None
  */
void Delay_us(u32 nus)
{
  u32 temp;
  SysTick->LOAD = (u32)(nus*fac_us);
  SysTick->VAL = 0x00;
  SysTick->CTRL |= SysTick_CTRL_ENABLE_Msk ;
  do
  {
    temp = SysTick->CTRL;
  }while((temp & 0x01) &&! (temp & (1<<16)));

  SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;
  SysTick->VAL = 0X00;
}
	    								  
/**
  * @brief  Inserts a delay time.
  * @param  nms: specifies the delay time length, in milliseconds.
  * @retval None
  */
void Delay_ms(u16 nms)
{
  u32 temp;
  while(nms)
  {
    if(nms > STEP_DELAY_MS)
    {
      SysTick->LOAD = (u32)(STEP_DELAY_MS * fac_ms);
      nms -= STEP_DELAY_MS;
    }
    else
    {
      SysTick->LOAD = (u32)(nms * fac_ms);
      nms = 0;
    }
    SysTick->VAL = 0x00;
    SysTick->CTRL |= SysTick_CTRL_ENABLE_Msk;
    do
    {
      temp = SysTick->CTRL;
    }while( (temp & 0x01) && !(temp & (1<<16)) );

    SysTick->CTRL &= ~SysTick_CTRL_ENABLE_Msk;
    SysTick->VAL = 0X00;
  }
}

void TestIoInt(void)
{
	GPIO_InitType io;
	GPIO_StructInit(&io);
	RCC_APB2PeriphClockCmd(RCC_APB2PERIPH_GPIOE,ENABLE);
	io.GPIO_Pins = GPIO_Pins_12;               /*!< Specifies the GPIO pins to be configured.
																						This parameter can be any value of @ref GPIO_pins_define */
	io.GPIO_MaxSpeed = GPIO_MaxSpeed_10MHz;  /*!< Specifies the speed for the selected pins.
																							This parameter can be a value of @ref GPIOMaxSpeed_Type */
	io.GPIO_Mode = GPIO_Mode_OUT_PP;       
	GPIO_Init(GPIOA,&io);
}

void TestIoOut(u8 high)
{
	if (high) 
	{
		GPIO_SetBits(GPIOE, GPIO_Pins_12);
	} 
	else 
	{
		GPIO_ResetBits(GPIOE, GPIO_Pins_12);
	}
}

int main(void)
{		
    TestIoInt();
    Delay_init();
   	while(1)
    {
        Delay_ms(1000);
    }	   										    			    
}


