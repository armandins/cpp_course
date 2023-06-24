// in this file we will try to not use cmath
// but instead make the functions ourselves

#include <iostream>
using namespace std;


// Declaration
// we can also do this in c fashion where we 
// declare function at top 
// and once again in bottom with details 
double power(double base, int exponent)
{
	double result = 1;
	for (int i = 0; i < exponent; i++)
	{
		result = result * base;
	}
	return result;
}

int main()
{

	int arg1, arg2;
	cout << "What is the base?: " << endl;
	cin >> arg1;
	cout << "What is the exponent?: " << endl;
	cin >> arg2;
	//assign function declared to a variable
	// called my power
	double myPow = power(arg1, arg2);
	//print the result
	cout << myPow << endl;
}
