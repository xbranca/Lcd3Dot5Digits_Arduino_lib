// Driver for the "3.5-Digit 7 Segment LCD Display Module w/ Backlit for Arduino"
// This module is a 4 digits lcd display with a on-board HT1621 RAM mapping LCD controller
// Store: ww.dx.com SKU 431141

// This driver is Based on demo driver given by vendor 
// You can find it at adress : https://drive.google.com/drive/folders/0B6uNNXJ2z4CxdmR0a01McUN2SmM

#include "Lcd3Dot5Digits.h"

///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
//////////////////////////Alias defintions ////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////

//Define port	HT1621 data port
#define CS   12  //Pin 12 as chip selection output
#define WR   11  //Pin 11 as read clock  output
#define DATA 4  //Pin 4 as Serial data output
#define BLA  13  //Pin 13 as backlight output
    
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
/////////////////////////////  Setup and main loops //////////////////////////////
//////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////

//instanciation of a Lcd3Dot5Digits
Lcd3Dot5Digits LCD(CS, WR, DATA, BLA);

void setup()
{
	//launch LCD module outputs setup
	LCD.begin();
}

void loop()
{
	LCD.HT1621_all_on();
	delay(500);
	LCD.HT1621_all_off();
	delay(500);
	LCD.send8bits(2,0xF6);
	delay(500);
	LCD.display_2_first_digits(13);
	delay(500);
	LCD.display_third_digit(7);
	delay(500);
	LCD.display_last_digit(4);
	delay(500);
	LCD.display_H_as_last_digit();
	delay(500);
}


 





