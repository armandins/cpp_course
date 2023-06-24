// void functions don't return values.
#include <iostream>

using namespace std;

// this func will do the math for power functions. 

double power(double base, int exponent)
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result *= base;
	}

	return result;
}

// this void func is used to print the results for power func 

void print_pow(double base, int exponent)
{
	double myPow = power(base, exponent);
	cout << base << " raised to the" << exponent << " power is: "<< myPow << endl;
}

int main()
{
	double base;
	int exponent;

	cout << "Enter base: " << endl;
	cin >> base; 
	cout << "Enter exponent: " << endl;
	cin >> exponent;

	
	// call the print func ( void )
	print_pow(base, exponent);
}
