/*
 * LCD_STM32.h
 *
 *  Created on: Jan 25, 2023
 *      Author: HP
 */

#ifndef INC_LCD_STM32_H_
#define INC_LCD_STM32_H_

#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"
#include "main.h"


#define E_ON   HAL_GPIO_WritePin(GPIOA, E_Pin, 1);
#define E_OFF  HAL_GPIO_WritePin(GPIOA, E_Pin, 0);

#define RS_ON HAL_GPIO_WritePin(GPIOA, RS_Pin, 1);
#define RS_OFF HAL_GPIO_WritePin(GPIOA, RS_Pin, 0);

#define D4_ON  HAL_GPIO_WritePin(GPIOA, D4_Pin, 1);
#define D4_OFF HAL_GPIO_WritePin(GPIOA, D4_Pin, 0);

#define D5_ON HAL_GPIO_WritePin(GPIOA, D5_Pin, 1);
#define D5_OFF HAL_GPIO_WritePin(GPIOA,D5_Pin, 0);

#define D6_ON HAL_GPIO_WritePin(GPIOA,D6_Pin, 1);
#define D6_OFF HAL_GPIO_WritePin(GPIOA,D6_Pin, 0);

#define D7_ON HAL_GPIO_WritePin(GPIOA,D7_Pin, 1);
#define D7_OFF HAL_GPIO_WritePin(GPIOA,D7_Pin, 0);


typedef enum{
	Fila1=0,
	Fila2,
	Fila3,
	Fila4
}Ubicacion;


void LCD_STM32_Cmd(uint8_t a);
void LCD_STM32_DataBus(uint8_t a);
void LCD_STM32_Init(void);
void LCD_STM32_Set_Cuzrsor(uint8_t x,Ubicacion y);
void LCD_STM32_Print_Char(char c);
void LCD_STM32_Print_String(char *c);
void LCD_STM32_New_Char(uint8_t a,uint8_t b,uint8_t c,uint8_t d ,uint8_t e ,uint8_t f,uint8_t g,uint8_t h,uint8_t i);
void LCD_STM32_Print_New_Char(uint8_t a);
void LCD_STM32_Clear(void);
void LCD_STM32_Home(void);

#endif /* INC_LCD_STM32_H_ */
