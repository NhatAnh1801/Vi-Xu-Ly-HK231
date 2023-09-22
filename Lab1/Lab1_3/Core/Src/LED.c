/*
 * LED.c
 *
 *  Created on: Sep 19, 2023
 *      Author: ADMIN
 */
#include "../../../Lab1_3/Core/Inc/LED.h"
#include "LED.h"
GPIO_TypeDef* LED_GPIO_Port[] = {GPIOA, GPIOA, GPIOA, GPIOA, GPIOA, GPIOA};  // Array of GPIO ports
uint16_t LED_Pin[] = {GPIO_PIN_5, GPIO_PIN_6, GPIO_PIN_7, GPIO_PIN_8, GPIO_PIN_9, GPIO_PIN_10};  // Array of GPIO pins
void LED_ON(int num){
    for(int i = 0 ; i <= 2; i++){
        if(i == num){
            HAL_GPIO_WritePin(LED_GPIO_Port[i], LED_Pin[i], SET);
        }
        else {
            HAL_GPIO_WritePin(LED_GPIO_Port[i], LED_Pin[i], RESET);
        }
    }
}
void LED_ON1(int num){
    for(int i = 3 ; i <= 5; i++){
        if(i == num){
            HAL_GPIO_WritePin(LED_GPIO_Port[i], LED_Pin[i], SET);
        }
        else {
            HAL_GPIO_WritePin(LED_GPIO_Port[i], LED_Pin[i], RESET);
        }
    }
}



