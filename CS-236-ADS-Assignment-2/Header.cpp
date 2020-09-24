#include "Header.h"
#include <iostream>
using namespace std;

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

int bintodec(int binary, int bitweight)
{
	int total = 0, bit = 0;

	if (binary > 0)
	{
		bit = binary % 10;
		total = total + bit * pow(2, bitweight) + bintodec(binary / 10, bitweight + 1);
		
		return total;
	}
	else
		return 0;
}


int hextodec(std::string hex, int stringlength)
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


