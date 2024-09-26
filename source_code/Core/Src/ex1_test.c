/*
 * ex1_test.c
 *
 *  Created on: Sep 26, 2024
 *      Author: Asus
 */

#include "ex1_test.h"

void ex1_run()
{
	HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , GPIO_PIN_RESET ) ;
	HAL_Delay(2000);
	HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , GPIO_PIN_RESET ) ;
	HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , GPIO_PIN_SET ) ;
	HAL_Delay(2000);
}
