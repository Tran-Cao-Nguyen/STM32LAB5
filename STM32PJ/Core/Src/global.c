/*
 * global.c
 *
 *  Created on: Nov 24, 2023
 *      Author: CAO NGUYEN
 */

#ifndef SRC_GLOBAL_C_
#define SRC_GLOBAL_C_

#include "global.h"


uint8_t temp = 0;
uint8_t buffer[MAX_SIZE_BUFFER];
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;

int command_flag = 0;
uint8_t command_data[MAX_SIZE_BUFFER];
uint8_t cmd_data_idx = 0;

int parserStatus = 0;
int uartStatus = 10;






#endif /* SRC_GLOBAL_C_ */
