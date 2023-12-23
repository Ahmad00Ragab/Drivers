/*===========================================================================================
 * Filename   : pushButton.h
 * Author     : Ahmad Ragab Mohamed
 * Description: Header file the push_button Driver
 * Created on : Jun 21, 2023
 *==========================================================================================*/
 /
#ifndef PUSH_BUTTON_H_
#define PUSH_BUTTON_H_


#include "std_types.h"


/*******************************************************************************
 *                               Types Declaration                             *
 *******************************************************************************/
typedef enum
{
	PULLDOWN_CONNECTION, PULLUP_CONNECTION
}PUSHBUTTON_Connection;




/* return TRUE if the input PUHS_BUTTON is PRESSED
 * return FALSE if the input PUSH_BUTTON is not PRESSED
 */



void PUSHBUTTON_init(uint8 portNum,uint8 pinNum);

boolean PUSHBUTTON_Pressed(uint8 portNum,uint8 pinNum,PUSHBUTTON_Connection connectionType);


#endif /* PUSH_BUTTON_H_ */
