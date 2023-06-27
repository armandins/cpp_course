//DEC 	HEX 	OCT					
//0		0		000
//1		1		001
//2		2		002
//3		3		003
//4		4		004
//5		5		005
//6		6		006
//..	..		..	
//..	..		..
//15	F		..

#include <iostream>
#include <string>
using namespace std;

int main()
{
	//base 10 number ( decimal )
	int number = 30; 
	cout << number << endl;
	//for hexadecimal we use 0x30 which means
	// 16 * 3 = 48
	int number2 = 0x30;
	cout << number2 << endl;
	//for octal we get rid of the x 
	int number3 = 030;
	cout << number3 << endl;
	//conversions
	//decimal to hexadecimal
	cout << hex << number << endl;
	//decimal to octal
	cout << oct << number << endl;
	

}