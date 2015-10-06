/*
 * brs_c_led.c
 *
 *  Created on: Sep 29, 2015
 *      Author: Rafael
 */

#include "brs_c_led.h"
#include <stdbool.h>
#include <stdint.h>
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "driverlib/gpio.h"
#include "driverlib/rom.h"
#include "drivers/rgb.h"
#include "drivers/buttons.h"
#include "utils/uartstdio.h"
#include "led_task.h"
#include "priorities.h"
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "semphr.h"

// LED Color Access
//
// [G, R, B] range is 0 to 0xFFFF per color.
//
static uint32_t g_pui32Colors[NUM_LED_COLORS] = { 0x0000, 0x0000, 0x0000 };

//*****************************************************************************
//
// Configure the LEDs for Full RGB Functionality
//
//*****************************************************************************
void ConfigureLEDs()
{
    //
    // Initialize the GPIOs and Timers that drive the three LEDs.
    //
    RGBInit(1);
    RGBIntensitySet(0.99f);

    //Set LEDs OFF
    SetLEDRGB(0x0000, 0x0000, 0x0000);

    //Status Good
    BlinkLED(GREEN_LED, 3);
}

//*****************************************************************************
//
// Blink an LED
//
//*****************************************************************************
void BlinkLED(LEDColor ledColor, uint8_t numTimes)
{
    uint8_t  i = 0;
    uint32_t j = 0;

    for (i = 0; i < numTimes; i++)
    {
		//Turn On the LED
		SetLED(ledColor, LED_ON);

		// Wait for the required amount of time.
		for (j = 0; j < LED_TOGGLE_DELAY; j++)
		{
		}

		//Turn Off the LED
		SetLED(ledColor, LED_OFF);
    }

}

//*****************************************************************************
//
// Set an LED On or Off
//
//*****************************************************************************
void SetLED(LEDColor color, int state)
{
	if (color >= NUM_LED_COLORS)
	{
		return;
	}

	//Set the Applicable LED on or off
	if (state == LED_ON)
	{
		g_pui32Colors[color] = LED_ON;
		RGBColorSet(g_pui32Colors);
		RGBEnable();
	}
	else
	{
		RGBDisable();
	}
}

//*****************************************************************************
//
// Set LED with full RGB Functionality
//
//*****************************************************************************
void SetLEDRGB(uint32_t red, uint32_t green, uint32_t blue)
{
	g_pui32Colors[RED_LED]   = red;
	g_pui32Colors[GREEN_LED] = green;
	g_pui32Colors[BLUE_LED]  = blue;

	RGBColorSet(g_pui32Colors);
	RGBEnable();
}