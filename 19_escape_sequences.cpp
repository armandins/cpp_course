#include <iostream>
#include <string>
using namespace std;

int main()
{
	// \t -> tab character
	cout << "Hello\tWorld" << endl;
	// \b -> delete our character
	cout << "Hello\bWorld" << endl;
	// \n -> goes to next line
	cout << "Hello\nWorld" << endl;
	// \0 -> null terminating character
	// indicates the end of a c style string
	// it's how we can tell a string is over.
	cout << "\0" << endl;
	// \\ & \" & \' -> useful for quoting inside quotations
	cout << " Hello \"World\"" << endl;

}