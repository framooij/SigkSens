#ifndef _config_H_
#define _config_H_

/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Feature selection
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/

// To enable any of the features below, either uncomment out the row
// or add #define <feat> to my_config.h and enable my_config.h at the
// end of this file.

// Sensors

#define ENABLE_SYSTEMHZ
//#define ENABLE_DIGITALIN
//#define ENABLE_DIGITALOUT
//#define ENABLE_ANALOGIN
//#define ENABLE_ONEWIRE


// if any of these are enabled, make sure ENABLE_I2C below is as well.
//#define ENABLE_I2C
//#define ENABLE_SHT30
//#define ENABLE_MPU
//#define ENABLE_BMP280
//#define ENABLE_ADS1115

// Services

#define ENABLE_WEBSOCKET_SERVER

/*----------------------------------------------------------------------------
------------------------------------------------------------------------------
Defines
------------------------------------------------------------------------------
----------------------------------------------------------------------------*/

// HTTP port for the configuration interface
#define HTTP_PORT 80

// Slow loop duration (SK updates, slow sensor reads etc)
#define SLOW_LOOP_DELAY 200

// Signal K maximum path length

#define MAX_SIGNALK_PATH_LEN 150

// Digital input pins

#define NUMBER_DIGITAL_INPUT 2  // set to number of elements in next two arrays...s
                                // Note if more than 6, update DigitalIn to have more interrupt routines.
#define DIGITAL_INPUT_PINS { 14, 12 } 
#define DIGITAL_INPUT_NAME {"D1", "D2"}

// Digital output Pins
#define NUMBER_DIGITAL_OUTPUT 2  // set to number of elements in next two arrays...s
#define DIGITAL_OUTPUT_PINS { 16, 15 }  // D0, D8 of Wemos)
#define DIGITAL_OUTPUT_NAME {"OUT1", "OUT2"}

// ADS1115 read interval
#define ADS1115_READ_INTERVAL 50

// One-Wire settings

#define ONE_WIRE_BUS 13   // D7 pin on Wemos D1 Mini

// set these together! Precision for OneWire
// 9  is 0.5C in 94ms
// 10 is 0.25C in 187ms
// 11 is 0.125C in 375ms
// 12 is 0.0625C in 750ms
#define TEMPERATURE_PRECISION 10
#define ONEWIRE_READ_DELAY 187

// MPU9250 uses interrupts for performance. The interrupt
// pin is defined below:

#define MPU_INTERRUPT_PIN 12 // D6 pin on Wemos D1 Mini

// Button configuration for resetting the device

#define RESET_CONFIG_PIN 0

#define SHORT_BUTTON_PRESS_MS 1000
#define LONG_BUTTON_PRESS_MS 5000

// if you want to use the optional my_config.h file
// to override configuration constants, 
// uncomment the following line.

// #include "my_config.h"

#endif