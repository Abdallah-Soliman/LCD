/*
 * main.c
 *
 *  Created on: Jun 6, 2021
 *     Author: Ahmed
 */
#include "primitive_data_types.h"

#include "DIO_interface.h"

#include "LCD_interface.h"

   int main()
  {
         /*test case for string*/
	   uint8_t* ptr = "Abdulla";

    	LCD_VoidInit4b();


    	LCD_VoidWriteStringfor4bits(ptr);
         /*Test case for number in different position*/
                LCD_VoidDelay(20);
    	       LCD_SetCursorFor4bits(1,5);

    	       LCD_VoidDelay(20);

   LCD_WriteNum(20);

	while(1);

	return 0;

    }
