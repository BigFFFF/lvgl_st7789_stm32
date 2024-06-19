/**
 * @file lv_port_lcd_stm32_template.h
 *
 */

/*Copy this file as "lv_port_disp.h" and set this value to "1" to enable content*/
#if 1

#ifndef LV_PORT_LCD_STM32_TEMPL_H
#define LV_PORT_LCD_STM32_TEMPL_H

#ifdef __cplusplus
extern "C" {
#endif

/*********************
 *      INCLUDES
 *********************/
#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

/*********************
 *      DEFINES
 *********************/
#define MY_DISP_HOR_RES    240
#define MY_DISP_VER_RES    320
/**********************
 *      TYPEDEFS
 **********************/

/**********************
 * GLOBAL PROTOTYPES
 **********************/
extern lv_display_t * lcd_disp;

/* Initialize low level display driver */
void lv_port_disp_init(void);

/**********************
 *      MACROS
 **********************/

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif /*LV_PORT_LCD_STM32_TEMPL_H*/

#endif /*Disable/Enable content*/
