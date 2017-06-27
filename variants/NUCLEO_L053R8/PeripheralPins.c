/*
 *******************************************************************************
 * Copyright (c) 2016, STMicroelectronics
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 * 3. Neither the name of STMicroelectronics nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
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
 *******************************************************************************
 */
#include "Arduino.h"
#include "PeripheralPins.h"

// =====
// Note: Commented lines are alternative possibilities which are not used per default.
//       If you change them, you will have to know what you do
// =====


//*** ADC ***

const PinMap PinMap_ADC[] = {
    {PA0,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 0, 0)}, // ADC_IN0
    {PA1,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // ADC_IN1
//  {PA2,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 2, 0)}, // ADC_IN2 - STLink Tx
//  {PA3,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 3, 0)}, // ADC_IN3 - STLink Rx
    {PA4,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 4, 0)}, // ADC_IN4
//  {PA5,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 5, 0)}, // ADC_IN5 - LED
    {PA6,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 6, 0)}, // ADC_IN6
    {PA7,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 7, 0)}, // ADC_IN7
    {PB0,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 8, 0)}, // ADC_IN8
//  {PB1,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 9, 0)}, // ADC_IN9
    {PC0,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 10, 0)}, // ADC_IN10
    {PC1,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 11, 0)}, // ADC_IN11
    {PC2,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 12, 0)}, // ADC_IN12
    {PC3,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 13, 0)}, // ADC_IN13
    {PC4,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 14, 0)}, // ADC_IN14
    {PC5,   ADC1,  STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 15, 0)}, // ADC_IN15
    {NC,   NC,    0}
};

//*** DAC ***

const PinMap PinMap_DAC[] = {
    {PA4,   DAC1, STM_PIN_DATA_EXT(STM_MODE_ANALOG, GPIO_NOPULL, 0, 1, 0)}, // DAC_OUT1
    {NC,   NC,    0}
};

//*** I2C ***

const PinMap PinMap_I2C_SDA[] = {
    {PB7,   I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB9,   I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
    {PB11,  I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF6_I2C2)},
    {PB14,  I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF5_I2C2)},
    {NC,    NC,    0}
};

const PinMap PinMap_I2C_SCL[] = {
    {PB6,   I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF1_I2C1)},
    {PB8,   I2C1, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF4_I2C1)},
    {PB10,  I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF6_I2C2)},
    {PB13,  I2C2, STM_PIN_DATA(STM_MODE_AF_OD, GPIO_NOPULL, GPIO_AF5_I2C2)},
    {NC,    NC,    0}
};

//*** PWM ***

const PinMap PinMap_PWM[] = {
    {PA0,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 1, 0)},  // TIM2_CH1
    {PA1,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 2, 0)},  // TIM2_CH2
//  {PA2,   TIM21,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM21, 1, 0)},  // TIM21_CH1
//  {PA2,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 3, 0)},  // TIM2_CH3 - used by STDIO TX
//  {PA3,   TIM21,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM21, 2, 0)},  // TIM21_CH2
//  {PA3,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 4, 0)},  // TIM2_CH4 - used by STDIO RX
    {PA5,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM2, 1, 0)},  // TIM2_CH1 - LED1
    {PA6,   TIM22,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM22, 1, 0)},  // TIM22_CH1
    {PA7,   TIM22,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM22, 2, 0)},  // TIM22_CH2
    {PA15,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_TIM2, 1, 0)},  // TIM2_CH1
    {PB3,   TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 2, 0)},  // TIM2_CH2
    {PB4,   TIM22,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM22, 1, 0)},  // TIM22_CH1
    {PB5,   TIM22,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_TIM22, 2, 0)},  // TIM22_CH2
    {PB10,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 3, 0)},  // TIM2_CH3
    {PB11,  TIM2,   STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_TIM2, 4, 0)},  // TIM2_CH4
//  {PB13,  TIM21,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM21, 1, 0)},  // TIM21_CH1
//  {PB14,  TIM21,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF6_TIM21, 2, 0)},  // TIM21_CH2
    {PC6,   TIM22,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM22, 1, 0)},  // TIM22_CH1
    {PC7,   TIM22,  STM_PIN_DATA_EXT(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_TIM22, 2, 0)},  // TIM22_CH2
    {NC,    NC,    0}
};

//*** SERIAL ***

const PinMap PinMap_UART_TX[] = {
    {PA2,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
    {PA9,   USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)},
    {PA14,  USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)}, // Warning: SWCLK
    {PB6,   USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART1)},
    {PB10,  LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)},
    {PC4,   LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_LPUART1)},
    {PC10,  LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_LPUART1)},
    {NC,    NC,    0}
};

const PinMap PinMap_UART_RX[] = {
    {PA3,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
    {PA10,  USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)},
    {PA15,  USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
    {PB7,   USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_USART1)},
    {PB11,  LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)},
    {PC5,   LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_LPUART1)},
    {PC11,  LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_LPUART1)},
    {NC,    NC,    0}
};

const PinMap PinMap_UART_RTS[] = {
    {PA1,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
    {PA12,  USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)},
    {PB1,   LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)},
    {PB12,  LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_LPUART1)},
    {PB14,  LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)},
    {PD2,   LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_LPUART1)},
    {NC,    NC,    0}
};

const PinMap PinMap_UART_CTS[] = {
    {PA0,   USART2,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART2)},
    {PA6,   LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)},
    {PA11,  USART1,  STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_USART1)},
    {PB13,  LPUART1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF4_LPUART1)},
    {NC,    NC,    0}
};

//*** SPI ***

const PinMap PinMap_SPI_MOSI[] = {
    {PA7,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PA12,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB5,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB15,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI2)},
    {PC3,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_SPI2)},
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_MISO[] = {
    {PA6,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PA11,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB4,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB14,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI2)},
    {PC2,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF2_SPI2)},
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_SCLK[] = {
//  {PA5,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)}, // LED
    {PB3,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB10,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
    {PB13,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI2)},
    {NC,    NC,    0}
};

const PinMap PinMap_SPI_SSEL[] = {
    {PA4,   SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PA15,  SPI1, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI1)},
    {PB9,   SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF5_SPI2)},
    {PB12,  SPI2, STM_PIN_DATA(STM_MODE_AF_PP, GPIO_PULLUP, GPIO_AF0_SPI2)},
    {NC,    NC,    0}
};

//*** CAN ***
// NO CAN