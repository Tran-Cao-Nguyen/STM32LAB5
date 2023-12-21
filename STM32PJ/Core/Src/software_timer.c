/*
 * software_timer.c
 *
 *  Created on: Dec 21, 2023
 *      Author: CAO NGUYEN
 */

#include "software_timer.h"

int timer1_flag = 0;
int timer2_flag = 0;

int counter1 = 0;
int counter2 = 0;

void setTimer1(int duration){
	counter1 = duration/10;
	timer1_flag = 0;
}

void setTimer2(int duration){
	counter2 = duration/10;
	timer2_flag = 0;
}

void timerRun()
{
	if (counter1 > 0)
	{
		counter1--;
		if (counter1 <= 0)
		{
			timer1_flag = 1;
		}
	}
	if (counter2 > 0)
	{
		counter2--;
		if (counter2 <= 0)
		{
			timer2_flag = 1;
		}
	}
}

