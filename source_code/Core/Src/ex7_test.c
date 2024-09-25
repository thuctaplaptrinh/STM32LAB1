#include "ex7_test.h"
void clearAllClock()
{
	HAL_GPIO_WritePin ( CL_1_GPIO_Port ,CL_1_Pin, GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( CL_2_GPIO_Port ,CL_2_Pin, GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( CL_3_GPIO_Port ,CL_3_Pin, GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( CL_4_GPIO_Port ,CL_4_Pin, GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( CL_5_GPIO_Port ,CL_5_Pin, GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( CL_6_GPIO_Port ,CL_6_Pin, GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( CL_7_GPIO_Port ,CL_7_Pin, GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( CL_8_GPIO_Port ,CL_8_Pin, GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( CL_9_GPIO_Port ,CL_9_Pin, GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( CL_10_GPIO_Port ,CL_10_Pin, GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( CL_11_GPIO_Port ,CL_11_Pin, GPIO_PIN_SET ) ;
	HAL_GPIO_WritePin ( CL_12_GPIO_Port ,CL_12_Pin, GPIO_PIN_SET ) ;
}
