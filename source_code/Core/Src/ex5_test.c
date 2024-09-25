#include "ex5_test.h"

int led_status1 = 0, red_count1 = 4, green_count1 = 2, yellow_count1 = 1;
int led_status2 = 2, red_count2 = 4, green_count2 = 2, yellow_count2 = 1;
void ex5_run(){
	switch(led_status1){
	case 0:
		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , GPIO_PIN_RESET ) ;  /*green1 on*/
		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , GPIO_PIN_SET ) ;
		display7SEG1(green_count1);
		green_count1--;
		break;
	case 1:
		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , GPIO_PIN_SET ) ;  /*yellow1 on*/
		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , GPIO_PIN_RESET ) ;
		display7SEG1(yellow_count1);
		yellow_count1--;
		break;
	case 2:
		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , GPIO_PIN_RESET ) ;  /*red1 on*/
		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , GPIO_PIN_RESET ) ;
		display7SEG1(red_count1);
		red_count1--;
		break;
	}

	switch(led_status2){
	case 0:
		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , GPIO_PIN_RESET ) ;  /*green2 on*/
		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , GPIO_PIN_SET ) ;
		display7SEG2(green_count2);
		green_count2--;
		break;
	case 1:
		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , GPIO_PIN_SET ) ;  /*yellow2 on*/
		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , GPIO_PIN_RESET ) ;
		display7SEG2(yellow_count2);
		yellow_count2--;
		break;
	case 2:
		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , GPIO_PIN_RESET ) ;  /*red2 on*/
		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , GPIO_PIN_RESET ) ;
		display7SEG2(red_count2);
		red_count2--;
		break;
	}

	HAL_Delay(1000);

	if(red_count1 < 0){
		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , GPIO_PIN_SET ) ;
		led_status1 = 0;
		red_count1 = 4;
	}
	if(green_count1 < 0){
		HAL_GPIO_WritePin ( LED_GREEN1_GPIO_Port , LED_GREEN1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , GPIO_PIN_SET ) ;
		led_status1++;
		green_count1 = 2;
	}
	if(yellow_count1 < 0){
		HAL_GPIO_WritePin ( LED_YELLOW1_GPIO_Port , LED_YELLOW1_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED_RED1_GPIO_Port , LED_RED1_Pin , GPIO_PIN_SET ) ;
		led_status1++;
		yellow_count1 = 1;

	}


	if(red_count2 < 0){
		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , GPIO_PIN_SET ) ;
		led_status2 = 0;
		red_count2 = 4;
	}
	if(green_count2 < 0){
		HAL_GPIO_WritePin ( LED_GREEN2_GPIO_Port , LED_GREEN2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , GPIO_PIN_SET ) ;
		led_status2++;
		green_count2 = 2;
	}
	if(yellow_count2 < 0){
		HAL_GPIO_WritePin ( LED_YELLOW2_GPIO_Port , LED_YELLOW2_Pin , GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( LED_RED2_GPIO_Port , LED_RED2_Pin , GPIO_PIN_SET ) ;
		led_status2++;
		yellow_count2 = 1;
	}
}
