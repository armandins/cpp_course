// pow function works with cmath header file 
// so it's already defined inside cmath header file

#include <iostream>
#include <cmath>
using namespace std;

//how to call a function
int main()
{
	//pow func calculates 10 to the power of 2
	cout << pow(10, 2) << endl;


// we can also make the function require variables

	int base, exponent;
	cout << "What is the base ? " ;
	cin >> base;
	cout << "What is the exponent? ";
	cin >> exponent;
	// assign the func to the variable power
	double power = pow(base, exponent);
	cout << power << endl;

}

