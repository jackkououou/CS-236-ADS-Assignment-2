#include <iostream>
#include <string>
#include "Decimal_conversion.h"

using namespace std;


int main()
{
	unsigned int num = 0;
	string entry = "0";
	
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
	cin >> entry;
	cout << entry << " is decimal " << bintodec(entry, entry.length()) << endl;

	cout << "Convert a hexadecimal number to a decimal integer." << endl;
	cout << "Enter a hexadecimal number: ";
	
	cin >> entry;
	cout << entry << " is decimal " << hextodec(entry, entry.length()) << endl;
	
	system("PAUSE");
	return 0;
}