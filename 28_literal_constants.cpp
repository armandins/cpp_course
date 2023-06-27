#include <iostream>
#include <string>
using namespace std;

int main()
{
	auto x = 5U;
	// U stands for unsigned
	// auto finds what type of datatype it should assign 5U to.  to
	// which is a C++ 11 feature
	cout << x << endl;

	auto y = 5UL;
	// UL stands for unsigned long
	// ULL stands for long long
	auto z = 5.0F;
	// F stands for float
	auto z2 = 5.0;
	// if we don't type F, it's a double;
}