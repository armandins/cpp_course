#include <iostream>
using namespace std;
// other way of making constant is: 
// #define Y 5

int main()
{	
	//constant
	int x = 5;
	x = 10;
	cout << x << endl;
	//symbolic constant
	// const makes a read only variable
	// if we change the y to 10 or anything
	// it won't work. It's fixed with const 
	// we won't have to worry about value being changed
	const int y = 5;
	//another way of creating constants is 
	//using enum 
	enum { z = 100 };
	// following will generate an error 
	//because it's a constant
	// z = 150;
}