/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define LCD_RESET_Pin GPIO_PIN_4
#define LCD_RESET_GPIO_Port GPIOC
#define LCD_DCX_Pin GPIO_PIN_5
#define LCD_DCX_GPIO_Port GPIOC
#define LCD_CS_Pin GPIO_PIN_0
#define LCD_CS_GPIO_Port GPIOB
#define LCD_BLK_Pin GPIO_PIN_1
#define LCD_BLK_GPIO_Port GPIOB
#define LED_3_Pin GPIO_PIN_10
#define LED_3_GPIO_Port GPIOE
#define LED_2_Pin GPIO_PIN_11
#define LED_2_GPIO_Port GPIOE
#define LED_1_Pin GPIO_PIN_12
#define LED_1_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */
#define LED_1_ON() 		HAL_GPIO_WritePin(GPIOE, LED_1_Pin, GPIO_PIN_RESET)
#define LED_1_OFF() 	HAL_GPIO_WritePin(GPIOE, LED_1_Pin, GPIO_PIN_SET)
#define LED_2_ON() 		HAL_GPIO_WritePin(GPIOE, LED_2_Pin, GPIO_PIN_RESET)
#define LED_2_OFF() 	HAL_GPIO_WritePin(GPIOE, LED_2_Pin, GPIO_PIN_SET)
#define LED_3_ON() 		HAL_GPIO_WritePin(GPIOE, LED_3_Pin, GPIO_PIN_RESET)
#define LED_3_OFF() 	HAL_GPIO_WritePin(GPIOE, LED_3_Pin, GPIO_PIN_SET)
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
