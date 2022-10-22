#include "stm32f4xx_hal.h"

#include "LED.h"

void LedBlink() {
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_SET);
	HAL_Delay(500);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_10, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
	HAL_Delay(500);
}
