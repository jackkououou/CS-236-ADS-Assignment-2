#include "Decimal_conversion.h"
#include <iostream>
using namespace std;


//Decimal to binary ;
void dectobin(int decimal)
{
	if (decimal == 0)
		return;
	else
	{
		dectobin(decimal / 2);
		cout << decimal % 2;
	}
	return ;
}

//Decimal to hexadecimal; 
void dectohex(int decimal)
{
	int hex = 0;
	
	if (decimal == 0)
		return;
	else
	{
		hex = decimal % 16;
		dectohex(decimal / 16);
	}
	if (hex > 9)
	{
		int temp = ('A' + (hex - 10));
		char digit = temp;
		cout << digit;
		
	}
	else
		cout << hex;
}

//Binary to decimal; Using a string for the binary to fit larger binary numbers to pass the second case;
// Pass the string itself and the length of the string to iterate through recursion;
int bintodec(string binary, int length)
{
	int temp = 0;
	if (length == 0)
		return 0;
	else
	{
		temp = (binary[length - 1] - '0') + (2 * (bintodec(binary, length - 1)));
		return temp;
	}
}

//Hexadecimal to decimal; Using a string for input and length of the string;
int hextodec(string hex, int stringlength)
{
	int temp = 0;
	if (stringlength == 0)
		return 0;
	else
	{
		if (hex[stringlength-1] <= '9')
		{
			temp = (hex[stringlength-1] - '0') + hextodec(hex, stringlength - 1) * 16;
		}
		else if (hex[stringlength-1] >= 'A' )
		{
			temp = (hex[stringlength-1] - 'A' + 10) + hextodec(hex, stringlength - 1) * 16;
		}
		return temp;
	}
}


