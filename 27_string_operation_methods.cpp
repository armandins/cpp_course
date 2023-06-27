#include <iostream>
#include <string>
using namespace std;

// we will apply censorship with find method 
// and etc.

int main()
{
	string greeting = "What the hell!";
	cout << greeting << endl;	
	greeting.replace(greeting.find("hell"), 4, "****");
	cout << greeting << endl;

	//substring
	string greeting2 = "What is up?";
	cout << greeting2.substr(5,2) << endl;
	//find first of
	cout << greeting2.find_first_of("aeiou") << endl;
	// dot compare
	if(greeting.compare("What is up!") == 0) 
		cout << "Equals" << endl;
}
