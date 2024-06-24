/*
 * USART.c
 *
 * Created: 6/21/2024 12:07:00 PM
 * Author : Sanath Kumara
 */ 

#include "global.h"
#include "USART.h"

int main(void)
{
    initUART0(9600);
	initUART1(9600);
    while (1) 
    {
		char rChar = receiveCharUSART1();
		sendCharUSART0(rChar);
    }
}

