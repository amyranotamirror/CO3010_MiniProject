/*
 * test.c
 *
 *  Created on: Dec 1, 2023
 *      Author: Nhat Khai
 */

#include "test.h"

extern TIM_HandleTypeDef htim3;

void testMCU(void) {
	HAL_GPIO_TogglePin(LED_RED_GPIO_Port, LED_RED_Pin);
}

void testButton(void) {
	if (buttonPressed(1) || buttonPressed(2) || buttonPressed(3)) {
		HAL_GPIO_TogglePin(TRAFFIC0_RED_GPIO_Port, TRAFFIC0_RED_Pin);
		HAL_GPIO_TogglePin(TRAFFIC0_GREEN_GPIO_Port, TRAFFIC0_GREEN_Pin);
		HAL_GPIO_TogglePin(TRAFFIC0_YELLOW_GPIO_Port, TRAFFIC0_YELLOW_Pin);
		HAL_GPIO_TogglePin(TRAFFIC1_RED_GPIO_Port, TRAFFIC1_RED_Pin);
		HAL_GPIO_TogglePin(TRAFFIC1_GREEN_GPIO_Port, TRAFFIC1_GREEN_Pin);
		HAL_GPIO_TogglePin(TRAFFIC1_YELLOW_GPIO_Port, TRAFFIC1_YELLOW_Pin);
		HAL_GPIO_TogglePin(PEDESTRIAN0_RED_GPIO_Port, PEDESTRIAN0_RED_Pin);
		HAL_GPIO_TogglePin(PEDESTRIAN0_GREEN_GPIO_Port, PEDESTRIAN0_GREEN_Pin);
		HAL_GPIO_TogglePin(PEDESTRIAN1_RED_GPIO_Port, PEDESTRIAN1_RED_Pin);
		HAL_GPIO_TogglePin(PEDESTRIAN1_GREEN_GPIO_Port, PEDESTRIAN1_GREEN_Pin);
	}
}

void testBuzzer(void) {
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_1, 0);
	__HAL_TIM_SET_COMPARE(&htim3, TIM_CHANNEL_2, 0);
}

void testLED(void) {
	HAL_GPIO_WritePin(TRAFFIC0_RED_GPIO_Port, TRAFFIC0_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(TRAFFIC0_GREEN_GPIO_Port, TRAFFIC0_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(TRAFFIC0_YELLOW_GPIO_Port, TRAFFIC0_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(TRAFFIC1_RED_GPIO_Port, TRAFFIC1_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(TRAFFIC1_GREEN_GPIO_Port, TRAFFIC1_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(TRAFFIC1_YELLOW_GPIO_Port, TRAFFIC1_YELLOW_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(PEDESTRIAN0_RED_GPIO_Port, PEDESTRIAN0_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(PEDESTRIAN0_GREEN_GPIO_Port, PEDESTRIAN0_GREEN_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(PEDESTRIAN1_RED_GPIO_Port, PEDESTRIAN1_RED_Pin, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(PEDESTRIAN1_GREEN_GPIO_Port, PEDESTRIAN1_GREEN_Pin, GPIO_PIN_RESET);
}
