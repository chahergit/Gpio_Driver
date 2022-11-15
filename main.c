/**
  ******************************************************************************
  * @file    main.c
  * @author  khlifi chaher
  * @brief   GPIO DRIVER
  * @version V1.0.0
  * @date    15-11-2022
  *****************************************************************************/

/* Includes ------------------------------------------------------------------*/

#include "GPIO.h"
 



int main()
{
   GPIO_Clock_Enable(GPIOD);
   GPIO_Config(GPIOD, PIN2 , OUTPUT, OUTPUT_PUSH_PULL);
  
   while(1)
   {
   }
  
}

/**************************************END OF FILE**************************************/