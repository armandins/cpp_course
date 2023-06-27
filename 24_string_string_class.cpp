#include <iostream>
#include <string>
using namespace std;

int main()
{
	// two ways to use strings in cpp
	// 1. c style of strings
	// 2. string class of cpp
	// focus is on cpp strings, and is superior in fact
	// string is a class from string header file below
	string greeting = "hello";
	cout << greeting[0] << endl;
	// 0 gives h, it tells to grab first char h in hello
	// can combine strings with + sign
	cout << greeting + " there " << endl;
	// can also do the following for the same result
	string complete_greeting = greeting + " there";
	cout << complete_greeting << endl;
	// another way
	complete_greeting += "!";
	cout << complete_greeting << endl;
	// length is a member of string class
	// so we can attach it to the string 
	// to find length
	cout << complete_greeting.length() << endl;
	// dot operator calls the function from string class
	// method === member function ==> functions attached to objects


	// let's do it in the c style
	char a[] = "Class";
	// a = "Room";
	// won't work because a string can only store 6 characters "Class\0" nothing more or less
	// but string in C++ doesn't have that limitation
	complete_greeting = "Go Away!";
	// AND IT WILL WORK INDEED. 

	// now if we receive the string from user
	string complete_greeting2;
	cout << "enter string" << endl;
	cin >> complete_greeting2; 
	cout << complete_greeting2 << endl;
	// problem is it doesn't work if we have inbetween spaces.
	// "Hello there!" will be shown as "Hello" 
	// it will be covered in next part.

}