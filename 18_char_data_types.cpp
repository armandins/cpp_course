#include <iostream>
using namespace std;

int main()
{
	// only 8 bites even less than int
	char x = 'A';
	cout << x << endl;
	// chars are stored like ints
	// we can cast it like an integer
	// ASCII table can be useful for each char
	cout << (int) x << endl;
	// max for char
	char y = 127;
	cout << (int) y << endl;
	cout << y << endl;
}

