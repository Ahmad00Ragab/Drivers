/*===========================================================================================
 * Filename   : push_button.c
 * Author     : Ahmad Ragab Mohamed
 * Description: source file the push_button Driver
 * Created on : Jun 21, 2023
 *==========================================================================================*/

#include "pushButton.h"
#include "gpio.h"


void PUSHBUTTON_init(uint8 port_num,uint8 pinNum)
{
	GPIO_setupPinDirection(port_num, pinNum, PIN_INPUT);
}


/* 
 * takes port number and pin number and the connection type of the push button
 * pull up or pull down
 * Return True if the push button is pressed
 * Return False if the push button is released
 */
 
 
 
 
boolean PUSHBUTTON_Pressed(uint8 port_num,uint8 pinNum,PUSHBUTTON_Connection Connection_Type)
{
	if(Connection_Type == PullUP_Connection)
	{
		if(GPIO_readPin(port_num, pin_num) == LOGIC_LOW)
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}
	}
	else if(Connection_Type == PullDown_Connection )
	{
		if((GPIO_readPin(port_num, pin_num) == LOGIC_HIGH))
		{
			return TRUE;
		}
		else
		{
			return FALSE;
		}

	}
	else
	{

	}
}



