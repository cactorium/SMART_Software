/*
 * brs_c_led.h
 *
 *  Created on: Sep 29, 2015
 *      Author: Rafael
 */

#ifndef BRS_C_LED_H_
#define BRS_C_LED_H_

#include "../../smart_config.h"

//*****************************************************************************
//
// Default LED toggle delay value. LED toggling frequency is twice this number.
//
//*****************************************************************************
#define LED_TOGGLE_DELAY 200000
#define LED_ON           0xFFFF
#define LED_OFF          0x0000

//Actually a full RGB Range, but this is for Simplicity
typedef enum LEDColor
{
	TIVA_RED_LED=0,
	TIVA_GREEN_LED,
	TIVA_BLUE_LED,
	NUM_LED_COLORS
} LEDColor;

//*****************************************************************************
//
// Configure the LEDs for Full RGB Functionality
//
//*****************************************************************************
void ConfigureLEDs();

//*****************************************************************************
//
// Blink an LED
//
//*****************************************************************************
void BlinkLED(LEDColor ledColor, uint8_t numTimes);

//*****************************************************************************
//
// Set an LED On or Off
//
//*****************************************************************************
void SetLED(LEDColor color, int ledOnOrOff);

//*****************************************************************************
//
// Set LED with full RGB Functionality
//
//*****************************************************************************
void SetLEDRGB(uint32_t red, uint32_t green, uint32_t blue);

#endif /* BRS_C_LED_H_ */
