#include <iostream>

using namespace std;

int main() {
	
	string password[2] = {
			"hello" , "hey"
	};
	
	string user_input;
	
	do {
		cout << "Enter your password > " <<flush;
		cin >> user_input;
		
		if (user_input != password[0] && user_input != password[1]){
			cout << endl << "Wrong password. Please try again." <<endl;
		}
	} while (user_input != password[0] && user_input != password[1]);
	
	cout <<endl << "Correct password. Access granted" <<endl;
	
	
	
	return 0;
}
