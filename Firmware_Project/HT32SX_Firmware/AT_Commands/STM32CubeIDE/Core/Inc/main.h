/* USER CODE BEGIN Header */
/**
 ******************************************************************************
 * @file           : main.h
 * @brief          : Header for main.c file.
 *                   This file contains the common defines of the application.
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
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
#include "stm32l0xx_hal.h"
#include "stm32l0xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
#include "assert.h"
#include "stddef.h"
#include <stdio.h>
#include <string.h>
#include "stdarg.h"
#include <stdint.h>
#include <stdlib.h>
#include <math.h>

#include "ST_Sigfox_Init.h"

#include "sigfox_types.h"
#include "sigfox_api.h"
#include "sigfox_monarch_api.h"
#include "monarch_api.h"
#include "retriever_api.h"
#include "mcu_api.h"
#include "st_mcu_api.h"
#include "st_rf_api.h"
#include "nvm_api.h"

//#include "HT_sigfox_api.h"
//#include "HT_monarch_api.h"
#include "HT_dma_circular.h"
#include "HT_ATcmd.h"
#include "HT_hcfsm.h"

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

#define USE_DMA_CIRCULAR 1

typedef enum
{
	RCZ1 = 1,
	RCZ2,
	RCZ3,
	RCZ4,
	RCZ5,
	RCZ6,
	RCZ7
} rc_mask;

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

/*!******************************************************************
 * \fn void MCU_Config(void)
 * \brief Starts the MCU peripherals configuration and get credentials from Flash memory
 *
 * \param[in]  none
 * \param[out] none
 *******************************************************************/

void mcuConfig(void);

/*!******************************************************************
 * \fn void ST_Init(void)
 * \brief Configure the MCU peripherals needed for the transceiver operation.
 *
 * \param[in]  none
 * \param[out] none
 *******************************************************************/

void ST_Init(void);

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define S2LP_SPI_CS_PIN_Pin GPIO_PIN_15
#define S2LP_SPI_CS_PIN_GPIO_Port GPIOA
#define S2LP_SPI_MISO_PIN_Pin GPIO_PIN_4
#define S2LP_SPI_MISO_PIN_GPIO_Port GPIOB
#define S2LP_SPI_SCLK_PIN_Pin GPIO_PIN_3
#define S2LP_SPI_SCLK_PIN_GPIO_Port GPIOB
#define S2LP_SPI_MOSI_PIN_Pin GPIO_PIN_7
#define S2LP_SPI_MOSI_PIN_GPIO_Port GPIOA
/* USER CODE BEGIN Private defines */

#define ALL_REGIONS 127

#define RCZ1_OUTPUT_POWER 	-32
#define RCZ2_OUTPUT_POWER	-27
#define RCZ3_OUTPUT_POWER	-32
#define RCZ4_OUTPUT_POWER	-27
#define RCZ5_OUTPUT_POWER	-32
#define RCZ6_OUTPUT_POWER	-32
#define RCZ7_OUTPUT_POWER	-32

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
