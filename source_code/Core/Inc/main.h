/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f1xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SEG0_1_Pin GPIO_PIN_0
#define SEG0_1_GPIO_Port GPIOA
#define LED_RED1_Pin GPIO_PIN_1
#define LED_RED1_GPIO_Port GPIOA
#define LED_YELLOW1_Pin GPIO_PIN_2
#define LED_YELLOW1_GPIO_Port GPIOA
#define LED_GREEN1_Pin GPIO_PIN_3
#define LED_GREEN1_GPIO_Port GPIOA
#define LED_RED2_Pin GPIO_PIN_4
#define LED_RED2_GPIO_Port GPIOA
#define LED_YELLOW2_Pin GPIO_PIN_5
#define LED_YELLOW2_GPIO_Port GPIOA
#define LED_GREEN2_Pin GPIO_PIN_6
#define LED_GREEN2_GPIO_Port GPIOA
#define SEG0_2_Pin GPIO_PIN_7
#define SEG0_2_GPIO_Port GPIOA
#define SEG3_1_Pin GPIO_PIN_0
#define SEG3_1_GPIO_Port GPIOB
#define CL_1_Pin GPIO_PIN_1
#define CL_1_GPIO_Port GPIOB
#define CL_2_Pin GPIO_PIN_2
#define CL_2_GPIO_Port GPIOB
#define CL_10_Pin GPIO_PIN_10
#define CL_10_GPIO_Port GPIOB
#define CL_11_Pin GPIO_PIN_11
#define CL_11_GPIO_Port GPIOB
#define CL_12_Pin GPIO_PIN_12
#define CL_12_GPIO_Port GPIOB
#define SEG4_1_Pin GPIO_PIN_13
#define SEG4_1_GPIO_Port GPIOB
#define SEG5_1_Pin GPIO_PIN_14
#define SEG5_1_GPIO_Port GPIOB
#define SEG6_1_Pin GPIO_PIN_15
#define SEG6_1_GPIO_Port GPIOB
#define SEG1_2_Pin GPIO_PIN_8
#define SEG1_2_GPIO_Port GPIOA
#define SEG2_2_Pin GPIO_PIN_9
#define SEG2_2_GPIO_Port GPIOA
#define SEG3_2_Pin GPIO_PIN_10
#define SEG3_2_GPIO_Port GPIOA
#define SEG4_2_Pin GPIO_PIN_11
#define SEG4_2_GPIO_Port GPIOA
#define SEG5_2_Pin GPIO_PIN_12
#define SEG5_2_GPIO_Port GPIOA
#define SEG6_2_Pin GPIO_PIN_13
#define SEG6_2_GPIO_Port GPIOA
#define SEG1_1_Pin GPIO_PIN_14
#define SEG1_1_GPIO_Port GPIOA
#define SEG2_1_Pin GPIO_PIN_15
#define SEG2_1_GPIO_Port GPIOA
#define CL_3_Pin GPIO_PIN_3
#define CL_3_GPIO_Port GPIOB
#define CL_4_Pin GPIO_PIN_4
#define CL_4_GPIO_Port GPIOB
#define CL_5_Pin GPIO_PIN_5
#define CL_5_GPIO_Port GPIOB
#define CL_6_Pin GPIO_PIN_6
#define CL_6_GPIO_Port GPIOB
#define CL_7_Pin GPIO_PIN_7
#define CL_7_GPIO_Port GPIOB
#define CL_8_Pin GPIO_PIN_8
#define CL_8_GPIO_Port GPIOB
#define CL_9_Pin GPIO_PIN_9
#define CL_9_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
