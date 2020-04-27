/*
 * This file is part of INAV Project.
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this file,
 * You can obtain one at http://mozilla.org/MPL/2.0/.
 *
 * Alternatively, the contents of this file may be used under the terms
 * of the GNU General Public License Version 3, as described below:
 *
 * This file is free software: you may copy, redistribute and/or modify
 * it under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or (at your
 * option) any later version.
 *
 * This file is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
 * Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see http://www.gnu.org/licenses/.
 */

#pragma once

#define TARGET_BOARD_IDENTIFIER "ABF7"
#define USBD_PRODUCT_STRING     "Airbot F7"

// ************** Beeper and LED ******************
#define LED0                    PB12
#define BEEPER                  PB0
#define BEEPER_INVERTED

// *************** SPI & I2C **********************
#define USE_SPI
#define USE_I2C

#define USE_SPI_DEVICE_3
#define SPI3_SCK_PIN            PB3
#define SPI3_MISO_PIN           PB4
#define SPI3_MOSI_PIN           PB5

#define USE_SPI_DEVICE_2
#define SPI2_SCK_PIN            PB13
#define SPI2_MISO_PIN           PB14
#define SPI2_MOSI_PIN           PB15

#define USE_SPI_DEVICE_1
#define SPI1_SCK_PIN            PA5
#define SPI1_MISO_PIN           PA6
#define SPI1_MOSI_PIN           PA7

#define USE_I2C_DEVICE_1
#define I2C1_SCL                PB8
#define I2C1_SDA                PB9 

// *************** Gyro & ACC **********************
#define USE_TARGET_IMU_HARDWARE_DESCRIPTORS
#define USE_DUAL_GYRO

#define USE_ACC
#define USE_GYRO

#define USE_ACC_MPU6000
#define USE_ACC_MPU6500
#define USE_GYRO_MPU6000
#define USE_GYRO_MPU6500

#define GYRO_0_CS_PIN           PD2
#define GYRO_0_SPI_BUS          BUS_SPI3
#define GYRO_0_EXTI_PIN         NONE
#define GYRO_0_ALIGN            CW90_DEG    // This doesn't work yet, requires BUS refactoring

#define GYRO_1_CS_PIN           PC4
#define GYRO_1_SPI_BUS          BUS_SPI1
#define GYRO_1_EXTI_PIN         NONE
#define GYRO_1_ALIGN            CW0_DEG     // This doesn't work yet, requires BUS refactoring

// TODO: Remove this once per-gyro alignment is supported correctly
#define GYRO_MPU6500_ALIGN      CW90_DEG
#define ACC_MPU6500_ALIGN       CW90_DEG

// *************** OSD *****************************
#define USE_OSD
#define USE_MAX7456
#define MAX7456_SPI_BUS         BUS_SPI2
#define MAX7456_CS_PIN          PC15

// *************** FLASH **************************
#define USE_FLASHFS
#define USE_FLASH_M25P16
#define M25P16_CS_PIN           PA3
#define M25P16_SPI_BUS          BUS_SPI1
#define ENABLE_BLACKBOX_LOGGING_ON_SPIFLASH_BY_DEFAULT

// *************** I2C defvices **********************
#define USE_BARO
#define BARO_I2C_BUS            BUS_I2C1
#define USE_BARO_BMP280

#define USE_MAG
#define MAG_I2C_BUS             BUS_I2C1
#define USE_MAG_HMC5883
#define USE_MAG_QMC5883
#define USE_MAG_IST8310
#define USE_MAG_IST8308
#define USE_MAG_MAG3110
#define USE_MAG_LIS3MDL

#define TEMPERATURE_I2C_BUS     BUS_I2C1

#define PITOT_I2C_BUS           BUS_I2C1

#define USE_RANGEFINDER
#define RANGEFINDER_I2C_BUS     BUS_I2C1

// *************** UART *****************************
#define USE_VCP

#define USE_UART1
#define UART1_RX_PIN            PA10
#define UART1_TX_PIN            PA9

#define USE_UART2
#define UART2_TX_PIN            PA2
#define UART2_RX_PIN            NONE

#define USE_UART3
#define UART3_RX_PIN            PC11
#define UART3_TX_PIN            PC10

#define USE_UART4
#define UART4_RX_PIN            PA1
#define UART4_TX_PIN            PA0

#define USE_UART5
#define UART5_TX_PIN            PC12
#define UART5_RX_PIN            NONE

#define USE_UART6
#define UART6_RX_PIN            PC7
#define UART6_TX_PIN            PC6

#define USE_SOFTSERIAL1
#define SOFTSERIAL_1_TX_PIN     PA5
#define SOFTSERIAL_1_RX_PIN     PA5

#define SERIAL_PORT_COUNT       8

// *************** ADC *****************************
#define USE_ADC
#define ADC_INSTANCE                ADC1
#define ADC_CHANNEL_1_PIN           PC0
#define ADC_CHANNEL_2_PIN           PC2
#define ADC_CHANNEL_3_PIN           PC1

#define VBAT_ADC_CHANNEL            ADC_CHN_1
#define CURRENT_METER_ADC_CHANNEL   ADC_CHN_2
#define RSSI_ADC_CHANNEL            ADC_CHN_3

// ************** Other features *******************
#define USE_LED_STRIP
#define WS2811_PIN                  PA15

#define DEFAULT_FEATURES            (FEATURE_TX_PROF_SEL | FEATURE_TELEMETRY | FEATURE_VBAT | FEATURE_OSD | FEATURE_BLACKBOX)

#define DEFAULT_RX_TYPE             RX_TYPE_SERIAL
#define SERIALRX_PROVIDER           SERIALRX_SBUS
#define SERIALRX_UART               SERIAL_PORT_USART1

#define USE_SERIAL_4WAY_BLHELI_INTERFACE

#define MAX_PWM_OUTPUT_PORTS        4
#define TARGET_MOTOR_COUNT          4

#define TARGET_IO_PORTA         0xffff
#define TARGET_IO_PORTB         0xffff
#define TARGET_IO_PORTC         0xffff
#define TARGET_IO_PORTD         0xffff

#define USE_DSHOT
#define USE_ESC_SENSOR