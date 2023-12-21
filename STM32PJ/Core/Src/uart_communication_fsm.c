/*
 * uart_communication_fsm.c
 *
 *  Created on: Dec 21, 2023
 *      Author: CAO NGUYEN
 */
#include "uart_communication_fsm.h"


void uart_communication_fsm()
{
	switch (uartStatus)
	{
		case WAIT_CMD:
			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 1);
			if(command_flag == 1 )
			{
				command_flag = 0;
				if (strcmp(command_data, "RST") == 0 )
				{

					uartStatus = PROCESSING;
					ADC_transmit();
				}

			}
			break;
		case PROCESSING:

			HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, 0);
			if (timer1_flag == 1)
			{
				ADC_transmit();
			}
			if(command_flag == 1)

			{
				command_flag = 0;
				if (strcmp(command_data, "RST") == 0 )
				{
					ADC_transmit();
				}
				if (strcmp(command_data, "OK") == 0 )
				{
					uartStatus = WAIT_CMD;
				}

			}


			break;
		default:
			break;
	}
}


