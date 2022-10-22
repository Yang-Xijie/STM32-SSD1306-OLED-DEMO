/******************************************************************************
 * File Name   : MX_Device.h
 * Date        : 22/10/2022 14:12:58
 * Description : STM32Cube MX parameter definitions
 * Note        : This file is generated by STM32CubeMX (DO NOT EDIT!)
 ******************************************************************************/

#ifndef __MX_DEVICE_H
#define __MX_DEVICE_H

/*---------------------------- Clock Configuration ---------------------------*/

#define MX_LSI_VALUE                            32000
#define MX_LSE_VALUE                            32768
#define MX_HSI_VALUE                            16000000
#define MX_HSE_VALUE                            25000000
#define MX_EXTERNAL_CLOCK_VALUE                 12288000
#define MX_PLLCLKFreq_Value                     96000000
#define MX_SYSCLKFreq_VALUE                     16000000
#define MX_HCLKFreq_Value                       16000000
#define MX_FCLKCortexFreq_Value                 16000000
#define MX_CortexFreq_Value                     16000000
#define MX_AHBFreq_Value                        16000000
#define MX_APB1Freq_Value                       16000000
#define MX_APB2Freq_Value                       16000000
#define MX_APB1TimFreq_Value                    16000000
#define MX_APB2TimFreq_Value                    16000000
#define MX_48MHZClocksFreq_Value                48000000
#define MX_EthernetFreq_Value                   16000000
#define MX_I2SClocksFreq_Value                  96000000
#define MX_RTCFreq_Value                        32000
#define MX_WatchDogFreq_Value                   32000
#define MX_MCO1PinFreq_Value                    16000000
#define MX_MCO2PinFreq_Value                    16000000

/*-------------------------------- I2C1       --------------------------------*/

#define MX_I2C1                                 1

/* GPIO Configuration */

/* Pin PB6 */
#define MX_I2C1_SCL_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SCL_Pin                         PB6
#define MX_I2C1_SCL_GPIOx                       GPIOB
#define MX_I2C1_SCL_GPIO_Pin                    GPIO_PIN_6
#define MX_I2C1_SCL_GPIO_AF                     GPIO_AF4_I2C1
#define MX_I2C1_SCL_GPIO_Pu                     GPIO_NOPULL
#define MX_I2C1_SCL_GPIO_Mode                   GPIO_MODE_AF_OD

/* Pin PB7 */
#define MX_I2C1_SDA_GPIO_Speed                  GPIO_SPEED_FREQ_VERY_HIGH
#define MX_I2C1_SDA_Pin                         PB7
#define MX_I2C1_SDA_GPIOx                       GPIOB
#define MX_I2C1_SDA_GPIO_Pin                    GPIO_PIN_7
#define MX_I2C1_SDA_GPIO_AF                     GPIO_AF4_I2C1
#define MX_I2C1_SDA_GPIO_Pu                     GPIO_NOPULL
#define MX_I2C1_SDA_GPIO_Mode                   GPIO_MODE_AF_OD

/*-------------------------------- SYS        --------------------------------*/

#define MX_SYS                                  1

/* GPIO Configuration */

/*-------------------------------- NVIC       --------------------------------*/

#define MX_NVIC                                 1

/*-------------------------------- GPIO       --------------------------------*/

#define MX_GPIO                                 1

/* GPIO Configuration */

/* Pin PF10 */
#define MX_PF10_GPIO_Speed                      GPIO_SPEED_FREQ_LOW
#define MX_PF10_Pin                             PF10
#define MX_PF10_GPIOx                           GPIOF
#define MX_PF10_PinState                        GPIO_PIN_RESET
#define MX_PF10_GPIO_PuPd                       GPIO_NOPULL
#define MX_PF10_GPIO_Pin                        GPIO_PIN_10
#define MX_PF10_GPIO_ModeDefaultOutputPP        GPIO_MODE_OUTPUT_PP

/* Pin PF9 */
#define MX_PF9_GPIO_Speed                       GPIO_SPEED_FREQ_LOW
#define MX_PF9_Pin                              PF9
#define MX_PF9_GPIOx                            GPIOF
#define MX_PF9_PinState                         GPIO_PIN_RESET
#define MX_PF9_GPIO_PuPd                        GPIO_NOPULL
#define MX_PF9_GPIO_Pin                         GPIO_PIN_9
#define MX_PF9_GPIO_ModeDefaultOutputPP         GPIO_MODE_OUTPUT_PP

#endif  /* __MX_DEVICE_H */

