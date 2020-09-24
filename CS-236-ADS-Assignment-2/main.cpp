#include <iostream>
#include <string>
#include "Header.h"

using namespace std;


int main()
{
	unsigned int num = 0;
	string hex;
	
	cout << "Convert a decimal integer to binary and hex" << endl;
	cout << "Enter a positive decimal number: ";
	cin >> num;
	
	cout << num << " is binary	"; 
	dectobin(num);
	cout << endl;

	cout << num << " is hex		";
	dectohex(num);
	cout << endl << endl;

	cout << "Convert a binary number to a decimal integer." << endl;
	cout << "Enter a binary number: ";
	cin >> num;
	cout << num << " is decimal " << bintodec(num, 0) << endl << endl;

	cout << "Convert a hexadecimal number to a decimal integer." << endl;
	cout << "Enter a hexadecimal number: ";
	
	cin >> hex;
	cout << hex << " is decimal " << hextodec(hex, hex.length());
	







	return 0;
}