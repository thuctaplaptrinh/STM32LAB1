#include "ex4_test.h"

void display7SEG1(int num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin ( SEG0_1_GPIO_Port ,SEG0_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_1_GPIO_Port ,SEG1_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_1_GPIO_Port ,SEG2_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_1_GPIO_Port ,SEG3_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_1_GPIO_Port ,SEG4_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_1_GPIO_Port ,SEG5_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_1_GPIO_Port ,SEG6_1_Pin, GPIO_PIN_SET ) ;
		break;
	case 1:
		HAL_GPIO_WritePin ( SEG0_1_GPIO_Port ,SEG0_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG1_1_GPIO_Port ,SEG1_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_1_GPIO_Port ,SEG2_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_1_GPIO_Port ,SEG3_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG4_1_GPIO_Port ,SEG4_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_1_GPIO_Port ,SEG5_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_1_GPIO_Port ,SEG6_1_Pin, GPIO_PIN_SET ) ;
		break;
	case 2:
		HAL_GPIO_WritePin ( SEG0_1_GPIO_Port ,SEG0_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_1_GPIO_Port ,SEG1_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_1_GPIO_Port ,SEG2_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG3_1_GPIO_Port ,SEG3_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_1_GPIO_Port ,SEG4_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_1_GPIO_Port ,SEG5_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_1_GPIO_Port ,SEG6_1_Pin, GPIO_PIN_RESET ) ;
		break;
	case 3:
		HAL_GPIO_WritePin ( SEG0_1_GPIO_Port ,SEG0_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_1_GPIO_Port ,SEG1_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_1_GPIO_Port ,SEG2_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_1_GPIO_Port ,SEG3_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_1_GPIO_Port ,SEG4_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_1_GPIO_Port ,SEG5_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_1_GPIO_Port ,SEG6_1_Pin, GPIO_PIN_RESET ) ;
		break;
	case 4:
		HAL_GPIO_WritePin ( SEG0_1_GPIO_Port ,SEG0_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG1_1_GPIO_Port ,SEG1_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_1_GPIO_Port ,SEG2_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_1_GPIO_Port ,SEG3_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG4_1_GPIO_Port ,SEG4_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_1_GPIO_Port ,SEG5_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_1_GPIO_Port ,SEG6_1_Pin, GPIO_PIN_RESET ) ;
		break;
	case 5:
		HAL_GPIO_WritePin ( SEG0_1_GPIO_Port ,SEG0_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_1_GPIO_Port ,SEG1_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG2_1_GPIO_Port ,SEG2_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_1_GPIO_Port ,SEG3_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_1_GPIO_Port ,SEG4_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_1_GPIO_Port ,SEG5_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_1_GPIO_Port ,SEG6_1_Pin, GPIO_PIN_RESET ) ;
		break;
	case 6:
		HAL_GPIO_WritePin ( SEG0_1_GPIO_Port ,SEG0_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_1_GPIO_Port ,SEG1_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG2_1_GPIO_Port ,SEG2_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_1_GPIO_Port ,SEG3_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_1_GPIO_Port ,SEG4_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_1_GPIO_Port ,SEG5_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_1_GPIO_Port ,SEG6_1_Pin, GPIO_PIN_RESET ) ;
		break;
	case 7:
		HAL_GPIO_WritePin ( SEG0_1_GPIO_Port ,SEG0_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_1_GPIO_Port ,SEG1_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_1_GPIO_Port ,SEG2_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_1_GPIO_Port ,SEG3_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG4_1_GPIO_Port ,SEG4_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_1_GPIO_Port ,SEG5_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_1_GPIO_Port ,SEG6_1_Pin, GPIO_PIN_SET ) ;
		break;
	case 8:
		HAL_GPIO_WritePin ( SEG0_1_GPIO_Port ,SEG0_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_1_GPIO_Port ,SEG1_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_1_GPIO_Port ,SEG2_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_1_GPIO_Port ,SEG3_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_1_GPIO_Port ,SEG4_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_1_GPIO_Port ,SEG5_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_1_GPIO_Port ,SEG6_1_Pin, GPIO_PIN_RESET ) ;
		break;
	case 9:
		HAL_GPIO_WritePin ( SEG0_1_GPIO_Port ,SEG0_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_1_GPIO_Port ,SEG1_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_1_GPIO_Port ,SEG2_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_1_GPIO_Port ,SEG3_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_1_GPIO_Port ,SEG4_1_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_1_GPIO_Port ,SEG5_1_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_1_GPIO_Port ,SEG6_1_Pin, GPIO_PIN_RESET ) ;
		break;
	default:
		break;
	}
}

