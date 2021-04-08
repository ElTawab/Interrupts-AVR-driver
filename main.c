/*
 * main.c
 *
 *  Created on: Sep 14, 2020
 *      Author: lenovo
 */



#include "STD_TYPES.h"
#include "bit.h"
#include "DIO_Register.h"
#include "DIO_Interface.h"
#include "EXIT_Register.h"
#include "EXIT_Interface.h"
#include "EXIT_Config.h"
#include "GIE_Register.h"
#include "GIE_Interface.h"

void toogle_led (void)
{
	DIO_VidTogglePin(0,0);
}

void main (void)
{

	EXIT0_VidInit();

		GIE_VidEnable();

	DIO_VidSetPinDirection(PORTA , PIN0 , OUTPUT);

	DIO_VidSetPinDirection(PORTD , PIN2 , INPUT) ;


	DIO_VidSetPinValue( PORTD , PIN2 , HIGH );

SetCallBack(toogle_led);


while (1)
{

}

}


