/*
 * ex3_test.c
 *
 *  Created on: Sep 25, 2024
 *      Author: Asus
 */

#include "ex3_test.h"

void ex3_run()
{
	  HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , GPIO_PIN_RESET ) ;
	  HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , GPIO_PIN_RESET ) ;  /*green2 on*/
	  HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , GPIO_PIN_SET ) ;

	  HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , GPIO_PIN_SET ) ;
	  HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , GPIO_PIN_RESET ) ;  /*red1 on*/
	  HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , GPIO_PIN_RESET ) ;

	  HAL_Delay (3000) ;

	  HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , GPIO_PIN_RESET ) ;
	  HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , GPIO_PIN_SET ) ;  /*yellow2 on*/
	  HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , GPIO_PIN_RESET ) ;

	  HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , GPIO_PIN_SET ) ;
	  HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , GPIO_PIN_RESET ) ;  /*red1 on*/
	  HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , GPIO_PIN_RESET ) ;

	  HAL_Delay (2000) ;

	  HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , GPIO_PIN_SET ) ;
	  HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , GPIO_PIN_RESET ) ;  /*red2 on*/
	  HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , GPIO_PIN_RESET ) ;

	  HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , GPIO_PIN_RESET ) ;
	  HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , GPIO_PIN_RESET ) ;  /*green1 on*/
	  HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , GPIO_PIN_SET ) ;

	  HAL_Delay (3000) ;

	  HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , GPIO_PIN_SET ) ;
	  HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , GPIO_PIN_RESET ) ;  /*red2 on*/
	  HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , GPIO_PIN_RESET ) ;

	  HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , GPIO_PIN_RESET ) ;
	  HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , GPIO_PIN_SET ) ;  /*yellow1 on*/
	  HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , GPIO_PIN_RESET ) ;

	  HAL_Delay (2000) ;
}
