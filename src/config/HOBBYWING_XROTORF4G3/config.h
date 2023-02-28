/*
 * This file is part of Betaflight.
 *
 * Betaflight is free software. You can redistribute this software
 * and/or modify this software under the terms of the GNU General
 * Public License as published by the Free Software Foundation,
 * either version 3 of the License, or (at your option) any later
 * version.
 *
 * Betaflight is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public
 * License along with this software.
 *
 * If not, see <http://www.gnu.org/licenses/>.
 */

/*
   This file has been auto generated from unified-targets repo.

   The auto generation is transitional only, please remove this comment once the file is edited.
*/

#define FC_TARGET_MCU     STM32F405

#define BOARD_NAME        HOBBYWING_XROTORF4G3
#define MANUFACTURER_ID   HOWI

#define USE_ACC_SPI_MPU6500
#define USE_GYRO_SPI_MPU6500
#define USE_MAX7456
#define USE_SDCARD

#define BEEPER_PIN           PB4
#define MOTOR1_PIN           PB0
#define MOTOR2_PIN           PB1
#define MOTOR3_PIN           PA3
#define MOTOR4_PIN           PA2
#define MOTOR5_PIN           PA1
#define MOTOR6_PIN           PA8
#define RX_PPM_PIN           PB8
#define RX_PWM1_PIN          PB8
#define RX_PWM2_PIN          PB9
#define RX_PWM3_PIN          PC6
#define RX_PWM4_PIN          PC7
#define RX_PWM5_PIN          PC8
#define RX_PWM6_PIN          PC9
#define SONAR_TRIGGER_PIN    PA1
#define SONAR_ECHO_PIN       PA8
#define LED_STRIP_PIN        PB6
#define UART1_TX_PIN         PA9
#define UART3_TX_PIN         PB10
#define UART6_TX_PIN         PC6
#define UART1_RX_PIN         PA10
#define UART3_RX_PIN         PB11
#define UART6_RX_PIN         PC7
#define INVERTER3_PIN        PC9
#define INVERTER6_PIN        PC8
#define LED0_PIN             PB5
#define SPI1_SCK_PIN         PA5
#define SPI2_SCK_PIN         PB13
#define SPI3_SCK_PIN         PC10
#define SPI1_MISO_PIN        PA6
#define SPI2_MISO_PIN        PB14
#define SPI3_MISO_PIN        PC11
#define SPI1_MOSI_PIN        PA7
#define SPI2_MOSI_PIN        PB15
#define SPI3_MOSI_PIN        PC12
#define ADC_VBAT_PIN         PC2
#define ADC_RSSI_PIN         PA0
#define ADC_CURR_PIN         PC1
#define BARO_CS_PIN          PB3
#define SDCARD_CS_PIN        PB12
#define SDCARD_DETECT_PIN    PB7
#define FLASH_CS_PIN         PB12
#define MAX7456_SPI_CS_PIN   PA15
#define GYRO_1_EXTI_PIN      PC4
#define GYRO_1_CS_PIN        PA4
#define USB_DETECT_PIN       PC5

#define TIMER_PIN_MAPPING \
    TIMER_PIN_MAP( 0, PB8 , 2, -1) \
    TIMER_PIN_MAP( 1, PB9 , 1, -1) \
    TIMER_PIN_MAP( 2, PC6 , 2,  0) \
    TIMER_PIN_MAP( 3, PC7 , 2,  0) \
    TIMER_PIN_MAP( 4, PC8 , 2,  0) \
    TIMER_PIN_MAP( 5, PC9 , 2,  0) \
    TIMER_PIN_MAP( 6, PB0 , 2,  0) \
    TIMER_PIN_MAP( 7, PB1 , 2,  0) \
    TIMER_PIN_MAP( 8, PA3 , 1,  1) \
    TIMER_PIN_MAP( 9, PA2 , 1,  0) \
    TIMER_PIN_MAP(10, PA1 , 2,  0) \
    TIMER_PIN_MAP(11, PB6 , 1,  0) \
    TIMER_PIN_MAP(12, PA8 , 1,  0) \
    TIMER_PIN_MAP(13, PA9 , 1,  0) \
    TIMER_PIN_MAP(14, PA10, 1,  0) \



#define SPI2_TX_DMA_OPT     0
#define ADC2_DMA_OPT        1

//TODO #define MAG_BUSTYPE I2C
#define MAG_I2C_INSTANCE (I2CDEV_2)
#define BARO_SPI_INSTANCE SPI3
//TODO #define ADC_DEVICE 2
//TODO #define BLACKBOX_DEVICE SDCARD
//TODO #define DSHOT_BURST ON
//TODO #define CURRENT_METER ADC
//TODO #define BATTERY_METER ADC
#define BEEPER_INVERTED
//TODO #define BEEPER_OD OFF
//TODO #define SDCARD_DETECT_INVERTED ON
#define USE_SDCARD_SPI
#define SDCARD_SPI_INSTANCE SPI2
#define SYSTEM_HSE_MHZ 8
#define MAX7456_SPI_INSTANCE SPI3
//TODO #define DASHBOARD_I2C_BUS 2
#define FLASH_SPI_INSTANCE SPI2
#define USE_SPI_GYRO
#define GYRO_1_SPI_INSTANCE SPI1
#define GYRO_1_ALIGN CW270_DEG
#define GYRO_1_ALIGN_YAW 2700
#define GYRO_2_SPI_INSTANCE SPI1