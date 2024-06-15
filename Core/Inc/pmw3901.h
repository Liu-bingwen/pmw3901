/*
 * pmw3901.h
 *
 *  Created on: May 27, 2024
 *      Author: Administrator
 */

#ifndef INC_PMW3901_H_
#define INC_PMW3901_H_

#include "spi.h"
#include "usart.h"
#include "gpio.h"
#include "main.h"

uint8_t PMW3901_init();
uint8_t WriteReg(uint8_t reg, uint8_t value);
uint8_t ReadReg(uint8_t reg);
uint8_t initRegisters();





#endif /* INC_PMW3901_H_ */
