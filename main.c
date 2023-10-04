/*
 * main.c
 *
 *  Created on: Sep 23, 2023
 *      Author: Computec
 */
#include "STD_TYPES.h"
#include "util/delay.h"

#include "DIO_Interface.h"
#include "PORT_Interface.h"

void main (void)
{
	//   motor
	PORT_voidInit(); //Cfg Make PORTC_PIN0_DIR         	    1

	while(1)
	{
		DIO_u8SetPinValue(DIO_PORTC ,DIO_PIN0 , DIO_HIGH);
		_delay_ms(1000);
		DIO_u8SetPinValue(DIO_PORTC ,DIO_PIN0 , DIO_LOW);
		_delay_ms(1000);
	}


	/***********************************************************/

	/*motor in two directions with H-BRIDGE*/

	/*PORT_voidInit(); //Cfg Make PORTC_PIN0&1_DIR   1   , PORTC_PIN2&3_DIR    0  & INitial 1 to them

	while(1)
	{
		u8 Local_u8Invalue1 = DIO_u8GetPinValue(DIO_PORTC , DIO_PIN2);
		u8 Local_u8Invalue2 = DIO_u8GetPinValue(DIO_PORTC , DIO_PIN3);
		if (Local_u8Invalue1 == 0 ){
			/*better to put low pin in the first*/
	/*	DIO_u8SetPinValue(DIO_PORTC ,DIO_PIN1 , DIO_LOW);
			DIO_u8SetPinValue(DIO_PORTC ,DIO_PIN0 , DIO_HIGH);
			_delay_ms(2000);
		}

		else{
			DIO_u8SetPinValue(DIO_PORTC ,DIO_PIN1 , DIO_LOW);
			DIO_u8SetPinValue(DIO_PORTC ,DIO_PIN0 , DIO_LOW);
			_delay_ms(2000);
		}
		if (Local_u8Invalue2 == 0 ){
			/*better to put low pin in the first*/
	/*DIO_u8SetPinValue(DIO_PORTC ,DIO_PIN0 , DIO_LOW);
			DIO_u8SetPinValue(DIO_PORTC ,DIO_PIN1 , DIO_HIGH);

			_delay_ms(2000);
		}

		else{
			DIO_u8SetPinValue(DIO_PORTC ,DIO_PIN1 , DIO_LOW);
			DIO_u8SetPinValue(DIO_PORTC ,DIO_PIN0 , DIO_LOW);
			_delay_ms(2000);
		}


	}*/
	/* STEPPER MOTOR */
	/*while(1){

		for(u16 i =0 ; i<512 ; i++){

		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN0,DIO_HIGH);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN1,DIO_LOW);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN2,DIO_LOW);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN3,DIO_LOW);
		_delay_ms(5);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN0,DIO_LOW);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN1,DIO_HIGH);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN2,DIO_LOW);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN3,DIO_LOW);
		_delay_ms(5);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN0,DIO_LOW);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN1,DIO_LOW);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN2,DIO_HIGH);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN3,DIO_LOW);
		_delay_ms(5);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN0,DIO_LOW);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN1,DIO_LOW);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN2,DIO_LOW);
		DIO_u8SetPinValue(DIO_PORTC, DIO_PIN3,DIO_HIGH);
		_delay_ms(5);

		}
	}*/
}

