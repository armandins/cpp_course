#include <iostream>
#include <string>
using namespace std;

int main()
{
	string greeting = "Hello!";
	//both result in the same value
	cout << greeting.size() << endl;
	cout << greeting.length() << endl;

	//another way to append to a string
	// besides += which was covered in 24
	// is the following
	greeting.append(" There!");
	cout << greeting << endl;
	// if we want a string to be at index let's say 3 
	// ( considering we start from 0 )
	greeting.insert(3, "ZZ");
	cout << greeting << endl;
	// to erase ( 1 ) character at index ( 3 )
	greeting.erase(3, 1);
	cout << greeting << endl;
	// if we don't use the 2nd arg everything after 
	// that index including character at that index will be removed
	greeting.erase(3);
	cout << greeting << endl;  
	// replacement
	// 1st arg : start char index
	// 2nd arg : length
	// 3rd arg : what we replace it with
	greeting.replace(0, 4 , "Heaven");
	cout << greeting << endl;


}