/*
 * command_parser_fsm.c
 *
 *  Created on: Dec 21, 2023
 *      Author: CAO NGUYEN
 */


#include "command_parser_fsm.h"

void clearBuffer()
{
	for (int i = 0; i < MAX_SIZE_BUFFER; i++)
	{
		buffer[i] = '\0';
	}
	index_buffer = 0;
}

void clearCmdData()
{
	for (int i = 0; i < MAX_SIZE_BUFFER; i++)
	{
		command_data[i] = '\0';
	}
	cmd_data_idx = 0;
}
void command_parser_fsm(){
	switch(parserStatus)
	{
		case WAIT_STATE:
			if (buffer[index_buffer - 1] == '!')
			{
				parserStatus = RECEIVING_STATE;
				clearCmdData();
			}

			break;
		case RECEIVING_STATE:
			if (buffer[index_buffer - 1] == '#')
			{
				command_data[cmd_data_idx] = '\0';
				parserStatus = WAIT_STATE;
				command_flag = 1;
			}
			else
			{
				command_data[cmd_data_idx++] = buffer[index_buffer - 1];
			}
			break;
		default:
			break;
	}
}

