/*
 * global.h
 *
 *  Created on: Nov 24, 2023
 *      Author: CAO NGUYEN
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "main.h"

#define MAX_SIZE_BUFFER 30

#define WAIT_STATE 0
#define RECEIVING_STATE 1

#define WAIT_CMD 10
#define PROCESSING 11

extern uint8_t temp;
extern uint8_t buffer[MAX_SIZE_BUFFER];
extern uint8_t index_buffer;
extern uint8_t buffer_flag;

extern int command_flag;
extern uint8_t command_data[MAX_SIZE_BUFFER];
extern uint8_t cmd_data_idx;


extern int parserStatus;
extern int uartStatus;



#endif /* INC_GLOBAL_H_ */
