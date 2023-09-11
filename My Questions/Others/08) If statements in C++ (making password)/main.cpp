#include <iostream>
using namespace std;
int main (){

	string password = "hello";


	cout << "Enter Your Password > " <<flush;

	string input;
	cin >> input;

	if (input == password){							//(Why '==' , because '==' implies checking while '=' implies assigning)
		cout << "Password accepted." <<endl;
	} else {
		cout << "Access denied." <<endl;
	}

	if (input != password) {						//('!=' denotes not equal)
		cout << "Access denied." <<endl;
	}

	return 0;
}