void display7SEG2(int num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin ( SEG0_2_GPIO_Port ,SEG0_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_2_GPIO_Port ,SEG1_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_2_GPIO_Port ,SEG2_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_2_GPIO_Port ,SEG3_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_2_GPIO_Port ,SEG4_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_2_GPIO_Port ,SEG5_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_2_GPIO_Port ,SEG6_2_Pin, GPIO_PIN_SET ) ;
		break;
	case 1:
		HAL_GPIO_WritePin ( SEG0_2_GPIO_Port ,SEG0_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG1_2_GPIO_Port ,SEG1_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_2_GPIO_Port ,SEG2_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_2_GPIO_Port ,SEG3_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG4_2_GPIO_Port ,SEG4_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_2_GPIO_Port ,SEG5_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_2_GPIO_Port ,SEG6_2_Pin, GPIO_PIN_SET ) ;
		break;
	case 2:
		HAL_GPIO_WritePin ( SEG0_2_GPIO_Port ,SEG0_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_2_GPIO_Port ,SEG1_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_2_GPIO_Port ,SEG2_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG3_2_GPIO_Port ,SEG3_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_2_GPIO_Port ,SEG4_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_2_GPIO_Port ,SEG5_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_2_GPIO_Port ,SEG6_2_Pin, GPIO_PIN_RESET ) ;
		break;
	case 3:
		HAL_GPIO_WritePin ( SEG0_2_GPIO_Port ,SEG0_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_2_GPIO_Port ,SEG1_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_2_GPIO_Port ,SEG2_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_2_GPIO_Port ,SEG3_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_2_GPIO_Port ,SEG4_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_2_GPIO_Port ,SEG5_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_2_GPIO_Port ,SEG6_2_Pin, GPIO_PIN_RESET ) ;
		break;
	case 4:
		HAL_GPIO_WritePin ( SEG0_2_GPIO_Port ,SEG0_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG1_2_GPIO_Port ,SEG1_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_2_GPIO_Port ,SEG2_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_2_GPIO_Port ,SEG3_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG4_2_GPIO_Port ,SEG4_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_2_GPIO_Port ,SEG5_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_2_GPIO_Port ,SEG6_2_Pin, GPIO_PIN_RESET ) ;
		break;
	case 5:
		HAL_GPIO_WritePin ( SEG0_2_GPIO_Port ,SEG0_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_2_GPIO_Port ,SEG1_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG2_2_GPIO_Port ,SEG2_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_2_GPIO_Port ,SEG3_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_2_GPIO_Port ,SEG4_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_2_GPIO_Port ,SEG5_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_2_GPIO_Port ,SEG6_2_Pin, GPIO_PIN_RESET ) ;
		break;
	case 6:
		HAL_GPIO_WritePin ( SEG0_2_GPIO_Port ,SEG0_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_2_GPIO_Port ,SEG1_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG2_2_GPIO_Port ,SEG2_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_2_GPIO_Port ,SEG3_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_2_GPIO_Port ,SEG4_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_2_GPIO_Port ,SEG5_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_2_GPIO_Port ,SEG6_2_Pin, GPIO_PIN_RESET ) ;
		break;
	case 7:
		HAL_GPIO_WritePin ( SEG0_2_GPIO_Port ,SEG0_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_2_GPIO_Port ,SEG1_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_2_GPIO_Port ,SEG2_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_2_GPIO_Port ,SEG3_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG4_2_GPIO_Port ,SEG4_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_2_GPIO_Port ,SEG5_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG6_2_GPIO_Port ,SEG6_2_Pin, GPIO_PIN_SET ) ;
		break;
	case 8:
		HAL_GPIO_WritePin ( SEG0_2_GPIO_Port ,SEG0_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_2_GPIO_Port ,SEG1_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_2_GPIO_Port ,SEG2_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_2_GPIO_Port ,SEG3_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_2_GPIO_Port ,SEG4_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG5_2_GPIO_Port ,SEG5_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_2_GPIO_Port ,SEG6_2_Pin, GPIO_PIN_RESET ) ;
		break;
	case 9:
		HAL_GPIO_WritePin ( SEG0_2_GPIO_Port ,SEG0_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG1_2_GPIO_Port ,SEG1_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG2_2_GPIO_Port ,SEG2_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG3_2_GPIO_Port ,SEG3_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG4_2_GPIO_Port ,SEG4_2_Pin, GPIO_PIN_SET ) ;
		HAL_GPIO_WritePin ( SEG5_2_GPIO_Port ,SEG5_2_Pin, GPIO_PIN_RESET ) ;
		HAL_GPIO_WritePin ( SEG6_2_GPIO_Port ,SEG6_2_Pin, GPIO_PIN_RESET ) ;
		break;
	default:
		break;
	}
}

