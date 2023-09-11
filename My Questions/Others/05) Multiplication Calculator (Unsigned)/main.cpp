#include <iostream>
#include <iomanip>
#include <limits.h>
using namespace std;

int main() {

	cout << "Unsigned multiplication calculator is running..." <<endl;
	cout << " " <<endl;


	cout << "###################################################################" <<endl;

	cout << " " <<endl;
	cout << "Instructions for Value 1:" <<endl;
	cout << "-------------------------" <<endl;

	cout << "1. The maximum input allowed for value 1 is: " << ULLONG_MAX << endl;
	cout << "2. The minimum input allowed for value 1 is: 0" <<endl;
	cout << "3. Decimals are not allowed." <<endl;
	cout << " " <<endl;

	cout << "Type in value 1 and press enter >  " <<flush;
	unsigned long long int value1;
	cin >> value1;
	cout << " " <<endl;

	cout << "###################################################################" <<endl;

	cout << " " <<endl;
	cout << "Instructions for Value 2:" <<endl;
	cout << "-------------------------" <<endl;


	cout << "1. The maximum input allowed for value 2 is: " <<flush;
	if (value1 > 0) {
		unsigned long long int allowed_max_value2 = ULLONG_MAX / value1;
		cout << allowed_max_value2 <<endl;
	}
	else {
		cout << ULLONG_MAX <<endl;
	}

	cout << "2. The minimum input allowed for value 2 is: 0" <<endl;
	cout << "3. Decimals are not allowed." <<endl;
	cout << " " << endl;

	cout << "Type in value 2 and press enter > " <<flush;
	unsigned long long int value2;
	cin >> value2;
	cout << " " <<endl;

	cout << "###################################################################" <<endl;

	cout << " " <<endl;
	unsigned long long int total = value1 * value2;
	cout << "The answer is " << total <<endl;
	cout << " " << endl;
	cout << "###################################################################" <<endl;

	cout << " " << endl;
	cout << " " << endl;
	cout << "Thanks for using the application. Have a nice day." <<endl;
	return 0;
}
