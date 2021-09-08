/*
 *******************************************************************************
 * Copyright (c) 2021, STMicroelectronics
 * All rights reserved.
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 *******************************************************************************
 */
#pragma once

/*----------------------------------------------------------------------------
 *        Pins
 *----------------------------------------------------------------------------*/
#define PA10                    0
#define PA9                     1
#define PA12                    11
#define PB0                     20
#define PB7                     3
#define PB6                     4
#define PB1                     21
//#define PC14                    7  // By default, SB6 open PF0/PC14 not connected to D7
//#define PC15                    8  // By default, SB8 open PF1/PC15 not connected to D8
#define PA8                     2
#define PA11                    22
#define PB5                     5
#define PB4                     6
#define PB3                     7 // LED
#define PA0                     12
#define PA1                     13
#define PA3                     15
#define PA4                     16
#define PA5                     17
#define PA6                     18
#define PA7                     19
#define PA2                     14
#define PA15                    8
#define PA13                    10
#define PA14                    9
#define PH3                     23


// Alternate pins number
#define PA1_ALT1                (PA1  | ALT1)
#define PA2_ALT1                (PA2  | ALT1)
#define PA3_ALT1                (PA3  | ALT1)
#define PA4_ALT1                (PA4  | ALT1)
#define PA15_ALT1               (PA15 | ALT1)
#define PB3_ALT1                (PB3  | ALT1)
#define PB4_ALT1                (PB4  | ALT1)
#define PB5_ALT1                (PB5  | ALT1)

#define NUM_DIGITAL_PINS        24
#define NUM_ANALOG_INPUTS       7

// On-board LED pin number
#ifndef LED_BUILTIN
  #define LED_BUILTIN             PA1
#endif
#define LED_RED                   LED_BUILTIN
#define LED_GREEN                 PA2
#define LED_BLUE                  PA3

// On-board user button
#ifndef USER_BTN
  #define USER_BTN                PH3
#endif

// I2C Definitions
#ifndef PIN_WIRE_SDA
  #define PIN_WIRE_SDA            PA10
#endif
#ifndef PIN_WIRE_SCL
  #define PIN_WIRE_SCL            PA9
#endif

// SPI definitions
#ifndef PIN_SPI_SS
  #define PIN_SPI_SS            PB0
#endif

#ifndef PIN_SPI_MOSI
  #define PIN_SPI_MOSI          PA7
#endif
#ifndef PIN_SPI_MISO
  #define PIN_SPI_MISO          PA6
#endif
#ifndef PIN_SPI_SCK
  #define PIN_SPI_SCK           PA5
#endif


// Timer Definitions
// Use TIM6/TIM7 when possible as servo and tone don't need GPIO output pin
#ifndef TIMER_TONE
  #define TIMER_TONE              TIM1
#endif
#ifndef TIMER_SERVO
  #define TIMER_SERVO             TIM2
#endif

// UART Definitions
#ifndef SERIAL_UART_INSTANCE
  #define SERIAL_UART_INSTANCE    1
#endif

// Default pin used for 'Serial' instance (ex: ST-Link)
// Mandatory for Firmata
#ifndef PIN_SERIAL_RX
  #define PIN_SERIAL_RX           PB7
#endif
#ifndef PIN_SERIAL_TX
  #define PIN_SERIAL_TX           PB6
#endif

/* Extra HAL modules */
#if !defined(HAL_DAC_MODULE_DISABLED)
  #define HAL_DAC_MODULE_ENABLED
#endif
#if !defined(HAL_QSPI_MODULE_DISABLED)
  #define HAL_QSPI_MODULE_ENABLED
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#ifdef __cplusplus
  // These serial port names are intended to allow libraries and architecture-neutral
  // sketches to automatically default to the correct port name for a particular type
  // of use.  For example, a GPS module would normally connect to SERIAL_PORT_HARDWARE_OPEN,
  // the first hardware serial port whose RX/TX pins are not dedicated to another use.
  //
  // SERIAL_PORT_MONITOR        Port which normally prints to the Arduino Serial Monitor
  //
  // SERIAL_PORT_USBVIRTUAL     Port which is USB virtual serial
  //
  // SERIAL_PORT_LINUXBRIDGE    Port which connects to a Linux system via Bridge library
  //
  // SERIAL_PORT_HARDWARE       Hardware serial port, physical RX & TX pins.
  //
  // SERIAL_PORT_HARDWARE_OPEN  Hardware serial ports which are open for use.  Their RX & TX
  //                            pins are NOT connected to anything by default.
  #define SERIAL_PORT_MONITOR     Serial
  #define SERIAL_PORT_HARDWARE    Serial
#endif
