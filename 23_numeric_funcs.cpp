#include <iostream>
// cmath gives access to sqrt func
#include <cmath>
using namespace std;

int main()
{
	cout << sqrt(50) << endl;
	cout << pow(2, 3) << endl;
	// remainder works for floating nums unlike modulus operator
	cout << remainder(10, 3.25) << endl;
	// basicaly almost same as remainder
	cout << fmod(10, 3.25) << endl;
	cout << 10 % 3 << endl;
	//gives max val / min val
	cout << fmax(10, 3.25) << endl;
	cout << fmin(10, 3.25) << endl;
	// gives ceiling
	cout << ceil(-3.25) << endl;
	cout << floor(-1.5) << endl;
	cout << trunc(-1.5) << endl;
	// rounds
	cout << round(-1.49) << endl;
	cout << round(-1.51) << endl;
	// useful to check reference for cmath from 
	// cppreference.com



}