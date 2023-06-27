#include <iostream>
using namespace std;

int main()
{
	string greeting;
	cout << "enter string: " << endl;
	cin >> greeting;
	cout << greeting << endl;

	// we can use getline for entire string
	// ************
	// ************
	getline(cin, greeting);
 	// ************
	// ************

}