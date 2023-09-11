#include <iostream>
#include <iomanip>
#include <limits.h>
using namespace std;

int main() {

	cout << "Subtraction calculator is running..." <<endl;
	cout << " " <<endl;


	cout << "###################################################################" <<endl;

	cout << " " <<endl;
	cout << "Instructions for Value 1:" <<endl;
	cout << "-------------------------" <<endl;

	cout << "1. The maximum input allowed for value 1 is: " << LLONG_MAX << endl;
	cout << "2. The minimum input allowed for value 1 is: " <<LLONG_MIN << endl;
	cout << "3. Decimals are not allowed." <<endl;
	cout << " " <<endl;

	cout << "Type in value 1 and press enter >  " <<flush;
	long long int value1;
	cin >> value1;
	cout << " " <<endl;

	cout << "###################################################################" <<endl;

	cout << " " <<endl;
	cout << "Instructions for Value 2:" <<endl;
	cout << "-------------------------" <<endl;


	cout << "1. The maximum input allowed for value 2 is: " <<flush;
	if (value1 > 0) {
		cout << LLONG_MAX <<endl;
	}
	else {
		long long int value2_max = 9223372036854775808 + value1;
		cout << value2_max <<endl;
	}

	cout << "2. The minimum input allowed for value 2 is: " <<flush;
	if (value1 < 0) {
		cout << LLONG_MIN <<endl;
	}
	else {
		long long int value22_min = value1 - 9223372036854775807;
		cout << value22_min <<endl;
	}
	cout << "3. Decimals are not allowed." <<endl;
	cout << " " << endl;

	cout << "Type in value 2 and press enter > " <<flush;
	long long int value2;
	cin >> value2;
	cout << " " <<endl;

	cout << "###################################################################" <<endl;

	cout << " " <<endl;
	long long int total = value1 - value2;
	cout << "The answer is " << total <<endl;
	cout << " " << endl;
	cout << "###################################################################" <<endl;

	cout << " " << endl;
	cout << " " << endl;
	cout << "Thanks for using the application. Have a nice day." <<endl;
	return 0;
}
