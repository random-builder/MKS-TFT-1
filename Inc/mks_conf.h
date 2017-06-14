/**
  ******************************************************************************
  * File Name          : mks_conf.h
  * Description        : This file contains firmware configuration
  ******************************************************************************
  *
  * COPYRIGHT(c) 2017 Roman Stepanov
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MKS_CONF_H
#define __MKS_CONF_H

#include "stm32f1xx_hal.h"
#include "cmsis_os.h"
#include "ecv.h"

#define SPEAKER_Pin             GPIO_PIN_2
#define SPEAKER_GPIO_Port       GPIOA
#define FILAMENT_DI_Pin         GPIO_PIN_0
#define FILAMENT_DI_GPIO_Port   GPIOB
#define POWER_DI_Pin            GPIO_PIN_1
#define POWER_DI_GPIO_Port      GPIOB
#define LCD_nWR_Pin             GPIO_PIN_14
#define LCD_nWR_GPIO_Port       GPIOB
#define LCD_RS_Pin              GPIO_PIN_13
#define LCD_RS_GPIO_Port        GPIOD
#define LCD_BACKLIGHT_Pin       GPIO_PIN_14
#define LCD_BACKLIGHT_GPIO_Port GPIOD
#define LCD_nRD_Pin             GPIO_PIN_15
#define LCD_nRD_GPIO_Port       GPIOD
#define LCD_nCS_Pin             GPIO_PIN_8
#define LCD_nCS_GPIO_Port       GPIOC
#define SDCARD_nCS_Pin          GPIO_PIN_11
#define SDCARD_nCS_GPIO_Port    GPIOD
#define SDCARD_DETECT_Pin       GPIO_PIN_15
#define SDCARD_DETECT_GPIO_Port GPIOB
#define TOUCH_DI_Pin            GPIO_PIN_5
#define TOUCH_DI_GPIO_Port      GPIOC
#define TOUCH_nCS_Pin           GPIO_PIN_9
#define TOUCH_nCS_GPIO_Port     GPIOC
#define WIFI_DI_Pin             GPIO_PIN_9
#define WIFI_DI_GPIO_Port       GPIOA
#define FLASH_nCS_Pin           GPIO_PIN_9
#define FLASH_nCS_GPIO_Port     GPIOB

#define VERSION_TEXT		"1.17beta2R"

#define DEFAULTBAUDRATE     57600

#if _USE_LFN != 0
# define NAMELEN	(_MAX_LFN + 1 + 1)
#else
# define NAMELEN	13
#endif

// #define M105_POLL_INTERVAL  5000    /** poll printer temperature each 5000 ms */
// #define M114_POLL_INTERVAL  1000    /** poll printer coordinates each 500 ms  */
// #define MENU_IDLE_TIMEOUT   30000   /** return to main menu if idle for 30000 ms */

/** these are not recommended to change */

#define UART_RECEIVE_TMOUT  10000   /** wait printer response for 10000 ms */

// #define UI_QUEUE_SIZE       1       /** TBD */
// #define COMM_QUEUE_SIZE     5       /** TBD */

// #define UI_QUEUE_TIMEOUT    200     /** ALWAYS less than any timer interval !!! */
// #define COMM_QUEUE_TIMEOUT  200     /** ALWAYS less than any timer interval !!! */

extern QueueHandle_t xUIEventQueue;

#endif /* __MKS_CONF_H */
/************************ (C) COPYRIGHT Roman Stepanov *****END OF FILE****/