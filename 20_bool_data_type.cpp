#include <iostream>
using namespace std;

int main()
{
	// boolian is used as a flag
	// true or false situations
	bool pizza = true;
	bool pizza2 = false;
	bool pizza3 = 1;
	bool pizza4 = 0;
	// in order to change 0 -> false
	//                    1 -> true
	// we can use the mannipulator std::boolalpha
	cout << boolalpha << pizza3 << endl;
	// it should print 1 but it does indeed print true
}